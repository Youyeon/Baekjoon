// https://www.acmicpc.net/problem/1546
// 제목: 평균
import java.util.Scanner;
public class p_1546 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int MAX = 0;
		double sum = 0.0;
		for (int i=0;i<N;i++) {
			int n = s.nextInt();
			MAX = n>MAX?n:MAX;
			sum+=n;
		}
		System.out.printf("%.2f",(double)sum/MAX/N*100);
	}
}