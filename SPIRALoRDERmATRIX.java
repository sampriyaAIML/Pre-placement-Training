import java.util.*;
public class SPIRALoRDERmATRIX {
    public static void main(String[] args) {
        Scanner sc = new Scanner (System.in);
        System.out.print("Enter the number of rows: ");
        int r = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int c = sc.nextInt();
        int arr[][]= new int[r][c];
        System.out.println("Enter the elements in the matrix: ");
        for(int i =0;i<r;i++){
            for (int j=0;j<c;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        System.out.println("The matrix is : ");
        for(int i =0;i<r;i++){
            for (int j=0;j<c;j++){
                System.out.print(arr[i][j]+" ");
            }
            System.out.println();
        }
        int top = 0;
        int bottom=r-1;
        int left=0;
        int right = c-1;
        System.out.print("The spiral order matrix : ");
        while ((top<=bottom)&&(left<=right)) {
            for(int i=left;i<=right;i++){
                System.out.print(arr[top][i]+" ");
            }
            top++;
            for(int i=top;i<=bottom;i++){
                System.out.print(arr[i][right]+" ");
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    System.out.print(arr[bottom][i]+" ");
                }
            }
            bottom--;
            if(left<=right){
                for(int i =bottom;i>=top;i--){
                    System.out.print(arr[i][left]+" ");
                }
            }
            left++;
        }
    }
}
