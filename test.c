/*This program is written by Shashwat Raj*/
#include<stdio.h>
void push();
void pop();
void display();
int SIZE = 10;
int a[SIZE];
int top = -1;
void main()
{
   char ch;
   printf("Want to input or output\n\n");

   while (1)
   {
       printf("1 to PUSH\n");
       printf("2 to POP\n");
       printf("3 to QUIT\n");
       printf("4 to DISPLAY\n");
       scanf(" %c",&ch);
       switch(ch)
       {
           case'1':
           push();
           break;
           case '2':
           pop();
           break;
           case'3':
           exit(0);
           break;
           case '4':
           display();
           break;
           default:
           printf("Invalid Operation\n");
       }

   }
}
void push()
{
    printf("PUSH:\n");
    if(top<SIZE)
    {
        top ++;
        scanf(" %d",&a[top]);
    }
    else
        printf("Overflow");

}
void pop()
{
    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nDeleted element is %d\n",a[top]);
        top=top-1;
    }
}
void display()
{
    int i;

    if(top==-1)
    {
        printf("\nStack is empty!!");
    }
    else
    {
        printf("\nStack is...\n");
        for(i=top;i>=0;--i)
            printf("%d\n",a[i]);
    }
}
