#include <stdio.h>
void largest(int arr[], int n) {
    // Code Here
    int i;
    int max=arr[0];
    for( i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("The largest element is %d",max);
    
}
int main(){
    int n,i;
    
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    largest(arr,n);
    return 0;
}
