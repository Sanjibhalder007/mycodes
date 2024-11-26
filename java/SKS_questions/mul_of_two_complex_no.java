import java.io.*;
class A
{
	int real,img;
	void input()throws IOException
	{
		DataInputStream dis=new DataInputStream(System.in);
		System.out.print("\n Enter real no:");
		real=Integer.parseInt(dis.readLine());
		System.out.print("\n Enter imaginary no:");
		img=Integer.parseInt(dis.readLine());
	}
	A calculate(A p,A q)
	{
		A r=new A();
		r.real=((p.real*q.real)+(p.img*q.img*-1));
		r.img=((p.img*q.real)+(p.real*q.img));
		return(r);
	}
	void output()
	{
		if((img>=0))
		{
			System.out.print(real+" + "+img+"i");
		}
		else
		{
			System.out.print(real+" "+img+"i");
		}
	}
}
class mul_of_two_complex_no
{
	public static void main(String args[])throws IOException
	{
		A obj1=new A();
		A obj2=new A();
		A obj3=new A();
		A obj4=new A();
		obj1.input();
		obj2.input();
		obj3=obj4.calculate(obj1,obj2);
		System.out.print("\n First Complex Number Is:");
		obj1.output();
		System.out.print("\n Second Complex Number Is:");
		obj2.output();
		System.out.print("\n After Multiplication Complex Number Is:");
		obj3.output();
	}
}