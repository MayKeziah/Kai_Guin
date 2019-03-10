#ifndef PERSON_HPP
#define PERSON_HPP
#include <string>

using namespace std;

/* *
 * @author E
 * @version 1.0 3/10/19
 *  
 * */
class Person{
    private:
        int age;
        string name;
    public:
        /* *
         * Constructor:
         * @param age this person's age
         * @param name this person's name
         * */
        Person(int age, string name);

        /* *
         * Method: 
         * prints all information about a person.
         * */
        void print();

        /* *
         * Method: 
         * prints the person's age.
         * */
        void printAge();

        /* *
         * Method: 
         * prints the person's name.
         * */
        void printName();

        /* *
         * Mutator:
         * @param age the age to set
         * */
        void setAge(int age);

        /* *
         * Mutator:
         * @param name the name to set
         * */
        void setName(string name);

        /* *
         * Deconstructor: 
         * Flags this object for garbage collection.
         * */
        ~Person();


};
#endif //PERSON_HPP