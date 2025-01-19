import java.util.Scanner;

//Take a number n from the user and print all the even numbers between 1 and n(inclusive). Do this using while and do while loop separately.

public class EvenNumbers {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a number : ");
		int n=sc.nextInt();
		int i=1;
		do {
			if(i%2==0)
				System.out.println(i);
			i++;
		}while(i<n);
		System.out.println("using while : ");
		i=1;
		while(i<n) {
			if(i%2==0)
				System.out.println(i);
			i++;
		}
	}

}
