// https://www.acmicpc.net/problem/9020
// 제목: 골드바흐의 추측
import java.util.Scanner;
public class p_9020 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int T = s.nextInt();
		for (int i=0;i<T;i++)
			find(s.nextInt());
	}
	public static void find(int n) {
		for (int i=n/2;i>=2;i--) {
			int b = n-i;
			if (isPrime(i)&&isPrime(b)) {
				System.out.println(i+" "+b);
				break;
			}
		}
	}
	public static boolean isPrime(int n) {
		for (int i=2;i<n;i++)
			if (n%i==0)
				return false;
		return true;
	}
}