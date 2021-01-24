#include<stdio.h>
#include<conio.h>
//85 - 100 -> Grade A 70 - 84 -> Grade B 55 - 69 -> Grade C 40 - 54 -> Grade D Below 40 -> Grade F
int main()
{
    printf("Enter your marks : ");
    int mark;
    scanf("%d",&mark);
    printf("\n");
    if(mark>=85&&mark<=100)
        printf("Grade A");
    else if(mark>=70&&mark<=84)
        printf("Grade B");
    else if(mark>=55&&mark<=69)
        printf("Grade C");
    else if(mark<40)
        printf("Grade D");
    else
        printf("Grade F");
}
