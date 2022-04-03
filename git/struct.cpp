// 1֊ին և 1֊ինի a խնդիրները
#include <iostream>
struct Student
{
    std::string student_name;
    std::string surname;
    int age;
    int cpp;
    int English;
    int Mathematics;
    int Physics;
    int Armenian;
};
void Print_struct(Student &obj, Student &obj2)
{
    std::cout << "Enter first student name " << std::endl;
    std::cin >> obj.student_name;
    std::cout << "Enter first student surname " << std::endl;
    std::cin >> obj.surname;
    std::cout << "Enter first student age " << std::endl;
    std::cin >> obj.age;
    std::cout << " Student  name is: " << obj.student_name;
    std::cout << " Student surname is " << obj.surname;
    std::cout << " Age of student is " << obj.age << std::endl;

    std::cout << "Enter second student name " << std::endl;
    std::cin >> obj2.student_name;
    std::cout << "Enter second student surname " << std::endl;
    std::cin >> obj2.surname;
    std::cout << "Enter second student age " << std::endl;
    std::cin >> obj2.age;
    std::cout << "Student  name is: " << obj2.student_name;
    std::cout << "Student surname is " << obj2.surname;
    std::cout << "student age is " << obj2.age << std::endl;
}

void print_old_student_name(Student obj, Student obj2)
{
    if (obj.age > obj2.age)
    {
        std::cout << "The older student name and surname  is " << obj.student_name << obj.surname << std::endl;
    }
    else
        std::cout << "The older student name and surname is "
                  << " " << obj2.student_name << obj2.surname << std::endl;
}

int main()
{
    Student obj{

    };

    Student obj2{

    };
    Print_struct(obj, obj2);
    print_old_student_name(obj, obj2);
    return 0;
}
