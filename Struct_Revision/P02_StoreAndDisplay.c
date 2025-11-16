// WAP using struct to store and display employee info: id, name salary

#include<stdio.h>

struct employee {
    int id;
    char name[20];
    float salary;
};

int main() {

    struct employee e;

    printf("Enter Id: ");
    scanf("%d", &e.id);
    printf("Ente Name: ");
    scanf("%s", e.name);
    printf("Enter Salary: ");
    scanf("%f", &e.salary);

    printf("\n<---The Employee Details--->\n");

    printf("Id: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %f\n", e.salary);

    return 0;
}