FUN_004e1eb0:
004E1EB0  55                        PUSH EBP
004E1EB1  8B EC                     MOV EBP,ESP
004E1EB3  53                        PUSH EBX
004E1EB4  56                        PUSH ESI
004E1EB5  8B F1                     MOV ESI,ECX
004E1EB7  57                        PUSH EDI
004E1EB8  83 CB FF                  OR EBX,0xffffffff
004E1EBB  83 CF FF                  OR EDI,0xffffffff
004E1EBE  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004E1EC4  85 C0                     TEST EAX,EAX
004E1EC6  75 27                     JNZ 0x004e1eef
004E1EC8  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004E1ECC  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
004E1ED0  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
004E1ED4  83 E9 64                  SUB ECX,0x64
004E1ED7  50                        PUSH EAX
004E1ED8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E1EDB  51                        PUSH ECX
004E1EDC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E1EDF  52                        PUSH EDX
004E1EE0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E1EE3  50                        PUSH EAX
004E1EE4  51                        PUSH ECX
004E1EE5  52                        PUSH EDX
004E1EE6  33 DB                     XOR EBX,EBX
004E1EE8  E8 E3 8E 1C 00            CALL 0x006aadd0
004E1EED  8B F8                     MOV EDI,EAX
LAB_004e1eef:
004E1EEF  8B 86 F8 04 00 00         MOV EAX,dword ptr [ESI + 0x4f8]
004E1EF5  85 C0                     TEST EAX,EAX
004E1EF7  75 37                     JNZ 0x004e1f30
004E1EF9  85 FF                     TEST EDI,EDI
004E1EFB  7C 27                     JL 0x004e1f24
004E1EFD  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
004E1F01  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
004E1F05  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
004E1F09  83 C1 64                  ADD ECX,0x64
004E1F0C  50                        PUSH EAX
004E1F0D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E1F10  51                        PUSH ECX
004E1F11  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E1F14  52                        PUSH EDX
004E1F15  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E1F18  50                        PUSH EAX
004E1F19  51                        PUSH ECX
004E1F1A  52                        PUSH EDX
004E1F1B  E8 B0 8E 1C 00            CALL 0x006aadd0
004E1F20  3B C7                     CMP EAX,EDI
004E1F22  7D 0C                     JGE 0x004e1f30
LAB_004e1f24:
004E1F24  5F                        POP EDI
004E1F25  5E                        POP ESI
004E1F26  B8 01 00 00 00            MOV EAX,0x1
004E1F2B  5B                        POP EBX
004E1F2C  5D                        POP EBP
004E1F2D  C2 0C 00                  RET 0xc
LAB_004e1f30:
004E1F30  5F                        POP EDI
004E1F31  8B C3                     MOV EAX,EBX
004E1F33  5E                        POP ESI
004E1F34  5B                        POP EBX
004E1F35  5D                        POP EBP
004E1F36  C2 0C 00                  RET 0xc
