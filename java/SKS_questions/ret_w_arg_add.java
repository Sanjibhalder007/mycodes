import java.io.*;
class A
{
	int sum(int x,int y)throws IOException
	{
		int z;	
		z=x+y;
		return z;
	}
}

class ret_w_arg_add
{
	public static void main(String args[])throws IOException
	{
		int x,y,z;
		DataInputStream dis=new DataInputStream(System.in);
		System.out.print("\n enter first no:");
		x=Integer.parseInt(dis.readLine());
		System.out.print("\n enter second no:");
		y=Integer.parseInt(dis.readLine());
		A obj=new  A();
		z=obj.sum(x,y);
		System.out.print("sum="+z);
		
	}
}