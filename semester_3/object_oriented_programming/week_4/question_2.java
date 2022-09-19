package week4;
import java.util.Scanner;

public class question_2 {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		
		System.out.println("Enter the size of the float array");
		
		int x = sc.nextInt();
		
		float arr[];
		
		arr = new float [x];
		
		System.out.println("Enter the values of the float array");
				
		for (int i = 0; i < x; i++)
		{
			arr[i] = sc.nextFloat();
		}
		
		float sum = 0;
		
		if(x % 2 == 0)
		{
			sum = arr[0] + arr[x-1];
			System.out.println("The array is even and sum of first and last element is: " + sum);
		}
		else 
		{
			sum = arr[0] + arr [x-1] + arr[(x - 1) / 2];
			System.out.println("The array is odd and sum of the first, middle, and last element is: " + sum);
		}
		}		
}
