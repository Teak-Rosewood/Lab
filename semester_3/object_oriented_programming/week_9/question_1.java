package week_9;
import java.util.*;

class College {
	String college_name;
}

class Student_Detail extends College
{
	String name;
	long id;
	Student_Detail(String a, long b)
	{
		name = a;
		college_name = "MIT";
		id = b;
	}
	void display_details()
	{
		System.out.println("Name - " + name);
		System.out.println("ID - " + id);
		System.out.println("College Name - " + college_name);
	}
}

public class question_1 {
	public static void main (String[] args)
	{
		int i = 1;
		while(i == 1) {
		try {
			Scanner sc = new Scanner (System.in);
			System.out.println("Enter Student Name: ");
			String a = sc.next();
			System.out.println("Enter Student ID: ");
			Long b = sc.nextLong();
			Student_Detail student = new Student_Detail(a, b);
			student.display_details();
			sc.close();
			i = 0;
		}catch(Exception e)
		{
			System.out.println("Error in value entry try again!");
		}
		}
			
	}
}
