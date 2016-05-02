/*
atom:
+ green - added
. (blue) yellow - edited
_ red - removed

==git tuto==
Working Dir | Staging Area | Repo (.git dir)
Stage Fixes->	Commit->   <<-Checkout the proj

help:
> git help ß
> git ß --help

show conig:
> git config --list

set email:
> git config --global user.email "ß"
set name:
> git config --global user.name "ß"

initialize a repo:
> git init

status (track):
> git status

add (file to staging area):
> git add ß

add all (files to staging area):
> git add -A

remove (file from staging area):
> git reset ß

remove all (files from staging area):
> git reset

commit:
> git commit -m "msg"

commit log (hash):
> git log

ignore:
> touch .gitignore
.gitignore:
  .DS_Store
  .project
  *.pcy (wildcard)

clone remote repo:
> git clone <url...or local> <where to clone>


*/

#include <iostream>

using namespace std;

int main(){
	int i = 0;
    while (i < 10)

		cout << i;
    return 0;
}
