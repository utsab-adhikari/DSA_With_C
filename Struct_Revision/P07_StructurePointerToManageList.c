// create a program using struct and pointer to manage a list of student

#include<stdio.h>

struct student {
    char name[20];
    int id;
    char faculty[20];
};

void display(struct student *s1, int n) {

    printf("\n<--- Details of %d Students --->\n", n);
    
    for(int i=0;i<n;i++) {
        printf("\nStudent No: %d Details --->\n", i+1);
        printf("Name: %s\n", s1[i].name);
        printf("Id: %d\n", s1[i].id);
        printf("Faculty: %s\n", s1[i].faculty);
    }
}

int main() {

    struct student s1[100];

    int i, n;

    printf("\nEnter Number of Students: ");
    scanf("%d", &n);

    printf("\n<--- Enter Details of %d Students --->\n", n);

    for(i=0;i<n;i++) {

        printf("\nStudent No: %d Details --->\n", i+1);
        printf("Enter Name: ");
        scanf("%s", s1[i].name);
        printf("Enter Id: ");
        scanf("%d", &s1[i].id);
        printf("Enter Faculty: ");
        scanf("%s", s1[i].faculty);

    }

    display(s1, n);

    return 0;
}
