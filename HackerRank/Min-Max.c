

#include<stdio.h>
int main(){
    
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    minMaxSum(arr,5);
    return 0;
}
void minMaxSum(int arr[],int n){
    int min=arr[0];
    int max=arr[0];
    long long count=0;
    for(int i=0;i<n;i++){
        count+=arr[i];
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
            
        }
    }
    
    long long min_sum = count - max;
    long long max_sum = count - min;

    printf("%ld %ld\n", min_sum, max_sum);
    
    
}
