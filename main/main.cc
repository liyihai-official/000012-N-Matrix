#include <iostream>
#include <types>

template <typename T>
void print(const std::initializer_list<T> list)
{
  for (auto const & elem : list)
  {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char ** argv)
{
  // print({1.1, 2.2, 3.1, 3.0});
  // tetris::Matrix_slice<3> Slice (3, {3, 4, 5});

  // tetris::Matrix_slice<3> Slice_Use_Dims (3, 4, 5);

  // std::cout << Slice_Use_Dims(2, 1, 3) << std::endl;
  // tetris::size_type A = Slice_Use_Dims(1, 1, 1);
  // std::cout << A << std::endl;
  // Grid_World gw;

  // InitWindow(NX, NY, "Title");
  // SetTargetFPS(120);

  Matrix<float, 3> Mat (3, 4, 5);

  
  // while (!WindowShouldClose()) 
  // {
  //   BeginDrawing();
  //   ClearBackground(WHITE);







  //   EndDrawing();
  // }

  
  

  return 0;
}