FUN_0063c8f0:
0063C8F0  55                        PUSH EBP
0063C8F1  8B EC                     MOV EBP,ESP
0063C8F3  56                        PUSH ESI
0063C8F4  8B F1                     MOV ESI,ECX
0063C8F6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0063C8F9  2B 8E 8E 02 00 00         SUB ECX,dword ptr [ESI + 0x28e]
0063C8FF  0F BF 86 4D 02 00 00      MOVSX EAX,word ptr [ESI + 0x24d]
0063C906  89 86 66 02 00 00         MOV dword ptr [ESI + 0x266],EAX
0063C90C  8B 86 96 02 00 00         MOV EAX,dword ptr [ESI + 0x296]
0063C912  0F AF C1                  IMUL EAX,ECX
0063C915  0F BF 96 4F 02 00 00      MOVSX EDX,word ptr [ESI + 0x24f]
0063C91C  0F AF C1                  IMUL EAX,ECX
0063C91F  89 96 6A 02 00 00         MOV dword ptr [ESI + 0x26a],EDX
0063C925  99                        CDQ
0063C926  2B C2                     SUB EAX,EDX
0063C928  8B D0                     MOV EDX,EAX
0063C92A  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
0063C930  0F AF C1                  IMUL EAX,ECX
0063C933  D1 FA                     SAR EDX,0x1
0063C935  2B C2                     SUB EAX,EDX
0063C937  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0063C93A  B8 67 66 66 66            MOV EAX,0x66666667
0063C93F  F7 E9                     IMUL ECX
0063C941  C1 FA 02                  SAR EDX,0x2
0063C944  8B C2                     MOV EAX,EDX
0063C946  C1 E8 1F                  SHR EAX,0x1f
0063C949  03 D0                     ADD EDX,EAX
0063C94B  83 FA 01                  CMP EDX,0x1
0063C94E  7F 05                     JG 0x0063c955
0063C950  BA 01 00 00 00            MOV EDX,0x1
LAB_0063c955:
0063C955  8B 86 9A 02 00 00         MOV EAX,dword ptr [ESI + 0x29a]
0063C95B  48                        DEC EAX
0063C95C  74 4A                     JZ 0x0063c9a8
0063C95E  48                        DEC EAX
0063C95F  74 25                     JZ 0x0063c986
0063C961  48                        DEC EAX
0063C962  75 63                     JNZ 0x0063c9c7
0063C964  8B 86 6E 02 00 00         MOV EAX,dword ptr [ESI + 0x26e]
0063C96A  2B C2                     SUB EAX,EDX
0063C96C  89 86 6E 02 00 00         MOV dword ptr [ESI + 0x26e],EAX
0063C972  8B C8                     MOV ECX,EAX
0063C974  8B 86 82 02 00 00         MOV EAX,dword ptr [ESI + 0x282]
0063C97A  3B C8                     CMP ECX,EAX
0063C97C  7D 49                     JGE 0x0063c9c7
0063C97E  89 86 6E 02 00 00         MOV dword ptr [ESI + 0x26e],EAX
0063C984  EB 41                     JMP 0x0063c9c7
LAB_0063c986:
0063C986  8B 86 6E 02 00 00         MOV EAX,dword ptr [ESI + 0x26e]
0063C98C  03 C2                     ADD EAX,EDX
0063C98E  89 86 6E 02 00 00         MOV dword ptr [ESI + 0x26e],EAX
0063C994  8B C8                     MOV ECX,EAX
0063C996  8B 86 82 02 00 00         MOV EAX,dword ptr [ESI + 0x282]
0063C99C  3B C8                     CMP ECX,EAX
0063C99E  7E 27                     JLE 0x0063c9c7
0063C9A0  89 86 6E 02 00 00         MOV dword ptr [ESI + 0x26e],EAX
0063C9A6  EB 1F                     JMP 0x0063c9c7
LAB_0063c9a8:
0063C9A8  0F BF 86 51 02 00 00      MOVSX EAX,word ptr [ESI + 0x251]
0063C9AF  8B 8E 82 02 00 00         MOV ECX,dword ptr [ESI + 0x282]
0063C9B5  2B C2                     SUB EAX,EDX
0063C9B7  3B C1                     CMP EAX,ECX
0063C9B9  89 86 6E 02 00 00         MOV dword ptr [ESI + 0x26e],EAX
0063C9BF  7D 06                     JGE 0x0063c9c7
0063C9C1  89 8E 6E 02 00 00         MOV dword ptr [ESI + 0x26e],ECX
LAB_0063c9c7:
0063C9C7  8B CE                     MOV ECX,ESI
0063C9C9  E8 68 65 DC FF            CALL 0x00402f36
0063C9CE  85 C0                     TEST EAX,EAX
0063C9D0  75 1D                     JNZ 0x0063c9ef
0063C9D2  0F BF 8E 57 02 00 00      MOVSX ECX,word ptr [ESI + 0x257]
0063C9D9  39 8E 6E 02 00 00         CMP dword ptr [ESI + 0x26e],ECX
0063C9DF  7D 0E                     JGE 0x0063c9ef
0063C9E1  80 BE 9E 02 00 00 01      CMP byte ptr [ESI + 0x29e],0x1
0063C9E8  75 05                     JNZ 0x0063c9ef
0063C9EA  B8 04 00 00 00            MOV EAX,0x4
LAB_0063c9ef:
0063C9EF  5E                        POP ESI
0063C9F0  5D                        POP EBP
0063C9F1  C2 04 00                  RET 0x4
