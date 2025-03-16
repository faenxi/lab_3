#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

class Student {
private:
    std::string name;
    int studentId;

public:
    Student();
    Student(std::string name);
    Student(std::string name, int id);
    Student(const Student& other); // ����������� ���������
    Student(Student&& other) noexcept; // ����������� ����������
    ~Student();

    void displayInfo() const;

    Student& operator=(const Student& other); // �������������� ��������� ��������� ���������
    Student& operator=(Student&& other) noexcept; // �������������� ��������� ��������� ����������

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
    friend std::istream& operator>>(std::istream& is, Student& student);
};

#endif