#include <iostream>

using namespace std;

namespace coords1 {
int x = 1;
int y = 2;
} // namespace coords1

namespace coords2 {
int x = 3;
int y = 4;
} // namespace coords2

int main(int argc, char *argv[]) {
  int z = 7;

  std::cout << "x = " << coords1::x << endl;
  std::cout << "y = " << coords2::y << endl;
  std::cout << "z = " << z << endl;

  return 0;
}
