FUN_00746220:
00746220  55                        PUSH EBP
00746221  8B EC                     MOV EBP,ESP
00746223  6A FF                     PUSH -0x1
00746225  68 B0 10 7A 00            PUSH 0x7a10b0
0074622A  68 64 D9 72 00            PUSH 0x72d964
0074622F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00746235  50                        PUSH EAX
00746236  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0074623D  83 C4 C8                  ADD ESP,-0x38
00746240  53                        PUSH EBX
00746241  56                        PUSH ESI
00746242  57                        PUSH EDI
00746243  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00746246  83 3D FC 74 85 00 00      CMP dword ptr [0x008574fc],0x0
0074624D  75 57                     JNZ 0x007462a6
0074624F  6A 01                     PUSH 0x1
00746251  68 5C 0A 7A 00            PUSH 0x7a0a5c
00746256  6A 01                     PUSH 0x1
00746258  68 5C 0A 7A 00            PUSH 0x7a0a5c
0074625D  6A 00                     PUSH 0x0
0074625F  6A 00                     PUSH 0x0
00746261  FF 15 C8 BC 85 00         CALL dword ptr [0x0085bcc8]
00746267  85 C0                     TEST EAX,EAX
00746269  74 0C                     JZ 0x00746277
0074626B  C7 05 FC 74 85 00 01 00 00 00  MOV dword ptr [0x008574fc],0x1
00746275  EB 2F                     JMP 0x007462a6
LAB_00746277:
00746277  6A 01                     PUSH 0x1
00746279  68 58 0A 7A 00            PUSH 0x7a0a58
0074627E  6A 01                     PUSH 0x1
00746280  68 58 0A 7A 00            PUSH 0x7a0a58
00746285  6A 00                     PUSH 0x0
00746287  6A 00                     PUSH 0x0
00746289  FF 15 CC BC 85 00         CALL dword ptr [0x0085bccc]
0074628F  85 C0                     TEST EAX,EAX
00746291  74 0C                     JZ 0x0074629f
00746293  C7 05 FC 74 85 00 02 00 00 00  MOV dword ptr [0x008574fc],0x2
0074629D  EB 07                     JMP 0x007462a6
LAB_0074629f:
0074629F  33 C0                     XOR EAX,EAX
007462A1  E9 5E 03 00 00            JMP 0x00746604
LAB_007462a6:
007462A6  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
007462AA  7E 13                     JLE 0x007462bf
007462AC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007462AF  50                        PUSH EAX
007462B0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007462B3  51                        PUSH ECX
007462B4  E8 67 03 00 00            CALL 0x00746620
007462B9  83 C4 08                  ADD ESP,0x8
007462BC  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_007462bf:
007462BF  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
007462C3  7E 13                     JLE 0x007462d8
007462C5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
007462C8  52                        PUSH EDX
007462C9  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
007462CC  50                        PUSH EAX
007462CD  E8 4E 03 00 00            CALL 0x00746620
007462D2  83 C4 08                  ADD ESP,0x8
007462D5  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_007462d8:
007462D8  83 3D FC 74 85 00 02      CMP dword ptr [0x008574fc],0x2
007462DF  75 23                     JNZ 0x00746304
007462E1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007462E4  51                        PUSH ECX
007462E5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
007462E8  52                        PUSH EDX
007462E9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007462EC  50                        PUSH EAX
007462ED  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007462F0  51                        PUSH ECX
007462F1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007462F4  52                        PUSH EDX
007462F5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007462F8  50                        PUSH EAX
007462F9  FF 15 CC BC 85 00         CALL dword ptr [0x0085bccc]
007462FF  E9 00 03 00 00            JMP 0x00746604
LAB_00746304:
00746304  83 3D FC 74 85 00 01      CMP dword ptr [0x008574fc],0x1
0074630B  0F 85 F1 02 00 00         JNZ 0x00746602
00746311  83 7D 20 00               CMP dword ptr [EBP + 0x20],0x0
00746315  75 09                     JNZ 0x00746320
00746317  8B 0D 20 72 85 00         MOV ECX,dword ptr [0x00857220]
0074631D  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
LAB_00746320:
00746320  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
00746324  74 0A                     JZ 0x00746330
00746326  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
0074632A  0F 85 7C 01 00 00         JNZ 0x007464ac
LAB_00746330:
00746330  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00746333  3B 55 1C                  CMP EDX,dword ptr [EBP + 0x1c]
00746336  75 0A                     JNZ 0x00746342
00746338  B8 02 00 00 00            MOV EAX,0x2
0074633D  E9 C2 02 00 00            JMP 0x00746604
LAB_00746342:
00746342  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00746346  7E 0A                     JLE 0x00746352
00746348  B8 01 00 00 00            MOV EAX,0x1
0074634D  E9 B2 02 00 00            JMP 0x00746604
LAB_00746352:
00746352  83 7D 14 01               CMP dword ptr [EBP + 0x14],0x1
00746356  7E 0A                     JLE 0x00746362
00746358  B8 03 00 00 00            MOV EAX,0x3
0074635D  E9 A2 02 00 00            JMP 0x00746604
LAB_00746362:
00746362  8D 45 C4                  LEA EAX,[EBP + -0x3c]
00746365  50                        PUSH EAX
00746366  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00746369  51                        PUSH ECX
0074636A  FF 15 FC BB 85 00         CALL dword ptr [0x0085bbfc]
00746370  85 C0                     TEST EAX,EAX
00746372  75 07                     JNZ 0x0074637b
00746374  33 C0                     XOR EAX,EAX
00746376  E9 89 02 00 00            JMP 0x00746604
LAB_0074637b:
0074637B  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
0074637F  75 06                     JNZ 0x00746387
00746381  83 7D 1C 01               CMP dword ptr [EBP + 0x1c],0x1
00746385  74 2D                     JZ 0x007463b4
LAB_00746387:
00746387  83 7D 14 01               CMP dword ptr [EBP + 0x14],0x1
0074638B  75 06                     JNZ 0x00746393
0074638D  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
00746391  74 21                     JZ 0x007463b4
LAB_00746393:
00746393  68 70 10 7A 00            PUSH 0x7a1070
00746398  6A 00                     PUSH 0x0
0074639A  68 B6 00 00 00            PUSH 0xb6
0074639F  68 68 10 7A 00            PUSH 0x7a1068
007463A4  6A 02                     PUSH 0x2
007463A6  E8 F5 AB FE FF            CALL 0x00730fa0
007463AB  83 C4 14                  ADD ESP,0x14
007463AE  83 F8 01                  CMP EAX,0x1
007463B1  75 01                     JNZ 0x007463b4
007463B3  CC                        INT3
LAB_007463b4:
007463B4  33 D2                     XOR EDX,EDX
007463B6  85 D2                     TEST EDX,EDX
007463B8  75 C1                     JNZ 0x0074637b
007463BA  83 7D 14 00               CMP dword ptr [EBP + 0x14],0x0
007463BE  7E 73                     JLE 0x00746433
007463C0  83 7D C4 02               CMP dword ptr [EBP + -0x3c],0x2
007463C4  73 0A                     JNC 0x007463d0
007463C6  B8 03 00 00 00            MOV EAX,0x3
007463CB  E9 34 02 00 00            JMP 0x00746604
LAB_007463d0:
007463D0  8D 45 CA                  LEA EAX,[EBP + -0x36]
007463D3  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
007463D6  EB 09                     JMP 0x007463e1
LAB_007463d8:
007463D8  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
007463DB  83 C1 02                  ADD ECX,0x2
007463DE  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_007463e1:
007463E1  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
007463E4  33 C0                     XOR EAX,EAX
007463E6  8A 02                     MOV AL,byte ptr [EDX]
007463E8  85 C0                     TEST EAX,EAX
007463EA  74 3D                     JZ 0x00746429
007463EC  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
007463EF  33 D2                     XOR EDX,EDX
007463F1  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
007463F4  85 D2                     TEST EDX,EDX
007463F6  74 31                     JZ 0x00746429
007463F8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007463FB  33 C9                     XOR ECX,ECX
007463FD  8A 08                     MOV CL,byte ptr [EAX]
007463FF  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
00746402  33 C0                     XOR EAX,EAX
00746404  8A 02                     MOV AL,byte ptr [EDX]
00746406  3B C8                     CMP ECX,EAX
00746408  7C 1D                     JL 0x00746427
0074640A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0074640D  33 D2                     XOR EDX,EDX
0074640F  8A 11                     MOV DL,byte ptr [ECX]
00746411  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00746414  33 C9                     XOR ECX,ECX
00746416  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00746419  3B D1                     CMP EDX,ECX
0074641B  7F 0A                     JG 0x00746427
0074641D  B8 02 00 00 00            MOV EAX,0x2
00746422  E9 DD 01 00 00            JMP 0x00746604
LAB_00746427:
00746427  EB AF                     JMP 0x007463d8
LAB_00746429:
00746429  B8 03 00 00 00            MOV EAX,0x3
0074642E  E9 D1 01 00 00            JMP 0x00746604
LAB_00746433:
00746433  83 7D 1C 00               CMP dword ptr [EBP + 0x1c],0x0
00746437  7E 73                     JLE 0x007464ac
00746439  83 7D C4 02               CMP dword ptr [EBP + -0x3c],0x2
0074643D  73 0A                     JNC 0x00746449
0074643F  B8 01 00 00 00            MOV EAX,0x1
00746444  E9 BB 01 00 00            JMP 0x00746604
LAB_00746449:
00746449  8D 55 CA                  LEA EDX,[EBP + -0x36]
0074644C  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0074644F  EB 09                     JMP 0x0074645a
LAB_00746451:
00746451  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00746454  83 C0 02                  ADD EAX,0x2
00746457  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_0074645a:
0074645A  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0074645D  33 D2                     XOR EDX,EDX
0074645F  8A 11                     MOV DL,byte ptr [ECX]
00746461  85 D2                     TEST EDX,EDX
00746463  74 3D                     JZ 0x007464a2
00746465  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00746468  33 C9                     XOR ECX,ECX
0074646A  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
0074646D  85 C9                     TEST ECX,ECX
0074646F  74 31                     JZ 0x007464a2
00746471  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00746474  33 C0                     XOR EAX,EAX
00746476  8A 02                     MOV AL,byte ptr [EDX]
00746478  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
0074647B  33 D2                     XOR EDX,EDX
0074647D  8A 11                     MOV DL,byte ptr [ECX]
0074647F  3B C2                     CMP EAX,EDX
00746481  7C 1D                     JL 0x007464a0
00746483  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00746486  33 C9                     XOR ECX,ECX
00746488  8A 08                     MOV CL,byte ptr [EAX]
0074648A  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
0074648D  33 C0                     XOR EAX,EAX
0074648F  8A 42 01                  MOV AL,byte ptr [EDX + 0x1]
00746492  3B C8                     CMP ECX,EAX
00746494  7F 0A                     JG 0x007464a0
00746496  B8 02 00 00 00            MOV EAX,0x2
0074649B  E9 64 01 00 00            JMP 0x00746604
LAB_007464a0:
007464A0  EB AF                     JMP 0x00746451
LAB_007464a2:
007464A2  B8 01 00 00 00            MOV EAX,0x1
007464A7  E9 58 01 00 00            JMP 0x00746604
LAB_007464ac:
007464AC  6A 00                     PUSH 0x0
007464AE  6A 00                     PUSH 0x0
007464B0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007464B3  51                        PUSH ECX
007464B4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007464B7  52                        PUSH EDX
007464B8  6A 09                     PUSH 0x9
007464BA  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
007464BD  50                        PUSH EAX
007464BE  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
007464C4  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
007464C7  83 7D E4 00               CMP dword ptr [EBP + -0x1c],0x0
007464CB  75 07                     JNZ 0x007464d4
007464CD  33 C0                     XOR EAX,EAX
007464CF  E9 30 01 00 00            JMP 0x00746604
LAB_007464d4:
007464D4  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007464DB  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007464DE  D1 E0                     SHL EAX,0x1
007464E0  83 C0 03                  ADD EAX,0x3
007464E3  24 FC                     AND AL,0xfc
007464E5  E8 56 75 FE FF            CALL 0x0072da40
007464EA  89 65 BC                  MOV dword ptr [EBP + -0x44],ESP
007464ED  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
007464F0  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
007464F3  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
007464F6  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
007464FD  EB 17                     JMP 0x00746516
LAB_00746516:
00746516  83 7D DC 00               CMP dword ptr [EBP + -0x24],0x0
0074651A  75 07                     JNZ 0x00746523
0074651C  33 C0                     XOR EAX,EAX
0074651E  E9 E1 00 00 00            JMP 0x00746604
LAB_00746523:
00746523  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00746526  52                        PUSH EDX
00746527  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0074652A  50                        PUSH EAX
0074652B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0074652E  51                        PUSH ECX
0074652F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00746532  52                        PUSH EDX
00746533  6A 01                     PUSH 0x1
00746535  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
00746538  50                        PUSH EAX
00746539  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
0074653F  85 C0                     TEST EAX,EAX
00746541  75 07                     JNZ 0x0074654a
00746543  33 C0                     XOR EAX,EAX
00746545  E9 BA 00 00 00            JMP 0x00746604
LAB_0074654a:
0074654A  6A 00                     PUSH 0x0
0074654C  6A 00                     PUSH 0x0
0074654E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00746551  51                        PUSH ECX
00746552  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00746555  52                        PUSH EDX
00746556  6A 09                     PUSH 0x9
00746558  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0074655B  50                        PUSH EAX
0074655C  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
00746562  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00746565  83 7D E0 00               CMP dword ptr [EBP + -0x20],0x0
00746569  75 07                     JNZ 0x00746572
0074656B  33 C0                     XOR EAX,EAX
0074656D  E9 92 00 00 00            JMP 0x00746604
LAB_00746572:
00746572  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
00746579  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0074657C  D1 E0                     SHL EAX,0x1
0074657E  83 C0 03                  ADD EAX,0x3
00746581  24 FC                     AND AL,0xfc
00746583  E8 B8 74 FE FF            CALL 0x0072da40
00746588  89 65 B8                  MOV dword ptr [EBP + -0x48],ESP
0074658B  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0074658E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00746591  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00746594  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0074659B  EB 17                     JMP 0x007465b4
LAB_007465b4:
007465B4  83 7D D8 00               CMP dword ptr [EBP + -0x28],0x0
007465B8  75 04                     JNZ 0x007465be
007465BA  33 C0                     XOR EAX,EAX
007465BC  EB 46                     JMP 0x00746604
LAB_007465be:
007465BE  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
007465C1  52                        PUSH EDX
007465C2  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
007465C5  50                        PUSH EAX
007465C6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
007465C9  51                        PUSH ECX
007465CA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
007465CD  52                        PUSH EDX
007465CE  6A 01                     PUSH 0x1
007465D0  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
007465D3  50                        PUSH EAX
007465D4  FF 15 68 BB 85 00         CALL dword ptr [0x0085bb68]
007465DA  85 C0                     TEST EAX,EAX
007465DC  75 04                     JNZ 0x007465e2
007465DE  33 C0                     XOR EAX,EAX
007465E0  EB 22                     JMP 0x00746604
LAB_007465e2:
007465E2  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
007465E5  51                        PUSH ECX
007465E6  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
007465E9  52                        PUSH EDX
007465EA  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
007465ED  50                        PUSH EAX
007465EE  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
007465F1  51                        PUSH ECX
007465F2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007465F5  52                        PUSH EDX
007465F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007465F9  50                        PUSH EAX
007465FA  FF 15 C8 BC 85 00         CALL dword ptr [0x0085bcc8]
00746600  EB 02                     JMP 0x00746604
LAB_00746602:
00746602  33 C0                     XOR EAX,EAX
LAB_00746604:
00746604  8D 65 AC                  LEA ESP,[EBP + -0x54]
00746607  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0074660A  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00746611  5F                        POP EDI
00746612  5E                        POP ESI
00746613  5B                        POP EBX
00746614  8B E5                     MOV ESP,EBP
00746616  5D                        POP EBP
00746617  C3                        RET
