#include <stdio.h>

int main ()
{
	int var, i = 0;
	bool quadrat = false; 
		
	printf ("Intodueixi un nombre major que 0, i li direm si és un quadrat perfecte:\n");
	scanf ("%i\n", &var);
	
	while (i <= var && !quadrat)
	{
		if (i*i == var)
		{
		quadrat = true;
		}
		else
		{
		i++;
		}
	}
	if (quadrat)
	{
	printf ("%i és un quadrat perfecte\n", var);
	}
	else 
	{
	printf ("%i no és un quadrat perfecte\n", var);
	}
		
}
