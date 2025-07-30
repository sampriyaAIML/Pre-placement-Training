#include<stdio.h>
int main(){
	int arr[3][3],trans[3][3],i,j;
	printf("Enter elements for 3X3 matrix:  ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Original matrix: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			trans[j][i]=arr[i][j];		
		}
	}	
	printf("The transpose matrix is: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d ",trans[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
