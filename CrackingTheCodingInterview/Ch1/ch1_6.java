Class ch1_6{
  //main
  public static void main(String[] args){

  }

  //bad function
  String compress_bad(String str){
    String compressed = "";
    int count = 0;
    for (int i = 0; i < str.length(); i++){
      count ++;
      if (str.charAt(i) != str.charAt(i + 1) || i + 1 <= str.length()){
        compressed = "" + str.charAt(i) + count;
        count = 0;
      }
    }
    return compressed.length() < str.length() ? compressed : str;
  }

  /*
  これだと実行時間が長い。文字列走査＋文字列生成でO(p+k^2)
  ⇨StringBuilderによる解法(Javaだと文字列の操作が直接できない)
  */


  //String builder
  String compress(String str){
    StringBuilder compressed = new StringBuilder();
    int count = 0;
    for (int i = 0; i < str.length(); i++){
      count ++;
      if (str.charAt(i) != str.charAt(i + 1) || i + 1 >= str.length()){
        compressed.append(str.charAt(i));
        compressed.append(count);
        count = 0;
      }
    }
    return compressed.length < str.length ? compressed.toString() : str;
  }

  /*上の修正版(文字数が多いと最後の条件分岐が重い)
  先に文字数を確定させて最後の条件分岐をなくす*/

  String compress_2(String str){
    final_length = count_final(str);
    if (final_length >= str.length()) return str;

    StringBuilder compressed = new StringBuilder(final_length);
    int count = 0;
    for (int i = 1; i < str.length(); i++){
      count ++;
      if (str.charAt(i) != str.charAt(i + 1) || i + 1 >= str.length()){
        compressed.append(atr.charAt(i));
        compressed.append(count);
        count = 0;
      }
    }
    return compressed.toString();
  }

  //compressで使うやつ
  int count_final(String str){
    int count = 0;
    int final_length = 0;
    for (int i = 0; i < str.length(); i++){
      count ++;
      if (str.charAt(i) != str.charAt(i) || i + 1 >= str.length()){
        final_length += 1 + String.valueOf(count).length();
        count = 0;
      }
    }
    return final_length;
  }
}
