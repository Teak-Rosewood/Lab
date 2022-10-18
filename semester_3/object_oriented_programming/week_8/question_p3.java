package week_8;
class BaseClass 
{ 
    void display()
       { 
           System.out.println("BaseClass- Display with 'dafault' scope"); 
       } 
} 
 
public class question_p3 {
	public static void main (String[] args)
	{
		BaseClass obj = new BaseClass();   
        obj.display();
	}
}