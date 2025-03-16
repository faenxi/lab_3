#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>

class Course {
private:
    std::string courseName;
    int courseCode;
    static int courseCount; // �������� ����

public:
    Course(std::string name = "General", int code = 0);
    Course(const Course& other); // ����������� ���������
    Course(Course&& other) noexcept; // ����������� ����������
    ~Course();

    void displayCourseInfo() const;
    static int getCourseCount(); // ��������� �����

    Course& operator=(const Course& other); // �������������� ��������� ��������� ���������
    Course& operator=(Course&& other) noexcept; // �������������� ��������� ��������� ����������

    friend std::ostream& operator<<(std::ostream& os, const Course& course);
    friend std::istream& operator>>(std::istream& is, Course& course);
};

#endif