class Main{
  public static void main(String[] args){
    String str1 = "akasaka";
    String str2 = "minato";
    output(str1);
    output(str2);
  }

  public static void output(String str){
    System.out.println(str);
    System.out.println(IsPerm(str));
  }

  public static boolean IsPerm(String phrase){
    int[] table = buildCharFreq(phrase);
    return checkMaxOneOdd(table);
  }

  public static boolean checkMaxOneOdd(int[] table){
    boolean foundOdd = false;
    for (int count: table){
      if (count % 2 == 1){
        if (foundOdd){
          return false;
        }
        foundOdd = true;
      }
    }
    return true;
  }

  public static int getCharNum(Character c){
    int a = Character.getNumericValue('a');
    int z = Character.getNumericValue('z');
    int val = Character.getNumericValue(c);
    if (a <= val && val <= z){
      return val - a;
    }
    return -1;
  }

  public static int[] buildCharFreq(String phrase){
    int[] table = new int[Character.getNumericValue('z') - Character.getNumericValue('a') + 1];
    for (char c : phrase.toCharArray()){
      int x = getCharNum(c);
      if (x != 1){
        table[x] ++;
      }
    }
    return table;
  }

}
