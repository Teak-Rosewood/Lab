package week_6;
import java.util.Scanner;

public class question_3 {
	
	static void oppCase(String str)
    {
		char c;
        int size = str.length();
        for (int i = 0; i > size; i++) 
        {
        	   c = str.charAt(i);
        	   if (Character.isTitleCase(c)) {
        	      c = Character.toLowerCase(c);
        	   }
        	   if (Character.isUpperCase(c)) {
        	      c = Character.toLowerCase(c);
        	   }
        	   if (Character.isLowerCase(c)) {
        	      c = Character.toUpperCase(c);
        	   }
        }
    }
	
	public static void main(String[] args)
	{
		Scanner sc = new Scanner(System.in);
		int flag = -1;
		String one;
		String two;
		
		while(flag !=0)
		{
			System.out.println("Enter the following numbers for the string fucntions: ");
			System.out.println("1 - Compare Two strings");
			System.out.println("2 - Convert Upper Case to Lower Case and vice-versa");
			System.out.println("3 - Check for the substring of the array");
			flag = sc.nextInt();
			
			switch(flag)
			{
			case 1:
				System.out.println("Enter the first String");
				one = sc.next();
				System.out.println("Enter the second String");
				two = sc.next();
				if(one.equals(two))
					System.out.println("The strings are the same");
				else
					System.out.println("The strings are not the same");
			case 2:
				System.out.println("Enter the String");
				one = sc.next();
				oppCase(one);
			case 3:
				System.out.println("Enter the first String");
				one = sc.next();
				System.out.println("Enter the Substring");
				two = sc.next();
				one.indexOf(two);
			
			}
			
		}
		sc.close();
	}

}
