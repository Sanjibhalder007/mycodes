import java.io.*;
class A
{
	int x;
	void input()throws IOException
	{
		DataInputStream dis=new DataInputStream(System.in);
		System.out.print("\n Enter a no:");
		x=Integer.parseInt(dis.readLine());
	}
	A sum(A p,A q)
	{

		if(p.x>q.x)
		{
			return(p);
		}
		else
		{
			return(q);
		}
	}
	void output()
	{
		System.out.print(" "+x);
	}
}
class max_of_two_object
{
	public static void main(String args[])throws IOException
	{
		A obj1=new A();
		A obj2=new A();
		A obj3=new A();
		A obj4=new A();
		obj1.input();
		obj2.input();
		obj3=obj4.sum(obj1,obj2);
		System.out.print("\n First object:");
		obj1.output();
		System.out.print("\n Second object:");
		obj2.output();
		System.out.print("\n Max is:");
		obj3.output();
	}
}
		