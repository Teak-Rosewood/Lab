package week_7;
import java.util.*;

public class question_2 {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		System.out.println("Enter the number of files");
		int num = sc.nextInt();
		String arr[] = new String[num];
		for(int i = 0; i < num; i++)
		{
			arr[i] = sc.next();
		}
		int temp = arr[0].lastIndexOf(".");
		String extention = arr[0].substring(temp);
		for(int i = 0; i < num; i++)
		{
			try {
				temp = arr[i].lastIndexOf(".");
				if(!arr[i].substring(temp).equals(extention))
				{
					throw new Invalid_File_Extention();
				}
			}
			catch(Exception Invalid_File_Extention)
			{
				System.out.println("The array of files are not of the same type");
			}
		}
		sc.close();
	}
}
