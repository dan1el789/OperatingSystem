import java.lang.Thread;

public class Sample {
	public static void main(String[] args)
	{
		Thread t = new Thread() {
			@Override
			public void run(){
				System.out.println("Hello from a Thread");
			}
		};
		t.start();
	}
}
