package week4;

import java.util.Scanner;

public class question_3 {
	public static void main (String[] args)
	{
		Scanner sc = new Scanner (System.in);
		
		float arr1[][];
		arr1 = new float [2][2];
		float arr2[][];
		arr2 = new float [2][2];
		float arr3[][];
		arr3 = new float [2][2];
		
		System.out.println("Enter the first 2D matrix");
		
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				arr1[i][j] = sc.nextFloat();
			}
		}
		
		System.out.println("Enter the second 2D matrix");
				
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				arr2[i][j] = sc.nextInt();
			}
		}
		
		arr3[0][0] = arr1[0][0] * arr2[0][0] + arr1[0][1] * arr2[1][0];
		arr3[0][1] = arr1[0][0] * arr2[0][1] + arr1[0][1] * arr2[1][1];
		arr3[1][0] = arr1[1][0] * arr2[0][0] + arr1[1][1] * arr2[1][0];
		arr3[1][1] = arr1[1][0] * arr2[0][1] + arr1[1][1] * arr2[1][1];
		
		System.out.println("The product of the 2D matrices is: ");
		
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				System.out.print(arr3[i][j] + " ");
			}
			System.out.println();
		}
		
	}
}
