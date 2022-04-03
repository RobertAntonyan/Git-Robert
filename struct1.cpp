#include <iostream>
const int size = 5;
struct Student
{
    std::string student_name;
    std::string surname;
    int age;
    std::string subjects[size];
};
void print_name_obj1(Student obj2)
{
    std::cout << "Enter student name of objekt 1 " << std::endl;
    std::cin >> obj2.student_name;
    std::cout << "The student name of object 1 is " << obj2.student_name << std::endl;
}
void print_surname_obj2(Student obj2)
{
    std::cout << "Enter student surname of objekt 2 " << std::endl;
    std::cin >> obj2.surname;
    std::cout << "The student surname of object 2 is " << obj2.surname << std::endl;
}
void print_age_obj2(Student obj2)
{
    std::cout << "Enter student age of objekt 2 " << std::endl;
    std::cin >> obj2.age;
    std::cout << "The student age of object 2 is " << obj2.age << std::endl;
}
void print_subjects(Student obj2)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "The subject name of object 2 is : " << obj2.subjects[i] << std::endl;
        std::cin >> obj2.subjects[i];
    }
}

int main()
{
    Student obj{

    };
    Student obj1{

    };
    Student obj2{
        obj.student_name,
        obj1.surname,
        obj.age,

    };
    print_name_obj1(obj2);
    print_surname_obj2(obj2);
    print_age_obj2(obj2);
    print_subjects(obj2);

    return 0;
}
