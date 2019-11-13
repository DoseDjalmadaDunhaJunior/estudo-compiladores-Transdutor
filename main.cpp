/**
 * esse Automato vai entender esse caso:
 * A25 C18 A BC
 * e vai imprimir isso:
 * V(A25,1) V(C18,2) V(A,3) V(BC,4)
 */
#include "Transdutor.h"
int main() {
    Transdutor oi("A25 A3 B2 Bc");
    oi.e0();
    return 0;
}