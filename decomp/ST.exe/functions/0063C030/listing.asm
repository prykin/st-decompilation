FUN_0063c030:
0063C030  55                        PUSH EBP
0063C031  8B EC                     MOV EBP,ESP
0063C033  0F BF 91 4D 02 00 00      MOVSX EDX,word ptr [ECX + 0x24d]
0063C03A  56                        PUSH ESI
0063C03B  57                        PUSH EDI
0063C03C  0F BF B1 4F 02 00 00      MOVSX ESI,word ptr [ECX + 0x24f]
0063C043  0F BF B9 51 02 00 00      MOVSX EDI,word ptr [ECX + 0x251]
0063C04A  85 D2                     TEST EDX,EDX
0063C04C  89 91 66 02 00 00         MOV dword ptr [ECX + 0x266],EDX
0063C052  89 B1 6A 02 00 00         MOV dword ptr [ECX + 0x26a],ESI
0063C058  89 B9 6E 02 00 00         MOV dword ptr [ECX + 0x26e],EDI
0063C05E  89 91 72 02 00 00         MOV dword ptr [ECX + 0x272],EDX
0063C064  89 B1 76 02 00 00         MOV dword ptr [ECX + 0x276],ESI
0063C06A  89 B9 7A 02 00 00         MOV dword ptr [ECX + 0x27a],EDI
0063C070  B8 79 19 8C 02            MOV EAX,0x28c1979
0063C075  7C 10                     JL 0x0063c087
0063C077  F7 EA                     IMUL EDX
0063C079  D1 FA                     SAR EDX,0x1
0063C07B  8B C2                     MOV EAX,EDX
0063C07D  C1 E8 1F                  SHR EAX,0x1f
0063C080  03 D0                     ADD EDX,EAX
0063C082  0F BF C2                  MOVSX EAX,DX
0063C085  EB 0F                     JMP 0x0063c096
LAB_0063c087:
0063C087  F7 EA                     IMUL EDX
0063C089  D1 FA                     SAR EDX,0x1
0063C08B  8B C2                     MOV EAX,EDX
0063C08D  C1 E8 1F                  SHR EAX,0x1f
0063C090  03 D0                     ADD EDX,EAX
0063C092  0F BF C2                  MOVSX EAX,DX
0063C095  48                        DEC EAX
LAB_0063c096:
0063C096  89 81 86 02 00 00         MOV dword ptr [ECX + 0x286],EAX
0063C09C  B8 79 19 8C 02            MOV EAX,0x28c1979
0063C0A1  85 F6                     TEST ESI,ESI
0063C0A3  7C 10                     JL 0x0063c0b5
0063C0A5  F7 EE                     IMUL ESI
0063C0A7  D1 FA                     SAR EDX,0x1
0063C0A9  8B C2                     MOV EAX,EDX
0063C0AB  C1 E8 1F                  SHR EAX,0x1f
0063C0AE  03 D0                     ADD EDX,EAX
0063C0B0  0F BF C2                  MOVSX EAX,DX
0063C0B3  EB 0F                     JMP 0x0063c0c4
LAB_0063c0b5:
0063C0B5  F7 EE                     IMUL ESI
0063C0B7  D1 FA                     SAR EDX,0x1
0063C0B9  8B C2                     MOV EAX,EDX
0063C0BB  C1 E8 1F                  SHR EAX,0x1f
0063C0BE  03 D0                     ADD EDX,EAX
0063C0C0  0F BF C2                  MOVSX EAX,DX
0063C0C3  48                        DEC EAX
LAB_0063c0c4:
0063C0C4  89 81 8A 02 00 00         MOV dword ptr [ECX + 0x28a],EAX
0063C0CA  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
0063C0D0  83 F8 02                  CMP EAX,0x2
0063C0D3  75 09                     JNZ 0x0063c0de
0063C0D5  66 C7 81 57 02 00 00 51 04  MOV word ptr [ECX + 0x257],0x451
LAB_0063c0de:
0063C0DE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0063C0E1  89 B9 7E 02 00 00         MOV dword ptr [ECX + 0x27e],EDI
0063C0E7  0F BF 91 57 02 00 00      MOVSX EDX,word ptr [ECX + 0x257]
0063C0EE  89 81 8E 02 00 00         MOV dword ptr [ECX + 0x28e],EAX
0063C0F4  B8 01 00 00 00            MOV EAX,0x1
0063C0F9  5F                        POP EDI
0063C0FA  89 91 82 02 00 00         MOV dword ptr [ECX + 0x282],EDX
0063C100  C7 81 92 02 00 00 41 00 00 00  MOV dword ptr [ECX + 0x292],0x41
0063C10A  89 81 96 02 00 00         MOV dword ptr [ECX + 0x296],EAX
0063C110  89 81 9A 02 00 00         MOV dword ptr [ECX + 0x29a],EAX
0063C116  88 81 9E 02 00 00         MOV byte ptr [ECX + 0x29e],AL
0063C11C  5E                        POP ESI
0063C11D  5D                        POP EBP
0063C11E  C2 04 00                  RET 0x4
