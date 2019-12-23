// https://www.acmicpc.net/problem/1193
// 제목: 분수찾기
import java.util.Scanner;
public class p_1193 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int X = s.nextInt();
		int i;
		int N=1,a=0,b=0;
		int[] flag = new int[5000];
		int[] num = new int[5000];
		for (i=0;i<5000;i++) {
			flag[i] = N*(N+1)/2;
			num[i] = N++;
		}
		for (i=4999;i>=0;i--) {
			if (flag[i]-X<(i+1) && num[i]%2!=0) { //N홀수
				a = flag[i]-X+1; //감소
				b = num[i]-a+1;
				break;
			}
			else if (flag[i]-X<(i+1) && num[i]%2==0) { //N짝수
				b = flag[i]-X+1;
				a = num[i]-b+1; //증가
				break;
			}
		}
		System.out.println(a+"/"+b);
	}
}