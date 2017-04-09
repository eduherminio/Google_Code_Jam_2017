#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool order_function (unsigned long long i,unsigned long long j) { return (i>j); }

int main()
{
  int n_inputs;
  std::cin >> n_inputs;

  unsigned long long input;
  unsigned long long output=0;
  for (int i = 1; i <= n_inputs; ++i)
  {
    std::cin>>input;

    for(unsigned long long counter=input; counter>=1; --counter)
    {
      std::vector<unsigned long long> v_digits;
      auto n=counter;

      // std::cout<<'\n'<<counter<<std::endl;
      while(n>10)
      {
        v_digits.push_back(n%10);
        n/=10;
      }
      v_digits.push_back(n);

      auto v_digits_ordered=v_digits;

      // for(auto& x:v_digits)
      //   std::cout<<x<<" ";
      //   std::cout<<std::endl;

      std::sort(v_digits_ordered.begin(), v_digits_ordered.end(), order_function);
      // for(auto& x:v_digits_ordered)
      //   std::cout<<x<<" ";

      if(std::equal(v_digits.begin(), v_digits.end(), v_digits_ordered.begin()))
      {
        output= counter;
        break;
      }
    }

    std::cout << "Case #" << i << ": " << output << std::endl;
  }
  return 0;
}
