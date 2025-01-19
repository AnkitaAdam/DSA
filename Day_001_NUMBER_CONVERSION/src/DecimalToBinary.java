import java.util.Scanner;
import java.util.Stack;

public class DecimalToBinary {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Stack<Integer> st=new Stack<>();
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a decimal number : ");
		int n=sc.nextInt();
		while(n>0) {
			int rem=n%2;
			st.push(rem);
			n/=2;
		}
		String binary="";
		while(!st.isEmpty()) {
			binary+=st.peek();
			st.pop();
		}
		System.out.println("Binary equivalent = "+binary);
		
	}

}
