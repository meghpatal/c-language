#include<conio.h>
#include<stdio.h>
#define c clrscr
#define p printf

main()

{

    int l,b;
    const float h=2;
    float area;

    c();


    l=2;
    b=10;

    area=h*l*b;

    p("triangel:- %0.2f",area);


    getch();
}