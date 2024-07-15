// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>


int main() {
    // Write C code here
   
   int mat1[10][10];
   int mat2[10][10];
   int mr,mc,nr,nc;
   scanf("%d %d",&mr,&mc);
   scanf("%d %d",&nr,&nc);
   if(mc!=nr){
       printf("Cant Multiplay");
       return 0;
   }
   for(int i=0;i<mr;i++){
       for(int j=0;j<mc;j++){
           scanf("%d",&mat1[i][j]);
       }
   }
   for(int i=0;i<nr;i++){
       for(int j=0;j<nc;j++){
           scanf("%d",&mat2[i][j]);
       }
   }
   int ans[mr][nc];
   for(int i=0;i<mr;i++){
       for(int j=0;j<nc;j++){
           ans[i][j]=0;
           for(int k=0;k<mc;k++){
               ans[i][j]+=mat1[i][k]*mat2[k][j];
           }
       }
   }
   for(int i=0;i<mr;i++){
       for(int j=0;j<nc;j++){
          printf("%d",ans[i][j]);
       }
       printf("\n");
   }
   
    

    return 0;
}