import java.util.*;
public class Main {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int sum=0;
		int N = s.nextInt();
		int[] P = new int[N];
		for (int i=0;i<N;i++)
			P[i] = s.nextInt();
		Arrays.sort(P);
		for (int i=0;i<N;i++)
			sum+=P[i]*(N-i);
		System.out.println(sum);
	}
}