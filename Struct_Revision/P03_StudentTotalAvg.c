//WAP to calculate total and avg marks of student using struct array;

#include<stdio.h>

struct student {
    char name[20];
    float marks;
};

int main() {
    struct student s[100];

    int i, n;
    float total = 0, avg;

    printf("Enter No of Students: ");
    scanf("%d", &n);

    printf("\nEnter %d Students Details\n", n);

    for(i=0;i<n;i++) {
        printf("\nStudent No: %d\n", i+1);
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        total = total + s[i].marks;
    }

    avg = total/n;

    printf("The Total: %f\nAnd Average: %f\n", total, avg);
    return 0;
}