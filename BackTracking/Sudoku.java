import java.util.Scanner;

public class Main{
    static int a[][] = new int[82][82];
    static boolean c1[][] = new boolean[10][10];
    static boolean c2[][] = new boolean[10][10];
    static boolean c3[][] = new boolean[10][10];
    public static int square(int x, int y){
        return (x/3)*3 + (y/3);
    }
    
    public static boolean go(int n){
        if(n == 81){
            for(int i=0;i<9;i++){
                for(int j=0;j<9;j++){
                    System.out.print(a[i][j] + " ");
                }
                System.out.println();
            }
            return true;
        }
        int x = n / 9;
        int y = n % 9;
        if(a[x][y] != 0)
            return go(n+1);
        else{
            for(int i=1;i<=9;i++){
                if(c1[x][i] == false && c2[y][i] == false 
                && c3[square(x, y)][i] == false){
                    a[x][y] = i;
                    c1[x][i] = true;
                    c2[y][i] = true;
                    c3[square(x, y)][i] = true;
                    if(go(n+1))
                        return true;
                    a[x][y] = 0;
                    c1[x][i] = false;
                    c2[y][i] = false;
                    c3[square(x, y)][i] = false;
                }
            }
        }
        return false;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++){
                a[i][j] = scanner.nextInt();
                if(a[i][j] != 0){
                    c1[i][a[i][j]] = true;
                    c2[j][a[i][j]] = true;
                    c3[square(i, j)][a[i][j]] = true;
                }
            }
        go(0);
    }
}

