#include "solution.h"

int Solution::Add(int val1, int val2) {
  int result;

  result = val1 + val2;

  return result;
}

std::string Solution::Add(std::string str1, std::string str2) { 
  std::string result;
  
  if (str1.empty() || str2.empty())
    return "Invalid input";

  result = str1 + str2;

  return result; 
}

std::string Solution::Add(std::string str1, int val2) { 
  std::string result;
  
  if (str1.empty())
    return "Invalid input";

  std::string str2 = std::to_string(val2);

  result = str1 + str2;

  return result; 
}