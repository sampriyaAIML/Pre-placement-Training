#include<stdio.h>
int main(){
	int arr[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int e;
	scanf("%d",&e);
	arr[n+1]=e;
	for(i=0;i<=n;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
