# gitbin

NWPU Fried-NoFish 专用于 freshmen 的 git 练手仓库，请尽情在此处玩弄你的 git 及 GitHub 的相关功能（或者被其玩弄）。

> PS: 为了防止新手们初期上手不熟悉而在自己的仓库里留下一些脏脏的东西，gitbin 是一款非常适合中国宝宝的 git 垃圾箱哦~

- 前排

任务

- [x] 看到这些任务
- [x] 进行一次 git clone
- [x] 进行一次 git add, commit, push 一条龙
- [x] （突发事件）在一些场合，你也需要进行一次 merge（这需要别人参与哦）
- [x] （突发事件）在一些场合，你也需要进行一次 rebase（对比一下 rebase 和 merge，看看优劣和使用场合）
- [x] 进行一次 fork 和 pull request, 并接受该 pr（一般是别人负责接收，不过这里你可以自己来）
- [x] 在本地创建一个基于现有分支的新的分支
- [x] 在本地创建一个完全空空的新的分支（提示：--orphan）
```shell
git checkout --orphan name
```
- [x] 在本地在新分支中提交代码
- [x] 在远程同步本地分支
- [x] 在本地 git log 回到之前的版本
- [x] 在本地 git reflog 回到之前的操作
- [x] 在本地修改一个本地提交的 comment
- [x] 在本地合并几个本地提交
- [ ] 修改或合并几个已经做过的远程提交，并 git push -f（建议在自己的分支进行，正常情况下千万不要这么做！！）

也许可以？

- [x] 提交时忽视一些文件
- [x] 将过往提交中的某一个文件从记录中全部删除（需要 push -f，建议在自己的分支进行）
```shell
git filter-branch --tree-filter 'rm -f file.txt' -- --all
```
- [x] 将一次提交安全地反向操作（“无效化”那次提交的所有内容，但是不允许 -f）

这是什么？

- [x] 为你的分支提供保护措施
- [x] 评论别人的 pr 中的一行代码
- [x] 发布一个二进制版本
- [x] 提出 issue 并解决它
- [ ] 进行一次 CI/CD


### I know