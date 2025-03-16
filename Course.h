#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

class Course {
private:
    std::string courseName;
    int courseCode;
    static int courseCount; // статичне поле

public:
    Course(std::string name = "General", int code = 0);
    Course(const Course& other); // конструктор копіювання
    Course(Course&& other) noexcept; // конструктор переміщення
    ~Course();

    void displayCourseInfo() const;
    static int getCourseCount(); // статичний метод

    Course& operator=(const Course& other); // перевантаження оператора присвоєння копіювання
    Course& operator=(Course&& other) noexcept; // перевантаження оператора присвоєння переміщення

    friend std::ostream& operator<<(std::ostream& os, const Course& course);
    friend std::istream& operator>>(std::istream& is, Course& course);
};

#endif