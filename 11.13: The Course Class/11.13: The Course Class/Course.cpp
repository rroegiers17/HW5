#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <string>
#include "Course.hpp"


// default constructor
Course::Course(const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this -> courseName = courseName;
    this -> capacity = capacity;
    students = new string[capacity];
}
Course::~Course()
{
    delete [] students;
}
string Course::getCourseName() const
{
    return courseName;
}
void Course::addStudent(const string& name)
{
    students[numberOfStudents]= name;
    numberOfStudents++;
}
void Course::dropStudent(const string& name)
{
    for (int i = 0; i < numberOfStudents; i++){
        if(students[i] == name){
            for (int j = 0; j < numberOfStudents; j++){
                students [j] = students [j+1];
            }
            numberOfStudents--;
        }
    }
}
void Course::clear(Course& courseName)
{
    courseName.students = 0;
    courseName.numberOfStudents = 0;
}
string* Course::getStudents()const
{
    return students;
}
int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}














