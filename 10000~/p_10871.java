// https://www.acmicpc.net/problem/10871
// 제목: X보다 작은 수
import java.util.Scanner;
public class p_10871 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N,X;
		N = s.nextInt();
		X = s.nextInt();
		int[] numbers = new int[N];
		for (int i=0;i<N;i++)
			numbers[i]=s.nextInt();
		for (int i=0;i<N;i++) 
			if (numbers[i]<X) 
				System.out.print(numbers[i]+" ");
	}
}