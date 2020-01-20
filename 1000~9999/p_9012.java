// https://www.acmicpc.net/problem/9012
// 제목: 괄호
import java.util.Scanner;
import java.util.Stack;
import java.util.EmptyStackException;

public class p_9012 {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        Stack <Character> stack;
        char[] str;
        int i,j;
        int T=s.nextInt();
        s.nextLine(); //버퍼처리
        for (i=0;i<T;i++) {
            stack = new Stack<Character>();
            str=s.nextLine().toCharArray();
            for (j=0;j<str.length;j++) {
                if (str[j]=='(')
                    stack.push(str[j]);
                else {
                    try {
                        stack.pop();
                    } catch (EmptyStackException e) {
                        System.out.println("NO");
                        break;
                    }
                }
            }
            if (j==str.length&&!stack.isEmpty())
                System.out.println("NO");
            else if (j==str.length&&stack.isEmpty())
                System.out.println("YES");
        }
    }
}