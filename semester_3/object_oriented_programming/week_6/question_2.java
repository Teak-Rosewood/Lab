package week_6;
import java.util.Scanner;

class Student  
{
	int id;
	double marks[] = new double[5];
	
	Student (int a, double b[])
	{	
		id = a;
		marks = b;
	}
	
	public void getTotal()
	{
		double sum = 0;
		for(int i = 0; i < 5; i++)
		{
			sum = sum + marks[i];
		}
		System.out.println("Total Marks: " + sum + "/500");
	}
	
	public void passOrFail()
	{
		for(int i = 0; i < 5; i++)
		{
			if(marks[i] >= 40)
				System.out.println("Subject " + (i+1) + " Passed");
			else 
				System.out.println("Subject " + (i+1) + " Failed");
		}
	}
}

public class question_2 {
	public static void main (String[] args)
	{
		int a;
		double b[] = new double[5];
		
		Scanner sc = new Scanner(System.in);
		Student Students[] = new Student[3];
		for (int i = 0; i < 3; i++)
		{
			System.out.println("Student ID:");
			a = sc.nextInt();
			for(int j = 0; j < 5; j++)
			{
				System.out.println("Marks in Subject " + (j+1) + ": ");
				b[j] = sc.nextDouble();
			}
			Students[i] = new Student(a, b);
		}
		
		System.out.println("Enter the ID of the student you want details");
		a = sc.nextInt();
		for(int i = 0; i < 3; i++)
		{
			if(Students[i].id == a)
			{
				Students[i].getTotal();
				Students[i].passOrFail();
			}
		}
		
		sc.close();
	}
}
