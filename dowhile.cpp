#include <stdio.h>
int main()
{
    double number, sum = 0;
    int i=1;

    // the body of the loop is executed at least once
    do
    {
    	
    	
        printf("Dwse enan akeraio arithmo apo to 0 ews kai to 100. \n ");
        scanf("%lf", &number);
        
        if(number >= 0 && number <= 100){
		
        sum += number;
        
   		printf("Oi arithmoi pou plhktrologhses einai: %d\n",i);
		printf("Sum = %.2lf",sum);
		printf("O mesos oros twn arithmwn einai: %.2lf\n",sum/i);
	
		i++;
	}
        
        else{
        	
        	printf("Edwses lathos arithmo!\n");
        	break;
		}
        
        
    }
    while(number >= 0 && number <=100);
    


    return 0;
}
