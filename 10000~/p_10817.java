// https://www.acmicpc.net/problem/10817
// 제목: 세 수
import java.util.*;

public class p_10817 {
	public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
       int[] numbers = new int[3];
       for (int i=0;i<3;i++)
    	   numbers[i]=s.nextInt();
       Arrays.sort(numbers);
       System.out.println(numbers[1]);
	}
}