// https://www.acmicpc.net/problem/2920
// 제목: 음계
import java.util.Scanner;
public class p_2920 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int check = 0;
		int[] melody = new int[8];
		for (int i=0;i<8;i++)
			melody[i] = s.nextInt();
		for (int i=0;i<7;i++) {
			if (melody[i]<melody[i+1])
				check++;
			else if (melody[i]>melody[i+1])
				check--;
		}
		if (check==7)
			System.out.println("ascending");
		else if (check==-7)
			System.out.println("descending");
		else
			System.out.println("mixed");
	}
}