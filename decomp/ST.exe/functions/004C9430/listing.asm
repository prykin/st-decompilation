FUN_004c9430:
004C9430  55                        PUSH EBP
004C9431  8B EC                     MOV EBP,ESP
004C9433  8B 91 61 03 00 00         MOV EDX,dword ptr [ECX + 0x361]
004C9439  53                        PUSH EBX
004C943A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004C943D  56                        PUSH ESI
004C943E  57                        PUSH EDI
004C943F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004C9442  33 C0                     XOR EAX,EAX
004C9444  3B D7                     CMP EDX,EDI
004C9446  75 08                     JNZ 0x004c9450
004C9448  39 99 75 03 00 00         CMP dword ptr [ECX + 0x375],EBX
004C944E  74 32                     JZ 0x004c9482
LAB_004c9450:
004C9450  8B B1 D4 03 00 00         MOV ESI,dword ptr [ECX + 0x3d4]
004C9456  85 F6                     TEST ESI,ESI
004C9458  74 2D                     JZ 0x004c9487
004C945A  8B 89 07 06 00 00         MOV ECX,dword ptr [ECX + 0x607]
004C9460  85 C9                     TEST ECX,ECX
004C9462  74 23                     JZ 0x004c9487
004C9464  33 D2                     XOR EDX,EDX
004C9466  85 F6                     TEST ESI,ESI
004C9468  7E 1D                     JLE 0x004c9487
LAB_004c946a:
004C946A  39 39                     CMP dword ptr [ECX],EDI
004C946C  75 05                     JNZ 0x004c9473
004C946E  39 59 10                  CMP dword ptr [ECX + 0x10],EBX
004C9471  74 0F                     JZ 0x004c9482
LAB_004c9473:
004C9473  42                        INC EDX
004C9474  83 C1 27                  ADD ECX,0x27
004C9477  3B D6                     CMP EDX,ESI
004C9479  7C EF                     JL 0x004c946a
004C947B  5F                        POP EDI
004C947C  5E                        POP ESI
004C947D  5B                        POP EBX
004C947E  5D                        POP EBP
004C947F  C2 08 00                  RET 0x8
LAB_004c9482:
004C9482  B8 01 00 00 00            MOV EAX,0x1
LAB_004c9487:
004C9487  5F                        POP EDI
004C9488  5E                        POP ESI
004C9489  5B                        POP EBX
004C948A  5D                        POP EBP
004C948B  C2 08 00                  RET 0x8
