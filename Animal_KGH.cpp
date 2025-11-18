/* [Intel] 엣지 AI/SW 아카데미(8기) - 객체지향 프로그래밍 평가
    - 날짜 : 2025-11-18(화)
    - 이름 : 김기환
*/
#include <iostream>
#include <string>
using namespace std;

/* Animal 클래스 */
class Animal
{
    string name;
    int age;

public:
    Animal(string name = "", int age = 0);
    Animal(const Animal &animal);
    virtual ~Animal();

    void setName(string name)
    {
        this->name = name;
    };
    void setAge(int age)
    {
        this->age = age;
    };
    string getName()
    {
        return name;
    };
    int getAge()
    {
        return age;
    };

    virtual void crying() = 0;
    friend void running(Animal &a);
};

/* Dog 클래스 */
class Dog : public Animal
{
    string bark;

public:
    Dog(string name = "", int age = 0, string bark = "");
    Dog(const Dog &dog);
    virtual ~Dog();

    string getBark() { return bark; }
    virtual void crying()
    {
        cout << getName() << "는 " << bark << endl;
    }
};

/* Cat 클래스 */
class Cat : public Animal
{
    string bark;

public:
    Cat(string name = "", int age = 0, string bark = "");
    virtual ~Cat();
    virtual void crying()
    {
        cout << getName() << "는 " << bark << endl;
    }
};

void running(Animal *a)
{
    cout << a->getName() << "가 달린다" << endl;
}

void animalFunction(Animal *a)
{
    running(a);
    a->crying();
}

/* Animal 생성자, 복사생성자, 소멸자 */
Animal::Animal(string name, int age)
{
    this->name = name;
    this->age = age;
}
Animal::Animal(const Animal &animal)
{
    this->name = animal.name;
    this->age = animal.age;
}
Animal::~Animal()
{
    cout << "Animal 소멸" << endl;
}

/* Dog 생성자, 복사생성자, 소멸자 */
Dog::Dog(string name, int age, string bark) : Animal(name, age)
{
    this->bark = bark;
};
Dog::Dog(const Dog &dog) : Animal(dog)
{
    this->bark = dog.bark;
};
Dog::~Dog()
{
    cout << "Dog 소멸" << endl;
}

/* Cat 생성자, 소멸자 */
Cat::Cat(string name, int age, string bark) : Animal(name, age)
{
    this->bark = bark;
};
Cat::~Cat()
{
    cout << "Cat 소멸" << endl;
}

int main(void)
{
    cout << "--추상클래스와 파생 클래스 구현--\n";
    Dog *dog = new Dog("강아지", 4, "멍멍");
    Cat *cat = new Cat("고양이", 2, "야옹");

    cout << "--매개 변수의 다형성 구현--\n";
    animalFunction(dog);
    animalFunction(cat);

    cout << "\n--복사생성자 직접 구현 --\n";
    Dog copyDog(*dog);
    cout << copyDog.getName() << endl;
    cout << copyDog.getAge() << endl;
    cout << copyDog.getBark() << endl;

    cout << "\n--소멸자실행--\n";
    delete dog;
    delete cat;

    return 0;
}