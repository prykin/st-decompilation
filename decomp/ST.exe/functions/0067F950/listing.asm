FUN_0067f950:
0067F950  55                        PUSH EBP
0067F951  8B EC                     MOV EBP,ESP
0067F953  83 EC 48                  SUB ESP,0x48
0067F956  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067F95B  53                        PUSH EBX
0067F95C  56                        PUSH ESI
0067F95D  57                        PUSH EDI
0067F95E  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067F961  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067F964  6A 00                     PUSH 0x0
0067F966  52                        PUSH EDX
0067F967  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067F96E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067F971  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067F977  E8 74 DE 0A 00            CALL 0x0072d7f0
0067F97C  83 C4 08                  ADD ESP,0x8
0067F97F  85 C0                     TEST EAX,EAX
0067F981  0F 85 B8 00 00 00         JNZ 0x0067fa3f
0067F987  A1 34 8A 84 00            MOV EAX,[0x00848a34]
0067F98C  33 FF                     XOR EDI,EDI
0067F98E  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0067F991  85 D2                     TEST EDX,EDX
0067F993  7E 49                     JLE 0x0067f9de
0067F995  3B FA                     CMP EDI,EDX
0067F997  7D 0E                     JGE 0x0067f9a7
LAB_0067f999:
0067F999  8B 0D 34 8A 84 00         MOV ECX,dword ptr [0x00848a34]
0067F99F  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0067F9A2  8B 34 B8                  MOV ESI,dword ptr [EAX + EDI*0x4]
0067F9A5  EB 02                     JMP 0x0067f9a9
LAB_0067f9a7:
0067F9A7  33 F6                     XOR ESI,ESI
LAB_0067f9a9:
0067F9A9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0067f9ac:
0067F9AC  8A 18                     MOV BL,byte ptr [EAX]
0067F9AE  8A CB                     MOV CL,BL
0067F9B0  3A 1E                     CMP BL,byte ptr [ESI]
0067F9B2  75 1C                     JNZ 0x0067f9d0
0067F9B4  84 C9                     TEST CL,CL
0067F9B6  74 14                     JZ 0x0067f9cc
0067F9B8  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
0067F9BB  8A CB                     MOV CL,BL
0067F9BD  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
0067F9C0  75 0E                     JNZ 0x0067f9d0
0067F9C2  83 C0 02                  ADD EAX,0x2
0067F9C5  83 C6 02                  ADD ESI,0x2
0067F9C8  84 C9                     TEST CL,CL
0067F9CA  75 E0                     JNZ 0x0067f9ac
LAB_0067f9cc:
0067F9CC  33 C0                     XOR EAX,EAX
0067F9CE  EB 05                     JMP 0x0067f9d5
LAB_0067f9d0:
0067F9D0  1B C0                     SBB EAX,EAX
0067F9D2  83 D8 FF                  SBB EAX,-0x1
LAB_0067f9d5:
0067F9D5  85 C0                     TEST EAX,EAX
0067F9D7  74 62                     JZ 0x0067fa3b
0067F9D9  47                        INC EDI
0067F9DA  3B FA                     CMP EDI,EDX
0067F9DC  7C BB                     JL 0x0067f999
LAB_0067f9de:
0067F9DE  83 CE FF                  OR ESI,0xffffffff
LAB_0067f9e1:
0067F9E1  85 F6                     TEST ESI,ESI
0067F9E3  7D 45                     JGE 0x0067fa2a
0067F9E5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067F9E8  8B 15 34 8A 84 00         MOV EDX,dword ptr [0x00848a34]
0067F9EE  51                        PUSH ECX
0067F9EF  52                        PUSH EDX
0067F9F0  E8 AB 60 03 00            CALL 0x006b5aa0
0067F9F5  8B 0D 30 8A 84 00         MOV ECX,dword ptr [0x00848a30]
0067F9FB  8B F0                     MOV ESI,EAX
0067F9FD  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067FA00  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067FA07  50                        PUSH EAX
0067FA08  51                        PUSH ECX
0067FA09  E8 B2 E7 02 00            CALL 0x006ae1c0
0067FA0E  3B C6                     CMP EAX,ESI
0067FA10  74 18                     JZ 0x0067fa2a
0067FA12  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0067FA18  68 95 01 00 00            PUSH 0x195
0067FA1D  68 D8 55 7D 00            PUSH 0x7d55d8
0067FA22  52                        PUSH EDX
0067FA23  6A FB                     PUSH -0x5
0067FA25  E8 16 64 02 00            CALL 0x006a5e40
LAB_0067fa2a:
0067FA2A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0067FA2D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067FA32  8B C6                     MOV EAX,ESI
0067FA34  5F                        POP EDI
0067FA35  5E                        POP ESI
0067FA36  5B                        POP EBX
0067FA37  8B E5                     MOV ESP,EBP
0067FA39  5D                        POP EBP
0067FA3A  C3                        RET
LAB_0067fa3b:
0067FA3B  8B F7                     MOV ESI,EDI
0067FA3D  EB A2                     JMP 0x0067f9e1
LAB_0067fa3f:
0067FA3F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067FA42  85 C0                     TEST EAX,EAX
0067FA44  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067FA4A  7C 03                     JL 0x0067fa4f
0067FA4C  83 C8 FF                  OR EAX,0xffffffff
LAB_0067fa4f:
0067FA4F  5F                        POP EDI
0067FA50  5E                        POP ESI
0067FA51  5B                        POP EBX
0067FA52  8B E5                     MOV ESP,EBP
0067FA54  5D                        POP EBP
0067FA55  C3                        RET
