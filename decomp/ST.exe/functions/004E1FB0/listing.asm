FUN_004e1fb0:
004E1FB0  55                        PUSH EBP
004E1FB1  8B EC                     MOV EBP,ESP
004E1FB3  56                        PUSH ESI
004E1FB4  8B F1                     MOV ESI,ECX
004E1FB6  33 C0                     XOR EAX,EAX
004E1FB8  57                        PUSH EDI
004E1FB9  8B 8E 45 02 00 00         MOV ECX,dword ptr [ESI + 0x245]
004E1FBF  85 C9                     TEST ECX,ECX
004E1FC1  75 1C                     JNZ 0x004e1fdf
004E1FC3  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E1FC6  8B CE                     MOV ECX,ESI
004E1FC8  57                        PUSH EDI
004E1FC9  E8 30 2E F2 FF            CALL 0x00404dfe
004E1FCE  85 C0                     TEST EAX,EAX
004E1FD0  74 0D                     JZ 0x004e1fdf
004E1FD2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E1FD5  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
004E1FD8  89 94 CE D0 04 00 00      MOV dword ptr [ESI + ECX*0x8 + 0x4d0],EDX
LAB_004e1fdf:
004E1FDF  5F                        POP EDI
004E1FE0  5E                        POP ESI
004E1FE1  5D                        POP EBP
004E1FE2  C2 08 00                  RET 0x8
