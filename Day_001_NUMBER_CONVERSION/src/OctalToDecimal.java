import java.util.Scanner;

public class OctalToDecimal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("ENTER A OCTAL NUMBER : ");
		int octa=sc.nextInt();
		int decimal=0;
		int power=0;
		while(octa>0) {
			int rem=octa%10;
			decimal+=rem*(int)Math.pow(8, power);
			octa/=10;
			power++;
		}
		System.out.println("Decimal Equvivalent : "+decimal);
	}

}
