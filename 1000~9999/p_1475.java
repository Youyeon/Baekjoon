// https://www.acmicpc.net/problem/1475
// 제목: 방 번호
import java.util.Scanner;

public class p_1475
{
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int count[] = new int[10]; //0123456789
		for (int i=0;i<10;i++)
		    count[i]=0;
		char[] input = s.nextLine().toCharArray();
		for (int i=0;i<input.length;i++)
		    count[input[i]-48]++;
		count[6]=(int)Math.ceil((count[6]+count[9])/2.0);
		count[9]=0;
		int max=count[0];
		for (int i=1;i<10;i++)
		    max=max>count[i]?max:count[i];
		System.out.println(max);
	}
}