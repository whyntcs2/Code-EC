#include<stdio.h>
#include<math.h>

long long giaithua(int n){
	int res =1;
	for(int i=1; i<=n; i++){
		res*=i;
	}
	return res;
}

int main (){
	int n;
	scanf("%d", &n);
	if(n>0){
		printf("%lld", giaithua(n));
	}
}
