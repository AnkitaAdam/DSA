//A B C D 
//A B C 
//A B 
//A 

public class Pattern13 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for(char i='D';i>='A';i--) {
			for(char j='A';j<=i;j++) {
				System.out.print(j+" ");
			}
			System.out.println();
		}
	}

}
