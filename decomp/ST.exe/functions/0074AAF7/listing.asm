FUN_0074aaf7:
0074AAF7  56                        PUSH ESI
0074AAF8  8B F1                     MOV ESI,ECX
0074AAFA  8B 8E D8 00 00 00         MOV ECX,dword ptr [ESI + 0xd8]
0074AB00  8B 01                     MOV EAX,dword ptr [ECX]
0074AB02  FF 90 8C 00 00 00         CALL dword ptr [EAX + 0x8c]
0074AB08  85 C0                     TEST EAX,EAX
0074AB0A  7C 07                     JL 0x0074ab13
0074AB0C  8B CE                     MOV ECX,ESI
0074AB0E  E8 7E D4 FF FF            CALL 0x00747f91
LAB_0074ab13:
0074AB13  5E                        POP ESI
0074AB14  C3                        RET
