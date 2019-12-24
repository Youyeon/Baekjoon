// https://www.acmicpc.net/problem/1037
// 제목: 약수
import java.util.*;
public class p_1037 {
	public static void main(final String args[]) {
		final Scanner s = new Scanner(System.in);
		final int N = s.nextInt();
		final int[] factors = new int[N];
		for (int i=0;i<N;i++)
			factors[i] = s.nextInt();
		Arrays.sort(factors);
		System.out.println(factors[0]*factors[N-1]);
	}
}