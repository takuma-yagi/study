class Main{
  public static void main(String[] args){
    String str1 = "akasaka";
    String str2 = "minato";
    output(str1);
    output(str2);
  }
  public static void output(String str){
    System.out.println(str);
    System.out.println(isUnique_set(str));
    System.out.println(isUnique_bit(str));
  }
  //
  public static boolean isUnique_set(String str){
    if (str.length() > 128) return false;
    boolean[] char_set = new boolean[128];
    for (int i = 0; i < str.length(); i++){
      int val = str.charAt(i);
      if (char_set[val]){
        return false;
      }
      char_set[val] = true;
    }
    return true;
  }

  /*using bit*/
  public static boolean isUnique_bit(String str){
    int checker = 0;
    for (int i = 0; i < str.length(); i++){
      int val = str.charAt(i) - 'a';
      if ((checker & (1 << val)) > 0){
        return false;
      }
      checker |= (1 << val);
    }
    return true;
  }
}
