#include <stdio.h>
#include <limits.h>
void func(int arr[],int n){
	int i,j;
	int max=arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	int freq[max+1];
	for(j=0;j<max+1;j++){
 		freq[j]=0;
	}
	for(i=0;i<n;i++){
		freq[arr[i]]++;
	}
	for(j=0;j<max+1;j++){
		if(freq[j]>0){
			printf(" %d ~ %d ",j,freq[j]);
		}
		printf("\n");
	}
}
int main(){
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	func(arr,n);
	return 0;
}
