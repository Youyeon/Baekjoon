// https://www.acmicpc.net/problem/10952
// 제목: A+B-5
import java.util.Scanner;
public class p_10952 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		while(true)	{
			int A = s.nextInt();
			int B = s.nextInt();
			if (A==0&&B==0)
				System.exit(0);
			System.out.println(A+B);
		}
	}
}