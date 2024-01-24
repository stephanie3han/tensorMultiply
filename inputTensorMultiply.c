/*this is a test for tensor multiply with C language*/
#include <stdio.h>

int main(){
 int input[1][8][3]={{{1,11,21},{2,12,22},{3,13,23},{4,14,24},{5,15,25},{6,16,26},{7,17,27},{8,18,28}}};
                     
                     
                     
 int filter1[5][4][3]={{{111,112,113},{121,122,123},{131,132,133},{141,142,143}},
                       {{211,212,213},{221,222,223},{231,232,233},{241,242,243}},
                       {{311,312,313},{321,322,323},{331,332,333},{341,242,243}},
                       {{411,412,413},{421,422,423},{431,432,433},{441,442,443}},
                       {{511,512,513},{521,522,523},{531,532,533},{541,542,543}}};
                       
 int a, ww, col, row; // a for input control, ww for filter number
 int sum=0;
 
 for(a=0;a<8-4+1;a++){
          for(ww=0;ww<5;ww++){
              for(col=0;col<3;col++){
                  for(row=0;row<4;row++){
                 
                      sum+=input[0][a+row][col]*filter1[ww][row][col];
                      printf("%d * %d = %d\n",input[0][a+row][col],filter1[ww][row][col],input[0][a+row][col]*filter1[ww][row][col]);
                
                  }
                  printf("col\n");
              }
               // in this moment, a input array and a weight array finish add, should save it in the buffer
              //sum=leakyrelu(sum+bias[]);
              printf("sum=%d\n", sum);
              //buffer[ww][a][1]=sun;
              sum=0;
              printf("w\n");
          }
     printf("a\n");

 }

return 0;
}
