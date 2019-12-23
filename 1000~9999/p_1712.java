// https://www.acmicpc.net/problem/1712
// 제목: 손익분기점
import java.util.Scanner;
public class p_1712 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int A = s.nextInt();
		int B = s.nextInt();
		int C = s.nextInt();
		int n = 0;		
		if (C<=B)
			n=-1;
		else
			n = A/(C-B)+1;
		System.out.println(n);
	}
}