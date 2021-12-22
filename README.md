```cpp
#include <cstdio>
template<int a, int... b>struct c{void d(){std::putchar(a);c<a^b...>{}.d();}};
template<int e>struct c<e>{void d(){std::putchar(e);}};
int main(void){c<0163,026,0170,034,074,0122,047,0103,046,0125,0137>{}.d();}
```

<!-- it's time this old girl went to the farm
```c
x,y=115;main(){for(;x<11;y^=((char*)(int[]){0x440A0B16,0x1111B4E,0x7916})[x++])putchar(y);}
```
-->

-----

PGP: [`956D8570AA247CEC55158652CAEBC3A8A8B8E9E8`](https://keys.openpgp.org/search?q=956D8570AA247CEC55158652CAEBC3A8A8B8E9E8)
