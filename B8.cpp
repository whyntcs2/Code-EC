#include<stdio.h>

int odd (int n){
	if (n%2!=0) return 1; 
}
	
int main (){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i=0;i<n;i++){
			scanf("%d", &a[i]);
		}
		int max = a[0];
		for (int i=0;i<n;i++){
			if(a[i]>max){
				max=a[i];
			}
		}
		printf("%d\n", max);
		for(int i=0;i<n;i++){
			if(odd(a[i])==max){
				printf("%d ",i);
			}
		}
		printf("\n");
}
