import java.io.*;

public class xyz {
    

    public static void main(String[] args)throws IOException
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int n;
        int maxi=0;
        System.out.print("\n enter length of array:");
        n=Integer.parseInt(br.readLine());
        int[] a=new int[n];
        for (int i=0;i<n;i++)
        {
            System.out.print("\n enter array elements:");
            a[i]=Integer.parseInt(br.readLine());
            
        }
        System.out.print("\n your array is:");
        for (int i=0;i<n;i++)
        {
            System.out.print(" "+a[i]);
            
        }
        
        for (int i=0;i<n;i++)
        {
            if(a[maxi]<a[i])
            {
                maxi=i;
            }
            
        }
        System.out.print("\n maximum is:"+maxi);
        
    }
}


