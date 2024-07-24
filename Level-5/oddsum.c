// Online C compiler to run C program online
#include <stdio.h>
int sum(int a,int arr[a]){
    if(a==1) return (arr[a-1]%2!=0)?arr[a-1]:0;
    int ans=((arr[a-1]%2!=0)?arr[a-1]:0)+sum(a-1,arr);
    return ans;
}
int main() {
    // Write C code here
   int a;
   scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){
       scanf("%d",&arr[i]);
   }
   printf("%d",sum(a,arr));
   

    return 0;
}