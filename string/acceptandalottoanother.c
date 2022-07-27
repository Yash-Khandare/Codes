#include<stdio.h>

void strcpyx(const char*, char*)
int main()
{
	char arr[100]={'\0'};
	char brr[100]={'\0'};    
print("Enter Any string\n");
scanf("%[^\n]",arr);
strcpyx(arr,brr);
printf("%s",brr);



	return 0;
}