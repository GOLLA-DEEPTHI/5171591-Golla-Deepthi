#include<stdio.h>
void plusMinus(int arr[],int n){
    int p=0;
    int negative=0;
    int z=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            p++;
        }
        else if(arr[i]<0){
            negative++;
        }
        else{
            z++;
        }
    }
    printf("%.6f \n",(float)p/n);
    printf("%.6f \n",(float)negative/n);
    printf("%.6f \n",(float)z/n);
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     
        
    }    
       plusMinus(arr,n);
    return 0;
}
