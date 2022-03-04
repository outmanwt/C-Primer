# Chapter 2

- 无符号类型负数会变正数(2^32 - x)

- 不要混用无符号和有符号类型

- 多行书写字符串字面值 “a”"b"=="ab"

- \转义符后面最多跟三个8进制数,例：”\1234“代表两个字符'\123'和'4'

- "\x1234"表示16位字符,char占8位，一般需要在前后指定类型

- 指定一个字多长、带不带符号可以使用U、L、LL

### 练习题2.5

**a)** 'a',  L'a', "a", L"a"

答: 

char是8位[字符](https://baike.baidu.com/item/%E5%AD%97%E7%AC%A6)类型，最多只能包含256种字符，许多外文[字符集](https://baike.baidu.com/item/%E5%AD%97%E7%AC%A6%E9%9B%86)所含的字符数目超过256个，[char](https://baike.baidu.com/item/char/5156054)型无法表示。

wchar_t数据类型一般为16位或32位，但不同的C或[C++](https://baike.baidu.com/item/C%2B%2B/99272)库有不同的规定，如[GNU](https://baike.baidu.com/item/GNU/671972) Libc规定wchar_t为32位，总之，wchar_t所能表示的字符数远超char型。

我的G++ wchar_t是32位

L = wchar_t 

- 'a' 字符型 占 8 位 1 字节

- L‘a’ 字符型 占 32 位 4 字节

- "a" 字符串  占16位  2 字节

- L"a"宽字符串 占64位 8字节

**b)** 10, 10u, 10L, 10UL, 012, 0xC

- 10 10进制10

- 10u 无符号的10进制数10

- 10L 至少是个LONG

- 同上 只不过是无符号的

- 8进制数

- 16进制数
