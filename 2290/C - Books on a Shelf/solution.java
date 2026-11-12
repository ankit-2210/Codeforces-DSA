import java.io.*;
import java.util.*;
 
public class Main {
    static final long MOD = 1000000007L;
    static final int N = 1000010;
 
    static FastReader in = new FastReader();
    static PrintWriter out = new PrintWriter(System.out);
 
    static void solve() {
        int n = in.nextInt();
        int[] a = new int[n];
 
        for (int i = 0; i < n; i++)
            a[i] = in.nextInt();
 
        Arrays.sort(a);
 
        List<Integer> left = new ArrayList<>();
        List<Integer> right = new ArrayList<>();
        List<Integer> mid = new ArrayList<>();
 
        List<Integer> val = new ArrayList<>();
        List<Integer> freq = new ArrayList<>();
 
        for (int x : a) {
            if (val.isEmpty() || val.get(val.size() - 1) != x) {
                val.add(x);
                freq.add(1);
            }
            else {
                int last = freq.size() - 1;
                freq.set(last, freq.get(last) + 1);
            }
        }
 
        int d = val.size(), mx = 0, k = 0;
        for (int f : freq) {
            k += Math.min(f, 2);
            mx = Math.max(mx, f);
        }
 
        k = Math.min(k, n - mx + Math.min(mx, 2));
 
        int[] used = new int[d];
        for (int i = 0; i < d; i++) {
            left.add(val.get(i));
            used[i] = 1;
        }
 
        int need = k - d;
 
        for (int i = d - 1; i >= 0 && need > 0; i--) {
            if (freq.get(i) >= 2) {
                right.add(val.get(i));
                used[i]++;
                need--;
            }
        }
 
        for (int i = 0; i < d; i++) {
            for (int j = used[i]; j < freq.get(i); j++)
                mid.add(val.get(i));
        }
 
        System.out.println(k);
 
        for (int x : left) {
            System.out.print(x + " ");
        }
        for (int x : mid) {
            System.out.print(x + " ");
        }
        for (int x : right) {
            System.out.print(x + " ");
        }
 
        System.out.println();
    }
 
    public static void main(String[] args) {
        long t = in.nextLong();
        while (t-- > 0) {
            solve();
        }
        out.flush();
    }
 
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;
 
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
 
        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    String line = br.readLine();
                    if (line == null)
                        return null;
                    st = new StringTokenizer(line);
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
 
        int nextInt() {
            return Integer.parseInt(next());
        }
 
        long nextLong() {
            return Long.parseLong(next());
        }
 
        double nextDouble() {
            return Double.parseDouble(next());
        }
 
        String nextLine() {
            String str = "";
            try {
                if (st != null && st.hasMoreTokens()) {
                    str = st.nextToken("
");
                } else {
                    str = br.readLine();
                }
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
 
}