FUN_005801c0:
005801C0  55                        PUSH EBP
005801C1  8B EC                     MOV EBP,ESP
005801C3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005801C6  56                        PUSH ESI
005801C7  8B F1                     MOV ESI,ECX
005801C9  6A 01                     PUSH 0x1
005801CB  8B 86 59 02 00 00         MOV EAX,dword ptr [ESI + 0x259]
005801D1  2B C2                     SUB EAX,EDX
005801D3  50                        PUSH EAX
005801D4  E8 9A 27 E8 FF            CALL 0x00402973
005801D9  83 BE 5D 02 00 00 01      CMP dword ptr [ESI + 0x25d],0x1
005801E0  0F 85 82 00 00 00         JNZ 0x00580268
005801E6  66 8B 86 45 02 00 00      MOV AX,word ptr [ESI + 0x245]
005801ED  66 8B 8E 4D 02 00 00      MOV CX,word ptr [ESI + 0x24d]
005801F4  66 8B 96 49 02 00 00      MOV DX,word ptr [ESI + 0x249]
005801FB  57                        PUSH EDI
005801FC  66 85 C0                  TEST AX,AX
005801FF  7C 52                     JL 0x00580253
00580201  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00580208  66 3B C7                  CMP AX,DI
0058020B  7D 46                     JGE 0x00580253
0058020D  66 85 D2                  TEST DX,DX
00580210  7C 41                     JL 0x00580253
00580212  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00580219  7D 38                     JGE 0x00580253
0058021B  66 85 C9                  TEST CX,CX
0058021E  7C 33                     JL 0x00580253
00580220  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00580227  7D 2A                     JGE 0x00580253
00580229  53                        PUSH EBX
0058022A  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00580231  0F BF C9                  MOVSX ECX,CX
00580234  0F AF D9                  IMUL EBX,ECX
00580237  0F BF CF                  MOVSX ECX,DI
0058023A  0F BF D2                  MOVSX EDX,DX
0058023D  0F AF CA                  IMUL ECX,EDX
00580240  0F BF C0                  MOVSX EAX,AX
00580243  03 D9                     ADD EBX,ECX
00580245  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0058024B  03 D8                     ADD EBX,EAX
0058024D  8B 0C D9                  MOV ECX,dword ptr [ECX + EBX*0x8]
00580250  5B                        POP EBX
00580251  EB 02                     JMP 0x00580255
LAB_00580253:
00580253  33 C9                     XOR ECX,ECX
LAB_00580255:
00580255  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
00580258  8B 86 69 02 00 00         MOV EAX,dword ptr [ESI + 0x269]
0058025E  3B D0                     CMP EDX,EAX
00580260  5F                        POP EDI
00580261  75 05                     JNZ 0x00580268
00580263  E8 80 5C E8 FF            CALL 0x00405ee8
LAB_00580268:
00580268  5E                        POP ESI
00580269  5D                        POP EBP
0058026A  C2 04 00                  RET 0x4
