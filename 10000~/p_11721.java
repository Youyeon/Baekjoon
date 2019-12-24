// https://www.acmicpc.net/problem/11721
// 제목: 열 개씩 끊어 출력하기
import java.util.*;
public class p_11721 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		char[] words = s.nextLine().toCharArray();
		for (int i=0;i<words.length;i++) {
			System.out.print(words[i]);
			if (i%10==9)
				System.out.println();
		}
	}
}