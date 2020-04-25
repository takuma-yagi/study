//under construction

boolean oneEditAway(String str1, String str2){
  if (str1.length() = str2.length()){
    return oneEditReplace(str1, str2);
  }else if(str1.length() - str2.length() == 1){
    return oneEditDelete(str1, str2);
  }else if(str1.length() - str2.length() == -1){
    return oneEditDelete(str2, str1);
  }else{
    return false;
  }
}

boolean oneEditReplace(String str1, String str2){
  boolean foundDif = false;
  for (i = 0; i <= str1.length(); i++){
    if (str1.charAt(i) != str2.charAt(i)){
      if (foundDif){
        return false;
      }
      foundDif = true;
    }
  }
  return true;
}

//str2の方が長い！
boolean oneEditDelete(String str1, String str2){
  int index1 = 0;
  int index2 = 0;
  while (index2 < str2.length() && index1 < str1.length()){
    if (str1.charAt(index1) != str2.charAt(index2)){
      if (index1 != index2){
        return false;
      }else{
        index2++:
      }
    }else{
      index1++;
      index2++;
    }
  }
  return true;
}
/*
分岐を工夫すれば一個にできる
*/

boolean oneEdit(String str1, String str2){
  if (str1.length() == str2.length()){
    foundDif = false;
    for (int i; i < str.length(); i++){
      if (str1.charAt(i) != str2.charAt(i)){
        if(foundDif){
          return false;
        }else{
          foundDif = true;
        }
      }
      return true;
    }
  }else if(str1.length() + 1 == str2.length()){
    String tmp = str1;
    str1 = str2;
    str2 = tmp;
  }else if(str1.length() - 1 == str2.length()){
    int index1 = 0;
    int index2 = 0;
    while (index2 < str2.length() && index1 < str1.length()){
      if (str1.charAt(index1) != str2.charAt(index2)){
        if (index1 != index2){
          return false;
        }else{
          index2++:
        }
      }else{
        index1++;
        index2++;
      }
    }
    return true;
  }
  return false
}
