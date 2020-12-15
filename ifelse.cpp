#include <stdio.h>

int main(void)

{


	int num;



	printf("Dwse enan akeraio arithmo: ");
	scanf("%d",&num);

	if(num < 0)
		printf("Edwses arnitiko arithmo prospathise ksana.\n");

	else if(num % 2 == 0 && num != 0)

	
		
	
		printf("Even number\n",num);
	
	

	else if(num %2 == 1 && num != 0)

	

		printf("Odd number\n",num);
	


	
	
	else
		printf("Zero.\n");
	

return 0;
	


}

