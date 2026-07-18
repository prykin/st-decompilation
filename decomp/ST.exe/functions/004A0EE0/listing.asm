FUN_004a0ee0:
004A0EE0  55                        PUSH EBP
004A0EE1  8B EC                     MOV EBP,ESP
004A0EE3  83 EC 18                  SUB ESP,0x18
004A0EE6  53                        PUSH EBX
004A0EE7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004A0EEA  8B C3                     MOV EAX,EBX
004A0EEC  56                        PUSH ESI
004A0EED  25 FF FF 00 00            AND EAX,0xffff
004A0EF2  57                        PUSH EDI
004A0EF3  8B F9                     MOV EDI,ECX
004A0EF5  50                        PUSH EAX
004A0EF6  E8 F7 40 F6 FF            CALL 0x00404ff2
004A0EFB  83 BF E6 01 00 00 06      CMP dword ptr [EDI + 0x1e6],0x6
004A0F02  75 4E                     JNZ 0x004a0f52
004A0F04  8B 8F 2E 02 00 00         MOV ECX,dword ptr [EDI + 0x22e]
004A0F0A  85 C9                     TEST ECX,ECX
004A0F0C  74 44                     JZ 0x004a0f52
004A0F0E  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004A0F11  33 F6                     XOR ESI,ESI
004A0F13  85 C0                     TEST EAX,EAX
004A0F15  7E 3B                     JLE 0x004a0f52
LAB_004a0f17:
004A0F17  8D 55 E8                  LEA EDX,[EBP + -0x18]
004A0F1A  52                        PUSH EDX
004A0F1B  8B D6                     MOV EDX,ESI
004A0F1D  E8 4E BD 20 00            CALL 0x006acc70
004A0F22  66 39 5D EC               CMP word ptr [EBP + -0x14],BX
004A0F26  75 1E                     JNZ 0x004a0f46
004A0F28  8B 8F 2E 02 00 00         MOV ECX,dword ptr [EDI + 0x22e]
004A0F2E  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A0F31  50                        PUSH EAX
004A0F32  56                        PUSH ESI
004A0F33  51                        PUSH ECX
004A0F34  66 C7 45 EC FF FF         MOV word ptr [EBP + -0x14],0xffff
004A0F3A  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
004A0F41  E8 FA D1 20 00            CALL 0x006ae140
LAB_004a0f46:
004A0F46  8B 8F 2E 02 00 00         MOV ECX,dword ptr [EDI + 0x22e]
004A0F4C  46                        INC ESI
004A0F4D  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004A0F50  7C C5                     JL 0x004a0f17
LAB_004a0f52:
004A0F52  53                        PUSH EBX
004A0F53  8B CF                     MOV ECX,EDI
004A0F55  E8 F7 40 F6 FF            CALL 0x00405051
004A0F5A  5F                        POP EDI
004A0F5B  5E                        POP ESI
004A0F5C  5B                        POP EBX
004A0F5D  8B E5                     MOV ESP,EBP
004A0F5F  5D                        POP EBP
004A0F60  C2 04 00                  RET 0x4
