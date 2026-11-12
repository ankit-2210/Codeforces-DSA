import java.io.*;
import java.util.*;
 
public class Main {
    static final long MOD = 1000000007L;
    static final int N = 1000010;
 
    static FastReader in = new FastReader();
    static PrintWriter out = new PrintWriter(System.out);
 
    static void solve() {
        long n = in.nextLong();
        String s = in.next();
 
        char ch='R';
        long res=0;
        for(int i=0; i<s.length(); i++){
            if(s.charAt(i)!=ch){
                res++;
                ch=s.charAt(i);
            }
 
            if(ch == 'R'){
                ch = 'B';
            }
            else if(ch == 'B'){
                ch = 'R';
            }
        }
        
        System.out.println(res);
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