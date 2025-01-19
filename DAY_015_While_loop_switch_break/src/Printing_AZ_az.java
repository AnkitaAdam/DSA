
public class Printing_AZ_az {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		char ch='A';
		char ci='a';
		while(ch<='Z' && ci<='z') {
			System.out.print(ch+" ");
			System.out.print(ci+" ");
			
			ch++;
			ci++;
		}
		ch='A';
		ci='a';
		System.out.println("\nusing do while loop");
		do {
			System.out.print(ch+" ");
			System.out.print(ci+" ");
			
			ch++;
			ci++;
		}while(ch<='Z' && ci<='z');
	}

}
