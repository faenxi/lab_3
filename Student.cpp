#include "Student.h"

Student::Student() : name("Unknown"), studentId(0) {}
Student::Student(std::string name) : Student(name, 0) {}
Student::Student(std::string name, int id) : name(name), studentId(id) {}

Student::Student(const Student& other) : name(other.name), studentId(other.studentId) {
    std::cout << "Student copied: " << name << std::endl;
}

Student::Student(Student&& other) noexcept : name(std::move(other.name)), studentId(other.studentId) {
    std::cout << "Student moved: " << name << std::endl;
}

Student::~Student() {
    std::cout << "Student " << name << " destroyed." << std::endl;
}

void Student::displayInfo() const {
    std::cout << "Student Name: " << name << ", ID: " << studentId << std::endl;
}

Student& Student::operator=(const Student& other) {
    if (this != &other) {
        name = other.name;
        studentId = other.studentId;
    }
    return *this;
}

Student& Student::operator=(Student&& other) noexcept {
    if (this != &other) {
        name = std::move(other.name);
        studentId = other.studentId;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "Student: " << student.name << ", ID: " << student.studentId;
    return os;
}

std::istream& operator>>(std::istream& is, Student& student) {
    std::cout << "Enter student name and ID: ";
    is >> student.name >> student.studentId;
    return is;
}