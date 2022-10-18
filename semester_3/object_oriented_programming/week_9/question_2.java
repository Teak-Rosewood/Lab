package week_9;
import java.util.*;

interface sports{
	void getNumberOfGoals();
	void dispTeam();
}

class Hockey implements sports{
	String TeamName;
	int goals;
	Hockey()
	{
		int a = 0;
		while (a == 0)
		try {
			System.out.println("Hockey: ");
			System.out.println("Team Name: ");
			Scanner sa = new Scanner(System.in);
			TeamName = sa.next();
			getNumberOfGoals();
			dispTeam();
			a = 1;
		}catch (Exception e) {
			System.out.println("Error! Try Again!");
		}
		
	}
	
	public void getNumberOfGoals()
	{
		System.out.println("Enter the number of goals: ");
		Scanner sc = new Scanner(System.in);
		goals = sc.nextInt();
		
	}
	
	public void dispTeam()
	{
		System.out.println("Team Name:" + TeamName);
	}
}

class Football implements sports{
	String TeamName;
	int goals;
	Football()
	{
		int a = 0;
		while (a == 0)
		try {
			System.out.println("Football: ");
			System.out.println("Team Name: ");
			Scanner sa = new Scanner(System.in);
			TeamName = sa.next();
			getNumberOfGoals();
			dispTeam();
			a = 1;
		}catch (Exception e) {
			System.out.println("Error! Try Again!");
		}
		
	}
	
	public void getNumberOfGoals()
	{
		System.out.println("Enter the number of goals: ");
		Scanner sc = new Scanner(System.in);
		goals = sc.nextInt();
	}
	
	public void dispTeam()
	{
		System.out.println("Team Name:" + TeamName);
	}
}
public class question_2 {
	public static void main (String[] args)
	{
		Football football = new Football();
		Hockey hockey = new Hockey();
		
	}
}
