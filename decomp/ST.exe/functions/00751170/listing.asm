FUN_00751170:
00751170  55                        PUSH EBP
00751171  8B EC                     MOV EBP,ESP
00751173  6A FF                     PUSH -0x1
00751175  68 58 1E 7A 00            PUSH 0x7a1e58
0075117A  68 64 D9 72 00            PUSH 0x72d964
0075117F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00751185  50                        PUSH EAX
00751186  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0075118D  81 EC 90 00 00 00         SUB ESP,0x90
00751193  53                        PUSH EBX
00751194  56                        PUSH ESI
00751195  57                        PUSH EDI
00751196  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00751199  C6 45 D6 00               MOV byte ptr [EBP + -0x2a],0x0
0075119D  C6 45 D5 00               MOV byte ptr [EBP + -0x2b],0x0
007511A1  C6 45 D4 00               MOV byte ptr [EBP + -0x2c],0x0
007511A5  33 C0                     XOR EAX,EAX
007511A7  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
007511AA  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
007511AD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007511B0  B8 08 00 01 00            MOV EAX,0x10008
007511B5  E8 86 C8 FD FF            CALL 0x0072da40
007511BA  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
007511BD  8B C4                     MOV EAX,ESP
007511BF  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
007511C2  8D 78 07                  LEA EDI,[EAX + 0x7]
007511C5  83 E7 F8                  AND EDI,0xfffffff8
007511C8  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
007511CB  B9 00 40 00 00            MOV ECX,0x4000
007511D0  33 C0                     XOR EAX,EAX
007511D2  F3 AB                     STOSD.REP ES:EDI
007511D4  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
007511DB  EB 1D                     JMP 0x007511fa
LAB_007511fa:
007511FA  83 C8 FF                  OR EAX,0xffffffff
007511FD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00751200  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00751203  85 C9                     TEST ECX,ECX
00751205  75 0A                     JNZ 0x00751211
00751207  B8 FE FF FF FF            MOV EAX,0xfffffffe
0075120C  E9 B9 02 00 00            JMP 0x007514ca
LAB_00751211:
00751211  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00751217  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
0075121D  8D 95 70 FF FF FF         LEA EDX,[EBP + 0xffffff70]
00751223  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00751229  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
0075122F  50                        PUSH EAX
00751230  68 21 DA 72 00            PUSH 0x72da21
00751235  6A 02                     PUSH 0x2
00751237  51                        PUSH ECX
00751238  E8 B3 C5 FD FF            CALL 0x0072d7f0
0075123D  83 C4 10                  ADD ESP,0x10
00751240  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00751243  8B F0                     MOV ESI,EAX
00751245  85 F6                     TEST ESI,ESI
00751247  0F 85 4F 02 00 00         JNZ 0x0075149c
0075124D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00751250  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
00751253  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00751256  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
00751259  C6 07 01                  MOV byte ptr [EDI],0x1
0075125C  FF 45 C4                  INC dword ptr [EBP + -0x3c]
0075125F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00751262  4A                        DEC EDX
00751263  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00751266  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00751269  85 F6                     TEST ESI,ESI
0075126B  0F 8E A2 01 00 00         JLE 0x00751413
00751271  EB 03                     JMP 0x00751276
LAB_00751273:
00751273  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
LAB_00751276:
00751276  8B F9                     MOV EDI,ECX
00751278  83 FE 03                  CMP ESI,0x3
0075127B  7C 18                     JL 0x00751295
LAB_0075127d:
0075127D  8A 07                     MOV AL,byte ptr [EDI]
0075127F  3A 47 01                  CMP AL,byte ptr [EDI + 0x1]
00751282  75 05                     JNZ 0x00751289
00751284  3A 47 02                  CMP AL,byte ptr [EDI + 0x2]
00751287  74 07                     JZ 0x00751290
LAB_00751289:
00751289  47                        INC EDI
0075128A  4E                        DEC ESI
0075128B  83 FE 03                  CMP ESI,0x3
0075128E  7D ED                     JGE 0x0075127d
LAB_00751290:
00751290  83 FE 03                  CMP ESI,0x3
00751293  7D 04                     JGE 0x00751299
LAB_00751295:
00751295  03 FE                     ADD EDI,ESI
00751297  33 F6                     XOR ESI,ESI
LAB_00751299:
00751299  8B DF                     MOV EBX,EDI
0075129B  2B D9                     SUB EBX,ECX
0075129D  81 FB 00 40 00 00         CMP EBX,0x4000
007512A3  7C 61                     JL 0x00751306
007512A5  8D 4B FF                  LEA ECX,[EBX + -0x1]
007512A8  B8 11 00 04 00            MOV EAX,0x40011
007512AD  F7 E1                     MUL ECX
007512AF  2B CA                     SUB ECX,EDX
007512B1  D1 E9                     SHR ECX,0x1
007512B3  03 CA                     ADD ECX,EDX
007512B5  C1 E9 0D                  SHR ECX,0xd
007512B8  89 8D 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],ECX
007512BE  8B C1                     MOV EAX,ECX
007512C0  C1 E0 0E                  SHL EAX,0xe
007512C3  2B C1                     SUB EAX,ECX
007512C5  F7 D8                     NEG EAX
007512C7  03 D8                     ADD EBX,EAX
LAB_007512c9:
007512C9  68 FF 00 00 00            PUSH 0xff
007512CE  8D 4D C0                  LEA ECX,[EBP + -0x40]
007512D1  51                        PUSH ECX
007512D2  E8 19 02 00 00            CALL 0x007514f0
007512D7  68 FF 00 00 00            PUSH 0xff
007512DC  8D 55 C0                  LEA EDX,[EBP + -0x40]
007512DF  52                        PUSH EDX
007512E0  E8 0B 02 00 00            CALL 0x007514f0
007512E5  68 FF 3F 00 00            PUSH 0x3fff
007512EA  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
007512ED  50                        PUSH EAX
007512EE  8D 4D C0                  LEA ECX,[EBP + -0x40]
007512F1  51                        PUSH ECX
007512F2  E8 E9 02 00 00            CALL 0x007515e0
007512F7  81 45 B8 FF 3F 00 00      ADD dword ptr [EBP + -0x48],0x3fff
007512FE  FF 8D 64 FF FF FF         DEC dword ptr [EBP + 0xffffff64]
00751304  75 C3                     JNZ 0x007512c9
LAB_00751306:
00751306  83 FB 40                  CMP EBX,0x40
00751309  7C 27                     JL 0x00751332
0075130B  8B D3                     MOV EDX,EBX
0075130D  C1 EA 08                  SHR EDX,0x8
00751310  80 EA 40                  SUB DL,0x40
00751313  52                        PUSH EDX
00751314  8D 45 C0                  LEA EAX,[EBP + -0x40]
00751317  50                        PUSH EAX
00751318  E8 D3 01 00 00            CALL 0x007514f0
0075131D  53                        PUSH EBX
0075131E  8D 4D C0                  LEA ECX,[EBP + -0x40]
00751321  51                        PUSH ECX
00751322  E8 C9 01 00 00            CALL 0x007514f0
00751327  53                        PUSH EBX
00751328  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0075132B  52                        PUSH EDX
0075132C  8D 45 C0                  LEA EAX,[EBP + -0x40]
0075132F  50                        PUSH EAX
00751330  EB 1C                     JMP 0x0075134e
LAB_00751332:
00751332  85 DB                     TEST EBX,EBX
00751334  7E 1D                     JLE 0x00751353
00751336  8A CB                     MOV CL,BL
00751338  80 C1 80                  ADD CL,0x80
0075133B  51                        PUSH ECX
0075133C  8D 55 C0                  LEA EDX,[EBP + -0x40]
0075133F  52                        PUSH EDX
00751340  E8 AB 01 00 00            CALL 0x007514f0
00751345  53                        PUSH EBX
00751346  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00751349  50                        PUSH EAX
0075134A  8D 4D C0                  LEA ECX,[EBP + -0x40]
0075134D  51                        PUSH ECX
LAB_0075134e:
0075134E  E8 8D 02 00 00            CALL 0x007515e0
LAB_00751353:
00751353  01 5D B8                  ADD dword ptr [EBP + -0x48],EBX
00751356  33 DB                     XOR EBX,EBX
00751358  83 FE 01                  CMP ESI,0x1
0075135B  7E 0F                     JLE 0x0075136c
LAB_0075135d:
0075135D  8A 17                     MOV DL,byte ptr [EDI]
0075135F  3A 57 01                  CMP DL,byte ptr [EDI + 0x1]
00751362  75 08                     JNZ 0x0075136c
00751364  43                        INC EBX
00751365  47                        INC EDI
00751366  4E                        DEC ESI
00751367  83 FE 01                  CMP ESI,0x1
0075136A  7F F1                     JG 0x0075135d
LAB_0075136c:
0075136C  85 DB                     TEST EBX,EBX
0075136E  0F 8E 94 00 00 00         JLE 0x00751408
00751374  8D 47 01                  LEA EAX,[EDI + 0x1]
00751377  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0075137A  4E                        DEC ESI
0075137B  43                        INC EBX
0075137C  81 FB 00 40 00 00         CMP EBX,0x4000
00751382  7C 51                     JL 0x007513d5
00751384  8D 4B FF                  LEA ECX,[EBX + -0x1]
00751387  B8 11 00 04 00            MOV EAX,0x40011
0075138C  F7 E1                     MUL ECX
0075138E  2B CA                     SUB ECX,EDX
00751390  D1 E9                     SHR ECX,0x1
00751392  03 CA                     ADD ECX,EDX
00751394  C1 E9 0D                  SHR ECX,0xd
00751397  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0075139D  8B D1                     MOV EDX,ECX
0075139F  C1 E2 0E                  SHL EDX,0xe
007513A2  2B D1                     SUB EDX,ECX
007513A4  F7 DA                     NEG EDX
007513A6  03 DA                     ADD EBX,EDX
LAB_007513a8:
007513A8  6A 7F                     PUSH 0x7f
007513AA  8D 45 C0                  LEA EAX,[EBP + -0x40]
007513AD  50                        PUSH EAX
007513AE  E8 3D 01 00 00            CALL 0x007514f0
007513B3  68 FF 00 00 00            PUSH 0xff
007513B8  8D 4D C0                  LEA ECX,[EBP + -0x40]
007513BB  51                        PUSH ECX
007513BC  E8 2F 01 00 00            CALL 0x007514f0
007513C1  8A 17                     MOV DL,byte ptr [EDI]
007513C3  52                        PUSH EDX
007513C4  8D 45 C0                  LEA EAX,[EBP + -0x40]
007513C7  50                        PUSH EAX
007513C8  E8 23 01 00 00            CALL 0x007514f0
007513CD  FF 8D 60 FF FF FF         DEC dword ptr [EBP + 0xffffff60]
007513D3  75 D3                     JNZ 0x007513a8
LAB_007513d5:
007513D5  83 FB 40                  CMP EBX,0x40
007513D8  7C 14                     JL 0x007513ee
007513DA  8B CB                     MOV ECX,EBX
007513DC  C1 E9 08                  SHR ECX,0x8
007513DF  80 C1 40                  ADD CL,0x40
007513E2  51                        PUSH ECX
007513E3  8D 55 C0                  LEA EDX,[EBP + -0x40]
007513E6  52                        PUSH EDX
007513E7  E8 04 01 00 00            CALL 0x007514f0
007513EC  EB 04                     JMP 0x007513f2
LAB_007513ee:
007513EE  85 DB                     TEST EBX,EBX
007513F0  7E 16                     JLE 0x00751408
LAB_007513f2:
007513F2  53                        PUSH EBX
007513F3  8D 45 C0                  LEA EAX,[EBP + -0x40]
007513F6  50                        PUSH EAX
007513F7  E8 F4 00 00 00            CALL 0x007514f0
007513FC  8A 0F                     MOV CL,byte ptr [EDI]
007513FE  51                        PUSH ECX
007513FF  8D 55 C0                  LEA EDX,[EBP + -0x40]
00751402  52                        PUSH EDX
00751403  E8 E8 00 00 00            CALL 0x007514f0
LAB_00751408:
00751408  85 F6                     TEST ESI,ESI
0075140A  0F 8F 63 FE FF FF         JG 0x00751273
00751410  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
LAB_00751413:
00751413  6A 00                     PUSH 0x0
00751415  8D 45 C0                  LEA EAX,[EBP + -0x40]
00751418  50                        PUSH EAX
00751419  E8 D2 00 00 00            CALL 0x007514f0
0075141E  8A 45 D4                  MOV AL,byte ptr [EBP + -0x2c]
00751421  84 C0                     TEST AL,AL
00751423  74 55                     JZ 0x0075147a
00751425  8B 4D D5                  MOV ECX,dword ptr [EBP + -0x2b]
00751428  81 E1 FF 00 00 00         AND ECX,0xff
0075142E  41                        INC ECX
0075142F  39 4D C8                  CMP dword ptr [EBP + -0x38],ECX
00751432  7D 18                     JGE 0x0075144c
00751434  68 EC 00 00 00            PUSH 0xec
00751439  68 00 2B 7F 00            PUSH 0x7f2b00
0075143E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00751444  52                        PUSH EDX
00751445  6A CD                     PUSH -0x33
00751447  E8 F4 49 F5 FF            CALL 0x006a5e40
LAB_0075144c:
0075144C  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
0075144F  8A 4D D6                  MOV CL,byte ptr [EBP + -0x2a]
00751452  88 08                     MOV byte ptr [EAX],CL
00751454  FF 45 C4                  INC dword ptr [EBP + -0x3c]
00751457  33 C0                     XOR EAX,EAX
00751459  8A 4D D5                  MOV CL,byte ptr [EBP + -0x2b]
0075145C  84 C9                     TEST CL,CL
0075145E  76 1A                     JBE 0x0075147a
LAB_00751460:
00751460  8A 54 05 D7               MOV DL,byte ptr [EBP + EAX*0x1 + -0x29]
00751464  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00751467  88 11                     MOV byte ptr [ECX],DL
00751469  FF 45 C4                  INC dword ptr [EBP + -0x3c]
0075146C  40                        INC EAX
0075146D  8B 55 D5                  MOV EDX,dword ptr [EBP + -0x2b]
00751470  81 E2 FF 00 00 00         AND EDX,0xff
00751476  3B C2                     CMP EAX,EDX
00751478  7C E6                     JL 0x00751460
LAB_0075147a:
0075147A  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
00751480  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00751485  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00751488  85 C0                     TEST EAX,EAX
0075148A  75 09                     JNZ 0x00751495
0075148C  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0075148F  51                        PUSH ECX
00751490  E8 FB 49 F5 FF            CALL 0x006a5e90
LAB_00751495:
00751495  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00751498  2B C7                     SUB EAX,EDI
0075149A  EB 2E                     JMP 0x007514ca
LAB_0075149c:
0075149C  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
007514A2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
007514A8  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
007514AB  85 C0                     TEST EAX,EAX
007514AD  75 09                     JNZ 0x007514b8
007514AF  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
007514B2  50                        PUSH EAX
007514B3  E8 D8 49 F5 FF            CALL 0x006a5e90
LAB_007514b8:
007514B8  68 F4 00 00 00            PUSH 0xf4
007514BD  68 00 2B 7F 00            PUSH 0x7f2b00
007514C2  6A 00                     PUSH 0x0
007514C4  56                        PUSH ESI
007514C5  E8 76 49 F5 FF            CALL 0x006a5e40
LAB_007514ca:
007514CA  8D A5 54 FF FF FF         LEA ESP,[EBP + 0xffffff54]
007514D0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007514D3  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
007514DA  5F                        POP EDI
007514DB  5E                        POP ESI
007514DC  5B                        POP EBX
007514DD  8B E5                     MOV ESP,EBP
007514DF  5D                        POP EBP
007514E0  C2 10 00                  RET 0x10
