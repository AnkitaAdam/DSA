import java.util.Scanner;

public class HexaDecimalToDecimal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the hexadecimal value : ");
		String hexa=sc.next();
		String rem="0123456789ABCDE";
		int decimal=0;
		int power=0;
		for(int i=hexa.length()-1;i>=0;i--) {
			int index=rem.indexOf(hexa.charAt(i));
			decimal+=index*(int)Math.pow(16, power);
			power++;
		}
		System.out.println("Decimal Equivi : "+decimal);
	}

}
