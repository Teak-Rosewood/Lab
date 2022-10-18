package week_8;

class Parent 
{
	public String c = "Accessed string c";
	protected String b = "Accessed string b";
	private String a = "Accessed string c";
	void printA()
	{
		System.out.println(a);
	}
	void printB()
	{
		System.out.println(b);
	}
	void printC()
	{
		System.out.println(c);
	}
}

class Child extends Parent
{
	void childprintA()
	{
		System.out.println("Could not acces String a");
	}
	void childprintB()
	{
		System.out.println(b);
	}
	void childprintC()
	{
		System.out.println(c);
	}
}
public class question_3 {
	public static void main (String[] args)
	{
		Parent parent = new Parent();
		Child child = new Child ();
		System.out.println("Parent: ");
		parent.printA();
		parent.printB();
		parent.printC();
		System.out.println("Child: ");
		System.out.println("Could not access String a");
		child.childprintB();
		child.childprintC();
		System.out.println("Public: ");
		System.out.println("Could not access String a");
		System.out.println(parent.b);
		System.out.println(parent.c);
	}
}
