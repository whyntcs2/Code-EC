#include<stdio.h>
#include<math.h>

int count (int n){
	int cnt=0;
	while(n!=0){
		n/=10;
		cnt++;
	}
	return cnt;
}

int Armstrong(int number){
	int temp = number;
	int sum =0;
	int n = count(n);
	while(number!=0){
		int digit=n%10;
		sum += pow(digit,n);
		number/=10;
	}
	return 1;
}

int main (){
	int n;
	scanf("%d", &n);
	if(n>0){
		if(Armstrong(n)){
			printf("Yes");
		}else{
			printf("No");
		}
	}
}