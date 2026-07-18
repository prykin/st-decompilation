FUN_00603120:
00603120  55                        PUSH EBP
00603121  8B EC                     MOV EBP,ESP
00603123  83 EC 08                  SUB ESP,0x8
00603126  66 8B 91 59 02 00 00      MOV DX,word ptr [ECX + 0x259]
0060312D  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
00603133  53                        PUSH EBX
00603134  56                        PUSH ESI
00603135  66 8B B1 55 02 00 00      MOV SI,word ptr [ECX + 0x255]
0060313C  57                        PUSH EDI
0060313D  66 8B B9 57 02 00 00      MOV DI,word ptr [ECX + 0x257]
00603144  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00603147  66 85 F6                  TEST SI,SI
0060314A  7C 63                     JL 0x006031af
0060314C  66 3B F0                  CMP SI,AX
0060314F  7D 5E                     JGE 0x006031af
00603151  66 85 FF                  TEST DI,DI
00603154  7C 59                     JL 0x006031af
00603156  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
0060315D  7D 50                     JGE 0x006031af
0060315F  66 85 D2                  TEST DX,DX
00603162  7C 4B                     JL 0x006031af
00603164  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0060316B  7D 42                     JGE 0x006031af
0060316D  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00603174  0F BF DA                  MOVSX EBX,DX
00603177  0F AF CB                  IMUL ECX,EBX
0060317A  0F BF C0                  MOVSX EAX,AX
0060317D  0F BF DF                  MOVSX EBX,DI
00603180  0F AF C3                  IMUL EAX,EBX
00603183  03 C8                     ADD ECX,EAX
00603185  0F BF C6                  MOVSX EAX,SI
00603188  03 C8                     ADD ECX,EAX
0060318A  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0060318F  8B 04 C8                  MOV EAX,dword ptr [EAX + ECX*0x8]
00603192  85 C0                     TEST EAX,EAX
00603194  74 16                     JZ 0x006031ac
00603196  81 78 20 E8 03 00 00      CMP dword ptr [EAX + 0x20],0x3e8
0060319D  75 0D                     JNZ 0x006031ac
0060319F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006031A2  B8 01 00 00 00            MOV EAX,0x1
006031A7  E9 5C 01 00 00            JMP 0x00603308
LAB_006031ac:
006031AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_006031af:
006031AF  8B 81 45 02 00 00         MOV EAX,dword ptr [ECX + 0x245]
006031B5  85 C0                     TEST EAX,EAX
006031B7  0F 85 63 01 00 00         JNZ 0x00603320
006031BD  8D 5E 01                  LEA EBX,[ESI + 0x1]
006031C0  66 85 DB                  TEST BX,BX
006031C3  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006031C6  7C 71                     JL 0x00603239
006031C8  66 3B 1D 40 B2 7F 00      CMP BX,word ptr [0x007fb240]
006031CF  7D 68                     JGE 0x00603239
006031D1  66 85 FF                  TEST DI,DI
006031D4  7C 63                     JL 0x00603239
006031D6  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
006031DD  7D 5A                     JGE 0x00603239
006031DF  66 85 D2                  TEST DX,DX
006031E2  7C 55                     JL 0x00603239
006031E4  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
006031EB  7D 4C                     JGE 0x00603239
006031ED  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
006031F4  0F BF C2                  MOVSX EAX,DX
006031F7  0F AF C8                  IMUL ECX,EAX
006031FA  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00603201  0F BF DF                  MOVSX EBX,DI
00603204  0F AF C3                  IMUL EAX,EBX
00603207  8D 5E 01                  LEA EBX,[ESI + 0x1]
0060320A  03 C8                     ADD ECX,EAX
0060320C  0F BF C3                  MOVSX EAX,BX
0060320F  03 C8                     ADD ECX,EAX
00603211  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00603216  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00603219  8B 04 C8                  MOV EAX,dword ptr [EAX + ECX*0x8]
0060321C  85 C0                     TEST EAX,EAX
0060321E  74 16                     JZ 0x00603236
00603220  81 78 20 E8 03 00 00      CMP dword ptr [EAX + 0x20],0x3e8
00603227  75 0D                     JNZ 0x00603236
00603229  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0060322C  B8 01 00 00 00            MOV EAX,0x1
00603231  E9 D2 00 00 00            JMP 0x00603308
LAB_00603236:
00603236  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_00603239:
00603239  47                        INC EDI
0060323A  66 85 F6                  TEST SI,SI
0060323D  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00603240  7C 62                     JL 0x006032a4
00603242  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
00603249  7D 59                     JGE 0x006032a4
0060324B  66 85 FF                  TEST DI,DI
0060324E  7C 54                     JL 0x006032a4
00603250  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
00603257  7D 4B                     JGE 0x006032a4
00603259  66 85 D2                  TEST DX,DX
0060325C  7C 46                     JL 0x006032a4
0060325E  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00603265  7D 3D                     JGE 0x006032a4
00603267  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
0060326E  0F BF DA                  MOVSX EBX,DX
00603271  0F AF C3                  IMUL EAX,EBX
00603274  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
0060327B  0F BF FF                  MOVSX EDI,DI
0060327E  0F AF DF                  IMUL EBX,EDI
00603281  0F BF F6                  MOVSX ESI,SI
00603284  03 C3                     ADD EAX,EBX
00603286  03 C6                     ADD EAX,ESI
00603288  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
0060328E  8B 04 C6                  MOV EAX,dword ptr [ESI + EAX*0x8]
00603291  85 C0                     TEST EAX,EAX
00603293  74 09                     JZ 0x0060329e
00603295  81 78 20 E8 03 00 00      CMP dword ptr [EAX + 0x20],0x3e8
0060329C  74 65                     JZ 0x00603303
LAB_0060329e:
0060329E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
006032A1  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_006032a4:
006032A4  66 85 DB                  TEST BX,BX
006032A7  7C 77                     JL 0x00603320
006032A9  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
006032AF  66 3B D8                  CMP BX,AX
006032B2  7D 6C                     JGE 0x00603320
006032B4  66 85 FF                  TEST DI,DI
006032B7  7C 67                     JL 0x00603320
006032B9  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
006032C0  7D 5E                     JGE 0x00603320
006032C2  66 85 D2                  TEST DX,DX
006032C5  7C 59                     JL 0x00603320
006032C7  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
006032CE  7D 50                     JGE 0x00603320
006032D0  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
006032D7  0F BF D2                  MOVSX EDX,DX
006032DA  0F AF F2                  IMUL ESI,EDX
006032DD  0F BF C0                  MOVSX EAX,AX
006032E0  0F BF D7                  MOVSX EDX,DI
006032E3  0F AF C2                  IMUL EAX,EDX
006032E6  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
006032EC  03 F0                     ADD ESI,EAX
006032EE  0F BF C3                  MOVSX EAX,BX
006032F1  03 F0                     ADD ESI,EAX
006032F3  8B 04 F2                  MOV EAX,dword ptr [EDX + ESI*0x8]
006032F6  85 C0                     TEST EAX,EAX
006032F8  74 26                     JZ 0x00603320
006032FA  81 78 20 E8 03 00 00      CMP dword ptr [EAX + 0x20],0x3e8
00603301  75 1D                     JNZ 0x00603320
LAB_00603303:
00603303  B8 01 00 00 00            MOV EAX,0x1
LAB_00603308:
00603308  8A 91 A6 03 00 00         MOV DL,byte ptr [ECX + 0x3a6]
0060330E  84 D2                     TEST DL,DL
00603310  75 21                     JNZ 0x00603333
00603312  5F                        POP EDI
00603313  5E                        POP ESI
00603314  C6 81 A6 03 00 00 01      MOV byte ptr [ECX + 0x3a6],0x1
0060331B  5B                        POP EBX
0060331C  8B E5                     MOV ESP,EBP
0060331E  5D                        POP EBP
0060331F  C3                        RET
LAB_00603320:
00603320  8A 81 A6 03 00 00         MOV AL,byte ptr [ECX + 0x3a6]
00603326  84 C0                     TEST AL,AL
00603328  74 07                     JZ 0x00603331
0060332A  C6 81 A6 03 00 00 00      MOV byte ptr [ECX + 0x3a6],0x0
LAB_00603331:
00603331  33 C0                     XOR EAX,EAX
LAB_00603333:
00603333  5F                        POP EDI
00603334  5E                        POP ESI
00603335  5B                        POP EBX
00603336  8B E5                     MOV ESP,EBP
00603338  5D                        POP EBP
00603339  C3                        RET
