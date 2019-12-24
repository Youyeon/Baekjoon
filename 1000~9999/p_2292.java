// https://www.acmicpc.net/problem/2292
// 제목: 벌집
import java.util.Scanner;
public class p_2292 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		int num=1,count=1,i=1;
        while(num<N) {
            num+=(i++)*6;
            count++;
        }
		System.out.println(count);
	}
}