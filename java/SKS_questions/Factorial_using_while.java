class Factorial_using_while
{
	public static void main(String arr[])
	{
		int a,i=1,f=1;
		a=Integer.parseInt(arr[0]);
		while (i<=a)
		{
		f=f*i;
		i++;
		}
		System.out.print("\n Factorial="+f);
		
	}
}