import java.util.Scanner;

public class Main {
    static int count = 0;
    static StringBuilder sb = new StringBuilder();
    public static void move(int from, int to){
        count++;
        sb.append(from);
        sb.append(' ');
        sb.append(to);
        sb.append('\n');
    }
    public static void hanoi(int n, int from, int by, int to){
        if(n==0)
            return;
        hanoi(n-1, from, to, by);
        move(from, to);
        hanoi(n-1, by,from,to);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        hanoi(N, 1,2,3);
        System.out.println(count);
        System.out.println(sb);
    }
}