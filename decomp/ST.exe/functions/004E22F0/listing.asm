FUN_004e22f0:
004E22F0  55                        PUSH EBP
004E22F1  8B EC                     MOV EBP,ESP
004E22F3  56                        PUSH ESI
004E22F4  57                        PUSH EDI
004E22F5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E22F8  8B F1                     MOV ESI,ECX
004E22FA  57                        PUSH EDI
004E22FB  E8 FE 2A F2 FF            CALL 0x00404dfe
004E2300  85 C0                     TEST EAX,EAX
004E2302  75 19                     JNZ 0x004e231d
004E2304  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
004E2307  8B 8C C6 D4 04 00 00      MOV ECX,dword ptr [ESI + EAX*0x8 + 0x4d4]
004E230E  85 C9                     TEST ECX,ECX
004E2310  74 0B                     JZ 0x004e231d
004E2312  5F                        POP EDI
004E2313  B8 01 00 00 00            MOV EAX,0x1
004E2318  5E                        POP ESI
004E2319  5D                        POP EBP
004E231A  C2 04 00                  RET 0x4
LAB_004e231d:
004E231D  5F                        POP EDI
004E231E  33 C0                     XOR EAX,EAX
004E2320  5E                        POP ESI
004E2321  5D                        POP EBP
004E2322  C2 04 00                  RET 0x4
