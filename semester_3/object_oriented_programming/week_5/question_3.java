import java.util.Scanner;

class vehicle 
{
	String type;
	int id;
	String name;
	
	vehicle()
	{
		
	}
	vehicle (int a)
	{
		this.id = a;
		this.type = "UNSPECIFIED";
		this.name = "UNSPECIFIED";
	}
	vehicle (int a, String b)
	{
		this.id = a;
		this.type = b;
		this.name = "UNSPECIFIED";
	}
	vehicle (int a, String b, String c)
	{
		this.id = a;
		this.type = b;
		this.name = c;
	}
	
	public void print_details(boolean a)
	{
		System.out.println("The Id of the vehicle is " + id);
	}
	public void print_details(boolean a, boolean b)
	{
		System.out.println("The Id of the vehicle is " + id);
		System.out.println("The type of the vehicle is " + type);	
	}
	public void print_details(boolean a, boolean b, boolean d)
	{
		System.out.println("The Id of the vehicle is " + id);
		System.out.println("The type of the vehicle is " + type);
		System.out.println("The name of the vehicle is " + name);
	}
}
public class question_3 {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the details of the vehicles, you can also enter 0 if you don't want to enter a specific field");
		System.out.println("Enter the Vehicle ID: ");
		int id = sc.nextInt();
		System.out.println("Enter the Vehicle type: ");
		String type = sc.next();
		System.out.println("Enter the Vehicle name: ");
		String name = sc.next();
		String test = "0\0";
		System.out.println(type);
		if (type == test)
		{
			vehicle a = new vehicle(id);
			a.print_details(true, true, true);
		}
		else if (name == test)
		{
			vehicle a = new vehicle(id, type);
			a.print_details(true, true, true);
		}
		else
		{
			vehicle a = new vehicle(id, type, name);
			a.print_details(true, true, true);
		}
		
		
	}
}
