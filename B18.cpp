#include<stdio.h>
#include<math.h>

int main (){
	int n;
	scanf("%d", &n);
	int sum=0;
	while(n!=0){
		int b=n%10;
		sum +=b;
		n/=10;
	}
	printf("%d", sum);
}
