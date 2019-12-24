// https://www.acmicpc.net/problem/5086
// 제목: 배수와 약수
import java.util.*;
public class p_5086 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int M,N;
		while (true) {
			M = s.nextInt();
			N = s.nextInt();
			if (M==0&&N==0)
				break;
			else if (M%N==0)
				System.out.println("multiple");
			else if (N%M==0)
				System.out.println("factor");
			else
				System.out.println("neither");
		} 		
	}
}