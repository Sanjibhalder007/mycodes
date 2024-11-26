class Max_of_three
{
	public static void main(String arr[])
	{
		int a,b,c;
		a=Integer.parseInt(arr[0]);
		b=Integer.parseInt(arr[1]);
		c=Integer.parseInt(arr[2]);
		if(a>b)
		{
			if(a>c)
			{
				System.out.print("a is max"+c);
			}
			else
			{
				System.out.print("c is max"+c);
			}
		}
		else
		{
			if(b>c)
			{
				System.out.print("b is max"+b);
			}
			else
			{
				System.out.print("c is max"+c);
			}
		}
	}
}