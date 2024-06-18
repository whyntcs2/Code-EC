#include<stdio.h>

int main(){
	int n, reverse = 0;
	scanf("%d", &n); 
	while(n>0){
		int digit_of_reverse = n %10;
		reverse = reverse * 10 + digit_of_reverse;
		n /= 10;
	}
	printf("%d", reverse);
}
