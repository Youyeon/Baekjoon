// https://www.acmicpc.net/problem/2562
// 제목: 최댓값
import java.util.Scanner;
import java.util.LinkedList;
public class p_2562 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		LinkedList <Integer> numbers = new LinkedList <Integer>();
		int MAX=0;
		for (int i=0;i<9;i++) {
			numbers.add(s.nextInt());
			if (i==0) {
				MAX = numbers.getLast();
				continue;
			}
			MAX = (numbers.getLast()>MAX)?numbers.getLast():MAX;
		}
		System.out.println(MAX);
		System.out.print(numbers.indexOf(MAX)+1);
	}
}