#include<stdio.h>
int main(){
int arr[5],i,sum=0;
printf("Enter any array having 5 elements: \n");
for(i=0; i<5; i++){
    scanf("%d", &arr[i]);
}
for(i=0; i<5; i++){
    if(i%2!=0){
        sum=sum+arr[i];
    }
    if(arr[i]%2==0){
        sum=sum+arr[i];
    }
}
printf("\n Sum of all the even elements and even position elements of the array is %d",sum);
return 0;
}