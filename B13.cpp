#include<stdio.h>

int main (){
	int n;
	scanf("%d", &n);
	int max = -1e9;
	while(n!=0){
		int temp=n%10;
		if(temp>max){
			max = temp;
		}
		n/=10;
	}
	printf("%d", max);
	
}