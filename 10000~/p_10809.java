// https://www.acmicpc.net/problem/10809
// 제목: 알파벳 찾기
import java.util.Scanner;
public class p_10809 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		String words = s.next();
		char[] slicewords = words.toCharArray();
		int[] index = new int[26];
		for (int i=0;i<26;i++)
			index[i]=-1;
		for (char j='a';j<='z';j++)
			for (int i=0;i<words.length();i++) {
				if(index[j-97]!=-1)
					continue;
				if (slicewords[i]==j)
					index[j-97]=i;
			}
		for (int i=0;i<26;i++)
			System.out.print(index[i]+" ");
	}
}