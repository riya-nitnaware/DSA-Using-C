#include<stdio.h>
int main(){
	int n;
	printf("Enter a number:");
	scanf("%d", &n);
	int rev=0,digit;
	while(n>0){
		digit = n % 10;
		rev = rev * 10 + digit;
		n = n / 10;
	}
	printf("Reversed number is : %d", rev);
	return 0;
}
