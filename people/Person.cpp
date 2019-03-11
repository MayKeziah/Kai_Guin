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

int Person::getAge(){
    return age;
}

string Person::getName(){
    return name;
}

void Person::print()
{
    cout << "--------------------------------" << endl;
    printName();
    printAge();
    cout << "--------------------------------" << endl;

}

void Person::printAge()
{
    cout << "Age: " << age << endl;
}

void Person::printName()
{
    cout << "Name: " << name << endl;
}

void Person::setAge(int age)
{
    this->age = age;
}

void Person::setName(string name)
{
    this->name = name;
}

Person::~Person(){
    // cout << "Person: " << name << " set for garbage collection." << endl;
}