/*
             *
           * *
         *   *
       *     * 
     * * * * * 
*/
#include"stdio.h"
int main()
{
    int i,j;
    for(i=5;i>=1;i--){
        for(j=1;j<=5;j++){
            if(i==1){
                printf("* ");
            }
            else if(j==5 || j==i){
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