#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];
    struct Student temp;
    int i, j;
    
    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    
    printf("\nStudents sorted by marks (descending):\n");
    for (i = 0; i < 5; i++) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", 
               students[i].id, students[i].name, students[i].marks);
    }
    
    return 0;
}
