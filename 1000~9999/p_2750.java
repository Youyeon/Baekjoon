// https://www.acmicpc.net/problem/2750
// 제목: 수 정렬하기
import java.util.*;
public class p_2750 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int[] nums = new int[N];
		for (int i=0;i<N;i++) {
			nums[i]=s.nextInt();
		}
		Arrays.sort(nums);
		for (int i=0;i<N;i++) {
			System.out.println(nums[i]);
		}
	}
}