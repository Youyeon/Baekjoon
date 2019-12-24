// https://www.acmicpc.net/problem/2908
// 제목: 상수
import java.util.Scanner;
public class p_2908 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int newN = change(s.nextInt());
		int newM = change(s.nextInt());
		if (newN>newM)
			System.out.println(newN);
		else
			System.out.println(newM);
	}
	public static int change(int N) {
		int a = N/100;
		int b = N%100/10;
		int c = N%10;
		return c*100+b*10+a;
	}
}