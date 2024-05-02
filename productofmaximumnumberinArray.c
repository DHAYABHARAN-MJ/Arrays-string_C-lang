#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    int num1,num2;
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i!=j && arr[i]*arr[j]>max){
                max = arr[i]*arr[j];
                num1=arr[i];
                num2=arr[j];
            }
        }
    }
    printf("%d %d %d",max,num1,num2);
}