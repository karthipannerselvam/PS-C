#include <stdio.h>
#include<math.h>
int check(int c){
    for(int i=2;i*i<c;i++){
        if(c%i==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    scanf("%d",&a);
    int c=a;
    int cnt=0;
    int x=a;
    int temp=a;
    int flag=0;
    while(x){
        x=x/10;
        cnt++;
    }
    
    while(check(c)){
        int rem=c%10;
        int div=c/10;
        c=pow(10,cnt-1)*rem+div;
        printf("%d\n",c);
        if(c==temp){
            flag=1;
            break;
        }
    }
    
    if(flag) printf("True");
    else printf("False");
    

    return 0;
}