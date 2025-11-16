// WAP to pass a struct to a function and display its content;

#include <stdio.h>

struct person
{
    char name[20];
    int age;
};

void display(struct person p1)
{
    printf("\nName: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
}

int main()
{
    struct person p1;

    printf("\nEnter Name: ");
    scanf("%s", p1.name);
    printf("Enter Age: ");
    scanf("%d", &p1.age);

    display(p1);

    return 0;
}
