class Factorial_using_for
{
	public static void main(String arr[])
	{
		int a,i,f=1;
		a=Integer.parseInt(arr[0]);
		for (i=1;i<=a;i++)
		{
		f=f*i;
		}
		System.out.print("\n Factorial="+f);
		
	}
}