#include "Student_info.h"
#include <iostream>
#include <vector>

using std::istream, std::vector;

bool compare(const Student_info& x,const Student_info& y)
{
  return x.name < y.name;
}

istream& read(istream& is, Student_info& s)
{
  //读入并存储学生的姓名以及期中、期末考试成绩
  is >> s.name >> s.midterm >> s.final;

  read_hw(is, s.homework);  //读入并存储学生的所有家庭成绩作业
  return is;
}

istream& read_hw(istream& in, vector<double>& hw)
{
  if(in){
    //清除原先内容
    hw.clear();

    //读家庭作业成绩
    double x;
    while(in >> x)
      hw.push_back(x);
    
    //清除以使输入动作对下一个学生有效
    in.clear();
  }
  return in;
}
