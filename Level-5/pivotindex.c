// Online C compiler to run C program online
#include <stdio.h>
int check(int a,int arr[a]){
    int sum=0,temp=0;
    for(int i=0;i<a;i++){
        sum+=arr[i];
    }
    for(int i=0;i<a;i++){
        temp+=arr[i];
        if(temp==sum) return i;
        sum-=arr[i];
    }
    return -1;
    
}
int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",check(a,arr));

    return 0;
}