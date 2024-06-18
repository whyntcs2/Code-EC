#include<stdio.h>
#include<math.h>

int main (){
	int n;
	scanf("%d", &n);
	for(int i = n; i>0; i--){
		if(i%2!=0){
			printf("%d ", i);
		}
	}
}