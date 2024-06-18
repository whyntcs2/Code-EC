#include<stdio.h>
#include<math.h>

int giaithua(int n) {
	if(n<=1)
		return 1;
	return n*giaithua(n-1);
}

int main (){
	int n;
	scanf("%d", &n);
	if(n>1){
		printf("%d", giaithua(n));
	}
}