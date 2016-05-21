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

commit (files to local):
> git commit -m "msg"

commit log (of all commits):
> git log
//you can see all the commits and changes... git-plus :D

//origin - remote dir
//master - branch
push (files to remote):
> git push origin master

pull (any changes made since last pull):
> git pull origin master

ignore:
> touch .gitignore
.gitignore:
  .DS_Store
  .project
  *.pcy (wildcard)

clone remote repo:
> git clone <url...or local> <where to clone>

remote (list info of repo):
> git remote -v

branch (list branch of repo local & remote):
> git branch -a

diff (show changes):
> git diff

*/

#include <iostream>

using namespace std;

int main(){
	int i = 0;
    while (i < 10)

		cout << i;
    return 0;
}
