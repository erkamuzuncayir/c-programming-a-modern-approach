//
// Created by erkam on 3/21/25.
//

#include <stdio.h>
typedef unsigned char  BYTE;
typedef unsigned short WORD;
typedef unsigned int   DWORD; // int for 32 bits

union
{
    struct
    {
        DWORD eax, ebx, ecx, edx;
    } dword;
    struct
    {
        WORD axl, ahx, bxl, bhx, cxl, cxh, dxl, dxh;
    } word;
    struct
    {
        BYTE axll, axlh, axhl, axhh, bxll, bxlh, bxhl, bxhh, cxll, cxlh, cxhl, cxhh, dxll, dxlh, dxhl, dxhh;
    } byte;
} regs;

int main(void)
{
    regs.byte.bxhh = 0x12;
    regs.byte.bxhl = 0x34;
    regs.byte.bxlh = 0x56;
    regs.byte.bxll = 0x78;
    printf("EBX: %x\n", regs.dword.ebx);
}
