#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = 2.0 / x;
    s = a;
    do {
        n++;
        dod();
        s += a;
    } while (fabs(a) > e);
}