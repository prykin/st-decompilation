FUN_005800e0:
005800E0  55                        PUSH EBP
005800E1  8B EC                     MOV EBP,ESP
005800E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005800E6  56                        PUSH ESI
005800E7  8B F1                     MOV ESI,ECX
005800E9  6A 01                     PUSH 0x1
005800EB  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
005800F1  03 C2                     ADD EAX,EDX
005800F3  50                        PUSH EAX
005800F4  E8 7A 28 E8 FF            CALL 0x00402973
005800F9  83 BE 5D 02 00 00 01      CMP dword ptr [ESI + 0x25d],0x1
00580100  0F 85 82 00 00 00         JNZ 0x00580188
00580106  66 8B 86 45 02 00 00      MOV AX,word ptr [ESI + 0x245]
0058010D  66 8B 8E 4D 02 00 00      MOV CX,word ptr [ESI + 0x24d]
00580114  66 8B 96 49 02 00 00      MOV DX,word ptr [ESI + 0x249]
0058011B  57                        PUSH EDI
0058011C  66 85 C0                  TEST AX,AX
0058011F  7C 52                     JL 0x00580173
00580121  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00580128  66 3B C7                  CMP AX,DI
0058012B  7D 46                     JGE 0x00580173
0058012D  66 85 D2                  TEST DX,DX
00580130  7C 41                     JL 0x00580173
00580132  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00580139  7D 38                     JGE 0x00580173
0058013B  66 85 C9                  TEST CX,CX
0058013E  7C 33                     JL 0x00580173
00580140  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00580147  7D 2A                     JGE 0x00580173
00580149  53                        PUSH EBX
0058014A  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00580151  0F BF C9                  MOVSX ECX,CX
00580154  0F AF D9                  IMUL EBX,ECX
00580157  0F BF CF                  MOVSX ECX,DI
0058015A  0F BF D2                  MOVSX EDX,DX
0058015D  0F AF CA                  IMUL ECX,EDX
00580160  0F BF C0                  MOVSX EAX,AX
00580163  03 D9                     ADD EBX,ECX
00580165  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0058016B  03 D8                     ADD EBX,EAX
0058016D  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
00580170  5B                        POP EBX
00580171  EB 02                     JMP 0x00580175
LAB_00580173:
00580173  33 C9                     XOR ECX,ECX
LAB_00580175:
00580175  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00580178  8B 86 69 02 00 00         MOV EAX,dword ptr [ESI + 0x269]
0058017E  3B D0                     CMP EDX,EAX
00580180  5F                        POP EDI
00580181  75 05                     JNZ 0x00580188
00580183  E8 60 5D E8 FF            CALL 0x00405ee8
LAB_00580188:
00580188  5E                        POP ESI
00580189  5D                        POP EBP
0058018A  C2 04 00                  RET 0x4
