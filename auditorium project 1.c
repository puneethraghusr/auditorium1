#include<stdio.h>
#define MAXSIZE 200
 
char stack_name[MAXSIZE][MAXSIZE];
char stack_USN[MAXSIZE][MAXSIZE];
char stack_mail[MAXSIZE][MAXSIZE];
int choice,n,top,i;
char name[200],usn[200],mail[200];

void push(void);
void pop(void);
void display(void);
int main()
{
    //clrscr();
    top=-1;
    printf("Enter the size of Auditorium[MAX=100]:\n");
    scanf("%d",&n);
    
    do
    {
        printf("\n\t What Would you like to do?");
        printf("\n\t--------------------------------");
        printf("\n\t 1.Log Student Entry Details\n\t 2.Delete Last student Entry detail\n\t 3.Display Student Entry Log In LIFO Order\n\t 4.Exit Program\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t Program Terminated");
                break;
            }
            default:
            {
                printf ("\n\t Invalid Input!");
            }
                 
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tAuditorium is full!");
         
    }
    else
    {
        top++;
        printf(" Enter Name of student\n");
        scanf("%s",&stack_name[top][MAXSIZE]);
        printf(" Enter USN of student\n");
        scanf("%s",&stack_USN[top][MAXSIZE]);
        printf(" Enter Email of studen\nt");
        scanf("%s",&stack_mail[top][MAXSIZE]);
        
        
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n\t Auditorium is Empty!");
    }
    else
    {
        printf("\n\t Details of Last Student Entered:");
        printf("\n\t Name: %s",stack_name[top]);
        printf("\n\t USN: %s",stack_USN[top]);
        printf("\n\t Email %s",stack_mail[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf(" Students Entered: \n");
        printf("Name \t \t USN \t \t E-mail \t \t \n");
        for(i=top+1; i>=0; i--){
            printf("%s \t\t %s \t\t %s \t\t \n",stack_name[i],stack_USN[i],stack_mail[i]);
        }
            
        
    }
    else
    {
        printf("\n The STACK is empty");
    }
    
}
