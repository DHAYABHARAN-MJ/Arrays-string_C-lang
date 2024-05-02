//Intersection of two arrays
#include<Stdio.h>
int main(){
    int num1,num2;
    int count=0;
    printf("enter the no. of elements 1st array: ");
    scanf("%d",&num1);
    printf("\n");
    printf("enter the no. of elements 2nd array: ");
    scanf("%d",&num2);
    printf("enter the elements of the first array: ");
    int arr1[num1];
    for(int i=0;i<num1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the elements of the second array: ");
    int arr2[num1];
    for(int i=0;i<num2;i++){
        scanf("%d",&arr2[i]);
    }
    printf("the values of intersection of array 1 and array 2 are: ");
    for(int i=0;i<num1;i++){
        for(int j=0;j<num2;j++){
            if(arr1[i]==arr2[j]){
                printf("%d ",arr1[i]);
                count++;
            }
        }
    }printf("\n");
    printf("total number intersection elements are %d",count);
}
