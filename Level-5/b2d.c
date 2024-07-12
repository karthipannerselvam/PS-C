#include<stdio.h>
#include<math.h>
int main(){
    int a;
    scanf("%d",&a);
    int ans=0;
    int rem,i=0;

    while(a!=0){
        rem=a%10;
        a=a/10;
        ans+=rem*pow(2,i);
        i++;
    }
    printf("%d",ans);
}