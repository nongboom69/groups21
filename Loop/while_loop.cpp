#include <iostream>   //เป็นไดเร็กทิฟพรีโพรเซสเซอร์ที่แจ้งให้คอมไพเลอร์รวม iostream ไลบรารีไว้
using namespace std;   // ประกาศว่าจะใช้ std

int main() {   //ฟั้งชันหลักของตัว code
  
  	// while loop to print numbers from 1 to 5
    int i = 0; //ตัวแปร i เท่ากับ 0
    while (i <= 10) {  //ทำซ้ำเงื่อนไขจนกว่า i จะเท่ากับหรือน้อยกว่า 10
        cout << "Hi  => i = " << i << endl; //แสดงค่าข้อมูลที่ทำซ้ำ
        i++;   //i มีค่าเพิ่อมขึ้นที่ละ 1
    }

    return 0; //ไม่มีการย้อนกลับ
}  
