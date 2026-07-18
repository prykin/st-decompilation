FUN_004924a0:
004924A0  55                        PUSH EBP
004924A1  8B EC                     MOV EBP,ESP
004924A3  51                        PUSH ECX
004924A4  56                        PUSH ESI
004924A5  8B F1                     MOV ESI,ECX
004924A7  83 BE 5D 04 00 00 14      CMP dword ptr [ESI + 0x45d],0x14
004924AE  75 34                     JNZ 0x004924e4
004924B0  8B 86 A2 05 00 00         MOV EAX,dword ptr [ESI + 0x5a2]
004924B6  85 C0                     TEST EAX,EAX
004924B8  74 2A                     JZ 0x004924e4
004924BA  83 BE C0 05 00 00 03      CMP dword ptr [ESI + 0x5c0],0x3
004924C1  74 21                     JZ 0x004924e4
004924C3  8D 4D FC                  LEA ECX,[EBP + -0x4]
004924C6  51                        PUSH ECX
004924C7  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004924CD  50                        PUSH EAX
004924CE  E8 FD 3D 25 00            CALL 0x006e62d0
004924D3  83 F8 FC                  CMP EAX,-0x4
004924D6  74 0C                     JZ 0x004924e4
004924D8  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004924DB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004924DE  52                        PUSH EDX
004924DF  E8 80 13 F7 FF            CALL 0x00403864
LAB_004924e4:
004924E4  5E                        POP ESI
004924E5  8B E5                     MOV ESP,EBP
004924E7  5D                        POP EBP
004924E8  C3                        RET
