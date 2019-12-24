// https://www.acmicpc.net/problem/4344
// 제목: 평균은 넘겠지
import java.util.Scanner;
public class p_4344 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int N = s.nextInt();
		for (int i=0;i<N;i++) {
			double sum=0;
			int M = s.nextInt();
			int count=0;
			double[] scores = new double[M];
			for (int j=0;j<M;j++) {
				scores[j] = s.nextDouble();
				sum+=scores[j];
			}
			for (int k=0;k<M;k++)
				if (scores[k]>sum/M)
					count++;
			System.out.printf("%.3f%%\n", (double)count/M*100);
		}
	}
}