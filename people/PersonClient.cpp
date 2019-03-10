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
    Person testList[5];
    string sList[5] = {"John", "Mary", "Jack", "Toni", "Cynthia"};
    for (int i = 0; i < 5; i++){
        testList[i] = Person(i, sList[i]);
        testList[i].print();
    }
    
}