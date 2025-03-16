#include "Course.h"

int Course::courseCount = 0; // иніціалізація статичного поля

Course::Course(std::string name, int code) : courseName(name), courseCode(code) {
    courseCount++;
}

Course::Course(const Course& other) : courseName(other.courseName), courseCode(other.courseCode) {
    courseCount++;
    std::cout << "Course copied: " << courseName << std::endl;
}

Course::Course(Course&& other) noexcept : courseName(std::move(other.courseName)), courseCode(other.courseCode) {
    courseCount++;
    std::cout << "Course moved: " << courseName << std::endl;
}

Course::~Course() {
    std::cout << "Course " << courseName << " destroyed." << std::endl;
}

void Course::displayCourseInfo() const {
    std::cout << "Course Name: " << courseName << ", Code: " << courseCode << std::endl;
}

int Course::getCourseCount() {
    return courseCount;
}

Course& Course::operator=(const Course& other) {
    if (this != &other) {
        courseName = other.courseName;
        courseCode = other.courseCode;
    }
    return *this;
}

Course& Course::operator=(Course&& other) noexcept {
    if (this != &other) {
        courseName = std::move(other.courseName);
        courseCode = other.courseCode;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Course& course) {
    os << "Course: " << course.courseName << ", Code: " << course.courseCode;
    return os;
}

std::istream& operator>>(std::istream& is, Course& course) {
    std::cout << "Enter course name and code: ";
    is >> course.courseName >> course.courseCode;
    return is;
}