// Problem5-2-4_RequiredNaturalNumbers.c : Defines the entry point for the console application.
//

#include "stdafx.h"

#pragma warning( disable : 4996 )


int main()
{
	int integer;
	char character;
	size_t count = 0;
	do
	{
		scanf("%d", &integer);
		if (integer >= 0 && integer < 10)
		{
			count++;
		}
		character = getchar();
	} while (character == ' ');
	printf("%zu", count);
    return 0;
}

