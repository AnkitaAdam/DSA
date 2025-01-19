import java.util.Scanner;

public class Fibonacci_series {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number");
		int n=sc.nextInt();
		int a=0;
		int b=1;
		int sum=a+b;
		for(int i=2;i<n-1;i++) {
			a=b;
			b=sum;
			sum=a+b;
		}
		System.out.println(n+" th fibonacci is : "+sum);
	}

}
