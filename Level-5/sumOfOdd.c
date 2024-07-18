#include <stdio.h>
#include<math.h>
int sum(int a){
    if(a%2==0) a--;
    if(a==1) return 1;
    int ans=a+sum(a-2);
    return ans;
    
}

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
    return 0;
}