
import java.util.Scanner;


class Runner implements Runnable{
	private boolean r=true;
	@Override
	public void run()
	{
		while(r)
		{
			System.out.println("Yolo!!");
			try{
			Thread.sleep(500);
		}
		catch(InterruptedException ex)
		{
			ex.printStackTrace();
		}
		}
	}

	public void shutdown()
	{
		r=false;
	}
}

public class App1{

	public static void main(String args[])
	{
		Thread r1 = new Thread(new Runner());
		//Thread r2 = new Thread(new Runner());
		//r1.start();
		r1.start();
		Scanner sc = new Scanner(System.in);
		sc.nextLine();
		System.exit(0);
	}

}