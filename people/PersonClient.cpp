#include <iostream>
//#include "Person.hpp"
#include "Person.cpp"
#include <string>

/* *
 * @author E
 * @version 1.0 3/10/19
 *  
 * */
using namespace std;

int main()
{
    Person testPerson;
    Person csClass[5];
    string name;
    int age;
    for (int i = 0; i < 5; i++){
        cout << "Enter a name: ";
        cin >> name;
        cout << "Enter an age: ";
        cin >> age;
        // csClass[i] = Person(age, name);
        // csClass[i].print();
    }
    
}