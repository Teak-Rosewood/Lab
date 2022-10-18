package week_8;
import java.util.*;

class Area {
	double area;
	double height;
}

class Triangle extends Area
{
	double base;
	void areaCalc ()
	{
		area = 0.5 * base * height;
	}
}

class Rectangle extends Area
{
	double width;
	void areaCalc ()
	{
		area = height * width;
	}
}
public class question_1 {
	public static void main (String[] args)
	{
		Triangle triangle = new Triangle();
		Rectangle rectangle = new Rectangle();
		int i = 1;
		while(i == 1) {
		try {
			Scanner sc = new Scanner(System.in);
			System.out.println("Enter Triangle Height:");
			triangle.height = sc.nextFloat();
			System.out.println("Enter Triangle Base:");
			triangle.base = sc.nextFloat();
			System.out.println("Enter Rectangle Height:");
			rectangle.height = sc.nextFloat();
			System.out.println("Enter Rectangle Width:");
			rectangle.width = sc.nextFloat();
			rectangle.areaCalc();
			triangle.areaCalc();
			System.out.println("Area: Triangle-" + triangle.area + " Rectangle-" + rectangle.area);
			i = 0;
			sc.close();
			
		}catch (Exception e) {
			System.out.println("Invalid input try again!");
		}
		}
	}
}
