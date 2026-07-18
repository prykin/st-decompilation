FUN_00513030:
00513030  55                        PUSH EBP
00513031  8B EC                     MOV EBP,ESP
00513033  81 EC CC 00 00 00         SUB ESP,0xcc
00513039  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0051303C  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0051303F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00513042  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
00513048  41                        INC ECX
00513049  53                        PUSH EBX
0051304A  56                        PUSH ESI
0051304B  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0051304E  57                        PUSH EDI
0051304F  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00513052  8D 4D 88                  LEA ECX,[EBP + -0x78]
00513055  8D 45 84                  LEA EAX,[EBP + -0x7c]
00513058  6A 00                     PUSH 0x0
0051305A  51                        PUSH ECX
0051305B  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00513062  89 55 84                  MOV dword ptr [EBP + -0x7c],EDX
00513065  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0051306A  E8 81 A7 21 00            CALL 0x0072d7f0
0051306F  8B F0                     MOV ESI,EAX
00513071  83 C4 08                  ADD ESP,0x8
00513074  85 F6                     TEST ESI,ESI
00513076  0F 85 F7 02 00 00         JNZ 0x00513373
0051307C  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0051307F  8A 43 12                  MOV AL,byte ptr [EBX + 0x12]
00513082  84 C0                     TEST AL,AL
00513084  74 54                     JZ 0x005130da
00513086  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00513089  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0051308C  8B 8E B3 01 00 00         MOV ECX,dword ptr [ESI + 0x1b3]
00513092  8D 7A 01                  LEA EDI,[EDX + 0x1]
00513095  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00513098  3B F8                     CMP EDI,EAX
0051309A  0F 83 F3 01 00 00         JNC 0x00513293
LAB_005130a0:
005130A0  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005130A3  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005130A6  0F AF C7                  IMUL EAX,EDI
005130A9  03 C2                     ADD EAX,EDX
005130AB  85 C0                     TEST EAX,EAX
005130AD  0F 84 E0 01 00 00         JZ 0x00513293
005130B3  8A 40 11                  MOV AL,byte ptr [EAX + 0x11]
005130B6  8A 53 11                  MOV DL,byte ptr [EBX + 0x11]
005130B9  3A C2                     CMP AL,DL
005130BB  0F 86 D2 01 00 00         JBE 0x00513293
005130C1  57                        PUSH EDI
005130C2  51                        PUSH ECX
005130C3  E8 A8 DB 19 00            CALL 0x006b0c70
005130C8  8B 8E B3 01 00 00         MOV ECX,dword ptr [ESI + 0x1b3]
005130CE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005130D1  3B F8                     CMP EDI,EAX
005130D3  72 CB                     JC 0x005130a0
005130D5  E9 B9 01 00 00            JMP 0x00513293
LAB_005130da:
005130DA  B9 14 00 00 00            MOV ECX,0x14
005130DF  33 C0                     XOR EAX,EAX
005130E1  8D BD 34 FF FF FF         LEA EDI,[EBP + 0xffffff34]
005130E7  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
005130EA  F3 AB                     STOSD.REP ES:EDI
005130EC  8B 0D 18 C1 85 00         MOV ECX,dword ptr [0x0085c118]
005130F2  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
005130F5  88 45 FF                  MOV byte ptr [EBP + -0x1],AL
005130F8  8B 11                     MOV EDX,dword ptr [ECX]
005130FA  85 D2                     TEST EDX,EDX
005130FC  76 27                     JBE 0x00513125
005130FE  8B 0B                     MOV ECX,dword ptr [EBX]
00513100  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00513103  8B 8E C7 01 00 00         MOV ECX,dword ptr [ESI + 0x1c7]
LAB_00513109:
00513109  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051310C  39 39                     CMP dword ptr [ECX],EDI
0051310E  75 08                     JNZ 0x00513118
00513110  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00513113  3B 7B 04                  CMP EDI,dword ptr [EBX + 0x4]
00513116  74 0A                     JZ 0x00513122
LAB_00513118:
00513118  40                        INC EAX
00513119  83 C1 11                  ADD ECX,0x11
0051311C  3B C2                     CMP EAX,EDX
0051311E  72 E9                     JC 0x00513109
00513120  EB 03                     JMP 0x00513125
LAB_00513122:
00513122  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_00513125:
00513125  8B 43 04                  MOV EAX,dword ptr [EBX + 0x4]
00513128  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0051312B  81 E3 FF FF 00 00         AND EBX,0xffff
00513131  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00513134  8D 4B FF                  LEA ECX,[EBX + -0x1]
00513137  85 C9                     TEST ECX,ECX
00513139  7E 3D                     JLE 0x00513178
0051313B  8B F9                     MOV EDI,ECX
0051313D  C1 E7 04                  SHL EDI,0x4
00513140  03 F9                     ADD EDI,ECX
LAB_00513142:
00513142  85 C0                     TEST EAX,EAX
00513144  74 32                     JZ 0x00513178
00513146  8B 96 C7 01 00 00         MOV EDX,dword ptr [ESI + 0x1c7]
0051314C  03 D7                     ADD EDX,EDI
0051314E  39 02                     CMP dword ptr [EDX],EAX
00513150  75 1E                     JNZ 0x00513170
00513152  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00513155  81 E3 FF 00 00 00         AND EBX,0xff
0051315B  89 84 9D 34 FF FF FF      MOV dword ptr [EBP + EBX*0x4 + 0xffffff34],EAX
00513162  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00513165  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00513168  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0051316B  FE C2                     INC DL
0051316D  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
LAB_00513170:
00513170  49                        DEC ECX
00513171  83 EF 11                  SUB EDI,0x11
00513174  85 C9                     TEST ECX,ECX
00513176  7F CA                     JG 0x00513142
LAB_00513178:
00513178  8B 0D 18 C1 85 00         MOV ECX,dword ptr [0x0085c118]
0051317E  8D 43 01                  LEA EAX,[EBX + 0x1]
00513181  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00513184  3B 01                     CMP EAX,dword ptr [ECX]
00513186  0F 83 CD 00 00 00         JNC 0x00513259
0051318C  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0051318F  8B D8                     MOV EBX,EAX
00513191  C1 E3 04                  SHL EBX,0x4
00513194  03 D8                     ADD EBX,EAX
00513196  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_00513199:
00513199  8B 96 C7 01 00 00         MOV EDX,dword ptr [ESI + 0x1c7]
0051319F  8B 4C 1A 04               MOV ECX,dword ptr [EDX + EBX*0x1 + 0x4]
005131A3  8D 04 1A                  LEA EAX,[EDX + EBX*0x1]
005131A6  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005131A9  3B 0A                     CMP ECX,dword ptr [EDX]
005131AB  75 4F                     JNZ 0x005131fc
005131AD  8B 08                     MOV ECX,dword ptr [EAX]
005131AF  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
005131B2  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005131B5  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
005131B8  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005131BB  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
005131BE  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
005131C1  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
005131C4  8A 40 10                  MOV AL,byte ptr [EAX + 0x10]
005131C7  88 45 D8                  MOV byte ptr [EBP + -0x28],AL
005131CA  8A 4A 11                  MOV CL,byte ptr [EDX + 0x11]
005131CD  FE C1                     INC CL
005131CF  8B C7                     MOV EAX,EDI
005131D1  8D 55 C8                  LEA EDX,[EBP + -0x38]
005131D4  88 4D D9                  MOV byte ptr [EBP + -0x27],CL
005131D7  8B 8E B3 01 00 00         MOV ECX,dword ptr [ESI + 0x1b3]
005131DD  25 FF FF 00 00            AND EAX,0xffff
005131E2  52                        PUSH EDX
005131E3  50                        PUSH EAX
005131E4  51                        PUSH ECX
005131E5  C6 45 DA 00               MOV byte ptr [EBP + -0x26],0x0
005131E9  C6 45 DB 00               MOV byte ptr [EBP + -0x25],0x0
005131ED  E8 DE DF 19 00            CALL 0x006b11d0
005131F2  47                        INC EDI
005131F3  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
005131F7  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005131FA  EB 3E                     JMP 0x0051323a
LAB_005131fc:
005131FC  85 C9                     TEST ECX,ECX
005131FE  74 5C                     JZ 0x0051325c
00513200  8A 55 F4                  MOV DL,byte ptr [EBP + -0xc]
00513203  32 DB                     XOR BL,BL
00513205  32 C0                     XOR AL,AL
00513207  88 5D FE                  MOV byte ptr [EBP + -0x2],BL
0051320A  84 D2                     TEST DL,DL
0051320C  88 45 DC                  MOV byte ptr [EBP + -0x24],AL
0051320F  76 22                     JBE 0x00513233
LAB_00513211:
00513211  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
00513214  81 E3 FF 00 00 00         AND EBX,0xff
0051321A  39 8C 9D 34 FF FF FF      CMP dword ptr [EBP + EBX*0x4 + 0xffffff34],ECX
00513221  74 0E                     JZ 0x00513231
00513223  FE C0                     INC AL
00513225  3A C2                     CMP AL,DL
00513227  88 45 DC                  MOV byte ptr [EBP + -0x24],AL
0051322A  72 E5                     JC 0x00513211
0051322C  8A 5D FE                  MOV BL,byte ptr [EBP + -0x2]
0051322F  EB 02                     JMP 0x00513233
LAB_00513231:
00513231  B3 01                     MOV BL,0x1
LAB_00513233:
00513233  84 DB                     TEST BL,BL
00513235  75 25                     JNZ 0x0051325c
00513237  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0051323a:
0051323A  8B 15 18 C1 85 00         MOV EDX,dword ptr [0x0085c118]
00513240  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00513243  40                        INC EAX
00513244  83 C3 11                  ADD EBX,0x11
00513247  8B 0A                     MOV ECX,dword ptr [EDX]
00513249  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0051324C  3B C1                     CMP EAX,ECX
0051324E  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00513251  0F 82 42 FF FF FF         JC 0x00513199
00513257  EB 03                     JMP 0x0051325c
LAB_00513259:
00513259  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0051325c:
0051325C  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
0051325F  84 C0                     TEST AL,AL
00513261  74 2D                     JZ 0x00513290
00513263  8B 8E B3 01 00 00         MOV ECX,dword ptr [ESI + 0x1b3]
00513269  8B C7                     MOV EAX,EDI
0051326B  25 FF FF 00 00            AND EAX,0xffff
00513270  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00513273  8D 50 FF                  LEA EDX,[EAX + -0x1]
00513276  3B D7                     CMP EDX,EDI
00513278  73 0C                     JNC 0x00513286
0051327A  48                        DEC EAX
0051327B  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0051327E  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
00513282  03 C2                     ADD EAX,EDX
00513284  EB 02                     JMP 0x00513288
LAB_00513286:
00513286  33 C0                     XOR EAX,EAX
LAB_00513288:
00513288  85 C0                     TEST EAX,EAX
0051328A  74 04                     JZ 0x00513290
0051328C  C6 40 13 01               MOV byte ptr [EAX + 0x13],0x1
LAB_00513290:
00513290  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_00513293:
00513293  8A 4B 12                  MOV CL,byte ptr [EBX + 0x12]
00513296  84 C9                     TEST CL,CL
00513298  0F 94 C0                  SETZ AL
0051329B  88 43 12                  MOV byte ptr [EBX + 0x12],AL
0051329E  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
005132A4  85 C0                     TEST EAX,EAX
005132A6  0F 84 B5 00 00 00         JZ 0x00513361
005132AC  8A 86 A1 01 00 00         MOV AL,byte ptr [ESI + 0x1a1]
005132B2  84 C0                     TEST AL,AL
005132B4  0F 85 A7 00 00 00         JNZ 0x00513361
005132BA  8B 8E DC 01 00 00         MOV ECX,dword ptr [ESI + 0x1dc]
005132C0  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
005132C3  68 18 01 00 00            PUSH 0x118
005132C8  68 9C 01 00 00            PUSH 0x19c
005132CD  6A 16                     PUSH 0x16
005132CF  6A 21                     PUSH 0x21
005132D1  6A 00                     PUSH 0x0
005132D3  51                        PUSH ECX
005132D4  6A 16                     PUSH 0x16
005132D6  6A 21                     PUSH 0x21
005132D8  6A 00                     PUSH 0x0
005132DA  52                        PUSH EDX
005132DB  E8 10 23 1A 00            CALL 0x006b55f0
005132E0  8D 5E 18                  LEA EBX,[ESI + 0x18]
005132E3  B9 08 00 00 00            MOV ECX,0x8
005132E8  33 C0                     XOR EAX,EAX
005132EA  8B FB                     MOV EDI,EBX
005132EC  F3 AB                     STOSD.REP ES:EDI
005132EE  8B 86 B3 01 00 00         MOV EAX,dword ptr [ESI + 0x1b3]
005132F4  8B 96 9C 01 00 00         MOV EDX,dword ptr [ESI + 0x19c]
005132FA  8B BE B7 01 00 00         MOV EDI,dword ptr [ESI + 0x1b7]
00513300  C7 46 28 28 00 00 00      MOV dword ptr [ESI + 0x28],0x28
00513307  66 8B 48 0C               MOV CX,word ptr [EAX + 0xc]
0051330B  53                        PUSH EBX
0051330C  66 89 4E 2C               MOV word ptr [ESI + 0x2c],CX
00513310  52                        PUSH EDX
00513311  6A 02                     PUSH 0x2
00513313  8B CE                     MOV ECX,ESI
00513315  66 C7 46 30 01 00         MOV word ptr [ESI + 0x30],0x1
0051331B  E8 60 2D 1D 00            CALL 0x006e6080
00513320  B8 01 00 00 00            MOV EAX,0x1
00513325  53                        PUSH EBX
00513326  66 89 46 30               MOV word ptr [ESI + 0x30],AX
0051332A  66 89 46 32               MOV word ptr [ESI + 0x32],AX
0051332E  8B 86 9C 01 00 00         MOV EAX,dword ptr [ESI + 0x19c]
00513334  8B CE                     MOV ECX,ESI
00513336  50                        PUSH EAX
00513337  6A 02                     PUSH 0x2
00513339  C7 46 28 22 00 00 00      MOV dword ptr [ESI + 0x28],0x22
00513340  66 89 7E 2C               MOV word ptr [ESI + 0x2c],DI
00513344  E8 37 2D 1D 00            CALL 0x006e6080
00513349  8B 8E 9C 01 00 00         MOV ECX,dword ptr [ESI + 0x19c]
0051334F  53                        PUSH EBX
00513350  51                        PUSH ECX
00513351  6A 02                     PUSH 0x2
00513353  8B CE                     MOV ECX,ESI
00513355  C7 46 28 05 00 00 00      MOV dword ptr [ESI + 0x28],0x5
0051335C  E8 1F 2D 1D 00            CALL 0x006e6080
LAB_00513361:
00513361  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
00513364  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051336A  5F                        POP EDI
0051336B  5E                        POP ESI
0051336C  5B                        POP EBX
0051336D  8B E5                     MOV ESP,EBP
0051336F  5D                        POP EBP
00513370  C2 08 00                  RET 0x8
LAB_00513373:
00513373  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00513376  68 2C 3A 7C 00            PUSH 0x7c3a2c
0051337B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00513380  56                        PUSH ESI
00513381  6A 00                     PUSH 0x0
00513383  68 6D 02 00 00            PUSH 0x26d
00513388  68 3C 38 7C 00            PUSH 0x7c383c
0051338D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00513392  E8 39 A1 19 00            CALL 0x006ad4d0
00513397  83 C4 18                  ADD ESP,0x18
0051339A  85 C0                     TEST EAX,EAX
0051339C  74 01                     JZ 0x0051339f
0051339E  CC                        INT3
LAB_0051339f:
0051339F  68 6D 02 00 00            PUSH 0x26d
005133A4  68 3C 38 7C 00            PUSH 0x7c383c
005133A9  6A 00                     PUSH 0x0
005133AB  56                        PUSH ESI
005133AC  E8 8F 2A 19 00            CALL 0x006a5e40
005133B1  5F                        POP EDI
005133B2  5E                        POP ESI
005133B3  5B                        POP EBX
005133B4  8B E5                     MOV ESP,EBP
005133B6  5D                        POP EBP
005133B7  C2 08 00                  RET 0x8
