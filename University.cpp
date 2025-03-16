#include "University.h"

University::University() {}

University::~University() {}

void University::enrollStudent(const Student& student) {
    students.push_back(student);
}

void University::addCourse(const Course& course) {
    courses.push_back(course);
}

void University::showStudents() const {
    if (students.empty()) {
        std::cout << "No students enrolled in the University." << std::endl;
        return;
    }

    std::cout << "Students in the University:" << std::endl;
    for (const auto& student : students) {
        std::cout << student << std::endl;
    }
}

void University::showCourses() const {
    if (courses.empty()) {
        std::cout << "No courses added to the University." << std::endl;
        return;
    }

    std::cout << "Courses in the University:" << std::endl;
    for (const auto& course : courses) {
        std::cout << course << std::endl;
    }
}