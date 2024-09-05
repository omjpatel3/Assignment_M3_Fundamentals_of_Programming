//1_Find length of string without inbuilt

#include<stdio.h>
main()
{
	char city[20]="RAJKOT";
	int i, count=0;

	for(i=0; city[i]!='\0'; i++)
	{
		printf("\n\n\t %c",city[i]);
		count++;
	}
	printf("\n\n\t Length of the String : %d", count);
}
