// https://www.acmicpc.net/problem/1085
// 제목: 직사각형에서 탈출
import java.util.Scanner;
import java.util.Arrays;

public class p_1085 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int[] nums  = new int[4];
        int x = s.nextInt();
        int y = s.nextInt();
        int w = s.nextInt();
        int h = s.nextInt();
        nums[0]=x;
        nums[1]=y;
        nums[2]=w-x;
        nums[3]=h-y;
        Arrays.sort(nums);
        System.out.println(nums[0]);
    }
}