

## Set Config Values

```
git config --global user.name "Kaliham"
git config --global user.email "example@gmail.com"
```

+ `config --list` lists every configuration you have set.
```
git config --list
```

+ `git init` initialize a repository from existing code.
+ `git status` gives the status of the tracked or untracked files.
+ `.gitiignore` is a file where we add files that we want git to ignore.

### Staging 

```
git add -A
````
+ adds everything to the staging area.


```
git reset [name or nothing(removes everything)]
```
+ unstages files in the repo.

### Commiting

````
git commit -m "[message]"
````

```
git log
```


# info

```
git remote -v
git branch -a
```

+ `git diff` mentions the changes remote repo and local repo.
```
git  diff 
```

### Branching

```
git branch [name-branch]
git checkout [name-branch]
```
+ `git branch` has two uses:
    + `git branch [name-branch]` : **Creates** a new branch.
    + `git branch` : **Lists** all branches for the repo, and highlights the current one.

+ `git push -u origin [name-branch]` : allows us to push to that repo and sets the branch that the `push` and `pull` will work on later.

#### Merging

```
git checkout master
git pull origin master
git branch --merged
git merge [name-branch]
git push -u origin master
```
steps to merge to `master`
1. `git checkout master` : **Checkout** master.
2. `git pull origin master` : **Update** our local repo from the _Master_ branch.
3. `git branch --merged` : **Lists** the branches that we merged.
4. `git merge [name-branch]` : **Merge** the `[name-branch]` with the `master` branch that we `git checkout` to.
5. `git push -u origin` : **Push/Upload** the _merged_ edits of the `master` branch to the centeral repo.

#### Deleting the branch 
```
git branch --merged 
git branch -d [name-branch] #deletes the branch locally
git branch -a 
git push origin --delete [name-branch] #deletes the branch on the centeral branch
```





