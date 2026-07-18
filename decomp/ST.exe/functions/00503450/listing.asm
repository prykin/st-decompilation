CPanelTy::SetControlBoatSI:
00503450  55                        PUSH EBP
00503451  8B EC                     MOV EBP,ESP
00503453  81 EC 24 0C 00 00         SUB ESP,0xc24
00503459  53                        PUSH EBX
0050345A  56                        PUSH ESI
0050345B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0050345E  57                        PUSH EDI
0050345F  B9 16 00 00 00            MOV ECX,0x16
00503464  33 C0                     XOR EAX,EAX
00503466  8D BD F4 FE FF FF         LEA EDI,[EBP + 0xfffffef4]
0050346C  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
00503472  F3 AB                     STOSD.REP ES:EDI
00503474  B9 8C 00 00 00            MOV ECX,0x8c
00503479  8D BD DC F3 FF FF         LEA EDI,[EBP + 0xfffff3dc]
0050347F  F3 AB                     STOSD.REP ES:EDI
00503481  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00503486  8D 8D 4C FF FF FF         LEA ECX,[EBP + 0xffffff4c]
0050348C  6A 00                     PUSH 0x0
0050348E  52                        PUSH EDX
0050348F  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
00503495  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050349B  E8 50 A3 22 00            CALL 0x0072d7f0
005034A0  8B F0                     MOV ESI,EAX
005034A2  83 C4 08                  ADD ESP,0x8
005034A5  85 F6                     TEST ESI,ESI
005034A7  0F 85 0D 05 00 00         JNZ 0x005039ba
005034AD  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
005034B3  E8 44 0C F0 FF            CALL 0x004040fc
005034B8  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
005034BB  8B 86 FE 02 00 00         MOV EAX,dword ptr [ESI + 0x2fe]
005034C1  85 C0                     TEST EAX,EAX
005034C3  74 09                     JZ 0x005034ce
005034C5  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005034C8  50                        PUSH EAX
005034C9  E8 E2 21 1E 00            CALL 0x006e56b0
LAB_005034ce:
005034CE  C7 86 FE 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2fe],0x0
005034D8  8D BE 60 09 00 00         LEA EDI,[ESI + 0x960]
005034DE  BB 04 00 00 00            MOV EBX,0x4
LAB_005034e3:
005034E3  8B 07                     MOV EAX,dword ptr [EDI]
005034E5  85 C0                     TEST EAX,EAX
005034E7  74 0F                     JZ 0x005034f8
005034E9  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005034EC  50                        PUSH EAX
005034ED  E8 BE 21 1E 00            CALL 0x006e56b0
005034F2  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_005034f8:
005034F8  83 C7 04                  ADD EDI,0x4
005034FB  4B                        DEC EBX
005034FC  75 E5                     JNZ 0x005034e3
005034FE  8B 86 70 09 00 00         MOV EAX,dword ptr [ESI + 0x970]
00503504  85 C0                     TEST EAX,EAX
00503506  74 09                     JZ 0x00503511
00503508  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0050350B  50                        PUSH EAX
0050350C  E8 9F 21 1E 00            CALL 0x006e56b0
LAB_00503511:
00503511  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
00503517  33 C9                     XOR ECX,ECX
00503519  84 C0                     TEST AL,AL
0050351B  89 8E 70 09 00 00         MOV dword ptr [ESI + 0x970],ECX
00503521  0F 84 2D 02 00 00         JZ 0x00503754
00503527  3C 04                     CMP AL,0x4
00503529  0F 84 25 02 00 00         JZ 0x00503754
0050352F  3C 03                     CMP AL,0x3
00503531  0F 84 1D 02 00 00         JZ 0x00503754
00503537  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0050353A  B9 14 00 00 00            MOV ECX,0x14
0050353F  33 C0                     XOR EAX,EAX
00503541  8D 7D 90                  LEA EDI,[EBP + -0x70]
00503544  F3 AB                     STOSD.REP ES:EDI
00503546  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
LAB_00503549:
00503549  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0050354C  8B F8                     MOV EDI,EAX
0050354E  81 E7 FF 00 00 00         AND EDI,0xff
00503554  8A 8C 37 A2 0B 00 00      MOV CL,byte ptr [EDI + ESI*0x1 + 0xba2]
0050355B  84 C9                     TEST CL,CL
0050355D  0F 84 4B 01 00 00         JZ 0x005036ae
00503563  83 FF 05                  CMP EDI,0x5
00503566  77 57                     JA 0x005035bf
switchD_00503568::switchD:
00503568  FF 24 BD 04 3A 50 00      JMP dword ptr [EDI*0x4 + 0x503a04]
switchD_00503568::caseD_0:
0050356F  BB 10 00 00 00            MOV EBX,0x10
00503574  C7 45 FC 4C 00 00 00      MOV dword ptr [EBP + -0x4],0x4c
0050357B  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0050357E  EB 3F                     JMP 0x005035bf
switchD_00503568::caseD_1:
00503580  BB 4D 00 00 00            MOV EBX,0x4d
00503585  C7 45 FC 4C 00 00 00      MOV dword ptr [EBP + -0x4],0x4c
0050358C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0050358F  EB 2E                     JMP 0x005035bf
switchD_00503568::caseD_2:
00503591  BB 82 00 00 00            MOV EBX,0x82
00503596  C7 45 FC 4C 00 00 00      MOV dword ptr [EBP + -0x4],0x4c
0050359D  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005035A0  EB 1D                     JMP 0x005035bf
switchD_00503568::caseD_3:
005035A2  BB 10 00 00 00            MOV EBX,0x10
005035A7  EB 0C                     JMP 0x005035b5
switchD_00503568::caseD_4:
005035A9  BB 82 00 00 00            MOV EBX,0x82
005035AE  EB 05                     JMP 0x005035b5
switchD_00503568::caseD_5:
005035B0  BB 4D 00 00 00            MOV EBX,0x4d
LAB_005035b5:
005035B5  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
005035B8  C7 45 FC 66 00 00 00      MOV dword ptr [EBP + -0x4],0x66
switchD_00503568::default:
005035BF  50                        PUSH EAX
005035C0  6A 01                     PUSH 0x1
005035C2  8B CE                     MOV ECX,ESI
005035C4  E8 75 FB EF FF            CALL 0x0040313e
005035C9  8A 86 A0 0B 00 00         MOV AL,byte ptr [ESI + 0xba0]
005035CF  84 C0                     TEST AL,AL
005035D1  74 0E                     JZ 0x005035e1
005035D3  33 C0                     XOR EAX,EAX
005035D5  8A 84 37 A8 0B 00 00      MOV AL,byte ptr [EDI + ESI*0x1 + 0xba8]
005035DC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005035DF  EB 07                     JMP 0x005035e8
LAB_005035e1:
005035E1  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
LAB_005035e8:
005035E8  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
005035EB  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
005035F1  C1 E1 03                  SHL ECX,0x3
005035F4  2B CF                     SUB ECX,EDI
005035F6  6A 00                     PUSH 0x0
005035F8  8D 94 31 80 07 00 00      LEA EDX,[ECX + ESI*0x1 + 0x780]
005035FF  8A 8C 37 A2 0B 00 00      MOV CL,byte ptr [EDI + ESI*0x1 + 0xba2]
00503606  52                        PUSH EDX
00503607  6A 00                     PUSH 0x0
00503609  6A 01                     PUSH 0x1
0050360B  6A 00                     PUSH 0x0
0050360D  50                        PUSH EAX
0050360E  51                        PUSH ECX
0050360F  E8 7F 1E F0 FF            CALL 0x00405493
00503614  83 C4 08                  ADD ESP,0x8
00503617  50                        PUSH EAX
00503618  E8 5F 21 F0 FF            CALL 0x0040577c
0050361D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00503620  83 C4 08                  ADD ESP,0x8
00503623  50                        PUSH EAX
00503624  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00503627  6A 06                     PUSH 0x6
00503629  52                        PUSH EDX
0050362A  53                        PUSH EBX
0050362B  50                        PUSH EAX
0050362C  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0050362F  6A 03                     PUSH 0x3
00503631  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
00503634  C1 E1 05                  SHL ECX,0x5
00503637  2B C8                     SUB ECX,EAX
00503639  8D 94 8D 0C F6 FF FF      LEA EDX,[EBP + ECX*0x4 + 0xfffff60c]
00503640  8B CE                     MOV ECX,ESI
00503642  52                        PUSH EDX
00503643  E8 72 0B F0 FF            CALL 0x004041ba
00503648  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0050364B  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
0050364E  C1 E1 05                  SHL ECX,0x5
00503651  2B C8                     SUB ECX,EAX
00503653  C7 84 8D 1C F7 FF FF 01 00 00 00  MOV dword ptr [EBP + ECX*0x4 + 0xfffff71c],0x1
0050365E  8A 4D F8                  MOV CL,byte ptr [EBP + -0x8]
00503661  84 C9                     TEST CL,CL
00503663  74 13                     JZ 0x00503678
00503665  80 F9 01                  CMP CL,0x1
00503668  76 40                     JBE 0x005036aa
0050366A  80 F9 04                  CMP CL,0x4
0050366D  77 3B                     JA 0x005036aa
0050366F  84 C9                     TEST CL,CL
00503671  74 05                     JZ 0x00503678
00503673  8D 4F FF                  LEA ECX,[EDI + -0x1]
00503676  EB 02                     JMP 0x0050367a
LAB_00503678:
00503678  33 C9                     XOR ECX,ECX
LAB_0050367a:
0050367A  8B 96 DE 02 00 00         MOV EDX,dword ptr [ESI + 0x2de]
00503680  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
00503683  C1 E7 05                  SHL EDI,0x5
00503686  2B F8                     SUB EDI,EAX
00503688  51                        PUSH ECX
00503689  52                        PUSH EDX
0050368A  C1 E7 02                  SHL EDI,0x2
0050368D  E8 0E 7D 20 00            CALL 0x0070b3a0
00503692  89 84 3D 30 F7 FF FF      MOV dword ptr [EBP + EDI*0x1 + 0xfffff730],EAX
00503699  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0050369C  83 C4 08                  ADD ESP,0x8
0050369F  C7 84 3D 34 F7 FF FF 3C 00 00 00  MOV dword ptr [EBP + EDI*0x1 + 0xfffff734],0x3c
LAB_005036aa:
005036AA  40                        INC EAX
005036AB  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_005036ae:
005036AE  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
005036B1  FE C0                     INC AL
005036B3  3C 06                     CMP AL,0x6
005036B5  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
005036B8  0F 82 8B FE FF FF         JC 0x00503549
005036BE  8D 85 0C F6 FF FF         LEA EAX,[EBP + 0xfffff60c]
005036C4  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005036C7  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005036CA  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005036CD  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
005036D0  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
005036D3  8D 45 90                  LEA EAX,[EBP + -0x70]
005036D6  6A 00                     PUSH 0x0
005036D8  BF 02 00 00 00            MOV EDI,0x2
005036DD  50                        PUSH EAX
005036DE  8D 86 FE 02 00 00         LEA EAX,[ESI + 0x2fe]
005036E4  C7 45 90 01 00 00 00      MOV dword ptr [EBP + -0x70],0x1
005036EB  C7 45 94 FF FF FF FF      MOV dword ptr [EBP + -0x6c],0xffffffff
005036F2  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
005036F5  C7 45 A8 0D B2 00 00      MOV dword ptr [EBP + -0x58],0xb20d
005036FC  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
005036FF  C7 45 C8 0E B2 00 00      MOV dword ptr [EBP + -0x38],0xb20e
00503706  8B 11                     MOV EDX,dword ptr [ECX]
00503708  6A 00                     PUSH 0x0
0050370A  50                        PUSH EAX
0050370B  6A 09                     PUSH 0x9
0050370D  FF 52 08                  CALL dword ptr [EDX + 0x8]
00503710  6A 01                     PUSH 0x1
00503712  8B CE                     MOV ECX,ESI
00503714  E8 88 14 F0 FF            CALL 0x00404ba1
00503719  8B 86 C0 09 00 00         MOV EAX,dword ptr [ESI + 0x9c0]
0050371F  85 C0                     TEST EAX,EAX
00503721  74 53                     JZ 0x00503776
00503723  8A 8E A0 0B 00 00         MOV CL,byte ptr [ESI + 0xba0]
00503729  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
00503730  84 C9                     TEST CL,CL
00503732  74 13                     JZ 0x00503747
00503734  33 C9                     XOR ECX,ECX
00503736  8A 8E AE 0B 00 00         MOV CL,byte ptr [ESI + 0xbae]
0050373C  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0050373F  8D 4E 18                  LEA ECX,[ESI + 0x18]
00503742  51                        PUSH ECX
00503743  50                        PUSH EAX
00503744  57                        PUSH EDI
00503745  EB 28                     JMP 0x0050376f
LAB_00503747:
00503747  33 C9                     XOR ECX,ECX
00503749  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0050374C  8D 4E 18                  LEA ECX,[ESI + 0x18]
0050374F  51                        PUSH ECX
00503750  50                        PUSH EAX
00503751  57                        PUSH EDI
00503752  EB 1B                     JMP 0x0050376f
LAB_00503754:
00503754  8B 86 C0 09 00 00         MOV EAX,dword ptr [ESI + 0x9c0]
0050375A  3B C1                     CMP EAX,ECX
0050375C  74 18                     JZ 0x00503776
0050375E  8D 56 18                  LEA EDX,[ESI + 0x18]
00503761  C7 46 28 20 00 00 00      MOV dword ptr [ESI + 0x28],0x20
00503768  52                        PUSH EDX
00503769  50                        PUSH EAX
0050376A  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0050376D  6A 02                     PUSH 0x2
LAB_0050376f:
0050376F  8B CE                     MOV ECX,ESI
00503771  E8 0A 29 1E 00            CALL 0x006e6080
LAB_00503776:
00503776  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
0050377C  3C 01                     CMP AL,0x1
0050377E  74 04                     JZ 0x00503784
00503780  3C 03                     CMP AL,0x3
00503782  75 7F                     JNZ 0x00503803
LAB_00503784:
00503784  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
0050378A  83 F8 09                  CMP EAX,0x9
0050378D  74 74                     JZ 0x00503803
0050378F  83 F8 15                  CMP EAX,0x15
00503792  74 6F                     JZ 0x00503803
00503794  3D BD 00 00 00            CMP EAX,0xbd
00503799  74 68                     JZ 0x00503803
0050379B  3D A7 00 00 00            CMP EAX,0xa7
005037A0  74 61                     JZ 0x00503803
005037A2  3D A6 00 00 00            CMP EAX,0xa6
005037A7  74 5A                     JZ 0x00503803
005037A9  3D AF 00 00 00            CMP EAX,0xaf
005037AE  74 53                     JZ 0x00503803
005037B0  6A 00                     PUSH 0x0
005037B2  6A 00                     PUSH 0x0
005037B4  6A 00                     PUSH 0x0
005037B6  68 70 26 7C 00            PUSH 0x7c2670
005037BB  68 04 3B 00 00            PUSH 0x3b04
005037C0  6A 00                     PUSH 0x0
005037C2  6A 02                     PUSH 0x2
005037C4  68 18 B1 00 00            PUSH 0xb118
005037C9  68 17 B1 00 00            PUSH 0xb117
005037CE  6A 00                     PUSH 0x0
005037D0  68 A4 23 7C 00            PUSH 0x7c23a4
005037D5  E8 A2 1F F0 FF            CALL 0x0040577c
005037DA  8A 9E A0 0B 00 00         MOV BL,byte ptr [ESI + 0xba0]
005037E0  83 C4 08                  ADD ESP,0x8
005037E3  8B CE                     MOV ECX,ESI
005037E5  50                        PUSH EAX
005037E6  33 C0                     XOR EAX,EAX
005037E8  84 DB                     TEST BL,BL
005037EA  6A 06                     PUSH 0x6
005037EC  6A 2F                     PUSH 0x2f
005037EE  0F 95 C0                  SETNZ AL
005037F1  6A 40                     PUSH 0x40
005037F3  50                        PUSH EAX
005037F4  6A 00                     PUSH 0x0
005037F6  6A 03                     PUSH 0x3
005037F8  E8 EC DF EF FF            CALL 0x004017e9
005037FD  89 86 70 09 00 00         MOV dword ptr [ESI + 0x970],EAX
LAB_00503803:
00503803  80 BE 9E 0B 00 00 02      CMP byte ptr [ESI + 0xb9e],0x2
0050380A  75 53                     JNZ 0x0050385f
0050380C  6A 00                     PUSH 0x0
0050380E  6A 00                     PUSH 0x0
00503810  6A 00                     PUSH 0x0
00503812  68 70 26 7C 00            PUSH 0x7c2670
00503817  68 05 3B 00 00            PUSH 0x3b05
0050381C  6A 00                     PUSH 0x0
0050381E  6A 02                     PUSH 0x2
00503820  68 1A B1 00 00            PUSH 0xb11a
00503825  68 19 B1 00 00            PUSH 0xb119
0050382A  6A 00                     PUSH 0x0
0050382C  68 94 23 7C 00            PUSH 0x7c2394
00503831  E8 46 1F F0 FF            CALL 0x0040577c
00503836  8A 9E A0 0B 00 00         MOV BL,byte ptr [ESI + 0xba0]
0050383C  83 C4 08                  ADD ESP,0x8
0050383F  33 C9                     XOR ECX,ECX
00503841  50                        PUSH EAX
00503842  6A 06                     PUSH 0x6
00503844  84 DB                     TEST BL,BL
00503846  6A 2F                     PUSH 0x2f
00503848  6A 40                     PUSH 0x40
0050384A  0F 95 C1                  SETNZ CL
0050384D  51                        PUSH ECX
0050384E  6A 00                     PUSH 0x0
00503850  6A 03                     PUSH 0x3
00503852  8B CE                     MOV ECX,ESI
00503854  E8 90 DF EF FF            CALL 0x004017e9
00503859  89 86 70 09 00 00         MOV dword ptr [ESI + 0x970],EAX
LAB_0050385f:
0050385F  8A 86 9E 0B 00 00         MOV AL,byte ptr [ESI + 0xb9e]
00503865  3C 01                     CMP AL,0x1
00503867  75 0C                     JNZ 0x00503875
00503869  81 BE 99 0B 00 00 BD 00 00 00  CMP dword ptr [ESI + 0xb99],0xbd
00503873  75 08                     JNZ 0x0050387d
LAB_00503875:
00503875  3C 02                     CMP AL,0x2
00503877  0F 85 2A 01 00 00         JNZ 0x005039a7
LAB_0050387d:
0050387D  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
00503880  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00503883  8D 86 60 09 00 00         LEA EAX,[ESI + 0x960]
00503889  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
0050388D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00503894  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_00503897:
00503897  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050389A  83 F8 03                  CMP EAX,0x3
0050389D  77 74                     JA 0x00503913
switchD_0050389f::switchD:
0050389F  FF 24 85 1C 3A 50 00      JMP dword ptr [EAX*0x4 + 0x503a1c]
switchD_0050389f::caseD_0:
005038A6  BF 6A 00 00 00            MOV EDI,0x6a
005038AB  BB 0F 00 00 00            MOV EBX,0xf
005038B0  6A 00                     PUSH 0x0
005038B2  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005038B5  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
005038B8  68 50 23 7C 00            PUSH 0x7c2350
005038BD  EB 49                     JMP 0x00503908
switchD_0050389f::caseD_1:
005038BF  BF 7A 00 00 00            MOV EDI,0x7a
005038C4  BB 14 00 00 00            MOV EBX,0x14
005038C9  6A 00                     PUSH 0x0
005038CB  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005038CE  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
005038D1  68 3C 23 7C 00            PUSH 0x7c233c
005038D6  EB 30                     JMP 0x00503908
switchD_0050389f::caseD_2:
005038D8  BF 98 00 00 00            MOV EDI,0x98
005038DD  BB 14 00 00 00            MOV EBX,0x14
005038E2  6A 00                     PUSH 0x0
005038E4  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005038E7  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
005038EA  68 28 23 7C 00            PUSH 0x7c2328
005038EF  EB 17                     JMP 0x00503908
switchD_0050389f::caseD_3:
005038F1  BF 98 00 00 00            MOV EDI,0x98
005038F6  BB 0F 00 00 00            MOV EBX,0xf
005038FB  6A 00                     PUSH 0x0
005038FD  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00503900  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00503903  68 14 23 7C 00            PUSH 0x7c2314
LAB_00503908:
00503908  E8 6F 1E F0 FF            CALL 0x0040577c
0050390D  83 C4 08                  ADD ESP,0x8
00503910  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
switchD_0050389f::default:
00503913  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00503916  52                        PUSH EDX
00503917  6A 01                     PUSH 0x1
00503919  6A 00                     PUSH 0x0
0050391B  68 60 26 7C 00            PUSH 0x7c2660
00503920  E8 57 1E F0 FF            CALL 0x0040577c
00503925  83 C4 08                  ADD ESP,0x8
00503928  50                        PUSH EAX
00503929  E8 D2 F2 1E 00            CALL 0x006f2c00
0050392E  8A 8E A0 0B 00 00         MOV CL,byte ptr [ESI + 0xba0]
00503934  83 C4 0C                  ADD ESP,0xc
00503937  84 C9                     TEST CL,CL
00503939  74 0E                     JZ 0x00503949
0050393B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0050393E  33 D2                     XOR EDX,EDX
00503940  8A 94 0E CF 0B 00 00      MOV DL,byte ptr [ESI + ECX*0x1 + 0xbcf]
00503947  EB 02                     JMP 0x0050394b
LAB_00503949:
00503949  33 D2                     XOR EDX,EDX
LAB_0050394b:
0050394B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0050394E  6A 00                     PUSH 0x0
00503950  6A 00                     PUSH 0x0
00503952  6A 00                     PUSH 0x0
00503954  50                        PUSH EAX
00503955  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00503958  81 C1 30 B2 00 00         ADD ECX,0xb230
0050395E  F6 D8                     NEG AL
00503960  1B C0                     SBB EAX,EAX
00503962  05 36 4E 00 00            ADD EAX,0x4e36
00503967  50                        PUSH EAX
00503968  6A 00                     PUSH 0x0
0050396A  6A 02                     PUSH 0x2
0050396C  51                        PUSH ECX
0050396D  83 C1 F0                  ADD ECX,-0x10
00503970  51                        PUSH ECX
00503971  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00503974  51                        PUSH ECX
00503975  6A 06                     PUSH 0x6
00503977  53                        PUSH EBX
00503978  57                        PUSH EDI
00503979  52                        PUSH EDX
0050397A  6A 00                     PUSH 0x0
0050397C  6A 03                     PUSH 0x3
0050397E  8B CE                     MOV ECX,ESI
00503980  E8 64 DE EF FF            CALL 0x004017e9
00503985  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00503988  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0050398B  89 01                     MOV dword ptr [ECX],EAX
0050398D  8A 45 F8                  MOV AL,byte ptr [EBP + -0x8]
00503990  FE C0                     INC AL
00503992  42                        INC EDX
00503993  83 C1 04                  ADD ECX,0x4
00503996  3C 04                     CMP AL,0x4
00503998  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0050399B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0050399E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005039A1  0F 82 F0 FE FF FF         JC 0x00503897
LAB_005039a7:
005039A7  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
005039AD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005039B3  5F                        POP EDI
005039B4  5E                        POP ESI
005039B5  5B                        POP EBX
005039B6  8B E5                     MOV ESP,EBP
005039B8  5D                        POP EBP
005039B9  C3                        RET
LAB_005039ba:
005039BA  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
005039C0  68 40 26 7C 00            PUSH 0x7c2640
005039C5  68 CC 4C 7A 00            PUSH 0x7a4ccc
005039CA  56                        PUSH ESI
005039CB  6A 00                     PUSH 0x0
005039CD  68 9D 02 00 00            PUSH 0x29d
005039D2  68 24 25 7C 00            PUSH 0x7c2524
005039D7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005039DC  E8 EF 9A 1A 00            CALL 0x006ad4d0
005039E1  83 C4 18                  ADD ESP,0x18
005039E4  85 C0                     TEST EAX,EAX
005039E6  74 01                     JZ 0x005039e9
005039E8  CC                        INT3
LAB_005039e9:
005039E9  68 9D 02 00 00            PUSH 0x29d
005039EE  68 24 25 7C 00            PUSH 0x7c2524
005039F3  6A 00                     PUSH 0x0
005039F5  56                        PUSH ESI
005039F6  E8 45 24 1A 00            CALL 0x006a5e40
005039FB  5F                        POP EDI
005039FC  5E                        POP ESI
005039FD  5B                        POP EBX
005039FE  8B E5                     MOV ESP,EBP
00503A00  5D                        POP EBP
00503A01  C3                        RET
