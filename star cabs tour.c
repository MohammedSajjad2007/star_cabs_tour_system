#include<stdio.h>
float totalcharge = 0 , pk = 0 , distance = 0 , adamm = 0;
char payment;
void input();
void process();
void display();
int main()
{
	input();
	process();
	display();
	return 0;
}
void input()
{
	printf("Enter the package type(1.Normal meter hiers , 2.Package tours)- \n");
	scanf("%f",&pk);
	printf("Enter the distance in KM- \n");
	scanf("%f",&distance);
	printf("Enter the payment method(C.Cash , D.Card)- \n");
	scanf(" %c",&payment);
	
}
void process()
{
	if(pk == 1)
	{
		if(payment == 'c')
		{
			totalcharge = distance * 35;
		}
		else if(payment == 'd')
		{
			adamm = (distance * 35)* 0.03;
			totalcharge = (distance * 35) + adamm;	
		}
		else
		{
			printf("Invelid!!!");
		}
	}
	else if(pk == 2)
	{
		if(payment == 'c')
		{
			totalcharge = distance * 40;
		}
		else if(payment == 'd')
		{
	        adamm = (distance * 40)* 0.03;
			totalcharge = (distance * 40) + adamm;
		}
		else
		{
			printf("Invelid!!!");
		}
	}
	else
	{
		printf("Invelid!!!");
	}
}
void display()
{
	printf("The Total Charge Is - %.2f \n",totalcharge);
}
