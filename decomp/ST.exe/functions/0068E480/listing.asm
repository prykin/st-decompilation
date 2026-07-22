AiTactClassTy::sub_0068E480:
0068E480  55                        PUSH EBP
0068E481  8B EC                     MOV EBP,ESP
0068E483  56                        PUSH ESI
0068E484  8B B1 A5 00 00 00         MOV ESI,dword ptr [ECX + 0xa5]
0068E48A  57                        PUSH EDI
0068E48B  83 C8 FF                  OR EAX,0xffffffff
0068E48E  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
0068E491  33 D2                     XOR EDX,EDX
0068E493  85 FF                     TEST EDI,EDI
0068E495  7E 32                     JLE 0x0068e4c9
0068E497  53                        PUSH EBX
0068E498  66 8B 5D 08               MOV BX,word ptr [EBP + 0x8]
0068E49C  3B D7                     CMP EDX,EDI
LAB_0068e49e:
0068E49E  73 0B                     JNC 0x0068e4ab
0068E4A0  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0068E4A3  0F AF CA                  IMUL ECX,EDX
0068E4A6  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
0068E4A9  EB 02                     JMP 0x0068e4ad
LAB_0068e4ab:
0068E4AB  33 C9                     XOR ECX,ECX
LAB_0068e4ad:
0068E4AD  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
0068E4B0  85 C9                     TEST ECX,ECX
0068E4B2  74 0F                     JZ 0x0068e4c3
0068E4B4  66 39 59 7B               CMP word ptr [ECX + 0x7b],BX
0068E4B8  75 09                     JNZ 0x0068e4c3
0068E4BA  66 83 79 7F FF            CMP word ptr [ECX + 0x7f],-0x1
0068E4BF  7E 02                     JLE 0x0068e4c3
0068E4C1  8B C2                     MOV EAX,EDX
LAB_0068e4c3:
0068E4C3  42                        INC EDX
0068E4C4  3B D7                     CMP EDX,EDI
0068E4C6  7C D6                     JL 0x0068e49e
0068E4C8  5B                        POP EBX
LAB_0068e4c9:
0068E4C9  5F                        POP EDI
0068E4CA  5E                        POP ESI
0068E4CB  5D                        POP EBP
0068E4CC  C2 04 00                  RET 0x4
