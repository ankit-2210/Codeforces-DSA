import java.io.*;
import java.util.*;
 
public class Main {
    static final long MOD = 1000000007L;
    static final int N = 1000010;
 
    static FastReader in = new FastReader();
    static PrintWriter out = new PrintWriter(System.out);
 
    static void solve() {
        int n = in.nextInt();
        int k= in.nextInt();
 
        int res=0;
        for(int i=0;i<n;i++){
            int x = in.nextInt();
 
            if(i%(k+1)==0){
                res ^= (x&1);
            }
        }
        
        if(res == 1){
            System.out.println("Alice");
        }
        else{
            System.out.println("Bob");
        }
 
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