FUN_00496a90:
00496A90  55                        PUSH EBP
00496A91  8B EC                     MOV EBP,ESP
00496A93  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00496A96  56                        PUSH ESI
00496A97  57                        PUSH EDI
00496A98  83 C8 FF                  OR EAX,0xffffffff
00496A9B  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
00496AA1  8B 35 70 B2 7F 00         MOV ESI,dword ptr [0x007fb270]
00496AA7  33 D2                     XOR EDX,EDX
00496AA9  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
00496AAC  85 FF                     TEST EDI,EDI
00496AAE  7E 4B                     JLE 0x00496afb
00496AB0  53                        PUSH EBX
LAB_00496ab1:
00496AB1  3B 56 0C                  CMP EDX,dword ptr [ESI + 0xc]
00496AB4  73 0D                     JNC 0x00496ac3
00496AB6  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00496AB9  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
00496ABC  0F AF CA                  IMUL ECX,EDX
00496ABF  03 CB                     ADD ECX,EBX
00496AC1  EB 02                     JMP 0x00496ac5
LAB_00496ac3:
00496AC3  33 C9                     XOR ECX,ECX
LAB_00496ac5:
00496AC5  8B 59 10                  MOV EBX,dword ptr [ECX + 0x10]
00496AC8  3B 5D 18                  CMP EBX,dword ptr [EBP + 0x18]
00496ACB  75 28                     JNZ 0x00496af5
00496ACD  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00496AD0  8B C2                     MOV EAX,EDX
00496AD2  39 19                     CMP dword ptr [ECX],EBX
00496AD4  75 10                     JNZ 0x00496ae6
00496AD6  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00496AD9  39 59 04                  CMP dword ptr [ECX + 0x4],EBX
00496ADC  75 08                     JNZ 0x00496ae6
00496ADE  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00496AE1  39 59 08                  CMP dword ptr [ECX + 0x8],EBX
00496AE4  74 0F                     JZ 0x00496af5
LAB_00496ae6:
00496AE6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00496AE9  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
00496AEF  8B 35 70 B2 7F 00         MOV ESI,dword ptr [0x007fb270]
LAB_00496af5:
00496AF5  42                        INC EDX
00496AF6  3B D7                     CMP EDX,EDI
00496AF8  7C B7                     JL 0x00496ab1
00496AFA  5B                        POP EBX
LAB_00496afb:
00496AFB  5F                        POP EDI
00496AFC  5E                        POP ESI
00496AFD  5D                        POP EBP
00496AFE  C2 18 00                  RET 0x18
