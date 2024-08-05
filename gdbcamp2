#include<iostream>
#include<chrono>
#include<thread>
#include<vector>
using namespace std;
void thread(int thread_id,int n)
{
  cout<<thread_id<<"begin run"<<endl;
  while(n-->0)
  {
    cout<<"thread id:"<<thread_id<<", n="<<n<<endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  cout<<thread_id<<"end run"<<endl;
}
int add(int a,int b)
{
  int c=a+b;
  return c;
}
int mul(int a,int b)
{
  int c=a*b;
  return c;
}
int mul(int a,int b,int c)
{
  return a*b*c;
}
int expression(int a,int b)
{
  int c2=add(mul(a,a),mul(b,b));
  return c2;
}
class Test
{
public:
  void show()
  {
    cout<<"hello"<<endl;
  }
  void show(int a)
  {
    cout<<"hello"<<a<<endl;
  }
  void show(int a,int b)
  {
    cout<<"hello"<<"["<<a<<","<<b<<"]"<<endl;
  }
};
int main()
{
int x=0,y=0;
Test t;
t.show();
t.show(1);
t.show(10,11);
int n=100;
while(n>0)
{
  std::this_thread::sleep_for(std::chrono::seconds(1));
  cout<<"main thread n="<<n<<x<<endl;
  n--;
  int c2=expression(x++,y++);
}
return 0;
}
