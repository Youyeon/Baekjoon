// https://www.acmicpc.net/problem/3052
// 제목: 나머지
import java.util.Scanner;
import java.util.HashSet;;
public class p_3052 {
	public static void main(String args[]) {
		final int divisor = 42;
		Scanner s = new Scanner(System.in);
		HashSet <Integer> numbers = new HashSet <Integer>();
		for (int i=0;i<10;i++)
			numbers.add(s.nextInt()%divisor);
		System.out.println(numbers.size());
	}
}