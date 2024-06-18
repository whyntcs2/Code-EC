#include<stdio.h>

int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int maxa=-100000;
	int maxb=-100000;
	for(int i=0;i<n;i++){
		if(a[i]>maxa){
			maxb=maxa;
			maxa=a[i];
		}
		else if(a[i]>maxb && a[i]!=maxa){
			maxb=a[i];
		}
	}
	printf("%d", maxb);
}
