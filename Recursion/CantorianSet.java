import java.io.*;
import java.util.Arrays;

public class Main {

    static char[] lineArr;

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb;

        String input; //�Է� ��

        while ((input = br.readLine()) != null) { //���Է°��� ���� ������ �ݺ�
            int N = Integer.parseInt(input); //�Է� �� N => 3�� N��
            sb = new StringBuilder(); //�����Ҷ����� �ʱ�ȸ

            int len = (int) Math.pow(3, N); //3�� N��

            lineArr = new char[len]; //3�� N�� ��ŭ�� ũ�⸦ ���� �迭
            Arrays.fill(lineArr, '-'); //��� ��Ҹ� 1�� ����

            divide(0, len); //�޼ҵ� ȣ��

            for(int i = 0; i < lineArr.length; i++){
                sb.append(lineArr[i]);
            }
            System.out.println(sb);
        }
        br.close();
    }

    //3����ؼ� ����� �������� �δ� ���� (�Ķ���� : ���� ������, �ش� ������ ����)
    static void divide(int start, int length) {
        //���̰� 3���� ������ 3����� �� X => ����
        if(length <= 1){
            return;
        }

		//3������� �ɰ��� ���� ���� ��
        int newlength = length/3;

        //��� ����(�ι�° ����)���� �ٲٱ�
        for(int i = start+newlength; i < start+newlength*2; i++){
            lineArr[i] = ' ';
        }

        //ù��° ���� �ɰ���
        divide(start, newlength);

        //����° ���� �ɰ���
        divide(start+newlength*2, newlength);
    }
}