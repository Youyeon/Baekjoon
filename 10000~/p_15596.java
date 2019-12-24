// https://www.acmicpc.net/problem/15596
// 제목: 정수 N 개의 합
public class Test {
	long sum(int[] a) {
		long ans=0;
		for (int i=0;i<a.length;i++)
			ans+=a[i];
		return ans;
	}
}
