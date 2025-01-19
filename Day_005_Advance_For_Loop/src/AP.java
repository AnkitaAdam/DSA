import java.util.Scanner;

public class AP {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number : ");
		int num=sc.nextInt();
		int sum=num*(num+1)/7;
		System.out.println("sum = "+sum);
	}

}
