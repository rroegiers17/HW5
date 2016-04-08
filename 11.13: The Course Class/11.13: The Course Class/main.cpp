//
//  Rachel Roegiers
//  CS 172-2
//  HW05
//  11.13: The Course Class
//

#include <iostream>
#include <string>
#include "Course.hpp"
using namespace std;

int main()
{
    Course c("Math", 3);
    // adding the 3 students to the course
    c.addStudent("Silas");
    c.addStudent("Beth");
    c.addStudent("Bob");
    // display the students in the course
    string* students = c.getStudents();
    cout << "Students Names: " << endl;
    for (int i = 0;i < c.getNumberOfStudents();i++)
    {
        cout << students[i] << " ";
    }
    cout << "Number of students are "<< c.getNumberOfStudents()<< " in "<< c.getCourseName() << endl;
    // dropping a student
    c.dropStudent("Beth");
    students = c.getStudents();
    cout << "The class after dropping a student: " << endl;
    for (int i = 0; i < c.getNumberOfStudents(); i++){
        cout << students[i] <<" ";
    }
    cout << endl;
    students= c.getStudents();
    cout << "Number of Students are "<< c.getNumberOfStudents()<< " in " << c.getCourseName();
    cin.get();
    
    return 0;
}