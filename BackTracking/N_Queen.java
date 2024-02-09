import java.util.Scanner;

public class Main {
    static int count = 0;
    static int N;
    static int a[] = new int[15];
    public static void Queen(int depth){
        if(depth == N){
            count++;
            return;
        }

        for(int i=0;i<N;i++){
            a[depth] = i;
            if(Possibility(depth))
                Queen(depth+1);
        }
    }

    public static boolean Possibility(int col){
        for(int i=0;i<col;i++) {
            if (a[i] == a[col])
                return false;

            else if(Math.abs(col - i) == Math.abs(a[col] - a[i]))
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        N = scanner.nextInt();
        Queen(0);
        System.out.println(count);
    }
}