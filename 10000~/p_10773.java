// https://www.acmicpc.net/problem/10773
// 제목: 제로
import java.util.*;
public class p_10773 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		Stack <Integer> stack = new Stack<Integer>();
		int K = s.nextInt();
		int sum=0;
		for (int i=0;i<K;i++) {
			int N = s.nextInt();
			if (N!=0)
				stack.push(N);
			if (N==0)
				stack.pop();
		}
		for (int i=0;i<stack.size();i++)
			sum+=stack.get(i);
		System.out.println(sum);
	}
}