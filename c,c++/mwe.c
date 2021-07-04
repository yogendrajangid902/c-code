#include <stdio.h>

struct student
{
    char name[20];
    int rollno;
    float m1,m2,m3;
};
int main()
{
    int i, n;
    printf("Enter how many records u want to store :: ");
    scanf("%d", &n);
    struct student stuarr[n];
    printf("Enter name, roll no. and marks Below :: \n");

    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d record :: \n", i + 1);

        printf("Enter Name :: ");
        scanf("%s", stuarr[i].name);
        printf("Enter RollNo. :: ");
        scanf("%d", &stuarr[i].rollno);
        printf("Enter Marks1 :: ");
        scanf("%f", &stuarr[i].m1);
        printf("Enter Marks3 :: ");
        scanf("%f", &stuarr[i].m2);
        printf("Enter Marks3 :: ");
        scanf("%f", &stuarr[i].m3);
    }
    printf("\n\tName\tRollNo\tMarks1\tMarks2\tMarks3\t\n");
    for (i = 0; i < n; i++)
        printf("\t%s\t%d\t%.2f\t%.2f\t%.2f\t\n", stuarr[i].name, stuarr[i].rollno, stuarr[i].m1, stuarr[i].m2, stuarr[i].m3);

    return 0;
}