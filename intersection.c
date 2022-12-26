#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],i,n1,j,n2,k;
    //taking input of set A
    printf("Enter number of element of set A\n");
    scanf("%d",n1);
    printf("Enter element of set A\n");
    for (i=0;i<n1;i++)
    {
        scanf("%d",a[i]);
    }
    //taking input of set B
    printf("Enter the number of element of set B\n");
    scanf("%d",n2);
    printf("Enter element of set B\n");
    for (i=0;i<n2;i++)
    {
        scanf("%d",b[i]);
    }
    // logic for intersection
    for (i=0;i<n1;i++)
    {
        for (j=0;j<n2;j++)
        {
            if(a[i]=b[j])
            {
                c[k]=a[i];
                k++;
            }
        }
    }
    /*printing the element of intersection of set A and set B */
    printf("Intersection of set A and set B is :");
    for (i=0;i<k;i++)
    {
        printf("%d",c[i]);

    }
}
