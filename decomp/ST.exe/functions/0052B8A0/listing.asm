MoneyTy::sub_0052B8A0:
0052B8A0  56                        PUSH ESI
0052B8A1  8B F1                     MOV ESI,ECX
0052B8A3  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
0052B8A6  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
0052B8A9  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0052B8AC  50                        PUSH EAX
0052B8AD  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0052B8B0  51                        PUSH ECX
0052B8B1  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
0052B8B7  52                        PUSH EDX
0052B8B8  50                        PUSH EAX
0052B8B9  51                        PUSH ECX
0052B8BA  E8 C1 A6 18 00            CALL 0x006b5f80
0052B8BF  8B 56 72                  MOV EDX,dword ptr [ESI + 0x72]
0052B8C2  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0052B8C5  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0052B8C8  52                        PUSH EDX
0052B8C9  6A 01                     PUSH 0x1
0052B8CB  50                        PUSH EAX
0052B8CC  51                        PUSH ECX
0052B8CD  E8 66 7E ED FF            CALL 0x00403738
0052B8D2  83 C4 10                  ADD ESP,0x10
0052B8D5  5E                        POP ESI
0052B8D6  C3                        RET
