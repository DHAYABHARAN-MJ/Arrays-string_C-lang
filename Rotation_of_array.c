//rotation of array
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int arr[num];
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    int d;
    scanf("%d",&d);
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
    for(int i=0;i<num-d;i++){
        arr[i]=arr[i+d];
    }
    for(int i=0;i<num;i++){
        arr[num-d+i]=temp[i];
    }
    for(int i=0;i<num;i++){
        printf("%d ",arr[i]);
    }
}
