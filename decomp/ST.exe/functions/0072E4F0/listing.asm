__allmul:
0072E4F0  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0072E4F4  8B 4C 24 10               MOV ECX,dword ptr [ESP + 0x10]
0072E4F8  0B C8                     OR ECX,EAX
0072E4FA  8B 4C 24 0C               MOV ECX,dword ptr [ESP + 0xc]
0072E4FE  75 09                     JNZ 0x0072e509
0072E500  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0072E504  F7 E1                     MUL ECX
0072E506  C2 10 00                  RET 0x10
LAB_0072e509:
0072E509  53                        PUSH EBX
0072E50A  F7 E1                     MUL ECX
0072E50C  8B D8                     MOV EBX,EAX
0072E50E  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0072E512  F7 64 24 14               MUL dword ptr [ESP + 0x14]
0072E516  03 D8                     ADD EBX,EAX
0072E518  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0072E51C  F7 E1                     MUL ECX
0072E51E  03 D3                     ADD EDX,EBX
0072E520  5B                        POP EBX
0072E521  C2 10 00                  RET 0x10
