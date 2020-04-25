void deleteDups(LinkedListNode n){
  //HashSet:null可、重複不可、順不同のコンテナデータ
  HashSet<Integer> set = new HashSet<Integer>();
  LinkedListNode previous = null;
  while (n != null){
    if (set.contains(n.data)){
      previous.next = n.next;
    }else{
      set.add(n.data);
      previous = n;
    }
    n = n.next;
  }
}

void deleteDups(LinkedListNode n){
  LinkedListNode previous = null;
  
}
