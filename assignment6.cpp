// assignment6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "string.h"


void main()

{

	char string1[21] = "9rWLK0gFoHZqNIj3DMkR";
	char string2[21] = "q405IHl0sOx5BrmDTeoh";
	char string3[21] = "95EkdriUzNFQTP5vuhR3";
	int i;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;


	printf("BEFORE:\n");
	printf("String1 = %s\n", &string1);
	printf("String2 = %s\n", &string2);
	printf("String3 = %s\n\n\n\n", &string3);

	printf("AFTER: \n");



	for (i = 0; i < 21; i++)
	{
		if (string1[i] >= 48 && string1[i] <= 57)
		{
			string1[i] = 32;
			count1++;
		}

		if (string2[i] >= 65 && string2[i] <= 90)
		{
			string2[i] = string2[2] + 32;
			count2++;
		}

		if (string3[i] >= 97 && string3[i] <= 122)
		{
			string3[i] = string3[i] - 32;
			count3++;
		}
	}



{
	printf("String1 = %s	", string1);
	printf("Amount of numbers changed = %d \n", count1);
	printf("String2 = %s	", string2);
	printf("Amount of symbols changed to lowercase = %d \n", count2);
	printf("string3 = %s	", string3);
	printf("Amount of symbols changed to uppercase = %d \n", count3);


}
	

}