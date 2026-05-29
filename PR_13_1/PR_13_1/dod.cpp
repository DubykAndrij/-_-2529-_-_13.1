#include "dod.h"
#include "var.h"

using namespace std;
using namespace nsVar;

void nsDod::dod() {
    a *= (2.0 * n - 1.0) / ((2.0 * n + 1.0) * x * x);
}