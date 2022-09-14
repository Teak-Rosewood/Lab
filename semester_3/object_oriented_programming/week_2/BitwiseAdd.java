package week2;
import java.util.Scanner;

public class BitwiseAdd {
	public static void main (String[] args)
	{
		System.out.println("Enter two numbers");
		Scanner sc = new Scanner(System.in);
		int carry, result;
		int a = sc.nextInt();
		int b = sc.nextInt();
		carry = a&b;
		result = a^b;
		while (carry != 0)
		{
			int shiftedcarry = carry  << 1;
			carry = result & shiftedcarry;
			result ^= shiftedcarry;
		}
		System.out.println(result);
	}
}
