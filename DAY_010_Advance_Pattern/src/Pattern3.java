//Enter number of rows : 
//
//26
//                         A
//                        AB
//                       ABC
//                      ABCD
//                     ABCDE
//                    ABCDEF
//                   ABCDEFG
//                  ABCDEFGH
//                 ABCDEFGHI
//                ABCDEFGHIJ
//               ABCDEFGHIJK
//              ABCDEFGHIJKL
//             ABCDEFGHIJKLM
//            ABCDEFGHIJKLMN
//           ABCDEFGHIJKLMNO
//          ABCDEFGHIJKLMNOP
//         ABCDEFGHIJKLMNOPQ
//        ABCDEFGHIJKLMNOPQR
//       ABCDEFGHIJKLMNOPQRS
//      ABCDEFGHIJKLMNOPQRST
//     ABCDEFGHIJKLMNOPQRSTU
//    ABCDEFGHIJKLMNOPQRSTUV
//   ABCDEFGHIJKLMNOPQRSTUVW
//  ABCDEFGHIJKLMNOPQRSTUVWX
// ABCDEFGHIJKLMNOPQRSTUVWXY
//ABCDEFGHIJKLMNOPQRSTUVWXYZ

import java.util.Scanner;

public class Pattern3 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number of rows : ");
		int num=sc.nextInt();
		for(int i=65;i<65+num;i++) {
			for(int k=1;k<(num+65)-i;k++) {
				System.out.print(" ");
			}
			for(int j=65;j<=i;j++) {
				System.out.print((char)j);
			}
			System.out.println();
		}
	}

}
