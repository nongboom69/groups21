// hello.cpp

#include <iostream>  //เป็นไดเร็กทิฟพรีโพรเซสเซอร์ที่แจ้งให้คอมไพเลอร์รวม iostream ไลบรารีไว้
#include "function.h"  //บอกให้คอมไพเลอร์รวมไฟล์เฮดเดอร์ function.h เข้ามาในโปรแกรม
using namespace std;  // ประกาศว่าจะใช้ std

void print_hello() //ฟังชัน
{
   cout << "Hello World" << endl; //จะแสดงคำว่า "Hello World" บนหน้าจอ 
}
