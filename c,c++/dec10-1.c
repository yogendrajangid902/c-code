#include <stdio.h>

struct Account
{
    char name[10];
    int accnum;
    char address[10];
    int blance;
};
main()
{
    int i, n,acc1;
    struct Account ram;

    printf("Enter Name of account holder\n");
    scanf("%s", &acc1.name);
    acc1.accnum = 1;
    printf("enter your address\n");
    scanf("%s", &acc1.address);
    printf("enter the blance\n");
    scanf("%s", &acc1.blance);
    printf("Enter Name of account holder\n");
    printf("%s\n", &acc1.name);
    printf("enter your address\n");
    printf("%s\n", &acc1.address);
    printf("enter the blance\n");
    printf("%s\n", &acc1.blance);
    getch();
    return 0;
}
