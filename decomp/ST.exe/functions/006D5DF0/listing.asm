FUN_006d5df0:
006D5DF0  55                        PUSH EBP
006D5DF1  8B EC                     MOV EBP,ESP
006D5DF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D5DF6  8B 40 58                  MOV EAX,dword ptr [EAX + 0x58]
006D5DF9  85 C0                     TEST EAX,EAX
006D5DFB  75 09                     JNZ 0x006d5e06
006D5DFD  B8 09 02 04 80            MOV EAX,0x80040209
006D5E02  5D                        POP EBP
006D5E03  C2 08 00                  RET 0x8
LAB_006d5e06:
006D5E06  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D5E09  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
006D5E0C  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006D5E0F  85 C0                     TEST EAX,EAX
006D5E11  74 12                     JZ 0x006d5e25
006D5E13  56                        PUSH ESI
006D5E14  8B 71 44                  MOV ESI,dword ptr [ECX + 0x44]
006D5E17  3B C6                     CMP EAX,ESI
006D5E19  5E                        POP ESI
006D5E1A  73 09                     JNC 0x006d5e25
006D5E1C  B8 57 00 07 80            MOV EAX,0x80070057
006D5E21  5D                        POP EBP
006D5E22  C2 08 00                  RET 0x8
LAB_006d5e25:
006D5E25  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006D5E28  85 C0                     TEST EAX,EAX
006D5E2A  7E 09                     JLE 0x006d5e35
006D5E2C  B8 57 00 07 80            MOV EAX,0x80070057
006D5E31  5D                        POP EBP
006D5E32  C2 08 00                  RET 0x8
LAB_006d5e35:
006D5E35  8B 49 44                  MOV ECX,dword ptr [ECX + 0x44]
006D5E38  33 C0                     XOR EAX,EAX
006D5E3A  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
006D5E3D  5D                        POP EBP
006D5E3E  C2 08 00                  RET 0x8
