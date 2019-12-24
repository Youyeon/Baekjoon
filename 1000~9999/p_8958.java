// https://www.acmicpc.net/problem/8958
// 제목: OX퀴즈
import java.util.Scanner;
public class p_8958 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = Integer.parseInt(s.nextLine());
		for (int i=0;i<N;i++)
			score(s.nextLine());
	}
	public static void score(String s) {
		int score=0, chain=0;
		char[] nstr = s.toCharArray();
		for (int i=0;i<nstr.length;i++) {
			if (nstr[i]==79) {
				chain++;
				if (i==nstr.length-1)
					score+=chain*(chain+1)/2;
			}
			else {
				score+=chain*(chain+1)/2;
				chain=0;
			}
		}
		System.out.println(score);
	}
}