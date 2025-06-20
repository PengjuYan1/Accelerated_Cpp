#include "grade.h"
#include "median.h"
#include "Student_info.h"
#include <stdexcept>
#include <vector>

using std::domain_error, std::vector;

double grade(double midterm, double final, double homework)
{
  return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& hw)
{
  if(hw.size() == 0)
    throw domain_error("student ha done no homework");
  return grade(midterm, final, median(hw));
}

double grade(const Student_info& s)
{
  return grade(s.midterm, s.final, s.homework);
}

