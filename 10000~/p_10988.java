// https://www.acmicpc.net/problem/10988
// 제목: 팰린드롬인지 확인하기
import java.util.Scanner;

public class p_10988 {
    public static void main (String args[]) {
        Scanner s = new Scanner(System.in);
        int check=1;
        char[] word = s.nextLine().toCharArray();
        for (int i=0;i<word.length/2;i++) {
            if (word[i]!=word[word.length-i-1]) {
                check=0;
                break;
            }
        }
        if (check==1)
            System.out.println("1");
        else
            System.out.println("0");
    }
}