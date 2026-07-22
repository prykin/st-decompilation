0072D88C  8B 4C 24 04               MOV ECX,dword ptr [ESP + 0x4]
0072D890  F7 41 04 06 00 00 00      TEST dword ptr [ECX + 0x4],0x6
0072D897  B8 01 00 00 00            MOV EAX,0x1
0072D89C  74 0F                     JZ 0x0072d8ad
0072D89E  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0072D8A2  8B 54 24 10               MOV EDX,dword ptr [ESP + 0x10]
0072D8A6  89 02                     MOV dword ptr [EDX],EAX
0072D8A8  B8 03 00 00 00            MOV EAX,0x3
0072D8AD  C3                        RET
