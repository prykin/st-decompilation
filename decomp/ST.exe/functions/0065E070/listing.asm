FUN_0065e070:
0065E070  55                        PUSH EBP
0065E071  8B EC                     MOV EBP,ESP
0065E073  83 EC 48                  SUB ESP,0x48
0065E076  53                        PUSH EBX
0065E077  56                        PUSH ESI
0065E078  8B F1                     MOV ESI,ECX
0065E07A  57                        PUSH EDI
0065E07B  B9 08 00 00 00            MOV ECX,0x8
0065E080  33 C0                     XOR EAX,EAX
0065E082  66 8B 56 7D               MOV DX,word ptr [ESI + 0x7d]
0065E086  8D 7D B8                  LEA EDI,[EBP + -0x48]
0065E089  F3 AB                     STOSD.REP ES:EDI
0065E08B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065E08E  8D 45 B8                  LEA EAX,[EBP + -0x48]
0065E091  50                        PUSH EAX
0065E092  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0065E095  51                        PUSH ECX
0065E096  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E09C  33 DB                     XOR EBX,EBX
0065E09E  52                        PUSH EDX
0065E09F  50                        PUSH EAX
0065E0A0  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0065E0A3  E8 19 46 DA FF            CALL 0x004026c1
0065E0A8  8A 86 81 00 00 00         MOV AL,byte ptr [ESI + 0x81]
0065E0AE  84 C0                     TEST AL,AL
0065E0B0  7C 07                     JL 0x0065e0b9
0065E0B2  3C 08                     CMP AL,0x8
0065E0B4  0F BE C0                  MOVSX EAX,AL
0065E0B7  7C 03                     JL 0x0065e0bc
LAB_0065e0b9:
0065E0B9  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
LAB_0065e0bc:
0065E0BC  8A 4D 14                  MOV CL,byte ptr [EBP + 0x14]
0065E0BF  80 F9 08                  CMP CL,0x8
0065E0C2  75 05                     JNZ 0x0065e0c9
0065E0C4  88 45 14                  MOV byte ptr [EBP + 0x14],AL
0065E0C7  EB 0D                     JMP 0x0065e0d6
LAB_0065e0c9:
0065E0C9  84 C9                     TEST CL,CL
0065E0CB  7C 05                     JL 0x0065e0d2
0065E0CD  80 F9 08                  CMP CL,0x8
0065E0D0  7E 04                     JLE 0x0065e0d6
LAB_0065e0d2:
0065E0D2  C6 45 14 FF               MOV byte ptr [EBP + 0x14],0xff
LAB_0065e0d6:
0065E0D6  8D 4D B8                  LEA ECX,[EBP + -0x48]
0065E0D9  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0065E0DC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0065e0df:
0065E0DF  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0065E0E2  8B 12                     MOV EDX,dword ptr [EDX]
0065E0E4  85 D2                     TEST EDX,EDX
0065E0E6  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0065E0E9  0F 84 AA 01 00 00         JZ 0x0065e299
0065E0EF  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0065E0F2  33 C9                     XOR ECX,ECX
0065E0F4  85 C0                     TEST EAX,EAX
0065E0F6  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0065E0F9  0F 8E 94 01 00 00         JLE 0x0065e293
0065E0FF  3B C8                     CMP ECX,EAX
LAB_0065e101:
0065E101  73 0B                     JNC 0x0065e10e
0065E103  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0065E106  0F AF C1                  IMUL EAX,ECX
0065E109  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
0065E10C  EB 02                     JMP 0x0065e110
LAB_0065e10e:
0065E10E  33 C0                     XOR EAX,EAX
LAB_0065e110:
0065E110  66 8B 00                  MOV AX,word ptr [EAX]
0065E113  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0065E116  6A 01                     PUSH 0x1
0065E118  50                        PUSH EAX
0065E119  51                        PUSH ECX
0065E11A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065E120  E8 95 47 DA FF            CALL 0x004028ba
0065E125  8B F8                     MOV EDI,EAX
0065E127  85 FF                     TEST EDI,EDI
0065E129  0F 84 4F 01 00 00         JZ 0x0065e27e
0065E12F  8B 17                     MOV EDX,dword ptr [EDI]
0065E131  8B CF                     MOV ECX,EDI
0065E133  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0065E139  85 C0                     TEST EAX,EAX
0065E13B  0F 84 3D 01 00 00         JZ 0x0065e27e
0065E141  8B 07                     MOV EAX,dword ptr [EDI]
0065E143  8B CF                     MOV ECX,EDI
0065E145  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0065E148  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0065E14B  8B D8                     MOV EBX,EAX
0065E14D  8D 55 FE                  LEA EDX,[EBP + -0x2]
0065E150  51                        PUSH ECX
0065E151  8D 45 FC                  LEA EAX,[EBP + -0x4]
0065E154  52                        PUSH EDX
0065E155  50                        PUSH EAX
0065E156  8B CF                     MOV ECX,EDI
0065E158  E8 68 37 DA FF            CALL 0x004018c5
0065E15D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0065E160  85 C0                     TEST EAX,EAX
0065E162  74 52                     JZ 0x0065e1b6
0065E164  83 FB 78                  CMP EBX,0x78
0065E167  75 33                     JNZ 0x0065e19c
0065E169  A9 00 00 00 80            TEST EAX,0x80000000
0065E16E  0F 85 0A 01 00 00         JNZ 0x0065e27e
0065E174  8B F0                     MOV ESI,EAX
0065E176  81 E6 FF FF FF 3F         AND ESI,0x3fffffff
0065E17C  74 38                     JZ 0x0065e1b6
0065E17E  8B 17                     MOV EDX,dword ptr [EDI]
0065E180  8B CF                     MOV ECX,EDI
0065E182  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0065E185  3B C3                     CMP EAX,EBX
0065E187  75 08                     JNZ 0x0065e191
0065E189  8B 87 59 02 00 00         MOV EAX,dword ptr [EDI + 0x259]
0065E18F  EB 02                     JMP 0x0065e193
LAB_0065e191:
0065E191  33 C0                     XOR EAX,EAX
LAB_0065e193:
0065E193  3B F0                     CMP ESI,EAX
0065E195  74 1F                     JZ 0x0065e1b6
0065E197  E9 E2 00 00 00            JMP 0x0065e27e
LAB_0065e19c:
0065E19C  A9 00 00 00 40            TEST EAX,0x40000000
0065E1A1  0F 85 D7 00 00 00         JNZ 0x0065e27e
0065E1A7  25 FF FF FF 3F            AND EAX,0x3fffffff
0065E1AC  74 08                     JZ 0x0065e1b6
0065E1AE  3B C3                     CMP EAX,EBX
0065E1B0  0F 85 C8 00 00 00         JNZ 0x0065e27e
LAB_0065e1b6:
0065E1B6  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0065E1B9  81 FE FF FF FF 3F         CMP ESI,0x3fffffff
0065E1BF  74 57                     JZ 0x0065e218
0065E1C1  83 FB 78                  CMP EBX,0x78
0065E1C4  75 38                     JNZ 0x0065e1fe
0065E1C6  F7 C6 00 00 00 80         TEST ESI,0x80000000
0065E1CC  0F 85 AC 00 00 00         JNZ 0x0065e27e
0065E1D2  8B 07                     MOV EAX,dword ptr [EDI]
0065E1D4  8B CF                     MOV ECX,EDI
0065E1D6  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0065E1D9  3B C3                     CMP EAX,EBX
0065E1DB  75 08                     JNZ 0x0065e1e5
0065E1DD  8B 87 59 02 00 00         MOV EAX,dword ptr [EDI + 0x259]
0065E1E3  EB 02                     JMP 0x0065e1e7
LAB_0065e1e5:
0065E1E5  33 C0                     XOR EAX,EAX
LAB_0065e1e7:
0065E1E7  50                        PUSH EAX
0065E1E8  E8 1E 5F DA FF            CALL 0x0040410b
0065E1ED  23 C6                     AND EAX,ESI
0065E1EF  83 C4 04                  ADD ESP,0x4
0065E1F2  A9 FF FF FF 3F            TEST EAX,0x3fffffff
0065E1F7  75 1F                     JNZ 0x0065e218
0065E1F9  E9 80 00 00 00            JMP 0x0065e27e
LAB_0065e1fe:
0065E1FE  F7 C6 00 00 00 40         TEST ESI,0x40000000
0065E204  75 78                     JNZ 0x0065e27e
0065E206  53                        PUSH EBX
0065E207  E8 FF 5E DA FF            CALL 0x0040410b
0065E20C  23 C6                     AND EAX,ESI
0065E20E  83 C4 04                  ADD ESP,0x4
0065E211  A9 FF FF FF 3F            TEST EAX,0x3fffffff
0065E216  74 66                     JZ 0x0065e27e
LAB_0065e218:
0065E218  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0065E21B  85 DB                     TEST EBX,EBX
0065E21D  74 46                     JZ 0x0065e265
0065E21F  80 3B 00                  CMP byte ptr [EBX],0x0
0065E222  74 41                     JZ 0x0065e265
0065E224  8B 17                     MOV EDX,dword ptr [EDI]
0065E226  8D 45 D8                  LEA EAX,[EBP + -0x28]
0065E229  50                        PUSH EAX
0065E22A  8B CF                     MOV ECX,EDI
0065E22C  FF 52 74                  CALL dword ptr [EDX + 0x74]
0065E22F  8D 75 D8                  LEA ESI,[EBP + -0x28]
0065E232  8B C3                     MOV EAX,EBX
LAB_0065e234:
0065E234  8A 10                     MOV DL,byte ptr [EAX]
0065E236  8A 1E                     MOV BL,byte ptr [ESI]
0065E238  8A CA                     MOV CL,DL
0065E23A  3A D3                     CMP DL,BL
0065E23C  75 1E                     JNZ 0x0065e25c
0065E23E  84 C9                     TEST CL,CL
0065E240  74 16                     JZ 0x0065e258
0065E242  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0065E245  8A 5E 01                  MOV BL,byte ptr [ESI + 0x1]
0065E248  8A CA                     MOV CL,DL
0065E24A  3A D3                     CMP DL,BL
0065E24C  75 0E                     JNZ 0x0065e25c
0065E24E  83 C0 02                  ADD EAX,0x2
0065E251  83 C6 02                  ADD ESI,0x2
0065E254  84 C9                     TEST CL,CL
0065E256  75 DC                     JNZ 0x0065e234
LAB_0065e258:
0065E258  33 C0                     XOR EAX,EAX
0065E25A  EB 05                     JMP 0x0065e261
LAB_0065e25c:
0065E25C  1B C0                     SBB EAX,EAX
0065E25E  83 D8 FF                  SBB EAX,-0x1
LAB_0065e261:
0065E261  85 C0                     TEST EAX,EAX
0065E263  75 19                     JNZ 0x0065e27e
LAB_0065e265:
0065E265  8A 5D 14                  MOV BL,byte ptr [EBP + 0x14]
0065E268  80 FB FF                  CMP BL,0xff
0065E26B  74 0E                     JZ 0x0065e27b
0065E26D  8B 07                     MOV EAX,dword ptr [EDI]
0065E26F  8B CF                     MOV ECX,EDI
0065E271  FF 50 6C                  CALL dword ptr [EAX + 0x6c]
0065E274  0F BE CB                  MOVSX ECX,BL
0065E277  3B C8                     CMP ECX,EAX
0065E279  75 03                     JNZ 0x0065e27e
LAB_0065e27b:
0065E27B  FF 45 F0                  INC dword ptr [EBP + -0x10]
FUN_0065e070::cf_continue_loop_0065E27E:
0065E27E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0065E281  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0065E284  41                        INC ECX
0065E285  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0065E288  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0065E28B  3B C8                     CMP ECX,EAX
0065E28D  0F 8C 6E FE FF FF         JL 0x0065e101
LAB_0065e293:
0065E293  52                        PUSH EDX
0065E294  E8 77 FE 04 00            CALL 0x006ae110
LAB_0065e299:
0065E299  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0065E29C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0065E29F  40                        INC EAX
0065E2A0  83 C2 04                  ADD EDX,0x4
0065E2A3  83 F8 08                  CMP EAX,0x8
0065E2A6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065E2A9  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0065E2AC  0F 8C 2D FE FF FF         JL 0x0065e0df
0065E2B2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0065E2B5  5F                        POP EDI
0065E2B6  5E                        POP ESI
0065E2B7  5B                        POP EBX
0065E2B8  8B E5                     MOV ESP,EBP
0065E2BA  5D                        POP EBP
0065E2BB  C2 14 00                  RET 0x14
