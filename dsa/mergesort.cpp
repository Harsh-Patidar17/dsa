#include<stdio.h>
void merge(int arr[], int low, int mid, int high){
    int i,j,k;
    int n1=mid-low+1;
    int n2=high-mid;
    printf("%d\n",n1);
    int arr1[n1];
    int arr2[n2];
    for( i=0;i<n1;i++) {
        arr1[i]=arr[low+i];
    }
    for( j=0;j<n2;j++){
        arr2[j]=arr[j+mid+1];
    }
     i=0,j=0,k=low;
    while( i<n1 && j<n2) {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else 
        {
            arr[k]=arr2[j];
            j++;
        }
        k++;
    }
    while( i<n1) {
        arr[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=arr2[j];
        j++;
        k++;
    }
   
}
void mergesort(int arr[], int low, int high){
    
    if(low<high) {
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    
}
int main() {
    int arr[6]={7,590,3,0,4,7};
    int n=6;
    mergesort(arr,0,n-1);
     for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    
}