void replaceSpace(char[] str,int truelength){
  int spacecount = 0, index, i = 0;
  for (i = 0; i < truelength; i++){
    if (str[i] == " "){
      spacesount++;
    }
  }
  index = spacecount * 2 + truelength;
  if (truelength < str.length) str[truelength] = '\0';
  for(i = truelength - 1; i >= 0; i--){
    if (str[i] == ' '){
      str[index - 1] = '0';
      str[index - 2] = '2';
      str[index - 3] = '%';
      index -= 3;
    }else{
      str[index - 1] = str[i];
      index --;
    }
  }
}
