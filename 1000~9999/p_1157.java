// https://www.acmicpc.net/problem/1157
// 제목: 단어 공부
import java.util.Arrays;
import java.util.Scanner;
public class p_1157 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		int MAX=-1;
		char MAX_char='0';
		String str = s.next().toUpperCase();
		char[] words = str.toCharArray();
		int[] counts = new int[26];
		for (int i=0;i<counts.length;i++)
			counts[i]=0;
		for (char i='A';i<='Z';i++) {
			int count=0;
			for (int j=0;j<str.length();j++)
				if (words[j]==i)
					count++;
			counts[i-65]=count;
		}
		for (int i=0;i<counts.length;i++) {
			if (counts[i]>MAX) {
				MAX = counts[i];
				MAX_char = (char)(65+i);
			}
		}
		Arrays.sort(counts);
		if (counts[25]==counts[24])
			MAX_char=63;
		System.out.println(""+MAX_char);
	}
}