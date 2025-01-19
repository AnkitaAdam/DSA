//Enter n: 
//5
//     1
//    1 2 3
//   1 2 3 4 5
//  1 2 3 4 5 6 7
// 1 2 3 4 5 6 7 8 9
// 
 import java.util.Scanner;

public class Pattern8 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter n: ");
		int n=sc.nextInt();
		for(int i=1;i<=n;i++) {
			for(int k=1;k<=n-i;k++) {
				System.out.print(" ");
			}
			for(int j=1;j<=(2*i)-1;j++) {
				System.out.print(" "+j);
			}
			System.out.println();
		}
	}

}
