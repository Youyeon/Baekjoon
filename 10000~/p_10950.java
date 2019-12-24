// https://www.acmicpc.net/problem/10950
// 제목: A+B-3
import java.util.*;
public class p_10950 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int T = s.nextInt();
		int[] numbers = new int[T];
		for (int i=0;i<T;i++) {
			int A = s.nextInt();
			int B = s.nextInt();
			numbers[i] = A+B;
		}
		for (int i=0;i<T;i++)
			System.out.println(numbers[i]);
	}
}