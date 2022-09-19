import java.util.Scanner;

class array 
{
	int arr[] = new int[100];
	int size;
	array()
	{
	}
	
	array(int a[], int b)
	{
		arr = a;
		size = b;
	}
	
	public void print_array()
	{
		for(int i = 0; i < size; i++)
		{
			System.out.print(arr[i] + ",");
		}
		System.out.println();
	}
	
	public void search(int num)
	{
		int temp1 = 0;
		for(int i = 0; i < size; i++)
		{
			if(num == arr[i])
			{
				System.out.println("The number is in the " + i + " position");
				temp1 = 1;
			}
		}
		if(temp1 == 0)
			System.out.println("The number was not found");
		
	}
	
	public void compare(array temp)
	{
		int temp3 = 0;
		for(int i = 0; i < size; i++)
		{
			if(temp.arr[i] != arr[i])
				temp3 = 1;
		}
		if (temp3 == 0)
			System.out.println("The arrays are the same");
		else 
			System.out.println("The arrays are not the same");
	}
}

public class question_2 {
	public static void main (String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Enter the size of the Array");
		int size = sc.nextInt();
		int a[] = new int[size];
		for(int i = 0; i < size ; i++)
		{
			a[i] = sc.nextInt();
		}
		
		array b = new array(a, size);
		System.out.println("printing the array: ");
		b.print_array();
		System.out.println("Enter the number to search in the array");
		int temp = sc.nextInt();
		b.search(temp);
		
		System.out.println("Enter the size of the second Array");
		size = sc.nextInt();
		int c[] = new int[size];
		for(int i = 0; i < size ; i++)
		{
			c[i] = sc.nextInt();
		}
		array d = new array(c, size);
		System.out.println("printing the array: ");
		d.print_array();
		System.out.println("Enter the number to search in the array");
		temp = sc.nextInt();
		d.search(temp);
		
		System.out.println("Comparing the arrays:");
		b.compare(d);
		
		sc.close();
	}
}
