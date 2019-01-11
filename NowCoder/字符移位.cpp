/**
    算法基础-字符移位
    小Q最近遇到了一个难题：把一个字符串的大写字母放到字符串的后面，各个字符的相对位置不变，且不能申请额外的空间。
    你能帮帮小Q吗？


    输入描述:

    输入数据有多组，每组包含一个字符串s，且保证:1<=s.length<=1000.



    输出描述:

    对于每组数据，输出移位后的字符串。

    输入例子1:
    AkleBiCeilD

    输出例子1:
    kleieilABCD
 */

 #include <iostream>
 
 using namespace std;
 
 int main() {
     string a;
     while (cin >> a) {
         string down = "";
         string up = "";
         for (int i = 0; i < a.length(); i++) {
             if (a[i] >= 'A' && a[i] <= 'Z') {
                 up.push_back(a[i]);
             } else {
                 down.push_back(a[i]);
             }
         }
         a = down.append(up);
         cout << a << endl;
     }
 
 
     return 0;
 }