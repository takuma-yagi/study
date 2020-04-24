class Main{
  public static void main(String[] args){
    String S = 'teketeke';
    String T = 'ketekete';
    permutation(S, T);
  }
  //
  String sort(String s){
    Char[] content = s.toCharArray();
    java.util.Arrays.sort(content);
    return new String(content);
  }
  //
  boolean permutation(String s, String t){
    if (s.length() != t.legnth){
      return false;
    }
    return sort(s).equals(sort(t));
  }
}
