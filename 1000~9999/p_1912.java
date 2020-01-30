// https://www.acmicpc.net/problem/1912
// 제목: 연속합
import java.awt.List;
import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class p_1912 {
    public static void main (String args[]) {
        Scanner s = new Scanner(System.in);
        int n=s.nextInt();
        int max=0, j=0;
        int nums[] = new int[n];
        int add[] = new int[100000];
        for (int i=0;i<n;i++)
            nums[i]=s.nextInt();
        for (int i=0;i<n;i++) {
            if (nums[i]>0)
                max+=nums[i];
            else {
                add[j++]=max;
                max=0;
            }
        }
        max=add[0];
        for (int i=1;i<j;i++)
            max = max>add[i]?max:add[i];
        System.out.println(max);
    }
}