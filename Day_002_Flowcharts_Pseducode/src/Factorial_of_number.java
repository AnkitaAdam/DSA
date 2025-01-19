import java.util.Scanner;

public class Factorial_of_number {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number : ");
		int num=sc.nextInt();
		int fact=1;
		
		for(int i=1;i<=num;i++) {
			fact*=i;
		}
		
		System.out.println("factorial = "+fact);
		
		int ans=factorial(num);
		
		System.out.println("answer with recursion : "+ans);
		
	}
	
	public static int factorial(int n) {
		if(n<=0) {
			return 1;
		}
		return n* factorial(n-1);
	}

}
