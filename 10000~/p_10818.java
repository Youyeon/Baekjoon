// https://www.acmicpc.net/problem/10818
// 제목: 최소, 최대
import java.util.Scanner;
import java.util.Arrays;
public class p_10818 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int[] numbers = new int[N];
		for (int i=0;i<N;i++) {
			numbers[i] = s.nextInt();
		}
		Arrays.sort(numbers);
		System.out.print(numbers[0]+" "+numbers[N-1]);
	}
}