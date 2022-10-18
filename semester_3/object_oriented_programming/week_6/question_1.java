package week_6;
import java.util.Scanner;

class book 
{
	String name;
	int id;
	double price;
	
	book (String a, int b, double c)
	{	
		name = a;
		id = b;
		price = c;
	}
	
	public String getName()
	{
		return name;
	}
	
	public int getID()
	{
		return id;
	}
	public double getPrice()
	{
		return price;
	}
}

public class question_1 {
	public static void main (String[] args)
	{
		String a;
		int b;
		double c;
		
		Scanner sc = new Scanner(System.in);
		book books[] = new book[3];
		for (int i = 0; i < 3; i++)
		{
			System.out.println("Book name:");
			a = sc.next();
			System.out.println("Book ID:");
			b = sc.nextInt();
			System.out.println("Book Price: ");
			c = sc.nextDouble();
			books[i] = new book(a, b, c);
		}
		
		System.out.println("Enter the ID of the book you want details");
		b = sc.nextInt();
		for(int i = 0; i < 3; i++)
		{
			if(books[i].id == b)
			{
				a = books[i].getName();
				b = books[i].getID();
				c = books[i].getPrice();
				
				System.out.println("Name: " + a + " ID: " + b +  " Price: " + c);
			}
		}
		
		sc.close();
	}
}
