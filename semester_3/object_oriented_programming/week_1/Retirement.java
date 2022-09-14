package week1;
import java.util.Scanner;

public class Retirement {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		
		int YOB, years, YOR, SOW;
		String DOB = new String();
		System.out.println("Enter DDMM");
		DOB = sc.nextLine();
		System.out.println("Enter YYYY");
		YOB = sc.nextInt();
		System.out.println("Number of years serviced");
		years = sc.nextInt();
		System.out.println("Age work was started");
		SOW = sc.nextInt();
		
		YOR = YOB + years + SOW;
		
		System.out.println("retirement date: " + DOB + YOR);
				
	}
}
