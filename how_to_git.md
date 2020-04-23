## Githubの流れ

###  1.リモートリポジトリの作成

```


```

### 2.ローカルリポジトリ作成
【直下のディクトリにリポジトリを作成する方法】

```
#shellscript上での操作
#/Users/yagitakuma以下にGithubというdirectoryを作成

cd /Users/yagitakuma
mkdir Github
cd Github

#local repositoryの作成
git init
```

上記は`/Users/yagitakuma`というディレクトリが`git init`されてローカルリポジトリとなった状態


うまくいくとこんなメッセージが出てくる


```
Initialized empty Git repository in ~
```

【ディレクトリを指定してリポジトリを作成する方法】
```
#/Users/yagitakuma/Githubにローカルリポジトリを作成したい場合
git init /Users/yagitakuma/Github
```

【付録】

`git init`の取り消し方

```
#git initしたrepository上で
rm -rf .git

```

### 3.アップロードしたいファイルをローカルリポジトリに登録

`/Users/yagitakuma/Github`内に`github.txt`というファイルを作成し、ローカルリポジトリに登録
```
git add github.txt
git commit -m “pushコマンドの確認”
```

### 4.リモートリポジトリにpush

```
#remote repositoryを指定
git reomote add origin https://github.com/yagi-8trees/repository_name.git
#local repositoryにあるファイルをremote repositoryに送信
git push origin master
```

こんな画面が出てきたら成功

```
Counting objects: 3, done.
Writing objects: 100% (3/3), 245 bytes | 245.00 KiB/s, done.
Total 3 (delta 0), reused 0 (delta 0)
To https://github.com/yagi-8trees/repository_name.git
 * [new branch]      master -> master
```
