/* *
 * Constructors:
 * <br> 
 * */

#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

using namespace std;

class Person{
    private:
        int age;
        string name;
    public:
        /* *
         * Constructors:
         * <br> 
         * */
        Person(int age, string name);
        void setAge(int age);
        void setName(string name);
        void printName();
        void printAge();
        void print();
        ~Person();


};
#endif //PERSON_HPP