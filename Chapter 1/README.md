# 练习1.1

- 查阅编译器文档，确定它的文件命名约束

cc、cp、cxx、cpp、c++、cPP、C 这些都会被视为C++语言

```bash
sudo apt install gcc-doc
man g++

#输入666g跳转到666行
file.cc
 file.cp
 file.cxx
 file.cpp
 file.CPP
 file.c++
 file.C
 C++ source code that must be preprocessed. Note that in .cxx, the last two letters must both
 be literally x. Likewise, .C refers to a literal capital C.
```

- 编译并运行main程序

```bash
g++ main.cpp -o main
./main
echo $?
# 0
```

# 练习1.2

把return改成-1，观察系统怎么处理main返回的错误标识

```bash
# linux:echo $? windows:echo %ERRORLEVEL%
# main 函数返回 -1
g++ main.cpp -o main
./main
echo $?
# 255
```

原因：linux程序退出时有个错误码 Exit Codes 范围是 0-255，-1从后往前就是255

Depending on our shell, exit code 255 might mean that the returned exit code is outside of the 0-255 range.