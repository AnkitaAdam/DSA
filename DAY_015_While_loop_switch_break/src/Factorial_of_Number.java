import java.util.Scanner;

public class Factorial_of_Number {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number : ");
		int n=sc.nextInt();
		int i=1;
		int fact=1;
		while(i<=n) {
			fact*=i;
			i++;
		}
		System.out.println(fact);
		
		System.out.println("using do while : ");
		fact=1;
		i=1;
		do{
			fact*=i;
			i++;
		}while(i<=n);
		
		System.out.println(fact);
	}

}
