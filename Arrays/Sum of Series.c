/*Sum of Series
Input:
N = 5
Output: 15
Explanation: For n = 5, sum will be 15.
1 + 2 + 3 + 4 + 5 = 15.
Code:*/
#include<stdio.h>
int main(){
     int num;
     scanf("%d",&num);
     int sum=(num+1)*(num)/2;
     printf("%d",sum);
}
