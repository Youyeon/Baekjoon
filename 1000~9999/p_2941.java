// https://www.acmicpc.net/problem/2941
// 제목: 크로아티아 알파벳
import java.util.Scanner;
public class p_2941 {
	public static void main(String args[]) {
		Scanner s = new Scanner(System.in);
		String str = s.next();
		System.out.println(croa(str));
	}
	public static int croa(String str) {
		String[] al = {"c=","c-","dz=","d-","lj","nj","s=","z="};
		for (int i=0;i<al.length;i++)
			str = str.replace(al[i],"a");
		return str.length();
	}
}