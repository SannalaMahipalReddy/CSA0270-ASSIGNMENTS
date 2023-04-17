#include <stdio.h>
#include <string.h>

union Student {
    char name[50];
    float gpa;
};

int main() {
    union Student student; 

    printf("Enter student's name (up to 50 characters): ");
    fgets(student.name, sizeof(student.name), stdin);
    student.name[strcspn(student.name, "\n")] = '\0'; 

    printf("Enter student's GPA: ");
    scanf("%f", &student.gpa);

    printf("Student's name: %s\n", student.name);
    printf("Student's GPA: %.2f\n", student.gpa);

    return 0;
}
