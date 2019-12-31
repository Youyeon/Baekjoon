// https://www.acmicpc.net/problem/4153
// 제목: 직각삼각형
import java.util.Scanner;
import java.util.Arrays;

public class p_4153 {
    public static void main (String[] args) {
        Scanner s = new Scanner(System.in);
        int[] nums = new int[3];
        while(true) {
            nums[0]=s.nextInt();
            nums[1]=s.nextInt();
            nums[2]=s.nextInt();
            if (nums[0]==0&&nums[1]==0&&nums[2]==0)
                break;
            Arrays.sort(nums);
            if ((Math.pow(nums[0],2)+Math.pow(nums[1],2))==Math.pow(nums[2],2))
                System.out.println("right");
            else
                System.out.println("wrong");
        }
    }
}