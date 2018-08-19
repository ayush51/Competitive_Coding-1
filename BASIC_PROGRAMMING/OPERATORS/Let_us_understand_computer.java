import java.util.*;
 
 

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
 
class TestClass {
    public static void main(String args[] ) throws Exception {
        Scanner kb=new Scanner(System.in);
        int t=kb.nextInt();
        while(t-->0){
            long l=kb.nextLong();
            System.out.println(check(l));
        }
 
    }
    public static long check(long l){
        long temp=1;
    
    for(temp=1;temp<=Math.sqrt(l);temp*=2);
        if(l/temp>=temp/2)
        return l-l/temp;
        return l-temp/2+1;
    }
}