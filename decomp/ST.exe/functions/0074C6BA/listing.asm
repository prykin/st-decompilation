FUN_0074c6ba:
0074C6BA  56                        PUSH ESI
0074C6BB  8B F1                     MOV ESI,ECX
0074C6BD  8B 86 A4 00 00 00         MOV EAX,dword ptr [ESI + 0xa4]
0074C6C3  C7 06 68 18 7A 00         MOV dword ptr [ESI],0x7a1868
0074C6C9  85 C0                     TEST EAX,EAX
0074C6CB  C7 46 0C 20 18 7A 00      MOV dword ptr [ESI + 0xc],0x7a1820
0074C6D2  C7 46 10 08 18 7A 00      MOV dword ptr [ESI + 0x10],0x7a1808
0074C6D9  74 06                     JZ 0x0074c6e1
0074C6DB  8B 08                     MOV ECX,dword ptr [EAX]
0074C6DD  50                        PUSH EAX
0074C6DE  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074c6e1:
0074C6E1  8B CE                     MOV ECX,ESI
0074C6E3  E8 CC B4 FF FF            CALL 0x00747bb4
0074C6E8  5E                        POP ESI
0074C6E9  C3                        RET
