//1֊ին և 1֊ինի a խնդիրները
#include <iostream>
struct Student
{
    char student_name[10];
    char surname[15];
    int age;
    int cpp;
    int English;
    int Mathematics;
    int Physics;
    int Armenian;
};
void Print_struct(Student obj, Student obj2)
{
    std::cout << "Enter first student age " << std::endl;
    std::cin >> obj.age;
    std::cout << "Student age  is: " << obj.age << std::endl;
    std::cout << "Enter thirsd student age " << std::endl;
    std::cin >> obj2.age;
    std::cout << "Student age  is: " << obj2.age << std::endl;

    if (obj.age > obj2.age)
    {
        std::cout << obj.student_name << " " << obj.surname << std::endl;
    }
    else
        std::cout << obj2.student_name << " " << obj2.surname << std::endl;
}

int main()
{
    Student obj{
        "Robert",
        "Antonyan",

    };

    Student obj2{
        "Meline",
        "Antonyan",

    };
Print_struct(obj, obj2);
    

    return 0;
}
