import java.util.Scanner;
import java.util.Stack;

public class Negative_Binary_number {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a negative number : ");
		int n=sc.nextInt();
		Stack<Integer>st=new Stack<>();
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
		
		
		int num=Integer.parseInt(binary);
		num=num>>1;
		num=num&1;
		
		System.out.println("binary="+num);
	}

}
