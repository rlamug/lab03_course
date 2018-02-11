#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>

using namespace std;

class Course
{
    public:
        Course (string dept, int number, int time);
        void print();
    private:
        string m_dept;
        int m_numebr;
        int m_time;
};
#endif
