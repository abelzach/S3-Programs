/*The given java program is for finding the transpose 
and largest element and transpose of the given matrix*/

import java.util.Scanner;
class Main
{
    public static void main(String args[])
    {
        int i,j,r,c,n;
        Scanner m=new Scanner(System.in);

        // input the matrix whose transpose to be found
        System.out.print("Enter the number of rows and columns: ");
        
        r=m.nextInt();
        c=m.nextInt();
        
        int M[][]=new int[r][c];
        
        System.out.println("Enter elements of the matrix: ");
        
        for(i=0;i<r;i++)
         {
           for(j=0;j<c;j++)
           {
            M[i][j]=m.nextInt();
           }
         }
        System.out.println("Transpose of the given matrix: ");
        
        for(i=0;i<c;i++)
        {
            for(j=0;j<r;j++)
            {
            System.out.print("\t"+ M[j][i]);
            System.out.print("\n");
            }
        } 
        n=M[0][0];
        //loop to find the largest element from the given matrix
        
        for(i=0;i<r;i++)
        {
           for(j=0;j<c;j++)
           {
        
             if(n<M[i][j])
             n=M[i][j];
              System.out.println("\nLargest number: "+n);
            
           }
        }   
}

