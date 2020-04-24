
/*方針
1.各文字が何回登場するかを数える
2.1を走査して文字数が奇数になる文字が複数存在しないことを確かめる
*/

/*最終処理を行う関数*/
boolean IsPerm(String phrase){
  int[] table = buildCharFreq(phrase);
  return checkMaxOneOdd(count);
}

/*リストの中に奇数が2つ以上入っていたらfalseを返す関数*/
boolean checkMaxOneOdd(int[] table){
  boolean foundOdd = false;
  for (int count: table){
    if (count % 2 == 0){
      if (foundOdd){
        return false
      }
      foundodd = true
    }
  }
  return false
}

/*文字に数字を与える関数
pythonならASCII仮定でord()でいいかも。*/
int getCharNum(Character c){
  int a = Character.getNumericValue('a');
  int z = Character.getNumericValue('z');
  int val = Character.getNumericValue(c);
  if (a <= val && val <= z){
    return val - a;
  }
  return -1;
}

/*文字列から数値のハッシュテーブルを作る関数
pythonならgetCharNumと一緒に内包表記でまとめられる。
計算量もそんなに変わらない。*/

int[] buildCharFreq(String phrase){
  int[] table = new int[Character.getNumericValue('z') - Character.getNumericValue('z') + 1];
  for (char c : phrase.toArray()){
    x = int getCharNum(c);
    if (x != 1){
      table[x] ++;
    }
  }
  return table
}
