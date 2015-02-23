
//import java.util.Scanner;



public class App2{
	private int c=0;
	public synchronized void inc()
	{
		c++;
	}
	public static void main(String args[])
	{
		App2 a = new App2();
		a.doW();
	}

	public void doW()
	{
		Thread t1 = new Thread(new Runnable(){
			@Override
			public void run()
			{
				for(int i=0;i<1000;i++)
					inc();
			}
		});
		Thread t2 = new Thread(new Runnable(){
			@Override
			public void run()
			{
				for(int i=0;i<1000;i++)
					inc();
			}
		});
		t1.start();
		t2.start();
		try{
		t1.join();	//main thread waits fr these 2 threads to join and then continues with the execution
		t2.join();
	}
	catch(InterruptedException ex)
	{
		ex.printStackTrace();
	}
		System.out.println("c = "+c);
	}
	

}