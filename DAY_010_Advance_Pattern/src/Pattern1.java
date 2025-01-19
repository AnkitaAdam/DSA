//Enter number of rows : 
//4
//   *
//  **
// ***
//****

import java.util.Scanner;

public class Pattern1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of rows : ");
		int num=sc.nextInt();
		for(int i=1;i<=num;i++){
			
			for(int k=1;k<=num-i;k++) {
				System.out.print(" ");
			}
			for(int j=1;j<=i;j++) {
				System.out.print("*");
			}
			System.out.println();
		}
	}

}
