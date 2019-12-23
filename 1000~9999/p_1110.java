// https://www.acmicpc.net/problem/1110
// 제목: 더하기 사이클
import java.util.Scanner;
public class p_1110 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int newN=-1;
		int count=0;
		while (newN!=N) {
			if (count==0)
				newN = newN(N);
			else
				newN=newN(newN);
			count++;
		}
		System.out.print(count);
	}
	public static int newN(int n) {
		if (n<10) 
			return n*10+n;
		else
			return (n%10)*10+(n/10+n%10)%10;
	}
}