#include<stdio.h>
void transverse(int *a,int b);
void search(int *a,int n,int b);
void insert(int *a, int n,int b);
void deletion(int *a,int n,int b);
void merge(int *a,int *b,int *c,int n,int m);
void reversing(int *a,int b);
void main()
{
int a,b,i,n,op,x;
printf("Enter the length of an array\n");
scanf("%d",&a);
printf("Enter the Length of seconf array\n");
scanf("%d",&b);
int arr1[a],arr2[b],arr3[a+b];
printf("Enter Array 1 elements\n");
for(i=0;i<a;i++)
    scanf("%d",&arr1[i]);
printf("Enter Array 1 elements\n");
for(i=0;i<b;i++)
    scanf("%d",&arr2[i]);
    x=a+b;
printf("1:For Transverse\n");
printf("2:For Search\n");
printf("3:For insert\n");
printf("4:For deletion\n");
printf("5:For merge\n");
printf("6:For reversing\n");
printf("7:For Exit\n");
    while(1)
    {
        printf("\nEnter ur Choice\n");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
    transverse(arr1,a);
    transverse(arr2,b);
            break;
        case 2:
    printf("Enter the no to be searched");
    scanf("%d",&n);
    search(arr1,n,a);
    printf("Enter the no to be searched");
    scanf("%d",&n);
    search(arr2,n,b);
    break;
        case 3:
             printf("Enter the no to be inserted");
    scanf("%d",&n);
    insert(arr1,n,a);
   insert(arr2,n,b);
            break;
        case 4:
             printf("Enter the no to be deleted");
    scanf("%d",&n);
    deletion(arr1,n,a);
   deletion(arr2,n,b);
            break;
        case 5:

             merge(arr1,arr2,arr3,a,x);
             break;
        case 6:
            reversing(arr1,a);
            reversing(arr2,b);
            break;
        case 7:
            exit(0);
        }
    }
}

void transverse(int *a,int b)
{
    int i;
    for(i=0;i<b;i++)
        printf("%d\n",a[i]);
    printf("\n\n");
}
void search(int *a,int n,int b)
{
    int i,flag=0;
    for(i=0;i<b;i++)
    {
        if(n==a[i])
            flag=1;
    }
    if(flag==1)
        printf("Element Found\n");
    else
        printf("Element Not Found\n");
}
void insert(int *a, int n,int b)
{
    int i,j;
    for(i=b-1;i<=0;i--)
    {
        a[i]=a[i-1];
        if(i==b)
            a[b]=n;
    }
    for(i=0;i<b;i++)
        printf("%d\n",a[i]);
}
void deletion(int *a,int n,int b)
{
    int i,j;
    for(i=0;i<b;i++)
    {
        if(n==a[i])
        {
            for(j=i;j<b;j++)
                a[j]=a[j+1];
        }
    }
    a[b-1]=0;
    for(i=0;i<b;i++)
        printf("%d\n",a[i]);
}
void merge(int *a,int *b,int *c,int n,int m)
{
    int i;
    for(i=0;i<n;i++)
    {
        c[i]=a[i];
    }
    for(i=n;i<m;i++)
    {
        c[i]=b[i];
    }
     for(i=n;i<m;i++)
        printf("%d\n",c[i]);

}
void reversing(int *a,int b)
{
    int temp,j=0,i;
   for(i=b-1;i<=0;i--)
    {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    j++;
    for(i=0;i<b;i++)
        printf("%d\n",a[i]);
}
}

