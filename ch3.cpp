#include <iomanip> //定义了控制器setprecision,允许我们指明输出所包含的有效位数
#include <ios>  //ios定义了一个类型streamsize,输入和输出库用这个类型来表示长度
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using std::cin, std::setprecision, std::cout;
using std::string, std::endl, std::streamsize;
using std::vector, std::sort;

int main()
{
  //请求输入并读入学生的姓名
  cout << "Please enter your first name: ";
  string name;
  cin >> name;
  cout << "Hello, " << name << "!" << endl;

  //请求输入并读入期中和期末成绩
  cout << "Please enter your midterm and final exam grades: ";
  double midterm, final;
  cin >> midterm >> final;

  //请求输入家庭作业成绩(如果两个以上的字符串字面量仅仅被空白符分隔，那么这些字符串字面量会被连到一起)
  cout << "Enter all your homework grades, "
          "followed by end-of-file: ";

  
  vector<double> homework;
  double x;

  //不变式：到目前为止，我们已经读到了count个家庭作业成绩，
  //而且sum等于头count个成绩的总和
  while(cin >> x){
    homework.push_back(x);
  }

  //检查homework是否为空
  typedef vector<double>::size_type vec_sz;
  vec_sz size = homework.size();
  if(size == 0){
    cout << endl << "You must enter your grades."
                    "Please try again." << endl;
    return 1;
  }

  //对成绩进行排序
  sort(homework.begin(), homework.end());

  //计算家庭作业成绩中值
  vec_sz mid = size/2;
  double median;
  median = size % 2 == 0 ? (homework[mid] + homework[mid - 1])/2
                         : homework[mid];

  //计算并输出总成绩
  streamsize prec = cout.precision();
  cout << "Your final grade is" << setprecision(3)
  << 0.2 * midterm + 0.4 * final + 0.4 * median
  << setprecision(prec) << endl;
  return 0;
}
