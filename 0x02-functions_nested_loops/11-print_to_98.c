#include <main.h>
  2 #include <stdio.h>
  3
  4 /**
  5  * main - check the code
  6  *
  7  * Return: Always 0.
  8  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n ==98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
			else
			{
				printf("%d", n);
			}
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("%d");
				break;
			}
			else
			{
				printf("%d", n);
			}
		}
	}
}
