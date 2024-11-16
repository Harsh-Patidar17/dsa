#include<stdio.h>
int arr[6]={1,3,5,6,6,8}, size=6;
void space(int num, int pos){
    for(int i=size;i>=pos;i--){
    arr[i]=arr[i-1];
    }
    size++;
    arr[pos]=num;
}
void insertsort(){ 
    int num, pos;
    printf("Enter num to be added:");
    scanf("%d", &num);
    for(int i=0;i<size;i++){
        if(num>=arr[i] && num<=arr[i+1]){
            pos=i+1;
            space(num,pos);
            break;
        }
        else if(i==size-1){
            arr[size]=num;
            size++;
            break;
        }
        else if(num<=arr[i]){
            pos=0;
            space(num, pos);
            break;
        }
    }
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    insertsort();
return 0;
}