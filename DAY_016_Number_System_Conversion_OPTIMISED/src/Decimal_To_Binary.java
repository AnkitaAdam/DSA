import java.util.Scanner;

public class Decimal_To_Binary {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number : ");
		int num=sc.nextInt();
		int rem=0;
		int ans=0;
		int mul=1;
		while(num>0) {
			rem=num%2;
			ans=rem*mul+ans;
			num/=2;
			mul*=10;
			
		}
		System.out.println("Binary number = "+ans);
	}

}
