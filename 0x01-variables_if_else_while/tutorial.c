#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i <= 99; i++)
	{
		putchar ((i/10) + '0');
		putchar ((i%10) + '0');
		
	if (i == 99)
	{
		break;
	}
	else
	{
	putchar (',');
	putchar (' ');
	}
	}
	putchar ('\n');
	return (0);
}

