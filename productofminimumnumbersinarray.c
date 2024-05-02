#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    int num1,num2;
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0]*arr[1];
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i!=j && arr[i]*arr[j]<min){
                min = arr[i]*arr[j];
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    printf("%d %d %d",min,num1,num2);
}