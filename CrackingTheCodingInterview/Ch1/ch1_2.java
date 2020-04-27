class Main{
  public static void main(String[] args){
    String S = "teketeke";
    String T = "ketekete";
    String S2 = "akasaka";
    String T2 = "minato";
    output(S, T);
    output(S2, T2);
  }
  public static void output(String str1, String str2){
    System.out.println(permutation(str1,str2));
  }
  //
  public static String sort(String s){
    char[] content = s.toCharArray();
    java.util.Arrays.sort(content);
    return new String(content);
  }
  //
  public static boolean permutation(String s, String t){
    if (s.length() != t.length()){
      return false;
    }
    return sort(s).equals(sort(t));
  }
}
