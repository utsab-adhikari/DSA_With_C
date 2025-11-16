//WAP using pointer to struct to access members using arrow operator 
#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s;
    struct student *ptr = &s;

    printf("Enter name: ");
    scanf("%s", ptr->name);

    printf("Enter roll: ");
    scanf("%d", &ptr->roll);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
