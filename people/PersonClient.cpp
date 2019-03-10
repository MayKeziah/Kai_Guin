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
    Person bo;
    // bo.printName();
    // bo.printAge();
    bo.print();
    bo.setAge(50);
    bo.setName("Reset Name");
    bo.print();
}