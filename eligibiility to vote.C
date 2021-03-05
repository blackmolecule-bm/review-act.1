#include <stdio.h>

int main()
{
	char name[100]={0};
	int age;

	printf("Name: ");
	scanf("%[^\n]s",name);

	printf("Age: ");
	scanf("%d",&age);

	if (age >= 18)
	{
	    printf("You are eligible for voting");
	}
	else
	{
	    printf("You are not eligible for voting");
	}

	return 0;
}
