#include <stdio.h>
int main() {
    int num=1, i;
    
   for (num = 1; num < 11; num++)
	   
	   {
	   
    for (i = 1; i <= 10; ++i) {

    	
        printf("%d * %d = %d \n", num, i, num * i);
    }
    printf("\n");
	}
    
    return 0;
}
