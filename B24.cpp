#include<stdio.h>
#include<math.h>

int check (int a) {
	if(a<2)
		return 0;
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
			}
		}
	return 1;
}

int main (){
	int a[1000];
	int n;
	scanf("%d", &n);
	int cnt=0;
	for(int i=0; i<n;i++){
		scanf("%d", &a[i]);
		if(check (a[i])==1){
			cnt++;
		}
	}
	printf("%d", cnt);
}	
