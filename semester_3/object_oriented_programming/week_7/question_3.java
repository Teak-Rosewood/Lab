package week_7;
import java.util.*;

public class question_3 {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter two integers to divide");
		try 
		{
			int a = sc.nextInt();
			int b = sc.nextInt();
			int c = a / b;
			System.out.print(c);
		}catch (Exception e)
		{
			System.out.print(e + " Called");
		} 
	}
}
