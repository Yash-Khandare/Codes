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

int Checkcapital(const char*)

int Checkcapital(const char *p){
	int icnt=0;
	while (*p!='\0'){
		if(p >=65 && p<=90){
			icnt++;
		}
		p++;
	}
	return icnt;
}