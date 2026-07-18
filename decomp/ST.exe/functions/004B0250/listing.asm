FUN_004b0250:
004B0250  55                        PUSH EBP
004B0251  8B EC                     MOV EBP,ESP
004B0253  81 EC 90 00 00 00         SUB ESP,0x90
004B0259  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004B025F  83 C8 FF                  OR EAX,0xffffffff
004B0262  53                        PUSH EBX
004B0263  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
004B0266  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004B0269  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004B026C  66 A1 42 B2 7F 00         MOV AX,[0x007fb242]
004B0272  56                        PUSH ESI
004B0273  33 F6                     XOR ESI,ESI
004B0275  66 3B C1                  CMP AX,CX
004B0278  57                        PUSH EDI
004B0279  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
004B027C  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
004B027F  7F 02                     JG 0x004b0283
004B0281  8B C1                     MOV EAX,ECX
LAB_004b0283:
004B0283  0F BF C0                  MOVSX EAX,AX
004B0286  33 C9                     XOR ECX,ECX
004B0288  56                        PUSH ESI
004B0289  8A 0D C6 87 80 00         MOV CL,byte ptr [0x008087c6]
004B028F  99                        CDQ
004B0290  F7 F9                     IDIV ECX
004B0292  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B0295  83 C2 CE                  ADD EDX,-0x32
004B0298  52                        PUSH EDX
004B0299  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
004B029C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B029F  50                        PUSH EAX
004B02A0  E8 A0 59 F5 FF            CALL 0x00405c45
004B02A5  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004B02A8  83 C4 0C                  ADD ESP,0xc
004B02AB  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004B02B2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004B02B5  51                        PUSH ECX
004B02B6  E8 B5 A9 1F 00            CALL 0x006aac70
004B02BB  6A 0A                     PUSH 0xa
004B02BD  6A 04                     PUSH 0x4
004B02BF  6A 0A                     PUSH 0xa
004B02C1  56                        PUSH ESI
004B02C2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004B02C5  E8 C6 DF 1F 00            CALL 0x006ae290
004B02CA  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
004B02CD  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004B02D0  EB 02                     JMP 0x004b02d4
LAB_004b02d2:
004B02D2  33 F6                     XOR ESI,ESI
LAB_004b02d4:
004B02D4  0F BF 05 46 B2 7F 00      MOVSX EAX,word ptr [0x007fb246]
004B02DB  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
004B02DF  66 39 35 42 B2 7F 00      CMP word ptr [0x007fb242],SI
004B02E6  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004B02E9  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
004B02EC  0F 8E BC 02 00 00         JLE 0x004b05ae
004B02F2  8B 15 40 B2 7F 00         MOV EDX,dword ptr [0x007fb240]
LAB_004b02f8:
004B02F8  0F BF CA                  MOVSX ECX,DX
004B02FB  8B C1                     MOV EAX,ECX
004B02FD  33 FF                     XOR EDI,EDI
004B02FF  0F AF 45 F0               IMUL EAX,dword ptr [EBP + -0x10]
004B0303  85 C9                     TEST ECX,ECX
004B0305  0F 8E 8D 02 00 00         JLE 0x004b0598
004B030B  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
004B030E  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
004B0311  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004B0314  8D 04 DD 00 00 00 00      LEA EAX,[EBX*0x8 + 0x0]
004B031B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_004b031e:
004B031E  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
004B0324  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004B0327  8B 0C 08                  MOV ECX,dword ptr [EAX + ECX*0x1]
004B032A  85 C9                     TEST ECX,ECX
004B032C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004B032F  0F 85 8B 00 00 00         JNZ 0x004b03c0
004B0335  66 85 FF                  TEST DI,DI
004B0338  7C 68                     JL 0x004b03a2
004B033A  66 3B FA                  CMP DI,DX
004B033D  7D 63                     JGE 0x004b03a2
004B033F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004B0342  66 85 C9                  TEST CX,CX
004B0345  7C 5B                     JL 0x004b03a2
004B0347  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004B034E  7D 52                     JGE 0x004b03a2
004B0350  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004B0353  66 85 C0                  TEST AX,AX
004B0356  7C 4A                     JL 0x004b03a2
004B0358  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004B035F  7D 41                     JGE 0x004b03a2
004B0361  0F BF D0                  MOVSX EDX,AX
004B0364  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
004B036B  0F AF D0                  IMUL EDX,EAX
004B036E  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
004B0375  0F BF C9                  MOVSX ECX,CX
004B0378  0F AF C8                  IMUL ECX,EAX
004B037B  A1 80 B2 7F 00            MOV EAX,[0x007fb280]
004B0380  03 D1                     ADD EDX,ECX
004B0382  0F BF CF                  MOVSX ECX,DI
004B0385  03 D1                     ADD EDX,ECX
004B0387  0F BF 04 50               MOVSX EAX,word ptr [EAX + EDX*0x2]
004B038B  85 C0                     TEST EAX,EAX
004B038D  75 0E                     JNZ 0x004b039d
004B038F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004B0392  8D 0C 3B                  LEA ECX,[EBX + EDI*0x1]
004B0395  88 04 11                  MOV byte ptr [ECX + EDX*0x1],AL
004B0398  E9 E0 01 00 00            JMP 0x004b057d
LAB_004b039d:
004B039D  83 F8 FF                  CMP EAX,-0x1
004B03A0  75 0F                     JNZ 0x004b03b1
LAB_004b03a2:
004B03A2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004B03A5  8D 04 3B                  LEA EAX,[EBX + EDI*0x1]
004B03A8  C6 04 08 03               MOV byte ptr [EAX + ECX*0x1],0x3
004B03AC  E9 CC 01 00 00            JMP 0x004b057d
LAB_004b03b1:
004B03B1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B03B4  8D 14 3B                  LEA EDX,[EBX + EDI*0x1]
004B03B7  C6 04 02 01               MOV byte ptr [EDX + EAX*0x1],0x1
004B03BB  E9 BD 01 00 00            JMP 0x004b057d
LAB_004b03c0:
004B03C0  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
004B03C3  83 F8 08                  CMP EAX,0x8
004B03C6  0F 83 57 01 00 00         JNC 0x004b0523
004B03CC  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004B03D2  85 D2                     TEST EDX,EDX
004B03D4  74 11                     JZ 0x004b03e7
004B03D6  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004B03D9  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
004B03E1  0F 83 3C 01 00 00         JNC 0x004b0523
LAB_004b03e7:
004B03E7  8B 15 28 67 80 00         MOV EDX,dword ptr [0x00806728]
004B03ED  8A 41 24                  MOV AL,byte ptr [ECX + 0x24]
004B03F0  88 45 DC                  MOV byte ptr [EBP + -0x24],AL
004B03F3  8A 8A 6F 14 00 00         MOV CL,byte ptr [EDX + 0x146f]
004B03F9  84 C9                     TEST CL,CL
004B03FB  74 36                     JZ 0x004b0433
004B03FD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004B0400  25 FF 00 00 00            AND EAX,0xff
004B0405  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
004B0408  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B040B  25 FF 00 00 00            AND EAX,0xff
004B0410  8D 0C F2                  LEA ECX,[EDX + ESI*0x8]
004B0413  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004B0416  8D 14 C2                  LEA EDX,[EDX + EAX*0x8]
004B0419  8A 84 10 CA 11 00 00      MOV AL,byte ptr [EAX + EDX*0x1 + 0x11ca]
004B0420  33 D2                     XOR EDX,EDX
004B0422  3A 84 0E CA 11 00 00      CMP AL,byte ptr [ESI + ECX*0x1 + 0x11ca]
004B0429  0F 95 C2                  SETNZ DL
004B042C  8B C2                     MOV EAX,EDX
004B042E  E9 A1 00 00 00            JMP 0x004b04d4
LAB_004b0433:
004B0433  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B0436  3A C1                     CMP AL,CL
004B0438  0F 84 8B 00 00 00         JZ 0x004b04c9
004B043E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004B0441  8B F1                     MOV ESI,ECX
004B0443  25 FF 00 00 00            AND EAX,0xff
004B0448  81 E6 FF 00 00 00         AND ESI,0xff
004B044E  8D 0C C6                  LEA ECX,[ESI + EAX*0x8]
004B0451  8A 8C 11 2F 14 00 00      MOV CL,byte ptr [ECX + EDX*0x1 + 0x142f]
004B0458  84 C9                     TEST CL,CL
004B045A  75 19                     JNZ 0x004b0475
004B045C  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004B045F  38 8C 13 2F 14 00 00      CMP byte ptr [EBX + EDX*0x1 + 0x142f],CL
004B0466  75 0A                     JNZ 0x004b0472
004B0468  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004B046B  B8 FE FF FF FF            MOV EAX,0xfffffffe
004B0470  EB 59                     JMP 0x004b04cb
LAB_004b0472:
004B0472  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b0475:
004B0475  80 F9 01                  CMP CL,0x1
004B0478  75 18                     JNZ 0x004b0492
004B047A  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004B047D  80 BC 13 2F 14 00 00 00   CMP byte ptr [EBX + EDX*0x1 + 0x142f],0x0
004B0485  75 08                     JNZ 0x004b048f
004B0487  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004B048A  83 C8 FF                  OR EAX,0xffffffff
004B048D  EB 3C                     JMP 0x004b04cb
LAB_004b048f:
004B048F  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b0492:
004B0492  84 C9                     TEST CL,CL
004B0494  75 1A                     JNZ 0x004b04b0
004B0496  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004B0499  80 BC 13 2F 14 00 00 01   CMP byte ptr [EBX + EDX*0x1 + 0x142f],0x1
004B04A1  75 0A                     JNZ 0x004b04ad
004B04A3  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004B04A6  B8 01 00 00 00            MOV EAX,0x1
004B04AB  EB 1E                     JMP 0x004b04cb
LAB_004b04ad:
004B04AD  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b04b0:
004B04B0  80 F9 01                  CMP CL,0x1
004B04B3  75 14                     JNZ 0x004b04c9
004B04B5  8D 04 F0                  LEA EAX,[EAX + ESI*0x8]
004B04B8  80 BC 10 2F 14 00 00 01   CMP byte ptr [EAX + EDX*0x1 + 0x142f],0x1
004B04C0  75 07                     JNZ 0x004b04c9
004B04C2  B8 02 00 00 00            MOV EAX,0x2
004B04C7  EB 02                     JMP 0x004b04cb
LAB_004b04c9:
004B04C9  33 C0                     XOR EAX,EAX
LAB_004b04cb:
004B04CB  33 C9                     XOR ECX,ECX
004B04CD  85 C0                     TEST EAX,EAX
004B04CF  0F 9C C1                  SETL CL
004B04D2  8B C1                     MOV EAX,ECX
LAB_004b04d4:
004B04D4  85 C0                     TEST EAX,EAX
004B04D6  74 4B                     JZ 0x004b0523
004B04D8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B04DB  8D 14 3B                  LEA EDX,[EBX + EDI*0x1]
004B04DE  C6 04 02 04               MOV byte ptr [EDX + EAX*0x1],0x4
004B04E2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B04E5  8B 11                     MOV EDX,dword ptr [ECX]
004B04E7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B04EA  83 3C 85 2C 07 79 00 02   CMP dword ptr [EAX*0x4 + 0x79072c],0x2
004B04F2  74 20                     JZ 0x004b0514
004B04F4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B04F7  8B 01                     MOV EAX,dword ptr [ECX]
004B04F9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B04FC  83 F8 78                  CMP EAX,0x78
004B04FF  75 7C                     JNZ 0x004b057d
004B0501  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B0504  8B 91 59 02 00 00         MOV EDX,dword ptr [ECX + 0x259]
004B050A  83 3C 95 2C 07 79 00 02   CMP dword ptr [EDX*0x4 + 0x79072c],0x2
004B0512  75 69                     JNZ 0x004b057d
LAB_004b0514:
004B0514  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004B0517  8D 45 F8                  LEA EAX,[EBP + -0x8]
004B051A  50                        PUSH EAX
004B051B  51                        PUSH ECX
004B051C  E8 9F DC 1F 00            CALL 0x006ae1c0
004B0521  EB 5A                     JMP 0x004b057d
LAB_004b0523:
004B0523  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B0526  8B 11                     MOV EDX,dword ptr [ECX]
004B0528  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004B052B  8B 0C 85 2C 07 79 00      MOV ECX,dword ptr [EAX*0x4 + 0x79072c]
004B0532  BE 02 00 00 00            MOV ESI,0x2
004B0537  3B CE                     CMP ECX,ESI
004B0539  74 1F                     JZ 0x004b055a
004B053B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B053E  8B 01                     MOV EAX,dword ptr [ECX]
004B0540  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B0543  83 F8 78                  CMP EAX,0x78
004B0546  75 2B                     JNZ 0x004b0573
004B0548  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B054B  8B 91 59 02 00 00         MOV EDX,dword ptr [ECX + 0x259]
004B0551  39 34 95 2C 07 79 00      CMP dword ptr [EDX*0x4 + 0x79072c],ESI
004B0558  75 19                     JNZ 0x004b0573
LAB_004b055a:
004B055A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004B055D  8D 04 3B                  LEA EAX,[EBX + EDI*0x1]
004B0560  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B0563  C6 04 08 06               MOV byte ptr [EAX + ECX*0x1],0x6
004B0567  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004B056A  52                        PUSH EDX
004B056B  50                        PUSH EAX
004B056C  E8 4F DC 1F 00            CALL 0x006ae1c0
004B0571  EB 0A                     JMP 0x004b057d
LAB_004b0573:
004B0573  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004B0576  8D 0C 3B                  LEA ECX,[EBX + EDI*0x1]
004B0579  C6 04 11 05               MOV byte ptr [ECX + EDX*0x1],0x5
LAB_004b057d:
004B057D  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004B0580  47                        INC EDI
004B0581  83 C2 08                  ADD EDX,0x8
004B0584  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004B0587  8B 15 40 B2 7F 00         MOV EDX,dword ptr [0x007fb240]
004B058D  0F BF C2                  MOVSX EAX,DX
004B0590  3B F8                     CMP EDI,EAX
004B0592  0F 8C 86 FD FF FF         JL 0x004b031e
LAB_004b0598:
004B0598  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004B059B  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004B05A2  40                        INC EAX
004B05A3  3B C1                     CMP EAX,ECX
004B05A5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004B05A8  0F 8C 4A FD FF FF         JL 0x004b02f8
LAB_004b05ae:
004B05AE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004B05B1  40                        INC EAX
004B05B2  83 F8 04                  CMP EAX,0x4
004B05B5  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004B05B8  0F 8C 14 FD FF FF         JL 0x004b02d2
004B05BE  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004B05C3  33 F6                     XOR ESI,ESI
004B05C5  3B C6                     CMP EAX,ESI
004B05C7  74 6A                     JZ 0x004b0633
004B05C9  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
004B05CC  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B05D2  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B05D5  E8 B6 0B 20 00            CALL 0x006b1190
004B05DA  85 C0                     TEST EAX,EAX
004B05DC  7C 55                     JL 0x004b0633
LAB_004b05de:
004B05DE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B05E1  3B CE                     CMP ECX,ESI
004B05E3  74 3C                     JZ 0x004b0621
004B05E5  8D 55 D6                  LEA EDX,[EBP + -0x2a]
004B05E8  8D 45 0E                  LEA EAX,[EBP + 0xe]
004B05EB  52                        PUSH EDX
004B05EC  8D 55 E2                  LEA EDX,[EBP + -0x1e]
004B05EF  50                        PUSH EAX
004B05F0  52                        PUSH EDX
004B05F1  E8 CF 12 F5 FF            CALL 0x004018c5
004B05F6  0F BF 45 D6               MOVSX EAX,word ptr [EBP + -0x2a]
004B05FA  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004B0601  0F BF 55 0E               MOVSX EDX,word ptr [EBP + 0xe]
004B0605  0F AF C1                  IMUL EAX,ECX
004B0608  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
004B060F  0F AF D1                  IMUL EDX,ECX
004B0612  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
004B0615  0F BF 4D E2               MOVSX ECX,word ptr [EBP + -0x1e]
004B0619  03 D3                     ADD EDX,EBX
004B061B  03 D0                     ADD EDX,EAX
004B061D  C6 04 11 02               MOV byte ptr [ECX + EDX*0x1],0x2
LAB_004b0621:
004B0621  8B 0D 50 A1 7F 00         MOV ECX,dword ptr [0x007fa150]
004B0627  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B062A  E8 61 0B 20 00            CALL 0x006b1190
004B062F  85 C0                     TEST EAX,EAX
004B0631  7D AB                     JGE 0x004b05de
LAB_004b0633:
004B0633  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004B0639  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
004B0640  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004B0643  EB 02                     JMP 0x004b0647
LAB_004b0645:
004B0645  33 F6                     XOR ESI,ESI
LAB_004b0647:
004B0647  66 3B D6                  CMP DX,SI
004B064A  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
004B064D  0F 8E 54 04 00 00         JLE 0x004b0aa7
LAB_004b0653:
004B0653  0F BF D9                  MOVSX EBX,CX
004B0656  33 F6                     XOR ESI,ESI
004B0658  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004B065B  85 DB                     TEST EBX,EBX
004B065D  0F 8E 2B 04 00 00         JLE 0x004b0a8e
004B0663  EB 03                     JMP 0x004b0668
LAB_004b0665:
004B0665  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b0668:
004B0668  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
004B066F  0F AF 5D F0               IMUL EBX,dword ptr [EBP + -0x10]
004B0673  8B C1                     MOV EAX,ECX
004B0675  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
004B0678  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
004B067C  8D 14 03                  LEA EDX,[EBX + EAX*0x1]
004B067F  03 D6                     ADD EDX,ESI
004B0681  80 3C 3A 00               CMP byte ptr [EDX + EDI*0x1],0x0
004B0685  0F 85 EE 03 00 00         JNZ 0x004b0a79
004B068B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004B068E  85 D2                     TEST EDX,EDX
004B0690  7E 15                     JLE 0x004b06a7
004B0692  4A                        DEC EDX
004B0693  0F AF D1                  IMUL EDX,ECX
004B0696  03 D3                     ADD EDX,EBX
004B0698  03 D6                     ADD EDX,ESI
004B069A  80 3C 3A 03               CMP byte ptr [EDX + EDI*0x1],0x3
004B069E  0F 85 D5 03 00 00         JNZ 0x004b0a79
004B06A4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
LAB_004b06a7:
004B06A7  83 FA 04                  CMP EDX,0x4
004B06AA  7D 29                     JGE 0x004b06d5
004B06AC  42                        INC EDX
004B06AD  0F AF D1                  IMUL EDX,ECX
004B06B0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004B06B3  03 D3                     ADD EDX,EBX
004B06B5  03 D6                     ADD EDX,ESI
004B06B7  8A 0C 0A                  MOV CL,byte ptr [EDX + ECX*0x1]
004B06BA  80 F9 01                  CMP CL,0x1
004B06BD  0F 84 B6 03 00 00         JZ 0x004b0a79
004B06C3  80 F9 03                  CMP CL,0x3
004B06C6  0F 84 AD 03 00 00         JZ 0x004b0a79
004B06CC  80 F9 02                  CMP CL,0x2
004B06CF  0F 84 A4 03 00 00         JZ 0x004b0a79
LAB_004b06d5:
004B06D5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004B06D8  B9 08 00 00 00            MOV ECX,0x8
004B06DD  03 C2                     ADD EAX,EDX
004B06DF  8D BD 7C FF FF FF         LEA EDI,[EBP + 0xffffff7c]
004B06E5  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004B06E8  33 C0                     XOR EAX,EAX
004B06EA  F3 AB                     STOSD.REP ES:EDI
004B06EC  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
004B06EF  B8 01 00 00 00            MOV EAX,0x1
004B06F4  3B C8                     CMP ECX,EAX
004B06F6  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
004B06FD  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
004B0703  0F 8C 50 02 00 00         JL 0x004b0959
004B0709  8B C1                     MOV EAX,ECX
004B070B  0F AF C0                  IMUL EAX,EAX
004B070E  99                        CDQ
004B070F  2B C2                     SUB EAX,EDX
004B0711  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004B0714  D1 F8                     SAR EAX,0x1
004B0716  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
004B071C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004B071F  8B FA                     MOV EDI,EDX
004B0721  8D 48 FF                  LEA ECX,[EAX + -0x1]
004B0724  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004B0727  8D 48 01                  LEA ECX,[EAX + 0x1]
004B072A  0F AF CA                  IMUL ECX,EDX
004B072D  0F AF 55 E4               IMUL EDX,dword ptr [EBP + -0x1c]
004B0731  F7 DF                     NEG EDI
004B0733  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
004B0736  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
004B0739  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004B073C  03 CF                     ADD ECX,EDI
004B073E  03 DF                     ADD EBX,EDI
004B0740  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
004B0743  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
004B0746  03 D7                     ADD EDX,EDI
004B0748  8D 0C 33                  LEA ECX,[EBX + ESI*0x1]
004B074B  8B 9D 70 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff70]
004B0751  89 8D 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ECX
004B0757  49                        DEC ECX
004B0758  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
004B075B  8B CE                     MOV ECX,ESI
004B075D  2B C8                     SUB ECX,EAX
004B075F  2B C6                     SUB EAX,ESI
004B0761  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
004B0764  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004B0767  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004B076A  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004B076D  EB 03                     JMP 0x004b0772
LAB_004b076f:
004B076F  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
LAB_004b0772:
004B0772  8B 85 7C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff7c]
004B0778  85 C0                     TEST EAX,EAX
004B077A  75 2A                     JNZ 0x004b07a6
004B077C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B077F  8D 14 33                  LEA EDX,[EBX + ESI*0x1]
004B0782  3B D0                     CMP EDX,EAX
004B0784  7D 20                     JGE 0x004b07a6
004B0786  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
004B078C  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
004B078F  3C 01                     CMP AL,0x1
004B0791  74 09                     JZ 0x004b079c
004B0793  3C 03                     CMP AL,0x3
004B0795  74 05                     JZ 0x004b079c
004B0797  FF 45 08                  INC dword ptr [EBP + 0x8]
004B079A  EB 0A                     JMP 0x004b07a6
LAB_004b079c:
004B079C  C7 85 7C FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x1
LAB_004b07a6:
004B07A6  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
004B07A9  85 C0                     TEST EAX,EAX
004B07AB  75 22                     JNZ 0x004b07cf
004B07AD  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
004B07B0  03 D1                     ADD EDX,ECX
004B07B2  85 D2                     TEST EDX,EDX
004B07B4  7C 19                     JL 0x004b07cf
004B07B6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004B07B9  8A 00                     MOV AL,byte ptr [EAX]
004B07BB  3C 01                     CMP AL,0x1
004B07BD  74 09                     JZ 0x004b07c8
004B07BF  3C 03                     CMP AL,0x3
004B07C1  74 05                     JZ 0x004b07c8
004B07C3  FF 45 08                  INC dword ptr [EBP + 0x8]
004B07C6  EB 07                     JMP 0x004b07cf
LAB_004b07c8:
004B07C8  C7 45 80 01 00 00 00      MOV dword ptr [EBP + -0x80],0x1
LAB_004b07cf:
004B07CF  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
004B07D2  85 C0                     TEST EAX,EAX
004B07D4  75 2C                     JNZ 0x004b0802
004B07D6  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004B07D9  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004B07E0  03 D3                     ADD EDX,EBX
004B07E2  03 D6                     ADD EDX,ESI
004B07E4  3B D0                     CMP EDX,EAX
004B07E6  7D 1A                     JGE 0x004b0802
004B07E8  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
004B07EB  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
004B07EE  3C 01                     CMP AL,0x1
004B07F0  74 09                     JZ 0x004b07fb
004B07F2  3C 03                     CMP AL,0x3
004B07F4  74 05                     JZ 0x004b07fb
004B07F6  FF 45 08                  INC dword ptr [EBP + 0x8]
004B07F9  EB 07                     JMP 0x004b0802
LAB_004b07fb:
004B07FB  C7 45 84 01 00 00 00      MOV dword ptr [EBP + -0x7c],0x1
LAB_004b0802:
004B0802  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
004B0805  85 C0                     TEST EAX,EAX
004B0807  75 1E                     JNZ 0x004b0827
004B0809  85 C9                     TEST ECX,ECX
004B080B  7C 1A                     JL 0x004b0827
004B080D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004B0810  8A 04 30                  MOV AL,byte ptr [EAX + ESI*0x1]
004B0813  3C 01                     CMP AL,0x1
004B0815  74 09                     JZ 0x004b0820
004B0817  3C 03                     CMP AL,0x3
004B0819  74 05                     JZ 0x004b0820
004B081B  FF 45 08                  INC dword ptr [EBP + 0x8]
004B081E  EB 07                     JMP 0x004b0827
LAB_004b0820:
004B0820  C7 45 88 01 00 00 00      MOV dword ptr [EBP + -0x78],0x1
LAB_004b0827:
004B0827  8B D3                     MOV EDX,EBX
004B0829  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
004B082F  0F AF D3                  IMUL EDX,EBX
004B0832  3B D0                     CMP EDX,EAX
004B0834  0F 8D E2 00 00 00         JGE 0x004b091c
004B083A  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
004B083D  85 C0                     TEST EAX,EAX
004B083F  75 38                     JNZ 0x004b0879
004B0841  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004B0844  8D 04 33                  LEA EAX,[EBX + ESI*0x1]
004B0847  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
004B084A  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
004B0851  3B D1                     CMP EDX,ECX
004B0853  7D 21                     JGE 0x004b0876
004B0855  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
004B0858  7D 1C                     JGE 0x004b0876
004B085A  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
004B085D  03 D3                     ADD EDX,EBX
004B085F  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
004B0862  3C 01                     CMP AL,0x1
004B0864  74 09                     JZ 0x004b086f
004B0866  3C 03                     CMP AL,0x3
004B0868  74 05                     JZ 0x004b086f
004B086A  FF 45 08                  INC dword ptr [EBP + 0x8]
004B086D  EB 07                     JMP 0x004b0876
LAB_004b086f:
004B086F  C7 45 8C 01 00 00 00      MOV dword ptr [EBP + -0x74],0x1
LAB_004b0876:
004B0876  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_004b0879:
004B0879  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
004B087C  85 C0                     TEST EAX,EAX
004B087E  75 2B                     JNZ 0x004b08ab
004B0880  85 C9                     TEST ECX,ECX
004B0882  7C 27                     JL 0x004b08ab
004B0884  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004B0887  03 C1                     ADD EAX,ECX
004B0889  85 C0                     TEST EAX,EAX
004B088B  7C 1E                     JL 0x004b08ab
004B088D  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
004B0890  2B D3                     SUB EDX,EBX
004B0892  03 D7                     ADD EDX,EDI
004B0894  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
004B0897  3C 01                     CMP AL,0x1
004B0899  74 09                     JZ 0x004b08a4
004B089B  3C 03                     CMP AL,0x3
004B089D  74 05                     JZ 0x004b08a4
004B089F  FF 45 08                  INC dword ptr [EBP + 0x8]
004B08A2  EB 07                     JMP 0x004b08ab
LAB_004b08a4:
004B08A4  C7 45 90 01 00 00 00      MOV dword ptr [EBP + -0x70],0x1
LAB_004b08ab:
004B08AB  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
004B08AE  85 C0                     TEST EAX,EAX
004B08B0  75 39                     JNZ 0x004b08eb
004B08B2  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004B08B5  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
004B08BC  03 C3                     ADD EAX,EBX
004B08BE  03 C6                     ADD EAX,ESI
004B08C0  3B C2                     CMP EAX,EDX
004B08C2  7D 27                     JGE 0x004b08eb
004B08C4  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004B08C7  03 C1                     ADD EAX,ECX
004B08C9  85 C0                     TEST EAX,EAX
004B08CB  7C 1E                     JL 0x004b08eb
004B08CD  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004B08D0  2B D3                     SUB EDX,EBX
004B08D2  03 D7                     ADD EDX,EDI
004B08D4  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
004B08D7  3C 01                     CMP AL,0x1
004B08D9  74 09                     JZ 0x004b08e4
004B08DB  3C 03                     CMP AL,0x3
004B08DD  74 05                     JZ 0x004b08e4
004B08DF  FF 45 08                  INC dword ptr [EBP + 0x8]
004B08E2  EB 07                     JMP 0x004b08eb
LAB_004b08e4:
004B08E4  C7 45 94 01 00 00 00      MOV dword ptr [EBP + -0x6c],0x1
LAB_004b08eb:
004B08EB  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
004B08EE  85 C0                     TEST EAX,EAX
004B08F0  75 2A                     JNZ 0x004b091c
004B08F2  85 C9                     TEST ECX,ECX
004B08F4  7C 26                     JL 0x004b091c
004B08F6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004B08F9  8D 04 33                  LEA EAX,[EBX + ESI*0x1]
004B08FC  3B C2                     CMP EAX,EDX
004B08FE  7D 1C                     JGE 0x004b091c
004B0900  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004B0903  03 D3                     ADD EDX,EBX
004B0905  8A 04 32                  MOV AL,byte ptr [EDX + ESI*0x1]
004B0908  3C 01                     CMP AL,0x1
004B090A  74 09                     JZ 0x004b0915
004B090C  3C 03                     CMP AL,0x3
004B090E  74 05                     JZ 0x004b0915
004B0910  FF 45 08                  INC dword ptr [EBP + 0x8]
004B0913  EB 07                     JMP 0x004b091c
LAB_004b0915:
004B0915  C7 45 98 01 00 00 00      MOV dword ptr [EBP + -0x68],0x1
LAB_004b091c:
004B091C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004B091F  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
004B0922  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
004B0925  03 F8                     ADD EDI,EAX
004B0927  89 7D AC                  MOV dword ptr [EBP + -0x54],EDI
004B092A  8B 7D A4                  MOV EDI,dword ptr [EBP + -0x5c]
004B092D  03 D0                     ADD EDX,EAX
004B092F  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004B0932  03 F8                     ADD EDI,EAX
004B0934  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
004B0937  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004B093A  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
004B093D  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004B0940  43                        INC EBX
004B0941  03 D0                     ADD EDX,EAX
004B0943  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004B0946  4F                        DEC EDI
004B0947  49                        DEC ECX
004B0948  3B D8                     CMP EBX,EAX
004B094A  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004B094D  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004B0950  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004B0953  0F 8E 16 FE FF FF         JLE 0x004b076f
LAB_004b0959:
004B0959  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004B095C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004B095F  85 C9                     TEST ECX,ECX
004B0961  0F 84 B1 00 00 00         JZ 0x004b0a18
004B0967  8B C8                     MOV ECX,EAX
004B0969  83 CF FF                  OR EDI,0xffffffff
004B096C  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B096F  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
004B0972  C7 41 04 00 00 00 00      MOV dword ptr [ECX + 0x4],0x0
004B0979  E8 12 08 20 00            CALL 0x006b1190
004B097E  85 C0                     TEST EAX,EAX
004B0980  7C 55                     JL 0x004b09d7
004B0982  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
004B0985  99                        CDQ
004B0986  2B C2                     SUB EAX,EDX
004B0988  8B D8                     MOV EBX,EAX
004B098A  D1 FB                     SAR EBX,0x1
LAB_004b098c:
004B098C  8D 4D D6                  LEA ECX,[EBP + -0x2a]
004B098F  8D 55 0E                  LEA EDX,[EBP + 0xe]
004B0992  51                        PUSH ECX
004B0993  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004B0996  8D 45 E2                  LEA EAX,[EBP + -0x1e]
004B0999  52                        PUSH EDX
004B099A  50                        PUSH EAX
004B099B  E8 25 0F F5 FF            CALL 0x004018c5
004B09A0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004B09A3  0F BF 55 0E               MOVSX EDX,word ptr [EBP + 0xe]
004B09A7  0F BF 45 E2               MOVSX EAX,word ptr [EBP + -0x1e]
004B09AB  51                        PUSH ECX
004B09AC  56                        PUSH ESI
004B09AD  52                        PUSH EDX
004B09AE  50                        PUSH EAX
004B09AF  E8 24 C5 1F 00            CALL 0x006aced8
004B09B4  83 C4 10                  ADD ESP,0x10
004B09B7  3B C3                     CMP EAX,EBX
004B09B9  7F 0A                     JG 0x004b09c5
004B09BB  85 FF                     TEST EDI,EDI
004B09BD  7C 04                     JL 0x004b09c3
004B09BF  3B C7                     CMP EAX,EDI
004B09C1  7D 02                     JGE 0x004b09c5
LAB_004b09c3:
004B09C3  8B F8                     MOV EDI,EAX
LAB_004b09c5:
004B09C5  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004B09C8  8D 55 F8                  LEA EDX,[EBP + -0x8]
004B09CB  E8 C0 07 20 00            CALL 0x006b1190
004B09D0  85 C0                     TEST EAX,EAX
004B09D2  7D B8                     JGE 0x004b098c
004B09D4  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
LAB_004b09d7:
004B09D7  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004B09DA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004B09DD  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004B09E0  51                        PUSH ECX
004B09E1  52                        PUSH EDX
004B09E2  50                        PUSH EAX
004B09E3  56                        PUSH ESI
004B09E4  E8 EF C4 1F 00            CALL 0x006aced8
004B09E9  8B 5D C8                  MOV EBX,dword ptr [EBP + -0x38]
004B09EC  83 C4 10                  ADD ESP,0x10
004B09EF  85 DB                     TEST EBX,EBX
004B09F1  8B C8                     MOV ECX,EAX
004B09F3  7C 5C                     JL 0x004b0a51
004B09F5  99                        CDQ
004B09F6  F7 7D A0                  IDIV dword ptr [EBP + -0x60]
004B09F9  8B D0                     MOV EDX,EAX
004B09FB  8B C3                     MOV EAX,EBX
004B09FD  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
004B0A00  99                        CDQ
004B0A01  F7 7D A0                  IDIV dword ptr [EBP + -0x60]
004B0A04  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004B0A07  3B D0                     CMP EDX,EAX
004B0A09  7F 6E                     JG 0x004b0a79
004B0A0B  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004B0A0E  85 FF                     TEST EDI,EDI
004B0A10  7D 0B                     JGE 0x004b0a1d
004B0A12  85 C0                     TEST EAX,EAX
004B0A14  7D 3B                     JGE 0x004b0a51
004B0A16  EB 26                     JMP 0x004b0a3e
LAB_004b0a18:
004B0A18  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
004B0A1B  EB BA                     JMP 0x004b09d7
LAB_004b0a1d:
004B0A1D  85 C0                     TEST EAX,EAX
004B0A1F  7C 58                     JL 0x004b0a79
004B0A21  85 FF                     TEST EDI,EDI
004B0A23  7C 19                     JL 0x004b0a3e
004B0A25  3B F8                     CMP EDI,EAX
004B0A27  7F 28                     JG 0x004b0a51
004B0A29  75 4E                     JNZ 0x004b0a79
004B0A2B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B0A2E  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
004B0A31  3B C2                     CMP EAX,EDX
004B0A33  7F 1F                     JG 0x004b0a54
004B0A35  75 42                     JNZ 0x004b0a79
004B0A37  3B 4D C8                  CMP ECX,dword ptr [EBP + -0x38]
004B0A3A  7E 18                     JLE 0x004b0a54
004B0A3C  EB 3B                     JMP 0x004b0a79
LAB_004b0a3e:
004B0A3E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B0A41  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
004B0A44  3B C2                     CMP EAX,EDX
004B0A46  7F 0C                     JG 0x004b0a54
004B0A48  75 2F                     JNZ 0x004b0a79
004B0A4A  3B 4D C8                  CMP ECX,dword ptr [EBP + -0x38]
004B0A4D  7F 2A                     JG 0x004b0a79
004B0A4F  EB 03                     JMP 0x004b0a54
LAB_004b0a51:
004B0A51  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
LAB_004b0a54:
004B0A54  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004B0A57  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004B0A5A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B0A5D  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
004B0A60  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B0A63  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
004B0A66  89 30                     MOV dword ptr [EAX],ESI
004B0A68  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004B0A6B  89 11                     MOV dword ptr [ECX],EDX
004B0A6D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004B0A70  C7 45 9C 01 00 00 00      MOV dword ptr [EBP + -0x64],0x1
004B0A77  89 01                     MOV dword ptr [ECX],EAX
LAB_004b0a79:
004B0A79  8B 0D 40 B2 7F 00         MOV ECX,dword ptr [0x007fb240]
004B0A7F  46                        INC ESI
004B0A80  0F BF C1                  MOVSX EAX,CX
004B0A83  3B F0                     CMP ESI,EAX
004B0A85  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004B0A88  0F 8C D7 FB FF FF         JL 0x004b0665
LAB_004b0a8e:
004B0A8E  66 8B 15 42 B2 7F 00      MOV DX,word ptr [0x007fb242]
004B0A95  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004B0A98  0F BF F2                  MOVSX ESI,DX
004B0A9B  40                        INC EAX
004B0A9C  3B C6                     CMP EAX,ESI
004B0A9E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004B0AA1  0F 8C AC FB FF FF         JL 0x004b0653
LAB_004b0aa7:
004B0AA7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004B0AAA  40                        INC EAX
004B0AAB  83 F8 04                  CMP EAX,0x4
004B0AAE  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004B0AB1  0F 8C 8E FB FF FF         JL 0x004b0645
004B0AB7  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
004B0ABA  52                        PUSH EDX
004B0ABB  E8 50 D6 1F 00            CALL 0x006ae110
004B0AC0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B0AC3  50                        PUSH EAX
004B0AC4  E8 C7 53 1F 00            CALL 0x006a5e90
004B0AC9  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
004B0ACC  5F                        POP EDI
004B0ACD  5E                        POP ESI
004B0ACE  5B                        POP EBX
004B0ACF  8B E5                     MOV ESP,EBP
004B0AD1  5D                        POP EBP
004B0AD2  C3                        RET
