class Solution {

    public int firstCompleteIndex(int[] arr, int[][] mat) {
        int m = mat.length;
        int n = mat[0].length;

        Map<Integer, int[]> mp = new HashMap<>(); 

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                int val = mat[i][j];
                mp.put(val, new int[]{i, j});
            }
        }

        int[] rowCountPaint = new int[m]; 
        int[] colCountPaint = new int[n]; 

        for (int i = 0; i < arr.length; i++) {
            int val = arr[i];
            int[] coordinates = mp.get(val);
            int row = coordinates[0], col = coordinates[1];

            rowCountPaint[row]++;
            colCountPaint[col]++;

            if (rowCountPaint[row] == n || colCountPaint[col] == m) {
                return i;
            }
        }
        return -1;
    }
}
