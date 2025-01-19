import java.util.Scanner;

public class BinaryToDecimal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a binary value : ");
		String binary=sc.next();
		int decimal=0;
		int power=0;
		for(int i=binary.length()-1;i>=0;i--) {
			if(binary.charAt(i)=='1') {
				decimal+=(1*(int)Math.pow(2, power));
			}else if(binary.charAt(i)=='0') {
				decimal+=0*(int)Math.pow(2, power);
			}
			power+=1;
		}
		System.out.println("decimal equivalent = "+decimal);
	}

}
