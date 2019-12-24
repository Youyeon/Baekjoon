// https://www.acmicpc.net/problem/4673
// 제목: 셀프 넘버
import java.util.LinkedList;
public class p_4673 {
	public static void main(String args[]) {
		final int n=10000;
		LinkedList <Integer> numbers = new LinkedList <Integer>();
		for (int i=1;i<=n;i++)
			numbers.add(i);
		for (int i=1;i<=n;i++) {
			int check = find(i);
			int index = numbers.indexOf(check);
			if (index==-1)
				continue;
			numbers.remove(index);
		}
		for (int i=0;i<numbers.size();i++)
			System.out.println(numbers.get(i));
	}
	public static int find(int n) {
		if (n<10)
			return n*2;
		else if (n<100)
			return n+n/10+n%10;
		else if (n<1000)
			return n+n/100+n%100/10+n%10;
		else
			return n+n/1000+n%1000/100+n%100/10+n%10;
	}
}