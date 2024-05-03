//PRODUCT OF ARRAY EXCEPT ITSELF
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of elements in a array: ");
    scanf("%d",&num);
    int arr[num];
    int copy[num];
    printf("enter the %d elements of the array: ",num);
    for(int i=0;i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<num;i++){
          int  product=1;
        for(int j=0;j<num;j++){
            if(i!=j){
                product=product*arr[j];
            }
        }
        copy[i]=product;
    }
    for(int i=0;i<num;i++){
        printf("%d ",copy[i]);
    }
}
