#include<iostream>
using namespace std;

struct Student{
    int rollNo;
    string name;
    string department;
    float gpa;
};


int main(){
    Student s1;
    Student *ptrStudent;
    ptrStudent = &s1;
    (*ptrStudent).name = "Ali Hassan";
    ptrStudent -> department = "Computer Science";
    cout << (*ptrStudent).name << endl;
    cout << ptrStudent -> department << endl; 
    return 0;

}