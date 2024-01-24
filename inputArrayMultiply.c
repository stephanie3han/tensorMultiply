/*this is a test for tensor multiply with C language*/
#include <stdio.h>

int main(){
 int input[1][8][1]={{{1},{2},{3},{4},{5},{6},{7},{8}}};
 int filter1[3][4][1]={{{1},{2},{3},
                  {4}},{{1},{2},{3},
                  {4}},{{1},{2},{3},{4}}};
 int a, w, col, row; // a for input control, w for filter number
 int sum=0;
 for(a=0;a<8-4+1;a++){
     for(w=0;w<3;w++){
         for(col=0;col<1;col++){
             for(row=0;row<4;row++){
                 sum=input[0][a+row][0]*filter1[w][row][col];
                 printf("%d * %d = %d\n",input[0][a+row][0],filter1[w][row][col],sum);
                 sum=0;
             }
             printf("\n");
         }
         printf("\n");
     }
     printf("\n");
 }

return 0;
}
