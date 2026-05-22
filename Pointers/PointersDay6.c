#include <stdio.h>

struct student
{
    char Fname[15];
    char Lname[15];
    int age;
    float GPA;
};

void my_strcpy(char *dest, char *src)
{
    while (*dest++ = *src++)
        ;
}

int main()
{
    struct student student[10] = {0};
    student[2].age = 20;
    student[2].GPA = 3.5;

    printf("Name: %s %s\n", student[2].Fname, student[2].Lname);
}