// https://www.acmicpc.net/problem/2108
// 제목: 통계학
import java.util.Scanner;
import java.util.Arrays;

public class p_2108 {
    public static void main (String[] args) {
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        int sum=0;
        int mid,fre,range;
        int[] nums = new int[N];
        int[] count = new int[500000];
        for (int i=0;i<N;i++) {
            nums[i]=s.nextInt();
            sum+=nums[i];
            count[nums[i]]++;
        }
        Arrays.sort(nums);
        mid=nums[N/2];
        Arrays.sort(count);
        fre = count[499999];
        for (int i=499998;;i--)
            if (count[i]==fre&&count[i-1]<fre) { //count[i]가 최빈값의 가장 작은 값
                fre=count[i+1];
                break;
            }
        range=nums[N-1]-nums[0];
        System.out.printf("%d\n%d\n%d\n%d",(int)Math.round((float)sum/N),mid,fre,range);
    }
}