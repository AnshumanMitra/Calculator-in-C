#include <stdio.h>

int main()
{
	int
		num1=0,
		num2=0,
		total=0;

	char
		operator,
		DoExit;

	while(1)
	{
		system("clear");

		printf("Welcome to TechnoKiddies Calculator Video\n\n");

		printf("[+] Add [-] Subtract [*] Multiply [/] Divide \n\n");
		printf("Enter First Number    : ");
		scanf("%d", &num1);

		printf("Operator              : ");
		operator = getchar();
		operator = getchar();

		fflush(stdin);

		if(operator != '+' && operator != '-' && operator != '*' && operator != '/')
		{
			printf("Invalid operator typed in\n\n");
			exit(0);
		}

		printf("Enter Second Number   : ");
		scanf("%d", &num2);
		printf("\n");

		switch(operator)
		{
			case '+':
				total = num1 + num2;

				break;

			case '-':
				total = num1 - num2;

				break;

			case '*':
				total = num1 * num2;

				break;

			case '/':
				total = num1 / num2;

				break;
			
			case 'e':
				exit(0);

				break;

			default:
				exit(0);

		}

		printf("Result                : %d\n\n", total);

		printf("Do you want to continue[y/n]: ");
		DoExit = getchar();
		DoExit = getchar();

		fflush(stdin);

		if(DoExit != 'y')
		{
			exit(0);
		}
	}
}
