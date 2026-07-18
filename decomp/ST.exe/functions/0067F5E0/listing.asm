FUN_0067f5e0:
0067F5E0  55                        PUSH EBP
0067F5E1  8B EC                     MOV EBP,ESP
0067F5E3  83 EC 48                  SUB ESP,0x48
0067F5E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067F5EB  53                        PUSH EBX
0067F5EC  56                        PUSH ESI
0067F5ED  57                        PUSH EDI
0067F5EE  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067F5F1  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067F5F4  6A 00                     PUSH 0x0
0067F5F6  52                        PUSH EDX
0067F5F7  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067F5FE  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067F601  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067F607  E8 E4 E1 0A 00            CALL 0x0072d7f0
0067F60C  83 C4 08                  ADD ESP,0x8
0067F60F  85 C0                     TEST EAX,EAX
0067F611  0F 85 B8 00 00 00         JNZ 0x0067f6cf
0067F617  A1 2C 8A 84 00            MOV EAX,[0x00848a2c]
0067F61C  33 FF                     XOR EDI,EDI
0067F61E  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0067F621  85 D2                     TEST EDX,EDX
0067F623  7E 49                     JLE 0x0067f66e
0067F625  3B FA                     CMP EDI,EDX
0067F627  7D 0E                     JGE 0x0067f637
LAB_0067f629:
0067F629  8B 0D 2C 8A 84 00         MOV ECX,dword ptr [0x00848a2c]
0067F62F  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0067F632  8B 34 B8                  MOV ESI,dword ptr [EAX + EDI*0x4]
0067F635  EB 02                     JMP 0x0067f639
LAB_0067f637:
0067F637  33 F6                     XOR ESI,ESI
LAB_0067f639:
0067F639  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_0067f63c:
0067F63C  8A 18                     MOV BL,byte ptr [EAX]
0067F63E  8A CB                     MOV CL,BL
0067F640  3A 1E                     CMP BL,byte ptr [ESI]
0067F642  75 1C                     JNZ 0x0067f660
0067F644  84 C9                     TEST CL,CL
0067F646  74 14                     JZ 0x0067f65c
0067F648  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
0067F64B  8A CB                     MOV CL,BL
0067F64D  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
0067F650  75 0E                     JNZ 0x0067f660
0067F652  83 C0 02                  ADD EAX,0x2
0067F655  83 C6 02                  ADD ESI,0x2
0067F658  84 C9                     TEST CL,CL
0067F65A  75 E0                     JNZ 0x0067f63c
LAB_0067f65c:
0067F65C  33 C0                     XOR EAX,EAX
0067F65E  EB 05                     JMP 0x0067f665
LAB_0067f660:
0067F660  1B C0                     SBB EAX,EAX
0067F662  83 D8 FF                  SBB EAX,-0x1
LAB_0067f665:
0067F665  85 C0                     TEST EAX,EAX
0067F667  74 62                     JZ 0x0067f6cb
0067F669  47                        INC EDI
0067F66A  3B FA                     CMP EDI,EDX
0067F66C  7C BB                     JL 0x0067f629
LAB_0067f66e:
0067F66E  83 CE FF                  OR ESI,0xffffffff
LAB_0067f671:
0067F671  85 F6                     TEST ESI,ESI
0067F673  7D 45                     JGE 0x0067f6ba
0067F675  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067F678  8B 15 2C 8A 84 00         MOV EDX,dword ptr [0x00848a2c]
0067F67E  51                        PUSH ECX
0067F67F  52                        PUSH EDX
0067F680  E8 1B 64 03 00            CALL 0x006b5aa0
0067F685  8B 0D 28 8A 84 00         MOV ECX,dword ptr [0x00848a28]
0067F68B  8B F0                     MOV ESI,EAX
0067F68D  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067F690  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067F697  50                        PUSH EAX
0067F698  51                        PUSH ECX
0067F699  E8 22 EB 02 00            CALL 0x006ae1c0
0067F69E  3B C6                     CMP EAX,ESI
0067F6A0  74 18                     JZ 0x0067f6ba
0067F6A2  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0067F6A8  68 26 01 00 00            PUSH 0x126
0067F6AD  68 D8 55 7D 00            PUSH 0x7d55d8
0067F6B2  52                        PUSH EDX
0067F6B3  6A FB                     PUSH -0x5
0067F6B5  E8 86 67 02 00            CALL 0x006a5e40
LAB_0067f6ba:
0067F6BA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0067F6BD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0067F6C2  8B C6                     MOV EAX,ESI
0067F6C4  5F                        POP EDI
0067F6C5  5E                        POP ESI
0067F6C6  5B                        POP EBX
0067F6C7  8B E5                     MOV ESP,EBP
0067F6C9  5D                        POP EBP
0067F6CA  C3                        RET
LAB_0067f6cb:
0067F6CB  8B F7                     MOV ESI,EDI
0067F6CD  EB A2                     JMP 0x0067f671
LAB_0067f6cf:
0067F6CF  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067F6D2  85 C0                     TEST EAX,EAX
0067F6D4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067F6DA  7C 03                     JL 0x0067f6df
0067F6DC  83 C8 FF                  OR EAX,0xffffffff
LAB_0067f6df:
0067F6DF  5F                        POP EDI
0067F6E0  5E                        POP ESI
0067F6E1  5B                        POP EBX
0067F6E2  8B E5                     MOV ESP,EBP
0067F6E4  5D                        POP EBP
0067F6E5  C3                        RET
