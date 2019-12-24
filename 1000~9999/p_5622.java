// https://www.acmicpc.net/problem/5622
// 제목: 다이얼
import java.util.Scanner;
public class p_5622 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		String str = s.next();
		char[] words = str.toCharArray();
		int count = 0;
		for (int i=0;i<words.length;i++) {
			if (words[i]>=65&&words[i]<68)
				count+=3;
			else if (words[i]>=68&&words[i]<71)
				count+=4;
			else if (words[i]>=70&&words[i]<74)
				count+=5;
			else if (words[i]>=74&&words[i]<77)
				count+=6;
			else if (words[i]>=77&&words[i]<80)
				count+=7;
			else if (words[i]>=80&&words[i]<84)
				count+=8;
			else if (words[i]>=84&&words[i]<87)
				count+=9;
			else if (words[i]>=87&&words[i]<91)
				count+=10;
			else
				count+=11;
		}
		System.out.println(count);
	}
}