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
		A r=new A();
		r.x=p.x+q.x;
		return(r);
	}
	void output()
	{
		System.out.print(" "+x);
	}
}
class add_of_two_obj
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
		System.out.print("\n after sum result:");
		obj3.output();
	}
}
		