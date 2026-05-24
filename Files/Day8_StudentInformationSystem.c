

#include <stdio.h>

struct student // Define a structure named 'student' to hold various attributes of a student.
{
    char Fname[15];
    char Lname[15];
    int age;
    char gender[10];
    char major[20];
    float GPA;
    char tel[15];
    char email[30];
    char address[50];
    char ID[20];
    char year[10];
    char grade[10];
};

void print_student(struct student *s) // Define a function that takes a pointer to a 'student' structure and prints its attributes.
{

    printf("Name: %s %s\n", s->Fname, s->Lname); // => (*s).Fname and (*s).Lname also works but the arrow operator is more concise and easier to read when accessing members of a struct through a pointer.
    printf("Age: %d\n", s->age);
    printf("Gender: %s\n", s->gender);
    printf("Major: %s\n", s->major);
    printf("GPA: %.2f\n", s->GPA);
    printf("Tel: %s\n", s->tel);
    printf("Email: %s\n", s->email);
    printf("Address: %s\n", s->address);
    printf("ID: %s\n", s->ID);
    printf("Year: %s\n", s->year);
    printf("Grade: %s\n", s->grade);
};

int main()
{
    struct student s1 = {"John", "Doe", 20, "Male", "Computer Science", 3.5, "123-456-7890", "john.doe@email.com", "123 Main St", "S123456789", "2023", "Bt3"};
    struct student s2 = {"Jane", "Smith", 22, "Female", "Mathematics", 3.8, "987-654-3210", "jane.smith@email.com", "456 Oak Ave", "S987654321", "2023", "Bt3"};

    print_student(&s1);
    printf("-----------------------------\n"); // Just to add a blank line between the two students for better readability.
    print_student(&s2);
    return 0; // I always forget to return 0 at the end of the main function, but it's important to indicate that the program ended successfully :D.
}
