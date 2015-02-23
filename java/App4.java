
import java.util.*;



class App2{
	
	private Random r = new Random();
	private List<Integer> l1 = new ArrayList<Integer>();
	private List<Integer> l2 = new ArrayList<Integer>();
	private Object lock1 = new Object();
	private Object lock2 = new Object();
	public void do1()
	{
		synchronized(lock1)
		{
			try{
			Thread.sleep(1);
		}
		catch(InterruptedException e)
		{
			e.printStackTrace();
		}
		l1.add(r.nextInt(100));
	}
	}
	public void do2()
	{
		synchronized(lock2)
		{
			try{
			Thread.sleep(1);
		}
		catch(InterruptedException e)
		{
			e.printStackTrace();
		}
		l2.add(r.nextInt(100));
	}
	}
	 public void process()
	 {
	 	for(int i=0;i<1000;i++)
	 	{
	 		do1();
	 		do2();
	 	}
	 }

	 public void creatr()
	 {
	 	Long start= System.currentTimeMillis();

	 	Thread t1 = new Thread(new Runnable(){
	 		public void run()
	 		{
	 			process();
	 		}
	 	});
	 	t1.start();
	 	Thread t2 = new Thread(new Runnable(){
	 		public void run()
	 		{
	 			process();
	 		}
	 	});
	 	t2.start();
	 	try{
	 		t1.join();
	 	t2.join();
	 	}
	 	catch(InterruptedException e)
		{
			e.printStackTrace();
		}
	 	
	 	Long end= System.currentTimeMillis();
	 	System.out.println("time taken = "+(end - start));
	 	System.out.println("list sizes are "+l1.size()+"  "+l2.size());
	 }
	

}


public class App3{
	public static void main(String args[])
	{
		App2 a = new App2();
		a.creatr();
	}
}