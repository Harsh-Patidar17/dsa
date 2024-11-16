#include<stdio.h>
int binarysearch(int arr[],int low,int high) 
{
    int k;
    scanf("%d",&k);
    while(low<=high) {
        
        int mid=low+(high-low)/2;
        if( k>arr[mid])
        {
            low=mid+1;
        }
        else if(k<arr[mid])
        {
            high=mid-1;
        }
        else
        {
           return mid;
        }
    }
    return -1;
    }

int main() {
    int arr[6]={1,5,6,7,8,9};
    int high=5;
    int x=binarysearch(arr,0,high);
    if(x==-1)printf("element not found");
    
     else  {
         printf("%d",x);
     }
}