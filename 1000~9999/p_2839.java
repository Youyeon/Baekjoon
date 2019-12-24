// https://www.acmicpc.net/problem/2839
// 제목: 설탕배달
import java.util.Scanner;
public class p_2839 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int x,y=0,res;
		for (x=N/5;x>=0;x--) {
			if ((N-x*5)%3==0) {
				y = (N-x*5)/3;
				break;
			}
		}
		if (5*x+3*y!=N)
			res=-1;
		else
			res=x+y;
		System.out.println(res);
	}
}