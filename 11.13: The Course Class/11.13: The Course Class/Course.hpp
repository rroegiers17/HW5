
#ifndef Course_hpp
#define Course_hpp

#include <string>
#include <stdio.h>
using namespace std;

class Course {
public:
    Course(const string& courseName, int capacity); // default constructor
    Course(const Course&); // copy constructor
    ~Course(); // course destructor
    string getCourseName()const; // getter for course name
    void addStudent(const string& name); // adds student to a course
    void dropStudent(const string& name);// removes student from the course
    // getter functions of student info
    string* getStudents()const;
    int getNumberOfStudents()const;
    void clear(Course& courseName); //clear all the students in the course
private:
    string courseName;
    string* students;
    int numberOfStudents;
    int capacity;
};

#endif /* Course_hpp */
