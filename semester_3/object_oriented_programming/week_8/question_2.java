package week_8;
import java.util.*;

class Vehicle 
{
	int wheels;
	String company;
	String transmission;
}

class Car extends Vehicle
{
	int gears;
	Car (String a, String b, int c) {
		company = a;
		transmission = b;
		wheels = 4;
		gears = c;
	}
}
public class question_2 {
	public static void main (String[] args)
	{
		String a, b;
		int c;
		int i = 1;
		while(i == 1) {
		try {
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter Car Company:");
			a = sc.next();
			System.out.println("Enter Car Transmission:");
			b = sc.next();
			System.out.println("Enter gears:");
			c = sc.nextInt();
			Car car = new Car(a, b, c);
			System.out.println("Wheels = " + car.wheels);
			System.out.println("Gears = " + car.gears);
			System.out.println("Transmission = " + car.transmission);
			System.out.println("Company = " + car.company);
			i = 0;
			sc.close();
		}catch (Exception e) {
			System.out.println("Invalid input try again!");
		}
		}
	}
}
