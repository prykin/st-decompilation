FUN_00586320:
00586320  55                        PUSH EBP
00586321  8B EC                     MOV EBP,ESP
00586323  83 EC 48                  SUB ESP,0x48
00586326  53                        PUSH EBX
00586327  56                        PUSH ESI
00586328  57                        PUSH EDI
00586329  8B F9                     MOV EDI,ECX
0058632B  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
0058632E  66 8B 47 41               MOV AX,word ptr [EDI + 0x41]
00586332  66 85 C0                  TEST AX,AX
00586335  0F BF C8                  MOVSX ECX,AX
00586338  B8 79 19 8C 02            MOV EAX,0x28c1979
0058633D  7C 10                     JL 0x0058634f
0058633F  F7 E9                     IMUL ECX
00586341  D1 FA                     SAR EDX,0x1
00586343  8B C2                     MOV EAX,EDX
00586345  C1 E8 1F                  SHR EAX,0x1f
00586348  03 D0                     ADD EDX,EAX
0058634A  0F BF F2                  MOVSX ESI,DX
0058634D  EB 0F                     JMP 0x0058635e
LAB_0058634f:
0058634F  F7 E9                     IMUL ECX
00586351  D1 FA                     SAR EDX,0x1
00586353  8B CA                     MOV ECX,EDX
00586355  C1 E9 1F                  SHR ECX,0x1f
00586358  03 D1                     ADD EDX,ECX
0058635A  0F BF F2                  MOVSX ESI,DX
0058635D  4E                        DEC ESI
LAB_0058635e:
0058635E  66 8B 47 43               MOV AX,word ptr [EDI + 0x43]
00586362  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00586365  66 85 C0                  TEST AX,AX
00586368  0F BF C8                  MOVSX ECX,AX
0058636B  B8 79 19 8C 02            MOV EAX,0x28c1979
00586370  7C 13                     JL 0x00586385
00586372  F7 E9                     IMUL ECX
00586374  D1 FA                     SAR EDX,0x1
00586376  8B C2                     MOV EAX,EDX
00586378  C1 E8 1F                  SHR EAX,0x1f
0058637B  03 D0                     ADD EDX,EAX
0058637D  0F BF CA                  MOVSX ECX,DX
00586380  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00586383  EB 12                     JMP 0x00586397
LAB_00586385:
00586385  F7 E9                     IMUL ECX
00586387  D1 FA                     SAR EDX,0x1
00586389  8B C2                     MOV EAX,EDX
0058638B  C1 E8 1F                  SHR EAX,0x1f
0058638E  03 D0                     ADD EDX,EAX
00586390  0F BF C2                  MOVSX EAX,DX
00586393  48                        DEC EAX
00586394  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00586397:
00586397  66 C7 87 73 02 00 00 00 00  MOV word ptr [EDI + 0x273],0x0
005863A0  C7 87 6F 02 00 00 FF 00 00 00  MOV dword ptr [EDI + 0x26f],0xff
005863AA  C7 87 31 02 00 00 01 00 00 00  MOV dword ptr [EDI + 0x231],0x1
005863B4  8D 4E 05                  LEA ECX,[ESI + 0x5]
005863B7  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
005863BE  8D 5E FB                  LEA EBX,[ESI + -0x5]
005863C1  3B C8                     CMP ECX,EAX
005863C3  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
005863C6  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
005863C9  7C 06                     JL 0x005863d1
005863CB  8D 48 FF                  LEA ECX,[EAX + -0x1]
005863CE  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_005863d1:
005863D1  85 DB                     TEST EBX,EBX
005863D3  7D 05                     JGE 0x005863da
005863D5  33 DB                     XOR EBX,EBX
005863D7  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
LAB_005863da:
005863DA  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005863DD  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
005863E4  8D 57 05                  LEA EDX,[EDI + 0x5]
005863E7  83 C7 FB                  ADD EDI,-0x5
005863EA  3B D0                     CMP EDX,EAX
005863EC  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
005863EF  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
005863F2  7C 06                     JL 0x005863fa
005863F4  8D 50 FF                  LEA EDX,[EAX + -0x1]
005863F7  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
LAB_005863fa:
005863FA  85 FF                     TEST EDI,EDI
005863FC  7D 05                     JGE 0x00586403
005863FE  33 FF                     XOR EDI,EDI
00586400  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
LAB_00586403:
00586403  3B F1                     CMP ESI,ECX
00586405  0F 8F F8 01 00 00         JG 0x00586603
0058640B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0058640E  3B C2                     CMP EAX,EDX
00586410  0F 8F ED 01 00 00         JG 0x00586603
00586416  3B F3                     CMP ESI,EBX
00586418  0F 8C E5 01 00 00         JL 0x00586603
0058641E  3B C7                     CMP EAX,EDI
00586420  0F 8C DD 01 00 00         JL 0x00586603
00586426  33 DB                     XOR EBX,EBX
00586428  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
LAB_0058642b:
0058642B  66 85 F6                  TEST SI,SI
0058642E  0F 8C C2 01 00 00         JL 0x005865f6
00586434  66 3B 35 40 B2 7F 00      CMP SI,word ptr [0x007fb240]
0058643B  0F 8D B5 01 00 00         JGE 0x005865f6
00586441  66 83 7D F0 00            CMP word ptr [EBP + -0x10],0x0
00586446  0F 8C AA 01 00 00         JL 0x005865f6
0058644C  66 8B 0D 42 B2 7F 00      MOV CX,word ptr [0x007fb242]
00586453  66 39 4D F0               CMP word ptr [EBP + -0x10],CX
00586457  0F 8D 99 01 00 00         JGE 0x005865f6
0058645D  66 85 DB                  TEST BX,BX
00586460  0F 8C 90 01 00 00         JL 0x005865f6
00586466  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
0058646D  0F 8D 83 01 00 00         JGE 0x005865f6
00586473  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
00586477  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0058647E  0F AF D0                  IMUL EDX,EAX
00586481  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
00586488  0F BF CB                  MOVSX ECX,BX
0058648B  0F AF C8                  IMUL ECX,EAX
0058648E  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
00586493  03 D1                     ADD EDX,ECX
00586495  0F BF CE                  MOVSX ECX,SI
00586498  03 D1                     ADD EDX,ECX
0058649A  8B 3C D0                  MOV EDI,dword ptr [EAX + EDX*0x8]
0058649D  85 FF                     TEST EDI,EDI
0058649F  0F 84 51 01 00 00         JZ 0x005865f6
005864A5  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
005864A8  3D E8 03 00 00            CMP EAX,0x3e8
005864AD  74 09                     JZ 0x005864b8
005864AF  83 F8 14                  CMP EAX,0x14
005864B2  0F 85 3E 01 00 00         JNZ 0x005865f6
LAB_005864b8:
005864B8  8B 17                     MOV EDX,dword ptr [EDI]
005864BA  8B CF                     MOV ECX,EDI
005864BC  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
005864C2  85 C0                     TEST EAX,EAX
005864C4  0F 84 2C 01 00 00         JZ 0x005865f6
005864CA  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005864CD  83 F8 08                  CMP EAX,0x8
005864D0  0F 83 20 01 00 00         JNC 0x005865f6
005864D6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005864DC  85 C9                     TEST ECX,ECX
005864DE  74 11                     JZ 0x005864f1
005864E0  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005864E3  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
005864EB  0F 83 05 01 00 00         JNC 0x005865f6
LAB_005864f1:
005864F1  8B 07                     MOV EAX,dword ptr [EDI]
005864F3  8B CF                     MOV ECX,EDI
005864F5  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
005864FB  85 C0                     TEST EAX,EAX
005864FD  0F 84 F3 00 00 00         JZ 0x005865f6
00586503  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00586506  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
00586509  88 4D D4                  MOV byte ptr [EBP + -0x2c],CL
0058650C  8A 50 24                  MOV DL,byte ptr [EAX + 0x24]
0058650F  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
00586512  88 55 D8                  MOV byte ptr [EBP + -0x28],DL
00586515  8A 98 6F 14 00 00         MOV BL,byte ptr [EAX + 0x146f]
0058651B  84 DB                     TEST BL,BL
0058651D  74 38                     JZ 0x00586557
0058651F  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00586522  81 E1 FF 00 00 00         AND ECX,0xff
00586528  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
0058652B  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0058652E  81 E1 FF 00 00 00         AND ECX,0xff
00586534  8D 1C D0                  LEA EBX,[EAX + EDX*0x8]
00586537  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0058653A  8A 94 1A CA 11 00 00      MOV DL,byte ptr [EDX + EBX*0x1 + 0x11ca]
00586541  33 DB                     XOR EBX,EBX
00586543  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
00586546  3A 94 01 CA 11 00 00      CMP DL,byte ptr [ECX + EAX*0x1 + 0x11ca]
0058654D  0F 95 C3                  SETNZ BL
00586550  8B C3                     MOV EAX,EBX
00586552  E9 94 00 00 00            JMP 0x005865eb
LAB_00586557:
00586557  3A CA                     CMP CL,DL
00586559  75 07                     JNZ 0x00586562
0058655B  33 C0                     XOR EAX,EAX
0058655D  E9 80 00 00 00            JMP 0x005865e2
LAB_00586562:
00586562  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00586565  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
00586568  81 E1 FF 00 00 00         AND ECX,0xff
0058656E  81 E6 FF 00 00 00         AND ESI,0xff
00586574  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
00586577  8A 94 02 2F 14 00 00      MOV DL,byte ptr [EDX + EAX*0x1 + 0x142f]
0058657E  84 D2                     TEST DL,DL
00586580  75 13                     JNZ 0x00586595
00586582  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
00586585  38 94 03 2F 14 00 00      CMP byte ptr [EBX + EAX*0x1 + 0x142f],DL
0058658C  75 07                     JNZ 0x00586595
0058658E  B8 FE FF FF FF            MOV EAX,0xfffffffe
00586593  EB 4A                     JMP 0x005865df
LAB_00586595:
00586595  80 FA 01                  CMP DL,0x1
00586598  75 12                     JNZ 0x005865ac
0058659A  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
0058659D  80 BC 03 2F 14 00 00 00   CMP byte ptr [EBX + EAX*0x1 + 0x142f],0x0
005865A5  75 05                     JNZ 0x005865ac
005865A7  83 C8 FF                  OR EAX,0xffffffff
005865AA  EB 33                     JMP 0x005865df
LAB_005865ac:
005865AC  84 D2                     TEST DL,DL
005865AE  75 14                     JNZ 0x005865c4
005865B0  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
005865B3  80 BC 03 2F 14 00 00 01   CMP byte ptr [EBX + EAX*0x1 + 0x142f],0x1
005865BB  75 07                     JNZ 0x005865c4
005865BD  B8 01 00 00 00            MOV EAX,0x1
005865C2  EB 1B                     JMP 0x005865df
LAB_005865c4:
005865C4  80 FA 01                  CMP DL,0x1
005865C7  75 14                     JNZ 0x005865dd
005865C9  8D 0C F1                  LEA ECX,[ECX + ESI*0x8]
005865CC  80 BC 01 2F 14 00 00 01   CMP byte ptr [ECX + EAX*0x1 + 0x142f],0x1
005865D4  75 07                     JNZ 0x005865dd
005865D6  B8 02 00 00 00            MOV EAX,0x2
005865DB  EB 02                     JMP 0x005865df
LAB_005865dd:
005865DD  33 C0                     XOR EAX,EAX
LAB_005865df:
005865DF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_005865e2:
005865E2  33 D2                     XOR EDX,EDX
005865E4  85 C0                     TEST EAX,EAX
005865E6  0F 9C C2                  SETL DL
005865E9  8B C2                     MOV EAX,EDX
LAB_005865eb:
005865EB  85 C0                     TEST EAX,EAX
005865ED  0F 85 AA 00 00 00         JNZ 0x0058669d
005865F3  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
LAB_005865f6:
005865F6  43                        INC EBX
005865F7  83 FB 05                  CMP EBX,0x5
005865FA  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
005865FD  0F 8C 28 FE FF FF         JL 0x0058642b
LAB_00586603:
00586603  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
LAB_0058660a:
0058660A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0058660D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00586610  8B 15 5C B9 7C 00         MOV EDX,dword ptr [0x007cb95c]
00586616  41                        INC ECX
00586617  8D 58 01                  LEA EBX,[EAX + 0x1]
0058661A  A1 68 B9 7C 00            MOV EAX,[0x007cb968]
0058661F  C7 45 D0 01 00 00 00      MOV dword ptr [EBP + -0x30],0x1
00586626  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00586629  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00586630  C7 45 DC 03 00 00 00      MOV dword ptr [EBP + -0x24],0x3
00586637  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0058663A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0058663D  8B F1                     MOV ESI,ECX
LAB_0058663f:
0058663F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_00586642:
00586642  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
00586645  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00586648  03 DA                     ADD EBX,EDX
0058664A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0058664D  03 F0                     ADD ESI,EAX
0058664F  8B C3                     MOV EAX,EBX
00586651  2B C2                     SUB EAX,EDX
00586653  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00586656  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00586659  79 04                     JNS 0x0058665f
0058665B  8B C2                     MOV EAX,EDX
0058665D  2B C3                     SUB EAX,EBX
LAB_0058665f:
0058665F  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
00586662  3B C7                     CMP EAX,EDI
00586664  7F 15                     JG 0x0058667b
00586666  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00586669  8B C6                     MOV EAX,ESI
0058666B  2B C2                     SUB EAX,EDX
0058666D  79 04                     JNS 0x00586673
0058666F  8B C2                     MOV EAX,EDX
00586671  2B C6                     SUB EAX,ESI
LAB_00586673:
00586673  3B C7                     CMP EAX,EDI
00586675  0F 8E 98 00 00 00         JLE 0x00586713
LAB_0058667b:
0058667B  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0058667E  33 C0                     XOR EAX,EAX
00586680  42                        INC EDX
00586681  83 FA 04                  CMP EDX,0x4
00586684  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00586687  7C 48                     JL 0x005866d1
00586689  33 D2                     XOR EDX,EDX
0058668B  47                        INC EDI
0058668C  83 FF 05                  CMP EDI,0x5
0058668F  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00586692  89 7D D0                  MOV dword ptr [EBP + -0x30],EDI
00586695  0F 8F 7A 02 00 00         JG 0x00586915
0058669B  EB 49                     JMP 0x005866e6
LAB_0058669d:
0058669D  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005866A0  C7 80 31 02 00 00 00 00 00 00  MOV dword ptr [EAX + 0x231],0x0
005866AA  C7 80 57 02 00 00 00 00 00 00  MOV dword ptr [EAX + 0x257],0x0
005866B4  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
005866B8  66 89 88 73 02 00 00      MOV word ptr [EAX + 0x273],CX
005866BF  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
005866C2  89 90 6F 02 00 00         MOV dword ptr [EAX + 0x26f],EDX
005866C8  8B C7                     MOV EAX,EDI
005866CA  5F                        POP EDI
005866CB  5E                        POP ESI
005866CC  5B                        POP EBX
005866CD  8B E5                     MOV ESP,EBP
005866CF  5D                        POP EBP
005866D0  C3                        RET
LAB_005866d1:
005866D1  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
005866D4  B8 01 00 00 00            MOV EAX,0x1
005866D9  2B DF                     SUB EBX,EDI
005866DB  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
005866DE  2B F7                     SUB ESI,EDI
005866E0  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
005866E3  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005866e6:
005866E6  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
005866E9  47                        INC EDI
005866EA  83 FF 04                  CMP EDI,0x4
005866ED  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
005866F0  7C 05                     JL 0x005866f7
005866F2  33 FF                     XOR EDI,EDI
005866F4  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
LAB_005866f7:
005866F7  8B 14 95 5C B9 7C 00      MOV EDX,dword ptr [EDX*0x4 + 0x7cb95c]
005866FE  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
00586701  8B 14 BD 5C B9 7C 00      MOV EDX,dword ptr [EDI*0x4 + 0x7cb95c]
00586708  85 C0                     TEST EAX,EAX
0058670A  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0058670D  0F 85 2F FF FF FF         JNZ 0x00586642
LAB_00586713:
00586713  3B 5D CC                  CMP EBX,dword ptr [EBP + -0x34]
00586716  0F 8F 26 FF FF FF         JG 0x00586642
0058671C  3B 75 C8                  CMP ESI,dword ptr [EBP + -0x38]
0058671F  0F 8F 1D FF FF FF         JG 0x00586642
00586725  3B 5D C4                  CMP EBX,dword ptr [EBP + -0x3c]
00586728  0F 8C 14 FF FF FF         JL 0x00586642
0058672E  3B 75 C0                  CMP ESI,dword ptr [EBP + -0x40]
00586731  0F 8C 0B FF FF FF         JL 0x00586642
00586737  66 85 DB                  TEST BX,BX
0058673A  0F 8C 02 FF FF FF         JL 0x00586642
00586740  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
00586746  66 3B D8                  CMP BX,AX
00586749  0F 8D F3 FE FF FF         JGE 0x00586642
0058674F  66 85 F6                  TEST SI,SI
00586752  0F 8C EA FE FF FF         JL 0x00586642
00586758  66 3B 35 42 B2 7F 00      CMP SI,word ptr [0x007fb242]
0058675F  0F 8D DD FE FF FF         JGE 0x00586642
00586765  66 85 C9                  TEST CX,CX
00586768  0F 8C D4 FE FF FF         JL 0x00586642
0058676E  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00586775  0F 8D C7 FE FF FF         JGE 0x00586642
0058677B  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00586782  0F BF D1                  MOVSX EDX,CX
00586785  0F AF D7                  IMUL EDX,EDI
00586788  0F BF C0                  MOVSX EAX,AX
0058678B  0F BF FE                  MOVSX EDI,SI
0058678E  0F AF C7                  IMUL EAX,EDI
00586791  03 D0                     ADD EDX,EAX
00586793  0F BF C3                  MOVSX EAX,BX
00586796  03 D0                     ADD EDX,EAX
00586798  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0058679D  8B 3C D0                  MOV EDI,dword ptr [EAX + EDX*0x8]
005867A0  85 FF                     TEST EDI,EDI
005867A2  0F 84 9A FE FF FF         JZ 0x00586642
005867A8  8B 47 20                  MOV EAX,dword ptr [EDI + 0x20]
005867AB  3D E8 03 00 00            CMP EAX,0x3e8
005867B0  74 09                     JZ 0x005867bb
005867B2  83 F8 14                  CMP EAX,0x14
005867B5  0F 85 87 FE FF FF         JNZ 0x00586642
LAB_005867bb:
005867BB  8B 17                     MOV EDX,dword ptr [EDI]
005867BD  8B CF                     MOV ECX,EDI
005867BF  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
005867C5  85 C0                     TEST EAX,EAX
005867C7  0F 84 72 FE FF FF         JZ 0x0058663f
005867CD  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005867D0  83 F8 08                  CMP EAX,0x8
005867D3  0F 83 66 FE FF FF         JNC 0x0058663f
005867D9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005867DF  85 C9                     TEST ECX,ECX
005867E1  74 11                     JZ 0x005867f4
005867E3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005867E6  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
005867EE  0F 83 4B FE FF FF         JNC 0x0058663f
LAB_005867f4:
005867F4  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005867F7  8A 4F 24                  MOV CL,byte ptr [EDI + 0x24]
005867FA  88 4D BC                  MOV byte ptr [EBP + -0x44],CL
005867FD  8A 50 24                  MOV DL,byte ptr [EAX + 0x24]
00586800  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
00586803  88 55 B8                  MOV byte ptr [EBP + -0x48],DL
00586806  80 B8 6F 14 00 00 00      CMP byte ptr [EAX + 0x146f],0x0
0058680D  74 45                     JZ 0x00586854
0058680F  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00586812  81 E1 FF 00 00 00         AND ECX,0xff
00586818  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
0058681B  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0058681E  81 E1 FF 00 00 00         AND ECX,0xff
00586824  8D 34 D0                  LEA ESI,[EAX + EDX*0x8]
00586827  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
0058682A  8A 94 32 CA 11 00 00      MOV DL,byte ptr [EDX + ESI*0x1 + 0x11ca]
00586831  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00586834  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00586837  33 D2                     XOR EDX,EDX
00586839  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0058683C  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0058683F  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
00586842  3A 94 01 CA 11 00 00      CMP DL,byte ptr [ECX + EAX*0x1 + 0x11ca]
00586849  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0058684C  0F 95 C0                  SETNZ AL
0058684F  E9 A6 00 00 00            JMP 0x005868fa
LAB_00586854:
00586854  3A CA                     CMP CL,DL
00586856  75 07                     JNZ 0x0058685f
00586858  33 C0                     XOR EAX,EAX
0058685A  E9 92 00 00 00            JMP 0x005868f1
LAB_0058685f:
0058685F  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00586862  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
00586865  81 E1 FF 00 00 00         AND ECX,0xff
0058686B  81 E6 FF 00 00 00         AND ESI,0xff
00586871  8D 14 CE                  LEA EDX,[ESI + ECX*0x8]
00586874  8A 94 02 2F 14 00 00      MOV DL,byte ptr [EDX + EAX*0x1 + 0x142f]
0058687B  84 D2                     TEST DL,DL
0058687D  75 19                     JNZ 0x00586898
0058687F  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
00586882  38 94 03 2F 14 00 00      CMP byte ptr [EBX + EAX*0x1 + 0x142f],DL
00586889  75 0A                     JNZ 0x00586895
0058688B  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
0058688E  B8 FE FF FF FF            MOV EAX,0xfffffffe
00586893  EB 59                     JMP 0x005868ee
LAB_00586895:
00586895  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_00586898:
00586898  80 FA 01                  CMP DL,0x1
0058689B  75 18                     JNZ 0x005868b5
0058689D  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
005868A0  80 BC 03 2F 14 00 00 00   CMP byte ptr [EBX + EAX*0x1 + 0x142f],0x0
005868A8  75 08                     JNZ 0x005868b2
005868AA  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005868AD  83 C8 FF                  OR EAX,0xffffffff
005868B0  EB 3C                     JMP 0x005868ee
LAB_005868b2:
005868B2  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_005868b5:
005868B5  84 D2                     TEST DL,DL
005868B7  75 1A                     JNZ 0x005868d3
005868B9  8D 1C F1                  LEA EBX,[ECX + ESI*0x8]
005868BC  80 BC 03 2F 14 00 00 01   CMP byte ptr [EBX + EAX*0x1 + 0x142f],0x1
005868C4  75 0A                     JNZ 0x005868d0
005868C6  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
005868C9  B8 01 00 00 00            MOV EAX,0x1
005868CE  EB 1E                     JMP 0x005868ee
LAB_005868d0:
005868D0  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
LAB_005868d3:
005868D3  80 FA 01                  CMP DL,0x1
005868D6  75 14                     JNZ 0x005868ec
005868D8  8D 0C F1                  LEA ECX,[ECX + ESI*0x8]
005868DB  80 BC 01 2F 14 00 00 01   CMP byte ptr [ECX + EAX*0x1 + 0x142f],0x1
005868E3  75 07                     JNZ 0x005868ec
005868E5  B8 02 00 00 00            MOV EAX,0x2
005868EA  EB 02                     JMP 0x005868ee
LAB_005868ec:
005868EC  33 C0                     XOR EAX,EAX
LAB_005868ee:
005868EE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
LAB_005868f1:
005868F1  33 D2                     XOR EDX,EDX
005868F3  85 C0                     TEST EAX,EAX
005868F5  0F 9C C2                  SETL DL
005868F8  8B C2                     MOV EAX,EDX
LAB_005868fa:
005868FA  85 C0                     TEST EAX,EAX
005868FC  0F 84 3D FD FF FF         JZ 0x0058663f
00586902  8B 07                     MOV EAX,dword ptr [EDI]
00586904  8B CF                     MOV ECX,EDI
00586906  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0058690C  85 C0                     TEST EAX,EAX
0058690E  75 1B                     JNZ 0x0058692b
00586910  E9 2A FD FF FF            JMP 0x0058663f
LAB_00586915:
00586915  41                        INC ECX
00586916  83 F9 05                  CMP ECX,0x5
00586919  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0058691C  0F 8C E8 FC FF FF         JL 0x0058660a
00586922  5F                        POP EDI
00586923  5E                        POP ESI
00586924  33 C0                     XOR EAX,EAX
00586926  5B                        POP EBX
00586927  8B E5                     MOV ESP,EBP
00586929  5D                        POP EBP
0058692A  C3                        RET
LAB_0058692b:
0058692B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0058692E  33 C9                     XOR ECX,ECX
00586930  89 88 31 02 00 00         MOV dword ptr [EAX + 0x231],ECX
00586936  89 88 57 02 00 00         MOV dword ptr [EAX + 0x257],ECX
0058693C  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
00586940  66 89 88 73 02 00 00      MOV word ptr [EAX + 0x273],CX
00586947  8B 57 24                  MOV EDX,dword ptr [EDI + 0x24]
0058694A  89 90 6F 02 00 00         MOV dword ptr [EAX + 0x26f],EDX
00586950  8B C7                     MOV EAX,EDI
00586952  5F                        POP EDI
00586953  5E                        POP ESI
00586954  5B                        POP EBX
00586955  8B E5                     MOV ESP,EBP
00586957  5D                        POP EBP
00586958  C3                        RET
