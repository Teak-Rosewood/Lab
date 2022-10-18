package week_8;
class Parent_one 
{
	protected String a = "This Variable is in Parent Class";
}

class Child_one extends Parent_one
{
	void childprintA()
	{
		System.out.println("This function is being called by chld and printing protected variable of class Parent which is super class of child: ");
		System.out.println(a);
	}
}
public class question_p2 {
	public static void main (String[] args)
	{
		Child_one child = new Child_one ();
		child.childprintA();
	}
}