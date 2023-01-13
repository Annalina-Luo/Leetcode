## 题目 **Hash表**
给你两个下标从 0 开始的字符串 s 和 target 。你可以从 s 取出一些字符并将其重排，得到若干新的字符串。
从 s 中取出字符并重新排列，返回可以形成 target 的**最大**副本数。<br>
You are given two 0-indexed strings s and target. You can take some letters from s and rearrange them to form new strings.
Return **the maximum number** of copies of target that can be formed by taking letters from s and rearranging them.
## Examples
1.<br>
Input: s = "ilovecodingonleetcode", target = "code"<br>
Output: 2<br>
2.<br>
Input: s = "abcba", target = "abc"<br>
Output: 1<br>
3.<br>
Input: s = "abbaccaddaeea", target = "aaaaa"<br>
Output: 1<br>
## 解析
统计target中各个字符的出现次数，以及这些字符在s中的出现次数。找到最小的（两个次数之间的）最大公因数。<br>
1. python<br>
用字典储存/Counter计数<br>
2. C<br>
储存到数组<br>
3.C++<br>
map (Hash Table)
