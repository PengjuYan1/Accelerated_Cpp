#include <iostream>
#include <string>

using std::cin, std::cout, std::endl, std::string;

int main()
{
  //请求用户输入姓名
  cout << "Please enter your first name: ";
  
  //读入用户输入的姓名
  string name;
  cin >> name;

  //构造我们将要输出的信息
  const string greeting = "Hello, " + name + "!";

  //围住问候语的空白个数
  const int pad = 0;

  //待输出的行数与列数
  const int rows = pad*2 + 3;
  const string::size_type cols = greeting.size() + pad*2 + 2;

  //输出一个空白行，将输出与输入分隔开
  cout << endl;

  //输出rows行
  //不变式：到目前为止，我们已经输出了r行
  for(int r = 0; r != rows; ++r){
    string::size_type c = 0;
    //不变式：到目前为止，我们已经在当前行中输出了c个字符
    while(c != cols){
      //是否应该输出问候语了？
      if(r == pad+1 && c==pad + 1){
        cout << greeting;
        c+=greeting.size();
      }else{
        //我们是否处于边界上？
        if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
          cout << "*";
        else
          cout << " ";
        ++c;
      }
    }
    cout << endl;
  }
  return 0;
}
















