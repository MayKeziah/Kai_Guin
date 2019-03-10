#include <iostream>
#include "Person.hpp"
#include <string>

using namespace std;

/* *
 * @author E
 * @version 1.0 3/10/19
 *  
 * */
Person::Person(int age = 0, string name = "Jane Doe")
{
    setAge(age);
    setName(name);
}

void Person::setAge(int age)
{
    this->age = age;
}

void Person::setName(string name)
{
    this->name = name;
}

void Person::printName()
{
    cout << "Name: " << name << endl;
}

void Person::printAge()
{
    cout << "Age: " << age << endl;
}

void Person::print()
{
    printName();
    printAge();
}

Person::~Person(){
    cout << "Person: " << name << " set for garbage collection." << endl;
}