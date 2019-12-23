// https://www.acmicpc.net/problem/1316
// 제목: 그룹 단어 체커
import java.util.*;
public class p_1316 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int count=0;
		int N = s.nextInt();
		for (int i=0;i<N;i++) {
			String str = s.next();
			if (isGroup(str))
				count++;
		}
		System.out.println(count);
	}
	public static boolean isGroup(String str) {
		boolean ch=false;
		LinkedList <Character> list = new LinkedList <Character>();
		for (int i=0;i<str.length();i++)
			list.add(str.charAt(i));
		for (char i='a';i<='z';i++) {
			if (list.contains(i)) {
				int check = list.lastIndexOf(i)-list.indexOf(i)+1;
				int count = countchar(str, i);
				if (check==count) 
					ch = true;
				else {
					ch = false;
					break;
				}
			}
		}
		return ch;
	}
	public static int countchar(String str, char c) {
		int co = 0;
		for (int i=0;i<str.length();i++)
			if (str.charAt(i)==c)
				co++;
		return co;
	}
}