package week_8;
import java.util.*;

class Game {
	void type()
	{
		System.out.println("indoor and outdoor games");
	}
}
class Cricket extends Game
{
	void type()
	{
		System.out.println("cricket is an outdoor game");
	}
}
class Chess extends Game
{
	void type()
	{
		System.out.println("chess is an indoor game");
	}
}

public class question_p4 {
	public static void main (String[] args)
	{
		Game game = new Game();
		Cricket cricket = new Cricket();
		Chess chess = new Chess();
		System.out.println("Creating class game and calling type()");
		game.type();
		game = cricket;
		System.out.println("Equating game to child of type cricket and calling type()");
		game.type();
		game = chess;
		System.out.println("Equating game to child of type chess and calling type()");
		game.type();
	}
}