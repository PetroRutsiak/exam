#include <iostream>
#include < string >
#include < list >

class Human
{
public:
    std::string name;
    int age;
    void setName(std::string newname)
    {
        name = newname;
    }
};
class Student :public Human
{
public:
    std::string University;
    std::list <int> marks;
    void addMark(int mark)
    {
        marks.push_back(mark);
    }
    float averageMark()
    {
        int sum = 0;
        for (int mark : marks)
        {
            sum += mark;
        }
        return sum / marks.size();
    }
    Student(std::string University)
    {
        this->University = University;
    }
};
int main()
{
    Student* Vlad = new Student("NUWM");
    Vlad->addMark(10);
    Vlad->addMark(9);
    Vlad->addMark(5);
    std::cout << Vlad->averageMark();
    return 0;
}