#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

struct student {
    char name[50];
    int age;
    float gpa;
    struct date birthdate;
};

int main() {
    struct student s1;
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter student age: ");
    scanf("%d", &s1.age);
    printf("Enter student GPA: ");
    scanf("%f", &s1.gpa);
    printf("Enter student birthdate (DD MM YYYY): ");
    scanf("%d %d %d", &s1.birthdate.day, &s1.birthdate.month, &s1.birthdate.year);

    printf("\nStudent information:\n");
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %.2f\n", s1.gpa);
    printf("Birthdate: %02d/%02d/%d\n", s1.birthdate.day, s1.birthdate.month, s1.birthdate.year);

    return 0;
}