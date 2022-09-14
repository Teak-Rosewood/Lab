package week1;
import java.util.Scanner;

public class GreatestNumber {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		int x = sc.nextInt();
		int y = sc.nextInt();
		int z = sc.nextInt();
		
		if (x > y && x > z)
		{
			System.out.println(x + " is the largest");
		}
		else if (y > x && y > z)
		{
			System.out.println(y + " is the largest");
		}
		else if (z > x && z > y)
		{
			System.out.println(z + " is the largest");
		}
		else 
		{
			System.out.println("All numbers are equal");
		}
		sc.close();
	}
}