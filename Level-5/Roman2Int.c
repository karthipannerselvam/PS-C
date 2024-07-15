#include <stdio.h>
#include<string.h>

int get(char r){
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
    
}
int main() {
    // Write C code here
   
   char s[10]="MI";
   int res;
   for(int i=0;i<strlen(s);i++){
       int s1=get(s[i]);
       if(i+1 < strlen(s)){
           int s2=get(s[i+1]);
           if(s1>=s2){
               res=res+s1;
           }
           else{
               res=res+s2-s1;
               i++;
           }
           
       }
       else{
           res=res+s1;
       }
   }
   printf("%d",res);
    

    return 0;
}