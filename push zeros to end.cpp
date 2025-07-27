#include<stdio.h>
void func(int arr[],int n){
		
	int temp[n];
	int j=0,i;
	for (i=0;i<n;i++){
		if(arr[i]!=0){
			temp[j++]=arr[i];
		}
	}
	while(j<n){
		temp[j++]=0;
	}
	for(i=0;i<n;i++){
		arr[i]=temp[i];
	}
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
