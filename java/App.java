



class Runner implements Runnable{
	@Override
	public void run()
	{
		for(int i=0;i<10;i++)
		{
			System.out.println("index = "+i);
			try{
			Thread.sleep(100);
		}
		catch(InterruptedException ex)
		{
			ex.printStackTrace();
		}
		}
	}
}

public class App{

	public static void main(String args[])
	{
		Thread r1 = new Thread(new Runner());
		Thread r2 = new Thread(new Runner());
		r1.start();
		r2.start();
	}

}