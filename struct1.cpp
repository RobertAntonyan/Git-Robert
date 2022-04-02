#include <iostream>

struct Student
{
    std::string student_name;
    std::string surname;
    int age;
};
void print (Student obj, Student obj1)
{
    std::cout << obj.surname << std::endl;
}

int main()
{
Student obj 
{
    "Barev",
    "Robert",
    38
};
Student obj1 
{
    "Hajox",
    "Seda",
    35,
};
Student obj2
{
    obj.student_name,
    obj1.student_name,
    obj.age
};
print( obj, obj2);
}
