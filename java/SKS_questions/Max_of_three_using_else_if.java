class Max_of_three_using_else_if
{
	public static void main(String arr[])
	{
		int a,b,c;
		a=Integer.parseInt(arr[0]);
		b=Integer.parseInt(arr[1]);
		c=Integer.parseInt(arr[2]);
		if(a>b && a>c)
		{
			System.out.print("a is max"+a);
		}
		else if(b>a && b>c)
		{
			
			System.out.print("b is max"+b);
	
		}
		else
		{	
			System.out.print("c is max"+c);
		}
	}
}