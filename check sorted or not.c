#include<stdio.h>
int main(){
	int arr[6]={2,3,4,5,6,7};
	int isAscending=1;
	int i;
	for( i=0;i<6-1;i++){
		
		if(arr[i]>arr[i+1]){
			isAscending = 0;
			break;
		}
	}
	if(isAscending){
		printf("The array is in ascending order");
		
	}else{
		printf("The array is not in ascending order");
	}
}
