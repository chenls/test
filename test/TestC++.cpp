#include <iostream>
git 修改  三次 第三人修改。。q。。。
di si ci si
git3 ggggggggg分支ddddddev
diwuci
#includeasascascasc <vector>
using namespace std;

int main()
{
   // 创建一个向量存储 dsvsdvsdvdsint
   vector<int> vec;
   int i;

   // 显示 vec 的原始大小
   cout << "vector size = " << vec.size() << endl;

   // 推入 5 个值到向量中
   for(i = 0; i < 5; i++){
      vec.push_back(i);
   }

   // 显示 vec 扩展后的大小
   cout << "extended vector size = " << vec.size() << endl;

   // 访问向量中的 5 个值
   for(i = 0; i < 5; i++){
      cout << "value of vec [" << i << "] = " << vec[i] << endl;
   }

   // 使用迭代器 iterator 访问值
   vector<int>::iterator v = vec.begin();
   while( v != vec.end()) {
      cout << "value of v = " << *v << endl;
      v++;
   }

   return 0;
}
