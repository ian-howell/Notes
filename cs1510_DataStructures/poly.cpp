#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "...\n";
    }
};

class Cow : public Animal
{
public:
    void speak()
    {
        cout << "Moo!\n";
    }
};

class Pig : public Animal
{
public:
    void speak()
    {
        cout << "Oink!\n";
    }
};

class Chicken : public Animal
{
public:
    void speak()
    {
        cout << "Cluck!\n";
    }
};

int main()
{
    Animal* farm[5];

    farm[0] = new Cow;
    farm[1] = new Pig;
    farm[2] = new Chicken;
    farm[3] = new Cow;
    farm[4] = new Animal;

    for (int i = 0; i < 5; i++)
    {
        cout << "Animal " << i+1 << " says: ";
        farm[i]->speak();
    }
    
    return 0;
}
