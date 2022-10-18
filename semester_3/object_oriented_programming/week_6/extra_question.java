package week_6;
import java.util.Calendar;
import java.util.GregorianCalendar;
import java.util.Scanner;

class Baby 
{
	String babyID;
	String weight;
	String motherName;
	Calendar dob = new GregorianCalendar(0,0,0);
	Calendar bcg = new GregorianCalendar(0,0,0);
	Calendar polo = new GregorianCalendar(0,0,0);
	char gender;
	
	Baby (String a, String b, String c, Calendar d, char e)
	{
		babyID = a;
		weight = b;
		motherName = c;
		dob = d;
		gender = e;
	}
	
	public void calcualte_vac()
	{
		bcg = dob;
		polo = dob;
		bcg.add(Calendar.DAY_OF_MONTH,  45);
		polo.add(Calendar.MONTH, 3);
	}
}
public class extra_question {
	public static void main (String[] args)
	{
		String babyID;
		String weight;
		String motherName;
		Calendar dob = new  GregorianCalendar(0,0,0);
		char gender;
		int day, month, year;
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the number of baby entry");
		int size = sc.nextInt();
		Baby babies[] = new Baby[size];
		for (int i = 0; i < size; i++)
		{
			System.out.println("babyID:");
			babyID = sc.next();
			System.out.println("weight:");
			weight = sc.next();
			System.out.println("mother's name:");
			motherName = sc.next();
			System.out.println("Date of Birth in dd mm yy format:");
			day = sc.nextInt();
			month = sc.nextInt();
			year = sc.nextInt();
			dob.set(year, month, day);
			System.out.println("Gender(M/F):");
			gender = sc.next().charAt(0);
			babies[i] = new Baby (babyID, weight, motherName, dob, gender);
			babies[i].calcualte_vac();
		}
		
		System.out.println("Enter the BabyID: ");
		System.out.println("Enter the Mother's name: ");
		for(int i = 0; i < size; i++)
		{
				System.out.println("BCG: " + babies[i].bcg.getDisplayName(Calendar.DAY_OF_MONTH, 2, null) + babies[i].bcg.getDisplayName(Calendar.MONTH, 2, null) + babies[i].bcg.getDisplayName(Calendar.YEAR, 4, null));
				System.out.println("Polo: " + babies[i].polo);
		}
		
		sc.close();
	}
}
