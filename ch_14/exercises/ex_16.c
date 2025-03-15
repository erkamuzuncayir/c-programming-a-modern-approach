//
// Created by erkam on 3/15/25.
//

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void)
{
    IDENT(foo); // #pragma ident "foo"
    PRAGMA(ident "foo");
    _Pragma("ident \"foo\"")
}
