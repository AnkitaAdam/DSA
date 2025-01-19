import java.util.Scanner;

public class Prime {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number : ");
		int n=sc.nextInt();
		if(n<=1) {
			System.out.println("Not prime number");
		}
		else {
			for(int i=2;i<=n/2;i++) {
				if(n%i==0) {
					System.out.println("Not prime number");
					return;
				}
			}
			System.out.println("Prime number");
		}
	}

}
