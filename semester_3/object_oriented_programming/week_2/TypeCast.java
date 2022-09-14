package week2;
import java.util.Scanner;

public class TypeCast {
	public static void main(String[] args)
	{
		int intinput;
		double doubleinput;
		
		System.out.println("Enter Integer, char, Double");
		Scanner sc = new Scanner(System.in);
		intinput = sc.nextInt();
		char charinput = sc.next().charAt(0);
		doubleinput = sc.nextDouble();
		System.out.println("integer to byte: " + (byte)intinput + " char to int: " +(int)charinput + " double to byte " + (byte)doubleinput + " double to int: " + (int)doubleinput);
	}
}
