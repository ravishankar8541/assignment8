/*
* * * * * * * * *
  *           *
    *       *
      *   *
        * 
*/
#include"stdio.h"
int main()
{
    int i,j;
    for(int i=5;i>=1;i--){
        for(int j=1;j<=9;j++){
            if(i==5){
                printf("* ");
            }
            else if(j==6-i || j==4+i){
                printf("* ");
            }else{
              printf("  ");
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
