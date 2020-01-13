// https://www.acmicpc.net/problem/2798
// 제목: 블랙잭
import java.util.Scanner;
import java.util.Arrays;

public class p_2798 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int result=0,index=0;
        int N=s.nextInt();
        int M=s.nextInt();
        int nums[]=new int[N];
        int sums[]=new int[N*(N-1)*(N-2)/6];
    for (int i=0;i<N;i++)
        nums[i]=s.nextInt();
    for (int i=0;i<N-2;i++)
        for (int j=i+1;j<N-1;j++)
            for (int k=j+1;k<N;k++)
                sums[index++]=nums[i]+nums[j]+nums[k];
    Arrays.sort(sums);
    for (int i=0;i<sums.length;i++)
        if (sums[i]<=M)
            result=sums[i];
    System.out.println(result);
    }
}