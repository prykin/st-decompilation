FUN_0043f380:
0043F380  55                        PUSH EBP
0043F381  8B EC                     MOV EBP,ESP
0043F383  83 EC 1C                  SUB ESP,0x1c
0043F386  0F BF 45 1C               MOVSX EAX,word ptr [EBP + 0x1c]
0043F38A  53                        PUSH EBX
0043F38B  56                        PUSH ESI
0043F38C  0F BF 4D 20               MOVSX ECX,word ptr [EBP + 0x20]
0043F390  57                        PUSH EDI
0043F391  0F BF 7D 10               MOVSX EDI,word ptr [EBP + 0x10]
0043F395  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0043F398  8D 5C 38 FF               LEA EBX,[EAX + EDI*0x1 + -0x1]
0043F39C  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
0043F3A0  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0043F3A3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0043F3A6  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
0043F3AA  0F BF 45 18               MOVSX EAX,word ptr [EBP + 0x18]
0043F3AE  0F BF 4D 24               MOVSX ECX,word ptr [EBP + 0x24]
0043F3B2  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0043F3B5  8D 54 01 FF               LEA EDX,[ECX + EAX*0x1 + -0x1]
0043F3B9  33 C9                     XOR ECX,ECX
0043F3BB  3B F9                     CMP EDI,ECX
0043F3BD  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0043F3C0  7D 05                     JGE 0x0043f3c7
0043F3C2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0043F3C5  8B F9                     MOV EDI,ECX
LAB_0043f3c7:
0043F3C7  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0043F3CE  8D 71 FF                  LEA ESI,[ECX + -0x1]
0043F3D1  3B DE                     CMP EBX,ESI
0043F3D3  7E 03                     JLE 0x0043f3d8
0043F3D5  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_0043f3d8:
0043F3D8  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0043F3DB  85 F6                     TEST ESI,ESI
0043F3DD  7D 07                     JGE 0x0043f3e6
0043F3DF  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
LAB_0043f3e6:
0043F3E6  0F BF 35 42 B2 7F 00      MOVSX ESI,word ptr [0x007fb242]
0043F3ED  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0043F3F0  4E                        DEC ESI
0043F3F1  3B DE                     CMP EBX,ESI
0043F3F3  7E 03                     JLE 0x0043f3f8
0043F3F5  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
LAB_0043f3f8:
0043F3F8  85 C0                     TEST EAX,EAX
0043F3FA  7D 02                     JGE 0x0043f3fe
0043F3FC  33 C0                     XOR EAX,EAX
LAB_0043f3fe:
0043F3FE  0F BF 35 44 B2 7F 00      MOVSX ESI,word ptr [0x007fb244]
0043F405  4E                        DEC ESI
0043F406  3B D6                     CMP EDX,ESI
0043F408  7E 02                     JLE 0x0043f40c
0043F40A  8B D6                     MOV EDX,ESI
LAB_0043f40c:
0043F40C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0043F413  0F AF 4D 10               IMUL ECX,dword ptr [EBP + 0x10]
0043F417  8D 70 FF                  LEA ESI,[EAX + -0x1]
0043F41A  0F AF F3                  IMUL ESI,EBX
0043F41D  8B DF                     MOV EBX,EDI
0043F41F  03 DE                     ADD EBX,ESI
0043F421  03 CB                     ADD ECX,EBX
0043F423  3B C2                     CMP EAX,EDX
0043F425  0F 8F D5 00 00 00         JG 0x0043f500
0043F42B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0043F42E  2B D0                     SUB EDX,EAX
0043F430  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0043F436  42                        INC EDX
0043F437  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0043F43A  EB 03                     JMP 0x0043f43f
LAB_0043f43c:
0043F43C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
LAB_0043f43f:
0043F43F  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0043F446  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0043F449  03 CA                     ADD ECX,EDX
0043F44B  0F BF D0                  MOVSX EDX,AX
0043F44E  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
0043F451  2B CA                     SUB ECX,EDX
0043F453  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0043F456  3B F2                     CMP ESI,EDX
0043F458  0F 8F 95 00 00 00         JG 0x0043f4f3
0043F45E  2B D6                     SUB EDX,ESI
0043F460  42                        INC EDX
0043F461  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
LAB_0043f464:
0043F464  0F BF F0                  MOVSX ESI,AX
0043F467  03 CE                     ADD ECX,ESI
0043F469  3B FB                     CMP EDI,EBX
0043F46B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0043F46E  7F 79                     JG 0x0043f4e9
0043F470  8D 3C CD F8 FF FF FF      LEA EDI,[ECX*0x8 + 0xfffffff8]
0043F477  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0043F47A  2B D9                     SUB EBX,ECX
0043F47C  43                        INC EBX
LAB_0043f47d:
0043F47D  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0043F482  83 C7 08                  ADD EDI,0x8
0043F485  8B 0C 07                  MOV ECX,dword ptr [EDI + EAX*0x1]
0043F488  85 C9                     TEST ECX,ECX
0043F48A  74 48                     JZ 0x0043f4d4
0043F48C  0F BE 55 08               MOVSX EDX,byte ptr [EBP + 0x8]
0043F490  39 51 24                  CMP dword ptr [ECX + 0x24],EDX
0043F493  75 3F                     JNZ 0x0043f4d4
0043F495  8B 01                     MOV EAX,dword ptr [ECX]
0043F497  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0043F49A  52                        PUSH EDX
0043F49B  FF 50 74                  CALL dword ptr [EAX + 0x74]
0043F49E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043F4A1  8D 75 E4                  LEA ESI,[EBP + -0x1c]
LAB_0043f4a4:
0043F4A4  8A 10                     MOV DL,byte ptr [EAX]
0043F4A6  8A CA                     MOV CL,DL
0043F4A8  3A 16                     CMP DL,byte ptr [ESI]
0043F4AA  75 1C                     JNZ 0x0043f4c8
0043F4AC  84 C9                     TEST CL,CL
0043F4AE  74 14                     JZ 0x0043f4c4
0043F4B0  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0043F4B3  8A CA                     MOV CL,DL
0043F4B5  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
0043F4B8  75 0E                     JNZ 0x0043f4c8
0043F4BA  83 C0 02                  ADD EAX,0x2
0043F4BD  83 C6 02                  ADD ESI,0x2
0043F4C0  84 C9                     TEST CL,CL
0043F4C2  75 E0                     JNZ 0x0043f4a4
LAB_0043f4c4:
0043F4C4  33 C0                     XOR EAX,EAX
0043F4C6  EB 05                     JMP 0x0043f4cd
LAB_0043f4c8:
0043F4C8  1B C0                     SBB EAX,EAX
0043F4CA  83 D8 FF                  SBB EAX,-0x1
LAB_0043f4cd:
0043F4CD  85 C0                     TEST EAX,EAX
0043F4CF  75 03                     JNZ 0x0043f4d4
0043F4D1  FF 45 1C                  INC dword ptr [EBP + 0x1c]
LAB_0043f4d4:
0043F4D4  4B                        DEC EBX
0043F4D5  75 A6                     JNZ 0x0043f47d
0043F4D7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0043F4DA  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0043F4DD  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0043F4E3  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0043F4E6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_0043f4e9:
0043F4E9  4A                        DEC EDX
0043F4EA  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
0043F4ED  0F 85 71 FF FF FF         JNZ 0x0043f464
LAB_0043f4f3:
0043F4F3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0043F4F6  49                        DEC ECX
0043F4F7  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0043F4FA  0F 85 3C FF FF FF         JNZ 0x0043f43c
LAB_0043f500:
0043F500  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
0043F504  5F                        POP EDI
0043F505  5E                        POP ESI
0043F506  5B                        POP EBX
0043F507  8B E5                     MOV ESP,EBP
0043F509  5D                        POP EBP
0043F50A  C2 20 00                  RET 0x20
