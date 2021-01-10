#include <iostream>
#include <algorithm>
#include <vector>

class Human {
 public:
  Human(int kindness): kindness_{ kindness} {}
  bool operator<(const Human& other) const {
    return kindness_ < other.kindness_;
  }

 private:
  int kindness_ = 100;
};

int main () {
  std::vector<Human> humans = {Human{0}, Human{10}};
  
  
  for(size_t i = 0; i < humans.size(); i++){
    std::sort(humans.begin(),humans.end());
    std::cout << humans[i] << std::endl;
  }
  return 0;
} 
