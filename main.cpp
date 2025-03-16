#include "University.h"
#include "Student.h"
#include "Course.h"
#include <iostream>

int main() {
    University uni;

    Student s1("Anya", 22309234);
    Student s2("Ivan", 35894584);
    Student s3("Viktoria", 35896542);

    uni.enrollStudent(s1);
    uni.enrollStudent(s2);
    uni.enrollStudent(s3);

    Course c1("Mathematics", 301);
    Course c2("Physics", 302);

    uni.addCourse(c1);
    uni.addCourse(c2);

    std::cout << "Students in the University:" << std::endl;
    uni.showStudents();

    std::cout << "\nCourses in the University:" << std::endl;
    uni.showCourses();

    std::cout << "\nNumber of courses: " << Course::getCourseCount() << std::endl;

    // дем конструкторів копіювання та переміщення
    Student s4 = s1; // конструктор копі
    Student s5 = std::move(s2); // конструктор переміщ

    Course c3 = c1; // конструктор копіювання
    Course c4 = std::move(c2); // конструктор переміщення

    return 0;
}