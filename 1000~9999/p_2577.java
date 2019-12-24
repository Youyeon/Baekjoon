// https://www.acmicpc.net/problem/2577
// 제목: 숫자의 개수
import java.util.Scanner;
public class p_2577 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int Result=1;
		for (int i=0;i<3;i++)
			Result*=s.nextInt();
		String number = ""+Result;
		int[] counts = new int[10];
		for (int i = 0; i < number.length(); ++i) {
            counts[number.charAt(i) - '0']++;
        }
        for (int i = 0; i < counts.length; ++i) {
            System.out.println(counts[i]);
        }
	}
}