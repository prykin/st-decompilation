FUN_004ce060:
004CE060  55                        PUSH EBP
004CE061  8B EC                     MOV EBP,ESP
004CE063  83 EC 08                  SUB ESP,0x8
004CE066  56                        PUSH ESI
004CE067  57                        PUSH EDI
004CE068  8B F9                     MOV EDI,ECX
004CE06A  33 C0                     XOR EAX,EAX
004CE06C  33 F6                     XOR ESI,ESI
004CE06E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004CE071  8B 8F 24 05 00 00         MOV ECX,dword ptr [EDI + 0x524]
004CE077  85 C9                     TEST ECX,ECX
004CE079  7E 43                     JLE 0x004ce0be
004CE07B  53                        PUSH EBX
004CE07C  8D 9F D0 04 00 00         LEA EBX,[EDI + 0x4d0]
LAB_004ce082:
004CE082  8B 0B                     MOV ECX,dword ptr [EBX]
004CE084  8D 45 F8                  LEA EAX,[EBP + -0x8]
004CE087  50                        PUSH EAX
004CE088  51                        PUSH ECX
004CE089  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004CE08F  E8 3C 82 21 00            CALL 0x006e62d0
004CE094  85 C0                     TEST EAX,EAX
004CE096  75 14                     JNZ 0x004ce0ac
004CE098  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004CE09B  85 C9                     TEST ECX,ECX
004CE09D  74 0D                     JZ 0x004ce0ac
004CE09F  8B 11                     MOV EDX,dword ptr [ECX]
004CE0A1  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004CE0A4  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
004CE0A7  75 03                     JNZ 0x004ce0ac
004CE0A9  FF 45 FC                  INC dword ptr [EBP + -0x4]
LAB_004ce0ac:
004CE0AC  8B 87 24 05 00 00         MOV EAX,dword ptr [EDI + 0x524]
004CE0B2  46                        INC ESI
004CE0B3  83 C3 04                  ADD EBX,0x4
004CE0B6  3B F0                     CMP ESI,EAX
004CE0B8  7C C8                     JL 0x004ce082
004CE0BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004CE0BD  5B                        POP EBX
LAB_004ce0be:
004CE0BE  5F                        POP EDI
004CE0BF  5E                        POP ESI
004CE0C0  8B E5                     MOV ESP,EBP
004CE0C2  5D                        POP EBP
004CE0C3  C2 04 00                  RET 0x4
