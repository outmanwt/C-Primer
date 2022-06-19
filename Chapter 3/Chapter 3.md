# Chapter 3

## 字符串、向量和数组

### 3.1 命名空间的using声明

- 头文件不应该包含using声明

### 3.2 标准库类型 string

标准库类型`string`表示可变长的字符序列

#### 直接初始化和拷贝初始化

```cpp
string s1;
string s2(s1)
string s2 = s1;
string s3("value");   // 拷贝初始化
sting  s3 = "value";  // 直接初始化
string s4(n, 'c');    // 连续n个c组成的串

string s8 = string(10, 'c‘) // 拷贝初始化,等同于string temp(10, "c"); string s8 = temp;
```

#### io读取

- getline函数读到换行符为止（换行符也被读进来了）,并把值给line（不包含换行符）

- 如果一条表达式中有了size()函数就不要再使用int了，size_type是无符号整数

- 比较字符串：1、如果前面字符都相等，谁长谁大。2、如果不相等，比较的是第一对不相等的字符

### 3.3 标准库类型 vector

### 3.4 迭代器介绍

### 3.5 数组

### 3.6 多维数组
