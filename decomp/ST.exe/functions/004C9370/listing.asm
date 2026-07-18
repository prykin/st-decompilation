FUN_004c9370:
004C9370  55                        PUSH EBP
004C9371  8B EC                     MOV EBP,ESP
004C9373  8B 91 D4 03 00 00         MOV EDX,dword ptr [ECX + 0x3d4]
004C9379  33 C0                     XOR EAX,EAX
004C937B  85 D2                     TEST EDX,EDX
004C937D  74 38                     JZ 0x004c93b7
004C937F  8B 89 07 06 00 00         MOV ECX,dword ptr [ECX + 0x607]
004C9385  85 C9                     TEST ECX,ECX
004C9387  74 2E                     JZ 0x004c93b7
004C9389  85 D2                     TEST EDX,EDX
004C938B  7E 2A                     JLE 0x004c93b7
004C938D  53                        PUSH EBX
004C938E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004C9391  56                        PUSH ESI
004C9392  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
004C9395  57                        PUSH EDI
004C9396  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_004c9399:
004C9399  39 19                     CMP dword ptr [ECX],EBX
004C939B  75 11                     JNZ 0x004c93ae
004C939D  39 79 04                  CMP dword ptr [ECX + 0x4],EDI
004C93A0  75 0C                     JNZ 0x004c93ae
004C93A2  85 F6                     TEST ESI,ESI
004C93A4  7C 05                     JL 0x004c93ab
004C93A6  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
004C93A9  75 03                     JNZ 0x004c93ae
LAB_004c93ab:
004C93AB  03 41 08                  ADD EAX,dword ptr [ECX + 0x8]
LAB_004c93ae:
004C93AE  83 C1 27                  ADD ECX,0x27
004C93B1  4A                        DEC EDX
004C93B2  75 E5                     JNZ 0x004c9399
004C93B4  5F                        POP EDI
004C93B5  5E                        POP ESI
004C93B6  5B                        POP EBX
LAB_004c93b7:
004C93B7  5D                        POP EBP
004C93B8  C2 0C 00                  RET 0xc
