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
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==5){
                printf("* ");
            }
            else if(j==1 || j==i){
                printf("* ");
            }else{
            printf("  ");
            }
        }
        printf("\n\n");
    }
    printf("\n");
    return 0;
}