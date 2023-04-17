#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10  

struct Student {
    int roll_no;
    char stud_name[50];
    int mark1;
    int mark2;
    int mark3;
    int total_marks;
    float average_marks;
};

void bubbleSort(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].total_marks < students[j + 1].total_marks) {
                // Swap the students
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter the number of students (maximum %d): ", MAX_STUDENTS);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_STUDENTS) {
        printf("Invalid number of students. Exiting...\n");
        return 0;
    }

    struct Student students[MAX_STUDENTS];

    printf("Enter the details of the students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf("%s", students[i].stud_name);
        printf("Mark 1: ");
        scanf("%d", &students[i].mark1);
        printf("Mark 2: ");
        scanf("%d", &students[i].mark2);
        printf("Mark 3: ");
        scanf("%d", &students[i].mark3);

        students[i].total_marks = students[i].mark1 + students[i].mark2 + students[i].mark3;
        students[i].average_marks = (float)students[i].total_marks / 3;
    }

    printf("\nRecords before sorting:\n");
    printf("Roll No.\tName\t\tTotal Marks\tAverage Marks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\t\t%.2f\n", students[i].roll_no, students[i].stud_name, students[i].total_marks, students[i].average_marks);
    }

    bubbleSort(students, n);

    printf("\nRecords after sorting:\n");
    printf("Roll No.\tName\t\tTotal Marks\tAverage Marks\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t\t%s\t\t%d\t\t%.2f\n", students[i].roll_no, students[i].stud_name, students[i].total_marks, students[i].average_marks);
    }

    return 0;
}
