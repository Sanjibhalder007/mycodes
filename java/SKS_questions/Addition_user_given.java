// Add to number given by user//
import java.io.*;
class Addition_user_given
{
	public static void main(String args[])throws IOException
	{
		
		DataInputStream dis=new DataInputStream(System.in);
		int x,y,z;
		System.out.print("\n Enter a no:");
		x=Integer.parseInt(dis.readLine());
		System.out.print("\n Enter second number no:");
		y=Integer.parseInt(dis.readLine());
		z=x+y;
		System.out.print("Sum="+z);
		
	}
}