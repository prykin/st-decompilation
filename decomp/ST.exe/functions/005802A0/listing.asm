FUN_005802a0:
005802A0  55                        PUSH EBP
005802A1  8B EC                     MOV EBP,ESP
005802A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005802A6  56                        PUSH ESI
005802A7  8B F1                     MOV ESI,ECX
005802A9  50                        PUSH EAX
005802AA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005802AD  51                        PUSH ECX
005802AE  8B CE                     MOV ECX,ESI
005802B0  E8 BE 26 E8 FF            CALL 0x00402973
005802B5  83 BE 5D 02 00 00 01      CMP dword ptr [ESI + 0x25d],0x1
005802BC  0F 85 82 00 00 00         JNZ 0x00580344
005802C2  66 8B 86 45 02 00 00      MOV AX,word ptr [ESI + 0x245]
005802C9  66 8B 8E 4D 02 00 00      MOV CX,word ptr [ESI + 0x24d]
005802D0  66 8B 96 49 02 00 00      MOV DX,word ptr [ESI + 0x249]
005802D7  57                        PUSH EDI
005802D8  66 85 C0                  TEST AX,AX
005802DB  7C 52                     JL 0x0058032f
005802DD  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005802E4  66 3B C7                  CMP AX,DI
005802E7  7D 46                     JGE 0x0058032f
005802E9  66 85 D2                  TEST DX,DX
005802EC  7C 41                     JL 0x0058032f
005802EE  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005802F5  7D 38                     JGE 0x0058032f
005802F7  66 85 C9                  TEST CX,CX
005802FA  7C 33                     JL 0x0058032f
005802FC  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00580303  7D 2A                     JGE 0x0058032f
00580305  53                        PUSH EBX
00580306  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
0058030D  0F BF C9                  MOVSX ECX,CX
00580310  0F AF D9                  IMUL EBX,ECX
00580313  0F BF CF                  MOVSX ECX,DI
00580316  0F BF D2                  MOVSX EDX,DX
00580319  0F AF CA                  IMUL ECX,EDX
0058031C  0F BF C0                  MOVSX EAX,AX
0058031F  03 D9                     ADD EBX,ECX
00580321  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00580327  03 D8                     ADD EBX,EAX
00580329  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
0058032C  5B                        POP EBX
0058032D  EB 02                     JMP 0x00580331
LAB_0058032f:
0058032F  33 C9                     XOR ECX,ECX
LAB_00580331:
00580331  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00580334  8B 86 69 02 00 00         MOV EAX,dword ptr [ESI + 0x269]
0058033A  3B D0                     CMP EDX,EAX
0058033C  5F                        POP EDI
0058033D  75 05                     JNZ 0x00580344
0058033F  E8 A4 5B E8 FF            CALL 0x00405ee8
LAB_00580344:
00580344  5E                        POP ESI
00580345  5D                        POP EBP
00580346  C2 08 00                  RET 0x8
