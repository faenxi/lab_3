#ifndef UNIVERSITY_H
#define UNIVERSITY_H

#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"

class University {
private:
    std::vector<Student> students;
    std::vector<Course> courses;

public:
    University();
    ~University();

    void enrollStudent(const Student& student);
    void addCourse(const Course& course);

    void showStudents() const;
    void showCourses() const;
};

#endif