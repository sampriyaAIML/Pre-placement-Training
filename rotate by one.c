#include<stdio.h>
void func(int arr[],int n){
	int l=arr[n-1],i;
	for(i=n-1;n>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=l;
}
int main(){
	int i,n;
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	func(arr,n);
	for(i=0;i<n;i++){
		printf("%d",arr[i]);
	}
	return 0;
	
}
