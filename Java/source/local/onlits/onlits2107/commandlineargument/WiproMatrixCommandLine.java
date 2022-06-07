package local.onlits.onlits2107.commandlineargument;

public class WiproMatrixCommandLine {
    public static void main(String[] args) {
        int[][] matrix = new int[2][2];
        for (int i = 0; i < matrix.length; i++) {
            for (int j = 0; j < matrix.length; j++) {
                matrix[i][j] = Integer.parseInt(args[2 * i + j]);
            }
        }

        for (int[] row : matrix) {
            System.out.println(row[0] + " " + row[1]);
        }
    }
}
