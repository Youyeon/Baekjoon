// https://www.acmicpc.net/problem/2675
// 제목: 문자열 반복
import java.util.Scanner;
public class p_2675 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		for (int i=0;i<N;i++) {
			int M = s.nextInt();
			String str = s.next();
			char[] string = str.toCharArray();
			for (int j=0;j<str.length();j++)
				for (int k=0;k<M;k++)
					System.out.print(string[j]);
			System.out.println();
		}
	}
}