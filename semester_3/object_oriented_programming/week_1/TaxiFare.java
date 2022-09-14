package week1;
import java.util.Scanner;

public class TaxiFare {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		float fare = 0, km_travelled = 0;
		System.out.println("Enter the fare");
		fare = sc.nextFloat();
		while (fare > 0 && fare < 300)
		{
			if (fare < 50)
			{
				fare = fare - 10;
				km_travelled++;
				if(fare < 10)
					tempfare = fare;
			}
			else if (km_travelled < 20)
			{
				fare = fare - 8;
				km_travelled++;
				if(fare < 8)
					tempfare = fare;
			}
			else if (km_travelled < 45)
			{
				fare = fare - 5;
				km_travelled++;
				if(fare < 5)
					tempfare = fare;
			}
			else
			{
				fare = 0;
			}
		}
		if (tempfare != 0)
		{
			if (km_travelled < 5)
			{
				km_travelled = km_travelled + 5/10*tempfare;
			}
			else if (km_travelled < 20)
			{
				km_travelled = km_travelled + 5/8*tempfare;
			}
			else if (km_travelled < 45)
			{
				km_travelled = km_travelled + 5/5*tempfare;
			}
		}
		if(temp < 300)
			System.out.println("Distance travellable: " + km_travelled);	
		else
			System.out.println("Invald Input");
	}
}
