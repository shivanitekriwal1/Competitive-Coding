import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int sum=0;
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int i=0;i < n; i++){
            arr[i] = in.nextInt();}
       for( int j : arr)
           {
        sum= sum +j ;
       }
        
        System.out.println(sum);
    }
}
