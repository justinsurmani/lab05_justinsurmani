#include "shapes.h"
#include "shapeFuncs.h"
#include "tddFuncs.h"


int main() {

  struct Box b1,b2;
  initBox(&b1,3.0,4.0,5.0,6.0);  
  assertEquals("[ul=(3,4), w=5,h=6]", boxToString(b1), "boxToString(b1)");

  initBox(&b2,3.14159,6.2831853071, 2.589143, 4.786342);
  assertEquals("[ul=(3.14,6.28), w=2.59,h=4.79]", boxToString(b2), "boxToString(b2)");
  assertEquals("[ul=(3,6), w=3,h=5]", boxToString(b2,1), "boxToString(b2,1)");
  assertEquals("[ul=(3.142,6.283), w=2.589,h=4.786]", boxToString(b2,4), "boxToString(b2,4)");
  assertEquals("[ul=(3.1416,6.2832), w=2.5891,h=4.7863]" , boxToString(b2,5), "boxToString(b2,5)");
		   
  return 0;
}
