// https://www.acmicpc.net/problem/1037
// 제목: 약수
import java.util.*;
public class p_1037 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int[] factors = new int[N];
		for (int i=0;i<N;i++)
			factors[i] = s.nextInt();
		Arrays.sort(factors);
		System.out.println(factors[0]*factors[N-1]);
	}
}