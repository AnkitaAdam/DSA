//Enter number of rows : 
//5
//    1
//   121
//  12321
// 1234321
//123454321

import java.util.Scanner;

public class Pattern1 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of rows : ");
		int num=sc.nextInt();
		for(int i=1;i<=num;i++) {
			for(int j=1;j<=num-i;j++) {
				System.out.print(" ");
			}
			for(int k=1;k<i;k++) {
				System.out.print(k);
			}
			for(int k=i;k>=1;k--) {
				System.out.print(k);
			}
			System.out.println();
		}
	}

}
