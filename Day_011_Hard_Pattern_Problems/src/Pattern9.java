
//Enter n: 
//5
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
//ABCDEFEDCBA

import java.util.Scanner;

public class Pattern9 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n: ");
		int n=sc.nextInt();
		for(int i=65;i<=n+65;i++) {
			for(int k=1;k<=(n+65)-i;k++) {
				System.out.print(" ");
			}
			for(int j=65;j<i;j++) {
				System.out.print((char)j);
			}
			for(int j=i;j>=65;j--) {
				System.out.print((char)j);
			}
			System.out.println();
		}
	}

}
