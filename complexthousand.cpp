#include <stdio.h>

int main(){

	int x,num=0, num1=0;


	for (x=30; x < 1001; x++){

		num = x/10;
		num1 = x/100;
		if(x%7 != 0 && num !=5 && num1 != 5){

			printf("%d\n",x);
		}
		

	}

return 0;



}
