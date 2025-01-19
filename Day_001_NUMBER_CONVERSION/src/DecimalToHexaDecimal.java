import java.util.Scanner;
import java.util.Stack;

public class DecimalToHexaDecimal {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char[] rem= {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a deimal : ");
		int dec=sc.nextInt();
		Stack<Character>st=new Stack<>();
		while(dec>0) {
			int remain=dec%16;
			st.push(rem[remain]);
			dec/=16;
			
		}
		String hexa="";
		while(!st.isEmpty()) {
			hexa+=st.peek();
			st.pop();
		}
		System.out.println("Hexadecimal equivalent = "+hexa);
	}

}
