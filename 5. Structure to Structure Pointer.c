#include <stdio.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    struct Student student;
    struct Student *ptr;
    
    ptr = &student;
    
    printf("Enter student details:\n");
    printf("ID: ");
    scanf("%d", &ptr->id);
    printf("Name: ");
    scanf("%s", ptr->name);
    printf("Marks: ");
    scanf("%f", &ptr->marks);
    
    printf("\nStudent details using pointer:\n");
    printf("ID: %d\n", ptr->id);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);
    
    printf("\nStudent details using structure:\n");
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
    printf("Marks: %.2f\n", student.marks);
    
    return 0;
}
