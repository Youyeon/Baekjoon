// https://www.acmicpc.net/problem/10872
// 제목: 팩토리얼
import java.util.Scanner;
public class p_10872 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int result=1;
		int N = s.nextInt();
		for (int i=1;i<=N;i++)
			result*=i;
		System.out.println(result);
	}
}