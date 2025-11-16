// Create a struct containing another struct and display the data: address under employee

#include<stdio.h>

struct address {
    char city[20];
    int pin;
};

struct person
{
    char name[20];
    int age;
    struct address addr;
};

void display(struct person p1)
{
    printf("\nName: %s\n", p1.name);
    printf("Age: %d\n", p1.age);
    printf("City: %s\n", p1.addr.city);
    printf("Pincode: %d\n", p1.addr.pin);
}

int main()
{
    struct person p1;

    printf("\nEnter Name: ");
    scanf("%s", p1.name);
    printf("Enter Age: ");
    scanf("%d", &p1.age);
    printf("Enter City: ");
    scanf("%s", p1.addr.city);
    printf("Enter Pincode: ");
    scanf("%d", &p1.addr.pin);

    display(p1);

    return 0;
}
