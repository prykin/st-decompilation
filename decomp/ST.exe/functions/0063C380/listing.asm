FUN_0063c380:
0063C380  55                        PUSH EBP
0063C381  8B EC                     MOV EBP,ESP
0063C383  8B 91 8E 02 00 00         MOV EDX,dword ptr [ECX + 0x28e]
0063C389  56                        PUSH ESI
0063C38A  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0063C38D  8B 81 6E 02 00 00         MOV EAX,dword ptr [ECX + 0x26e]
0063C393  2B F2                     SUB ESI,EDX
0063C395  8B 91 96 02 00 00         MOV EDX,dword ptr [ECX + 0x296]
0063C39B  0F AF D6                  IMUL EDX,ESI
0063C39E  0F AF D6                  IMUL EDX,ESI
0063C3A1  89 81 7A 02 00 00         MOV dword ptr [ECX + 0x27a],EAX
0063C3A7  B8 67 66 66 66            MOV EAX,0x66666667
0063C3AC  F7 EA                     IMUL EDX
0063C3AE  C1 FA 02                  SAR EDX,0x2
0063C3B1  8B C2                     MOV EAX,EDX
0063C3B3  57                        PUSH EDI
0063C3B4  C1 E8 1F                  SHR EAX,0x1f
0063C3B7  03 D0                     ADD EDX,EAX
0063C3B9  33 FF                     XOR EDI,EDI
0063C3BB  0F BF 81 51 02 00 00      MOVSX EAX,word ptr [ECX + 0x251]
0063C3C2  2B C2                     SUB EAX,EDX
0063C3C4  8B 91 92 02 00 00         MOV EDX,dword ptr [ECX + 0x292]
0063C3CA  0F AF D6                  IMUL EDX,ESI
0063C3CD  2B C2                     SUB EAX,EDX
0063C3CF  8B 91 45 02 00 00         MOV EDX,dword ptr [ECX + 0x245]
0063C3D5  83 FA 02                  CMP EDX,0x2
0063C3D8  89 81 6E 02 00 00         MOV dword ptr [ECX + 0x26e],EAX
0063C3DE  75 16                     JNZ 0x0063c3f6
0063C3E0  0F BF 89 57 02 00 00      MOVSX ECX,word ptr [ECX + 0x257]
0063C3E7  3B C1                     CMP EAX,ECX
0063C3E9  7F 64                     JG 0x0063c44f
0063C3EB  5F                        POP EDI
0063C3EC  B8 01 00 00 00            MOV EAX,0x1
0063C3F1  5E                        POP ESI
0063C3F2  5D                        POP EBP
0063C3F3  C2 04 00                  RET 0x4
LAB_0063c3f6:
0063C3F6  66 8B 91 61 02 00 00      MOV DX,word ptr [ECX + 0x261]
0063C3FD  6A 00                     PUSH 0x0
0063C3FF  6A 00                     PUSH 0x0
0063C401  68 A8 00 00 00            PUSH 0xa8
0063C406  52                        PUSH EDX
0063C407  8B 91 5D 02 00 00         MOV EDX,dword ptr [ECX + 0x25d]
0063C40D  52                        PUSH EDX
0063C40E  8B 91 35 02 00 00         MOV EDX,dword ptr [ECX + 0x235]
0063C414  68 50 C3 00 00            PUSH 0xc350
0063C419  52                        PUSH EDX
0063C41A  8B 91 7A 02 00 00         MOV EDX,dword ptr [ECX + 0x27a]
0063C420  81 C1 83 03 00 00         ADD ECX,0x383
0063C426  52                        PUSH EDX
0063C427  8B 91 F3 FE FF FF         MOV EDX,dword ptr [ECX + 0xfffffef3]
0063C42D  52                        PUSH EDX
0063C42E  8B 91 EF FE FF FF         MOV EDX,dword ptr [ECX + 0xfffffeef]
0063C434  52                        PUSH EDX
0063C435  8B 91 E3 FE FF FF         MOV EDX,dword ptr [ECX + 0xfffffee3]
0063C43B  50                        PUSH EAX
0063C43C  8B 81 E7 FE FF FF         MOV EAX,dword ptr [ECX + 0xfffffee7]
0063C442  50                        PUSH EAX
0063C443  52                        PUSH EDX
0063C444  E8 CD 80 DC FF            CALL 0x00404516
0063C449  5F                        POP EDI
0063C44A  5E                        POP ESI
0063C44B  5D                        POP EBP
0063C44C  C2 04 00                  RET 0x4
LAB_0063c44f:
0063C44F  8B C7                     MOV EAX,EDI
0063C451  5F                        POP EDI
0063C452  5E                        POP ESI
0063C453  5D                        POP EBP
0063C454  C2 04 00                  RET 0x4
