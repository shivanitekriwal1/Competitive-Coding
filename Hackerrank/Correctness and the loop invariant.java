import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String  args[]){
        Scanner sc= new Scanner(System.in);
        int n= sc.nextInt();
        int a[]= new int[n+n];
        for(int i=0;i<n;i++){
            a[i]= sc.nextInt();
        }
        for(int i=0;i<n-1;i++){
            for(int j=i; j>=0;j--){
                if(a[j]>a[j+1]){
                    int c= a[j+1];
                    a[j+1]=a[j];
                    a[j]=c;
               }
            }
            
            }
        for(int k=0;k<n;k++){
                System.out.print(a[k]+" ");
        }
    }
    }
        