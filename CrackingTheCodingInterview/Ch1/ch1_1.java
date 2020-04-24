Class Main{
  public static void main(String[] args){
    String str = 'akasaka';
    isUnique_set(str);
    isUnique_bit(str);
  }
  //
  boolean isUnique_set(String char){
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
  boolean isUnique_bit(String str){
    int chacker = 0;
    for (int i = 0; i < str.length(); i++){
      int val = srt.charAt(i) - 'a';
      if ((checker & (1 << val)) > 0){
        return false;
      }
      checker |= (1 << val);
    }
    return true;
}