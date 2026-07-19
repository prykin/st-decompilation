FUN_006f5240:
006F5240  55                        PUSH EBP
006F5241  8B EC                     MOV EBP,ESP
006F5243  53                        PUSH EBX
006F5244  56                        PUSH ESI
006F5245  57                        PUSH EDI
006F5246  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F5250  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006F5253  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006F5256  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_006f5259:
006F5259  33 C9                     XOR ECX,ECX
006F525B  8A 0E                     MOV CL,byte ptr [ESI]
006F525D  46                        INC ESI
006F525E  0B C9                     OR ECX,ECX
006F5260  0F 84 A6 01 00 00         JZ 0x006f540c
006F5266  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
LAB_006f5269:
006F5269  F6 C1 80                  TEST CL,0x80
006F526C  75 10                     JNZ 0x006f527e
LAB_006f526e:
006F526E  3B CA                     CMP ECX,EDX
006F5270  7F 36                     JG 0x006f52a8
006F5272  2B D1                     SUB EDX,ECX
006F5274  33 C9                     XOR ECX,ECX
006F5276  8A 0E                     MOV CL,byte ptr [ESI]
006F5278  46                        INC ESI
006F5279  F6 C1 80                  TEST CL,0x80
006F527C  74 F0                     JZ 0x006f526e
LAB_006f527e:
006F527E  F6 C1 40                  TEST CL,0x40
006F5281  74 13                     JZ 0x006f5296
006F5283  80 E1 3F                  AND CL,0x3f
006F5286  3B CA                     CMP ECX,EDX
006F5288  7F 2C                     JG 0x006f52b6
006F528A  2B D1                     SUB EDX,ECX
006F528C  33 C9                     XOR ECX,ECX
006F528E  8A 4E 01                  MOV CL,byte ptr [ESI + 0x1]
006F5291  83 C6 02                  ADD ESI,0x2
006F5294  EB D3                     JMP 0x006f5269
LAB_006f5296:
006F5296  80 E1 3F                  AND CL,0x3f
006F5299  3B CA                     CMP ECX,EDX
006F529B  7F 27                     JG 0x006f52c4
006F529D  03 F1                     ADD ESI,ECX
006F529F  2B D1                     SUB EDX,ECX
006F52A1  33 C9                     XOR ECX,ECX
006F52A3  8A 0E                     MOV CL,byte ptr [ESI]
006F52A5  46                        INC ESI
006F52A6  EB C1                     JMP 0x006f5269
LAB_006f52a8:
006F52A8  2A CA                     SUB CL,DL
006F52AA  55                        PUSH EBP
006F52AB  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F52AE  8B 6D 18                  MOV EBP,dword ptr [EBP + 0x18]
006F52B1  C1 E5 10                  SHL EBP,0x10
006F52B4  EB 78                     JMP 0x006f532e
LAB_006f52b6:
006F52B6  2A CA                     SUB CL,DL
006F52B8  55                        PUSH EBP
006F52B9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F52BC  8B 6D 18                  MOV EBP,dword ptr [EBP + 0x18]
006F52BF  C1 E5 10                  SHL EBP,0x10
006F52C2  EB 1A                     JMP 0x006f52de
LAB_006f52c4:
006F52C4  03 F2                     ADD ESI,EDX
006F52C6  2A CA                     SUB CL,DL
006F52C8  55                        PUSH EBP
006F52C9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F52CC  8B 6D 18                  MOV EBP,dword ptr [EBP + 0x18]
006F52CF  C1 E5 10                  SHL EBP,0x10
006F52D2  EB 31                     JMP 0x006f5305
LAB_006f52d4:
006F52D4  F6 C1 80                  TEST CL,0x80
006F52D7  74 55                     JZ 0x006f532e
006F52D9  F6 C1 40                  TEST CL,0x40
006F52DC  74 27                     JZ 0x006f5305
LAB_006f52de:
006F52DE  83 E1 3F                  AND ECX,0x3f
006F52E1  AC                        LODSB ESI
006F52E2  3B CA                     CMP ECX,EDX
006F52E4  7F 60                     JG 0x006f5346
006F52E6  2B D1                     SUB EDX,ECX
LAB_006f52e8:
006F52E8  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F52EB  77 0A                     JA 0x006f52f7
LAB_006f52ed:
006F52ED  88 07                     MOV byte ptr [EDI],AL
006F52EF  43                        INC EBX
006F52F0  47                        INC EDI
006F52F1  43                        INC EBX
006F52F2  49                        DEC ECX
006F52F3  7F F3                     JG 0x006f52e8
006F52F5  EB 42                     JMP 0x006f5339
LAB_006f52f7:
006F52F7  83 C3 02                  ADD EBX,0x2
006F52FA  47                        INC EDI
006F52FB  49                        DEC ECX
006F52FC  7E 3B                     JLE 0x006f5339
006F52FE  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F5301  77 F4                     JA 0x006f52f7
006F5303  EB E8                     JMP 0x006f52ed
LAB_006f5305:
006F5305  83 E1 3F                  AND ECX,0x3f
006F5308  3B CA                     CMP ECX,EDX
006F530A  7F 63                     JG 0x006f536f
006F530C  2B D1                     SUB EDX,ECX
LAB_006f530e:
006F530E  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F5311  77 0D                     JA 0x006f5320
LAB_006f5313:
006F5313  8A 06                     MOV AL,byte ptr [ESI]
006F5315  43                        INC EBX
006F5316  88 07                     MOV byte ptr [EDI],AL
006F5318  43                        INC EBX
006F5319  46                        INC ESI
006F531A  47                        INC EDI
006F531B  49                        DEC ECX
006F531C  7F F0                     JG 0x006f530e
006F531E  EB 19                     JMP 0x006f5339
LAB_006f5320:
006F5320  43                        INC EBX
006F5321  46                        INC ESI
006F5322  43                        INC EBX
006F5323  47                        INC EDI
006F5324  49                        DEC ECX
006F5325  7E 12                     JLE 0x006f5339
006F5327  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F532A  77 F4                     JA 0x006f5320
006F532C  EB E5                     JMP 0x006f5313
LAB_006f532e:
006F532E  3B CA                     CMP ECX,EDX
006F5330  7F 68                     JG 0x006f539a
006F5332  2B D1                     SUB EDX,ECX
006F5334  03 F9                     ADD EDI,ECX
006F5336  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
FUN_006f5240::cf_common_join_006F5339:
006F5339  33 C9                     XOR ECX,ECX
006F533B  0B D2                     OR EDX,EDX
006F533D  7E 68                     JLE 0x006f53a7
006F533F  33 C9                     XOR ECX,ECX
006F5341  8A 0E                     MOV CL,byte ptr [ESI]
006F5343  46                        INC ESI
006F5344  EB 8E                     JMP 0x006f52d4
LAB_006f5346:
006F5346  87 CA                     XCHG EDX,ECX
006F5348  4E                        DEC ESI
006F5349  80 CA C0                  OR DL,0xc0
006F534C  0B C9                     OR ECX,ECX
006F534E  7E 57                     JLE 0x006f53a7
006F5350  2B D1                     SUB EDX,ECX
LAB_006f5352:
006F5352  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F5355  77 0A                     JA 0x006f5361
LAB_006f5357:
006F5357  88 07                     MOV byte ptr [EDI],AL
006F5359  43                        INC EBX
006F535A  47                        INC EDI
006F535B  43                        INC EBX
006F535C  49                        DEC ECX
006F535D  7F F3                     JG 0x006f5352
006F535F  EB 46                     JMP 0x006f53a7
LAB_006f5361:
006F5361  83 C3 02                  ADD EBX,0x2
006F5364  47                        INC EDI
006F5365  49                        DEC ECX
006F5366  7E 3F                     JLE 0x006f53a7
006F5368  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F536B  77 F4                     JA 0x006f5361
006F536D  EB E8                     JMP 0x006f5357
LAB_006f536f:
006F536F  87 CA                     XCHG EDX,ECX
006F5371  80 CA 80                  OR DL,0x80
006F5374  0B C9                     OR ECX,ECX
006F5376  7E 2F                     JLE 0x006f53a7
006F5378  2B D1                     SUB EDX,ECX
LAB_006f537a:
006F537A  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F537D  77 0D                     JA 0x006f538c
LAB_006f537f:
006F537F  8A 06                     MOV AL,byte ptr [ESI]
006F5381  43                        INC EBX
006F5382  88 07                     MOV byte ptr [EDI],AL
006F5384  43                        INC EBX
006F5385  46                        INC ESI
006F5386  47                        INC EDI
006F5387  49                        DEC ECX
006F5388  7F F0                     JG 0x006f537a
006F538A  EB 1B                     JMP 0x006f53a7
LAB_006f538c:
006F538C  43                        INC EBX
006F538D  46                        INC ESI
006F538E  43                        INC EBX
006F538F  47                        INC EDI
006F5390  49                        DEC ECX
006F5391  7E 14                     JLE 0x006f53a7
006F5393  3B 6B FE                  CMP EBP,dword ptr [EBX + -0x2]
006F5396  77 F4                     JA 0x006f538c
006F5398  EB E5                     JMP 0x006f537f
LAB_006f539a:
006F539A  87 CA                     XCHG EDX,ECX
006F539C  0B C9                     OR ECX,ECX
006F539E  7E 07                     JLE 0x006f53a7
006F53A0  2B D1                     SUB EDX,ECX
006F53A2  03 F9                     ADD EDI,ECX
006F53A4  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
FUN_006f5240::cf_common_join_006F53A7:
006F53A7  5D                        POP EBP
006F53A8  8B CA                     MOV ECX,EDX
006F53AA  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006F53AD  2B 55 28                  SUB EDX,dword ptr [EBP + 0x28]
006F53B0  2B 55 24                  SUB EDX,dword ptr [EBP + 0x24]
LAB_006f53b3:
006F53B3  F6 C1 80                  TEST CL,0x80
006F53B6  75 10                     JNZ 0x006f53c8
LAB_006f53b8:
006F53B8  3B CA                     CMP ECX,EDX
006F53BA  7D 36                     JGE 0x006f53f2
006F53BC  2B D1                     SUB EDX,ECX
006F53BE  33 C9                     XOR ECX,ECX
006F53C0  8A 0E                     MOV CL,byte ptr [ESI]
006F53C2  46                        INC ESI
006F53C3  F6 C1 80                  TEST CL,0x80
006F53C6  74 F0                     JZ 0x006f53b8
LAB_006f53c8:
006F53C8  F6 C1 40                  TEST CL,0x40
006F53CB  74 11                     JZ 0x006f53de
006F53CD  80 E1 3F                  AND CL,0x3f
006F53D0  46                        INC ESI
006F53D1  3B CA                     CMP ECX,EDX
006F53D3  7D 1D                     JGE 0x006f53f2
006F53D5  2B D1                     SUB EDX,ECX
006F53D7  33 C9                     XOR ECX,ECX
006F53D9  8A 0E                     MOV CL,byte ptr [ESI]
006F53DB  46                        INC ESI
006F53DC  EB D5                     JMP 0x006f53b3
LAB_006f53de:
006F53DE  80 E1 3F                  AND CL,0x3f
006F53E1  3B CA                     CMP ECX,EDX
006F53E3  7D 0B                     JGE 0x006f53f0
006F53E5  03 F1                     ADD ESI,ECX
006F53E7  2B D1                     SUB EDX,ECX
006F53E9  33 C9                     XOR ECX,ECX
006F53EB  8A 0E                     MOV CL,byte ptr [ESI]
006F53ED  46                        INC ESI
006F53EE  EB C3                     JMP 0x006f53b3
LAB_006f53f0:
006F53F0  03 F1                     ADD ESI,ECX
FUN_006f5240::cf_continue_loop_006F53F2:
006F53F2  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006F53F5  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F53F8  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F53FB  2B DA                     SUB EBX,EDX
006F53FD  2B FA                     SUB EDI,EDX
006F53FF  2B DA                     SUB EBX,EDX
006F5401  FF 4D 2C                  DEC dword ptr [EBP + 0x2c]
006F5404  0F 8F 4F FE FF FF         JG 0x006f5259
006F540A  EB 0F                     JMP 0x006f541b
LAB_006f540c:
006F540C  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
006F540F  03 5D 14                  ADD EBX,dword ptr [EBP + 0x14]
006F5412  FF 4D 2C                  DEC dword ptr [EBP + 0x2c]
006F5415  0F 8F 3E FE FF FF         JG 0x006f5259
LAB_006f541b:
006F541B  5F                        POP EDI
006F541C  5E                        POP ESI
006F541D  5B                        POP EBX
006F541E  5D                        POP EBP
006F541F  C2 28 00                  RET 0x28
