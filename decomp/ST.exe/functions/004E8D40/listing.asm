FUN_004e8d40:
004E8D40  55                        PUSH EBP
004E8D41  8B EC                     MOV EBP,ESP
004E8D43  51                        PUSH ECX
004E8D44  56                        PUSH ESI
004E8D45  8B F1                     MOV ESI,ECX
004E8D47  83 BE AC 05 00 00 6C      CMP dword ptr [ESI + 0x5ac],0x6c
004E8D4E  75 4A                     JNZ 0x004e8d9a
004E8D50  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004E8D56  85 C0                     TEST EAX,EAX
004E8D58  75 0F                     JNZ 0x004e8d69
004E8D5A  8B 86 D3 05 00 00         MOV EAX,dword ptr [ESI + 0x5d3]
004E8D60  85 C0                     TEST EAX,EAX
004E8D62  74 05                     JZ 0x004e8d69
004E8D64  E8 14 83 F1 FF            CALL 0x0040107d
LAB_004e8d69:
004E8D69  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004E8D6F  85 C0                     TEST EAX,EAX
004E8D71  74 27                     JZ 0x004e8d9a
004E8D73  8B 8E 1B 06 00 00         MOV ECX,dword ptr [ESI + 0x61b]
004E8D79  85 C9                     TEST ECX,ECX
004E8D7B  75 1D                     JNZ 0x004e8d9a
004E8D7D  8D 4D FC                  LEA ECX,[EBP + -0x4]
004E8D80  51                        PUSH ECX
004E8D81  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E8D87  50                        PUSH EAX
004E8D88  E8 43 D5 1F 00            CALL 0x006e62d0
004E8D8D  85 C0                     TEST EAX,EAX
004E8D8F  75 09                     JNZ 0x004e8d9a
004E8D91  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004E8D94  89 96 1B 06 00 00         MOV dword ptr [ESI + 0x61b],EDX
LAB_004e8d9a:
004E8D9A  5E                        POP ESI
004E8D9B  8B E5                     MOV ESP,EBP
004E8D9D  5D                        POP EBP
004E8D9E  C3                        RET
