#include<stdio.h>
int main(){
    int arr[100];
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<a-1;i++){
        for(int j=i+1;j<a;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        
    }
    int j=1;
    for(int i=0;i<a ;i++){
        if(arr[i]==arr[i+j]){
            for(int k=i;k<a;k++){
                arr[k]=arr[k+j];
            }
            a--;
            i--;
        }
    }
    for(int i=0;i<a;i++){
        printf("%d",arr[i]);
    }

}