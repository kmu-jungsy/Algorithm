import java.util.Scanner;

public class Main {

    public static void erase(char[][] star, int first_wide, int last_wide, int first_length, int last_length) {
        if (last_wide - first_wide > 0) {
            int length = (last_wide - first_wide + 1) / 3;
            for (int i = first_wide + length; i < first_wide + length * 2; i++)
                for (int j = first_length + length; j < first_length + length * 2; j++)
                    star[i][j] = ' ';
            erase(star, first_wide, first_wide + length - 1, first_length, first_length + length - 1);
            erase(star, first_wide + length, first_wide + length * 2 - 1, first_length, first_length + length - 1);
            erase(star, first_wide + length * 2, last_wide, first_length, first_length + length - 1);
            erase(star, first_wide, first_wide + length - 1, first_length + length, first_length + length * 2 - 1);
            erase(star, first_wide + length * 2, last_wide, first_length + length, first_length + length * 2 - 1);
            erase(star, first_wide, first_wide + length - 1, first_length + length * 2, last_length);
            erase(star, first_wide + length, first_wide + length * 2 - 1, first_length + length * 2, last_length);
            erase(star, first_wide + length * 2, last_wide, first_length + length * 2, last_length);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char[][] star = new char[2200][2200];
        int N = scanner.nextInt();
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                star[i][j] = '*';
            }
        }
        erase(star, 0, N-1, 0, N-1);
        StringBuilder sb = new StringBuilder();
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                sb.append(star[i][j]);
            }
            sb.append('\n');
        }
        System.out.print(sb);
    }
}