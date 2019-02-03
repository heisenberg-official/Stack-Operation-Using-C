#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdbool.h>
#define MAX 5
int stack[MAX],TOP=-1;
void PUSH()
{
    int n;
    if(TOP==(MAX-1))
        printf("\nStack OVERFLOW. [Stack-Full]\n\n");
    else
    {
        TOP++;
        printf("\nInput the integer element to PUSH: ");
        scanf("%d",&n);
        stack[TOP]=n;
        printf("\n");
    }
}
void POP()
{
    if(TOP==-1)
        printf("\nStack UNDERFLOW. [NO-Element]\n\n");
    else
    {
        TOP--;
        printf("\nSuccessfully POPPED the TOP element.\n\n");
    }
}
void DISPLAY()
{
    int i;
    if(TOP==-1)
        printf("\nStack is EMPTY.\n\n");
    else
    {
        for(i=0;i<=TOP;i++)
        {
        printf("\nElement %d Of STACK is: %d",(i+1),stack[i]);
        }
        printf("\n\n");
    }
}
int main()
{
    int a;
    while(true)
    {
        printf("Select Your Choice For STACK-OPERATION:\n1)PUSH\n2)POP\n3)Display\n4)Exit.\n\n[-]>>> ");
        scanf("%d",&a);
        switch(a)
        {
            default:printf("Invalid Choice Please Re-Select.");
            case(1):PUSH();break;
            case(2):POP();break;
            case(3):DISPLAY();break;
            case(4):exit(0);
        }
    }
    return 0;
}
