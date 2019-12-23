// https://www.acmicpc.net/problem/1065
// 제목: 한수
import java.util.Scanner;
public class p_1065 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int count;
		if (N<100)
			count=N;
		else {
			count=99;
			for (int i=100;i<=N;i++) {
				int[] numbers = new int[] {i/100,i%100/10,i%10};
				if ((numbers[2]-numbers[1])==(numbers[1]-numbers[0]))
					count++;
			}
		}
		System.out.println(count);
	}
}