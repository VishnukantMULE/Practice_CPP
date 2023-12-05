// PolyMorphism- many forms

/*
Polymorphism is the concept in which an object can be treated 
in different ways
its means that object of a class can be used as object of 
other derived class


Types of Polymorphism:

Polymorphism in OOP can be categorized into 
compile-time (or static) polymorphism and 
runtime (or dynamic) polymorphism.
*/



/*++++++++++++compile-time (or static) polymorphism+++++++++++++++*/


// it done using function overloading (same function names but different parameters)

#include<bits/stdc++.h>
using namespace std;
void person(int age)
{
	cout<<21<<endl;
}
void person(string name)
{
	cout<<"name is"<<name<<endl;
}
int main()
{
	person(21);
	person("vishnukant");
	return 0;
}




/*++++++++++++Run-time (or dynamic) polymorphism+++++++++++++++*/
/*Function overriding is a concept in object-oriented programming 
where a subclass provides a specific implementation 
for a method that is already defined in its superclass,
 allowing the subclass to customize 
or extend the behavior of the inherited method.*/

#include <iostream>
using namespace std;

class Parent {
public:
    virtual void display() const {
        cout << "This is the parent class." << endl;
    }
};

class Child : public Parent {
public:
    void display() const override {
        cout << "This is the child class." << endl;
    }
};

int main() {
    Parent* ptr;

    Parent obj1;
    Child obj2;

    ptr = &obj1;
    ptr->display();  // Calls the display function of the Parent class

    ptr = &obj2;
    ptr->display();  // Calls the overridden display function of the Child class

    return 0;
}
