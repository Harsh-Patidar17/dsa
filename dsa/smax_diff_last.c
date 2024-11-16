#include<stdio.h>
int smax(int arr[],int n) 
{
 int max=arr[0];
 int smax=arr[1];
     for(int i=1;i<n;i++)
    {
        if(max<arr[i])
        {
           
            smax=max;
             max=arr[i];
        }
        else if(max>arr[i] && smax<arr[i])
        {
             smax=arr[i];
        }
    }
    return smax;
}
int main() 
{   
    int arr[10]={-120,-110,7,-4,-5,-6,-10,-1,-120,-2};
    int lastElement=arr[9];
    int x=smax(arr,10);
    printf("smax is : %d\n ",x);  
    printf("lastElement is : %d\n ",lastElement);  
     printf(" the difference is : %d ",x-lastElement);
}


