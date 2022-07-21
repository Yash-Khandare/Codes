#include<stdio.h>
int main()
{
	char humanname[50] = {'\0'};
    printf(" Enter Full Name : ");
	scanf("%[^\n]", humanname);
	printf("Your Full Name is : %s\n", humanname);

	return 0;
}

//[^\n] -- because without this we will print only first first character/name ,
// to avoid and use fully ...Yash