//1 4 9 16 25 
//1 4 9 16 25 
//1 4 9 16 25 
//1 4 9 16 25 
//1 4 9 16 25 

public class Pattern6 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		for(int i=0;i<5;i++) {
			for(int j=0;j<5;j++) {
				System.out.print((int)Math.pow((j+1), 2)+" ");
			}
			System.out.println();
		}
	}

}
