import java.io.*;
class A
{
	int r1,r2,c1,c2;
	int[][]a;
	int[][]b;
	int[][]c;
	void input()throws IOException
	{
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		System.out.print("\n Enter Rows:");
		r1=Integer.parseInt(br.readLine());
		System.out.print("\n Enter Columns:");
		c1=Integer.parseInt(br.readLine());
		a=new int[r1][c1];
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				System.out.print("\n Enter Array Elements:");
				a[i][j]=Integer.parseInt(br.readLine());
			}
		}
		System.out.print("\n Enter Rows:");
		r2=Integer.parseInt(br.readLine());
		System.out.print("\n Enter Columns:");
		c2=Integer.parseInt(br.readLine());
		b=new int[r2][c2];
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
			{
				System.out.print("\n Enter Array Elements:");
				b[i][j]=Integer.parseInt(br.readLine());
			}
		}
	}
	void sum()throws IOException
	{
		c=new int[r1][c1];
		if((r1==r2)&&(c1==c2))
		{
			for(int i=0;i<r1;i++)
			{
				for(int j=0;j<c1;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
				
				}
			}
		}
	}
	void output()throws IOException
	{
		System.out.print("\n 1st matrix : \n");
		System.out.print("\n");
		for(int i=0;i<r1;i++)
		{
			for(int j=0;j<c1;j++)
			{
				System.out.print("	"+a[i][j]);
				
			}
			System.out.print("\n");
		}
		System.out.print("\n 2nd matrix :\n");
		System.out.print("\n");
		for(int i=0;i<r2;i++)
		{
			for(int j=0;j<c2;j++)
			{
				System.out.print("	"+b[i][j]);
				
			}
			System.out.print("\n");
		}
		System.out.print("\n After sum resultant matrix : \n");
		System.out.print("\n");
		if((r1==r2)&&(c1==c2))
		{
			for(int i=0;i<r2;i++)
			{
				for(int j=0;j<c2;j++)
				{
					System.out.print("	"+c[i][j]);
				
				}
				System.out.print("\n");
			}
		}
		else
		{
			System.out.print("\n Not possible.");
		}
	}
}

class add_of_tow_matrix
{
	public static void main(String args[])throws IOException
	{
		A obj=new A();
		obj.input();
		obj.sum();
		obj.output();
	}
}		
	
		
	