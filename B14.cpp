#include<stdio.h>
#include<math.h>

int UCLN(int a, int b){
	while(b!=0){
		int r = a%b;
			a=b;
			b=r;
	}
	return a;
}

int BCNN(int a, int b){
	return a*b/(UCLN(a,b));
}

int main (){
	int a,b;
	scanf("%d%d", &a, &b);
	printf("%d\n", UCLN(a,b));
	printf("%d\n", BCNN(a,b));
}