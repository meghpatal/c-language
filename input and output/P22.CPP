#include<stdio.h>
#include<conio.h>

main()

{

    int a,b,c;

    clrscr();

    printf("enter the value of a:-",a);
    scanf("%d",&a);
    printf("enter the value of b:-",b);
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    c=a-b;
     printf("value of a is :- %d\n",a);
     printf("value of b is :- %d\n",b);

    getch();
}