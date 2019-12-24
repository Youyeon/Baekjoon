// https://www.acmicpc.net/problem/15552
// 제목: 빠른 A+B
import java.io.*;
import java.util.Scanner;
public class p_15552 {
	public static void main(String args[]) {
		try {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		int N = Integer.parseInt(br.readLine().trim());
		for (int i=0;i<N;i++) {
			String num = br.readLine();
			String[] word = num.split(" ");
			int a = Integer.parseInt(word[0]);
			int b = Integer.parseInt(word[1]);
			bw.write((a+b)+"\n");
			}
		bw.flush();
		br.close();
		bw.close();
		} catch(IOException e) {
			e.printStackTrace();
		}
	}
}