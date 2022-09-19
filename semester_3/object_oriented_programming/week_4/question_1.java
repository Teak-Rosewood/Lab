package week4;
import java.util.Scanner;

public class question_1 {
	
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the size of the float array");
		
		int x = sc.nextInt();
			
		float arr[];
		
		arr = new float [x];
		
		System.out.println("Enter the values of the float array");
		float sum = 0;
				
		for (int i = 0; i < x; i++)
		{
			arr[i] = sc.nextFloat();
			sum = sum + arr[i];
		}
		
		System.out.println("The sum of the digits of the array are: " + sum);
		
	}	
}
