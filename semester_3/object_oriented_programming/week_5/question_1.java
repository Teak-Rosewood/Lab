import java.util.Scanner;

class parcel 
{
	String name;
	long id;
	float weight;
	double cost;
	parcel (String a, long b, float c)
	{
		name = a;
		id = b;
		weight = c;
	}
	public void calculate_cost ()
	{
		if(weight <= 0)
			System.out.println("Error in weight");
		else if (weight <= 2)
			cost = 32.50;
		else
			cost = ((weight - 2) * 10.50) + 32.50;		
	}
}

public class question_1 {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the number of parcels you want to enter");
		int n = sc.nextInt();
		parcel parcels[] = new parcel[n];
		for(int i = 0; i < n; i++)
		{
			System.out.println("Enter the Customer Name");
			String temp1 = sc.next();
			System.out.println("Enter the Parcel ID");
			long temp2 = sc.nextLong();
			System.out.println("Enter the Parcel Weight");
			float temp3 = sc.nextFloat();
			parcels[i] = new parcel(temp1, temp2, temp3);
			parcels[i].calculate_cost();
		}
		for(int i = 0; i < n; i++)
		{
			System.out.print("Customer Name: " + parcels[i].name);
			System.out.print(" Parcel ID: " + parcels[i].id );
			System.out.print(" Parcel Weight: " +  parcels[i].weight);
			System.out.print(" Parcel Cost: " +  parcels[i].cost);
			System.out.println();
		}
		sc.close();
	}
}
