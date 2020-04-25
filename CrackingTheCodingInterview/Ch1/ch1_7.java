Class ch1_7{
  public static void main(String[] args){

  }

  //関数
  boolean rotation (int[][] matrix){
    //正方形じゃないor辺の長さが0を取り除く
    if (matrix.length() == 0 || matrix.length() != matrix[0].length()) return false;

    int n = matrix.length();
    for (int layer = 0; layer < n / 2; layer++){
      int first = layer;
      int last = n - layer - 1;
      for(int i = first; i < last; i++){
        int offset = i - first;
        int top = matrix[first][i];
        matrix[first][i] = matrix[last - offset][first];
        matrix[last - offset][first] = matrix[last][last - offset];
        matrix[last][last - offset] = matrix[i][last];
        matrix[i][last] = top;
      }
    }
    return true;
  }
}
