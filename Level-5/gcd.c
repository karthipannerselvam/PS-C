#include<stdio.h>
int main(){
    int a,b;
    
    scanf("%d",&a);
    scanf("%d",&b);
    int ans=1;
    for(int i=1;i<=a && i<=b;i++){
        if(a%i==0 && b%i==0){
            ans=i;
        }
    }
    
    printf("%d",ans);
}
