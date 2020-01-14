// https://www.acmicpc.net/problem/3053
// 제목: 택시 기하학
import java.util.Scanner;

public class p_3053 {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        double area_U,area_T;
        int R = s.nextInt();
        area_U = R*R*Math.PI;
        area_T = 2*R*R;
        System.out.printf("%.6f\n%.6f",area_U,area_T);
    }
}