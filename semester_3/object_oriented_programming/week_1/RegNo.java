package week1;
import java.util.Scanner;

public class RegNo {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner  (System.in);
		int reg_no, count = 0, temp_var, last = 0, slast = 0, dig = 0;
		
		reg_no = sc.nextInt();
		temp_var = reg_no;
		
		while (temp_var > 0)
		{
			dig = temp_var % 10;
			temp_var /= 10;
			count++;
			slast = last;
			last = dig;
		}
		if (count != 9)
		{
			System.out.println("Incorrect input");
		}
		else if (last == 2 && slast >= 3)
			{
				System.out.println("Incorected input");
			}
		else if (last > 2)
			{
			System.out.println("Incorected input");
			}
		else
		{
			System.out.println("Year is: 20" + last + slast);
		}
	}
	
}
