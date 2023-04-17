#include <stdio.h>
#include <string.h>
#include <time.h>

struct Student {
    char name[50];
    int rollNumber;
    struct tm birthday;
    struct tm admissionDate;
};

int calculateAge(struct tm birthday, struct tm admissionDate) {
    int age = admissionDate.tmay.tm_year;
    if (admissionDate.tm_mon < birthday.tm_mon || (admissionDate.tm_mon == birthday.tm_mon && admissionDate.tm_mday < birthday.tm_mday)) {
        age--;
    }
    return age;
}

int main() {
    struct Student student;

    
    printf("Enter name: ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0';

    printf("Enter roll number: ");
    scanf("%d", &student.rollNumber);

    printf("Enter birthday (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &student.birthday.tm_mday, &student.birthday.tm_mon, &student.birthday.tm_year);
    student.birthday.tm_mon--; 

    printf("Enter admission date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &student.admissionDate.tm_mday, &student.admissionDate.tm_mon, &student.admissionDate.tm_year);
    student.admissionDate.tm_mon--; 
    int age = calculateAge(student.birthday, student.admissionDate);

    printf("\nStudent Information:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Birthday: %d/%d/%d\n", student.birthday.tm_mday, student.birthday.tm_mon + 1, student.birthday.tm_year + 1900);
    printf("Admission Date: %d/%d/%d\n", student.admissionDate.tm_mday, student.admissionDate.tm_mon + 1, student.admissionDate.tm_year + 1900);
    printf("Age at the time of admission: %d\n", age);

    return 0;
}
