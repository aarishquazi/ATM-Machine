#include<stdio.h>
	int pin;
	int atm;
			int amtwithdraw;
int main()
{
	unsigned int balance = 500;
	int secondtransaction = 1;
		printf(".....welcome to HDFC bank.....\n");
		printf("please insert your ATM card\n");
		printf("pin daal de bhai wahi 4 digit wale...\n");
		scanf("%d",&pin);
		while(secondtransaction==1)
		{
		int option;
		printf("\n1. balance inquary\n2. deposit\n3. withdraw\n");
		scanf("%d",&option);
		
		if(option == 1)
		{
			printf("your balance is: %d",balance);
		}
		else if(option==2)
		{
			int amtdeposit;
			printf("enter amount: ");
			scanf("%d",&amtdeposit);
			balance = balance +amtdeposit;
		}
		else if(option==3)
		{
	
			printf("enter amount: ");
			scanf("%d",&amtwithdraw);
			if(amtwithdraw < balance )
			{
			balance = balance - amtwithdraw;
			printf("%d",balance);
			}
			else
			{
				if(amtwithdraw > balance)
				{
					printf(" no\n");
				}
			}
		}
		else
		{
			printf("bhai hosh m hai tu....?\n");
		}

	}
	return 0;
}





