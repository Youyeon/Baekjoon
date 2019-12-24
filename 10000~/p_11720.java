// https://www.acmicpc.net/problem/11720
// 제목: 숫자의 합
import java.util.Scanner;
public class p_11720 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int sum = 0;
		int N = s.nextInt();
		String str = s.next();
		char[] numbers = str.toCharArray();
		for (int i=0;i<N;i++)
			sum+=numbers[i]-48;
		System.out.println(sum);
	}
}