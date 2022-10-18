package week_7;
import java.util.Scanner;

public class question_1 {
	public static void main(String[] args)
	{
		//Scanner sc = new Scanner (System.in);
		int arr[] = new int[3];
		System.out.println("Enter a 3 number array");
		for(int i = 0; i < 3;)
		{
			try
			{
				Scanner sc = new Scanner (System.in);
				arr[i] = sc.nextInt();
				i++;
			}
			catch (Exception InputMismatchException)
			{
				System.out.println("Enter a numeric value");
			}
		}
		System.out.println("Entered array is: ");
		for(int i = 0; i < 3;i++)
		{
			System.out.print(arr[i] + " ");
		}
	}
}