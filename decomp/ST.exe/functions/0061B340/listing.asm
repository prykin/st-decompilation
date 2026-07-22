STJumpMineC::sub_0061B340:
0061B340  55                        PUSH EBP
0061B341  8B EC                     MOV EBP,ESP
0061B343  83 EC 10                  SUB ESP,0x10
0061B346  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0061B349  53                        PUSH EBX
0061B34A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0061B34D  56                        PUSH ESI
0061B34E  8B F1                     MOV ESI,ECX
0061B350  57                        PUSH EDI
0061B351  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0061B354  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0061B357  85 DB                     TEST EBX,EBX
0061B359  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0061B360  89 08                     MOV dword ptr [EAX],ECX
0061B362  0F 8C EB 07 00 00         JL 0x0061bb53
0061B368  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061B36B  85 C9                     TEST ECX,ECX
0061B36D  0F 8C E0 07 00 00         JL 0x0061bb53
0061B373  85 FF                     TEST EDI,EDI
0061B375  0F 8C DC 07 00 00         JL 0x0061bb57
0061B37B  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0061B382  3B DA                     CMP EBX,EDX
0061B384  0F 8D C9 07 00 00         JGE 0x0061bb53
0061B38A  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
0061B391  3B CA                     CMP ECX,EDX
0061B393  0F 8D BA 07 00 00         JGE 0x0061bb53
0061B399  83 FF 05                  CMP EDI,0x5
0061B39C  0F 8D B1 07 00 00         JGE 0x0061bb53
0061B3A2  8B C1                     MOV EAX,ECX
0061B3A4  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0061B3AA  57                        PUSH EDI
0061B3AB  50                        PUSH EAX
0061B3AC  53                        PUSH EBX
0061B3AD  E8 89 99 DE FF            CALL 0x00404d3b
0061B3B2  85 C0                     TEST EAX,EAX
0061B3B4  0F 85 72 04 00 00         JNZ 0x0061b82c
0061B3BA  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0061B3C0  8B 8E E3 00 00 00         MOV ECX,dword ptr [ESI + 0xe3]
0061B3C6  2B C1                     SUB EAX,ECX
0061B3C8  66 85 DB                  TEST BX,BX
0061B3CB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061B3CE  0F 8C 49 03 00 00         JL 0x0061b71d
0061B3D4  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0061B3DA  66 3B D8                  CMP BX,AX
0061B3DD  0F 8D 3A 03 00 00         JGE 0x0061b71d
0061B3E3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061B3E6  66 85 C9                  TEST CX,CX
0061B3E9  0F 8C 2E 03 00 00         JL 0x0061b71d
0061B3EF  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0061B3F6  0F 8D 21 03 00 00         JGE 0x0061b71d
0061B3FC  66 85 FF                  TEST DI,DI
0061B3FF  0F 8C 18 03 00 00         JL 0x0061b71d
0061B405  66 3B 3D 44 B2 7F 00      CMP DI,word ptr [0x007fb244]
0061B40C  0F 8D 0B 03 00 00         JGE 0x0061b71d
0061B412  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0061B419  0F BF D7                  MOVSX EDX,DI
0061B41C  0F AF CA                  IMUL ECX,EDX
0061B41F  0F BF 55 0C               MOVSX EDX,word ptr [EBP + 0xc]
0061B423  0F BF C0                  MOVSX EAX,AX
0061B426  0F AF C2                  IMUL EAX,EDX
0061B429  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0061B42F  03 C8                     ADD ECX,EAX
0061B431  0F BF C3                  MOVSX EAX,BX
0061B434  03 C8                     ADD ECX,EAX
0061B436  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
0061B439  85 FF                     TEST EDI,EDI
0061B43B  0F 84 DC 02 00 00         JZ 0x0061b71d
0061B441  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061B444  85 C0                     TEST EAX,EAX
0061B446  0F 8E D1 00 00 00         JLE 0x0061b51d
0061B44C  8B 8E CF 00 00 00         MOV ECX,dword ptr [ESI + 0xcf]
0061B452  B8 79 19 8C 02            MOV EAX,0x28c1979
0061B457  85 C9                     TEST ECX,ECX
0061B459  7C 10                     JL 0x0061b46b
0061B45B  F7 E9                     IMUL ECX
0061B45D  D1 FA                     SAR EDX,0x1
0061B45F  8B C2                     MOV EAX,EDX
0061B461  C1 E8 1F                  SHR EAX,0x1f
0061B464  03 D0                     ADD EDX,EAX
0061B466  0F BF C2                  MOVSX EAX,DX
0061B469  EB 0F                     JMP 0x0061b47a
LAB_0061b46b:
0061B46B  F7 E9                     IMUL ECX
0061B46D  D1 FA                     SAR EDX,0x1
0061B46F  8B CA                     MOV ECX,EDX
0061B471  C1 E9 1F                  SHR ECX,0x1f
0061B474  03 D1                     ADD EDX,ECX
0061B476  0F BF C2                  MOVSX EAX,DX
0061B479  48                        DEC EAX
LAB_0061b47a:
0061B47A  3B C3                     CMP EAX,EBX
0061B47C  75 6C                     JNZ 0x0061b4ea
0061B47E  8B 8E D3 00 00 00         MOV ECX,dword ptr [ESI + 0xd3]
0061B484  B8 79 19 8C 02            MOV EAX,0x28c1979
0061B489  85 C9                     TEST ECX,ECX
0061B48B  7C 10                     JL 0x0061b49d
0061B48D  F7 E9                     IMUL ECX
0061B48F  D1 FA                     SAR EDX,0x1
0061B491  8B C2                     MOV EAX,EDX
0061B493  C1 E8 1F                  SHR EAX,0x1f
0061B496  03 D0                     ADD EDX,EAX
0061B498  0F BF C2                  MOVSX EAX,DX
0061B49B  EB 0F                     JMP 0x0061b4ac
LAB_0061b49d:
0061B49D  F7 E9                     IMUL ECX
0061B49F  D1 FA                     SAR EDX,0x1
0061B4A1  8B CA                     MOV ECX,EDX
0061B4A3  C1 E9 1F                  SHR ECX,0x1f
0061B4A6  03 D1                     ADD EDX,ECX
0061B4A8  0F BF C2                  MOVSX EAX,DX
0061B4AB  48                        DEC EAX
LAB_0061b4ac:
0061B4AC  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0061B4AF  75 39                     JNZ 0x0061b4ea
0061B4B1  8B B6 D7 00 00 00         MOV ESI,dword ptr [ESI + 0xd7]
0061B4B7  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061B4BC  85 F6                     TEST ESI,ESI
0061B4BE  7C 11                     JL 0x0061b4d1
0061B4C0  F7 EE                     IMUL ESI
0061B4C2  C1 FA 06                  SAR EDX,0x6
0061B4C5  8B C2                     MOV EAX,EDX
0061B4C7  C1 E8 1F                  SHR EAX,0x1f
0061B4CA  03 D0                     ADD EDX,EAX
0061B4CC  0F BF C2                  MOVSX EAX,DX
0061B4CF  EB 10                     JMP 0x0061b4e1
LAB_0061b4d1:
0061B4D1  F7 EE                     IMUL ESI
0061B4D3  C1 FA 06                  SAR EDX,0x6
0061B4D6  8B CA                     MOV ECX,EDX
0061B4D8  C1 E9 1F                  SHR ECX,0x1f
0061B4DB  03 D1                     ADD EDX,ECX
0061B4DD  0F BF C2                  MOVSX EAX,DX
0061B4E0  48                        DEC EAX
LAB_0061b4e1:
0061B4E1  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
0061B4E4  0F 84 92 06 00 00         JZ 0x0061bb7c
LAB_0061b4ea:
0061B4EA  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061B4ED  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061B4F0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061B4F3  8D 84 D1 97 00 00 00      LEA EAX,[ECX + EDX*0x8 + 0x97]
0061B4FA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0061B4FD  3B C8                     CMP ECX,EAX
0061B4FF  0F 8C 77 06 00 00         JL 0x0061bb7c
0061B505  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0061B508  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0061B50F  5F                        POP EDI
0061B510  5E                        POP ESI
0061B511  89 01                     MOV dword ptr [ECX],EAX
0061B513  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061B516  5B                        POP EBX
0061B517  8B E5                     MOV ESP,EBP
0061B519  5D                        POP EBP
0061B51A  C2 1C 00                  RET 0x1c
LAB_0061b51d:
0061B51D  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0061B520  83 F8 08                  CMP EAX,0x8
0061B523  0F 83 DF 01 00 00         JNC 0x0061b708
0061B529  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061B52F  85 C9                     TEST ECX,ECX
0061B531  74 11                     JZ 0x0061b544
0061B533  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0061B536  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0061B53E  0F 83 C4 01 00 00         JNC 0x0061b708
LAB_0061b544:
0061B544  81 7F 20 E8 03 00 00      CMP dword ptr [EDI + 0x20],0x3e8
0061B54B  0F 85 B7 01 00 00         JNZ 0x0061b708
0061B551  8B 17                     MOV EDX,dword ptr [EDI]
0061B553  8B CF                     MOV ECX,EDI
0061B555  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
0061B55B  85 C0                     TEST EAX,EAX
0061B55D  0F 84 A5 01 00 00         JZ 0x0061b708
0061B563  8B 07                     MOV EAX,dword ptr [EDI]
0061B565  8B CF                     MOV ECX,EDI
0061B567  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0061B56D  85 C0                     TEST EAX,EAX
0061B56F  0F 84 93 01 00 00         JZ 0x0061b708
0061B575  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0061B57B  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0061B57E  8A 4E 51                  MOV CL,byte ptr [ESI + 0x51]
0061B581  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
0061B584  84 D2                     TEST DL,DL
0061B586  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
0061B589  74 2D                     JZ 0x0061b5b8
0061B58B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061B58E  33 D2                     XOR EDX,EDX
0061B590  25 FF 00 00 00            AND EAX,0xff
0061B595  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0061B598  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061B59B  25 FF 00 00 00            AND EAX,0xff
0061B5A0  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0061B5A7  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0061B5AA  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0061B5B1  0F 95 C2                  SETNZ DL
0061B5B4  8B C2                     MOV EAX,EDX
0061B5B6  EB 7A                     JMP 0x0061b632
LAB_0061b5b8:
0061B5B8  3A C1                     CMP AL,CL
0061B5BA  74 6B                     JZ 0x0061b627
0061B5BC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061B5BF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0061B5C2  25 FF 00 00 00            AND EAX,0xff
0061B5C7  81 E1 FF 00 00 00         AND ECX,0xff
0061B5CD  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0061B5D4  84 D2                     TEST DL,DL
0061B5D6  75 12                     JNZ 0x0061b5ea
0061B5D8  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0061B5DF  84 DB                     TEST BL,BL
0061B5E1  75 07                     JNZ 0x0061b5ea
0061B5E3  B8 FE FF FF FF            MOV EAX,0xfffffffe
0061B5E8  EB 3F                     JMP 0x0061b629
LAB_0061b5ea:
0061B5EA  BB 01 00 00 00            MOV EBX,0x1
0061B5EF  3A D3                     CMP DL,BL
0061B5F1  75 0F                     JNZ 0x0061b602
0061B5F3  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0061B5FB  75 05                     JNZ 0x0061b602
0061B5FD  83 C8 FF                  OR EAX,0xffffffff
0061B600  EB 27                     JMP 0x0061b629
LAB_0061b602:
0061B602  84 D2                     TEST DL,DL
0061B604  75 0D                     JNZ 0x0061b613
0061B606  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
0061B60D  75 04                     JNZ 0x0061b613
0061B60F  8B C3                     MOV EAX,EBX
0061B611  EB 16                     JMP 0x0061b629
LAB_0061b613:
0061B613  3A D3                     CMP DL,BL
0061B615  75 10                     JNZ 0x0061b627
0061B617  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
0061B61E  75 07                     JNZ 0x0061b627
0061B620  B8 02 00 00 00            MOV EAX,0x2
0061B625  EB 02                     JMP 0x0061b629
LAB_0061b627:
0061B627  33 C0                     XOR EAX,EAX
LAB_0061b629:
0061B629  33 C9                     XOR ECX,ECX
0061B62B  85 C0                     TEST EAX,EAX
0061B62D  0F 9C C1                  SETL CL
0061B630  8B C1                     MOV EAX,ECX
LAB_0061b632:
0061B632  85 C0                     TEST EAX,EAX
0061B634  0F 84 CE 00 00 00         JZ 0x0061b708
0061B63A  66 8B 96 89 00 00 00      MOV DX,word ptr [ESI + 0x89]
0061B641  8B 8E 85 00 00 00         MOV ECX,dword ptr [ESI + 0x85]
0061B647  A1 AC 66 7E 00            MOV EAX,[0x007e66ac]
0061B64C  6A 00                     PUSH 0x0
0061B64E  6A 00                     PUSH 0x0
0061B650  68 B3 00 00 00            PUSH 0xb3
0061B655  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0061B658  52                        PUSH EDX
0061B659  8B 56 51                  MOV EDX,dword ptr [ESI + 0x51]
0061B65C  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0061B65F  51                        PUSH ECX
0061B660  8B 8E DF 00 00 00         MOV ECX,dword ptr [ESI + 0xdf]
0061B666  50                        PUSH EAX
0061B667  8B 86 E3 00 00 00         MOV EAX,dword ptr [ESI + 0xe3]
0061B66D  52                        PUSH EDX
0061B66E  8B 96 DB 00 00 00         MOV EDX,dword ptr [ESI + 0xdb]
0061B674  50                        PUSH EAX
0061B675  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0061B678  51                        PUSH ECX
0061B679  52                        PUSH EDX
0061B67A  50                        PUSH EAX
0061B67B  57                        PUSH EDI
0061B67C  53                        PUSH EBX
0061B67D  8D 4E 20                  LEA ECX,[ESI + 0x20]
0061B680  E8 91 8E DE FF            CALL 0x00404516
0061B685  83 F8 02                  CMP EAX,0x2
0061B688  74 09                     JZ 0x0061b693
0061B68A  83 F8 03                  CMP EAX,0x3
0061B68D  0F 85 E9 04 00 00         JNZ 0x0061bb7c
LAB_0061b693:
0061B693  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0061B696  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0061B699  51                        PUSH ECX
0061B69A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061B69D  57                        PUSH EDI
0061B69E  53                        PUSH EBX
0061B69F  52                        PUSH EDX
0061B6A0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061B6A3  51                        PUSH ECX
0061B6A4  8B 8E 93 00 00 00         MOV ECX,dword ptr [ESI + 0x93]
0061B6AA  52                        PUSH EDX
0061B6AB  51                        PUSH ECX
LAB_0061b6ac:
0061B6AC  50                        PUSH EAX
0061B6AD  8B CE                     MOV ECX,ESI
0061B6AF  E8 33 72 DE FF            CALL 0x004028e7
0061B6B4  83 F8 05                  CMP EAX,0x5
0061B6B7  89 86 93 00 00 00         MOV dword ptr [ESI + 0x93],EAX
0061B6BD  0F 85 B9 04 00 00         JNZ 0x0061bb7c
0061B6C3  33 C0                     XOR EAX,EAX
0061B6C5  C7 86 AF 00 00 00 19 00 00 00  MOV dword ptr [ESI + 0xaf],0x19
0061B6CF  C7 86 C0 00 00 00 0B 00 00 00  MOV dword ptr [ESI + 0xc0],0xb
0061B6D9  C7 86 B3 00 00 00 14 00 00 00  MOV dword ptr [ESI + 0xb3],0x14
0061B6E3  89 86 BC 00 00 00         MOV dword ptr [ESI + 0xbc],EAX
0061B6E9  89 86 B7 00 00 00         MOV dword ptr [ESI + 0xb7],EAX
0061B6EF  89 86 AB 00 00 00         MOV dword ptr [ESI + 0xab],EAX
LAB_0061b6f5:
0061B6F5  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
0061B6FC  5F                        POP EDI
0061B6FD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061B700  5E                        POP ESI
0061B701  5B                        POP EBX
0061B702  8B E5                     MOV ESP,EBP
0061B704  5D                        POP EBP
0061B705  C2 1C 00                  RET 0x1c
LAB_0061b708:
0061B708  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061B70B  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061B70E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061B711  8D 84 D1 96 00 00 00      LEA EAX,[ECX + EDX*0x8 + 0x96]
0061B718  E9 7E 03 00 00            JMP 0x0061ba9b
LAB_0061b71d:
0061B71D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061B723  8D 55 F0                  LEA EDX,[EBP + -0x10]
0061B726  52                        PUSH EDX
0061B727  B8 79 19 8C 02            MOV EAX,0x28c1979
0061B72C  8B B1 80 03 00 00         MOV ESI,dword ptr [ECX + 0x380]
0061B732  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0061B735  8B D6                     MOV EDX,ESI
0061B737  0F AF 75 14               IMUL ESI,dword ptr [EBP + 0x14]
0061B73B  0F AF 55 18               IMUL EDX,dword ptr [EBP + 0x18]
0061B73F  F7 EA                     IMUL EDX
0061B741  D1 FA                     SAR EDX,0x1
0061B743  8B C2                     MOV EAX,EDX
0061B745  57                        PUSH EDI
0061B746  C1 E8 1F                  SHR EAX,0x1f
0061B749  03 D0                     ADD EDX,EAX
0061B74B  B8 79 19 8C 02            MOV EAX,0x28c1979
0061B750  52                        PUSH EDX
0061B751  F7 EE                     IMUL ESI
0061B753  D1 FA                     SAR EDX,0x1
0061B755  8B C2                     MOV EAX,EDX
0061B757  C1 E8 1F                  SHR EAX,0x1f
0061B75A  03 D0                     ADD EDX,EAX
0061B75C  52                        PUSH EDX
0061B75D  E8 AE 7B 0C 00            CALL 0x006e3310
0061B762  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0061B768  E8 1B 2B 11 00            CALL 0x0072e288
0061B76D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0061B770  0F BF D8                  MOVSX EBX,AX
0061B773  8D 47 01                  LEA EAX,[EDI + 0x1]
0061B776  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0061B779  3B C8                     CMP ECX,EAX
0061B77B  7F 03                     JG 0x0061b780
0061B77D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
LAB_0061b780:
0061B780  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
0061B783  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0061B786  C1 E6 03                  SHL ESI,0x3
0061B789  85 D2                     TEST EDX,EDX
0061B78B  7D 52                     JGE 0x0061b7df
0061B78D  39 5D 1C                  CMP dword ptr [EBP + 0x1c],EBX
0061B790  0F 8F E6 03 00 00         JG 0x0061bb7c
0061B796  3B C8                     CMP ECX,EAX
0061B798  7F 25                     JG 0x0061b7bf
0061B79A  83 F8 05                  CMP EAX,0x5
0061B79D  7D 20                     JGE 0x0061b7bf
0061B79F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061B7A2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061B7A5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061B7A8  41                        INC ECX
0061B7A9  51                        PUSH ECX
0061B7AA  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0061B7B0  52                        PUSH EDX
0061B7B1  50                        PUSH EAX
0061B7B2  E8 84 95 DE FF            CALL 0x00404d3b
0061B7B7  85 C0                     TEST EAX,EAX
0061B7B9  0F 84 36 FF FF FF         JZ 0x0061b6f5
LAB_0061b7bf:
0061B7BF  3B DE                     CMP EBX,ESI
0061B7C1  0F 8F 2E FF FF FF         JG 0x0061b6f5
LAB_0061b7c7:
0061B7C7  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0061B7CA  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0061B7D1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061B7D4  5F                        POP EDI
0061B7D5  89 19                     MOV dword ptr [ECX],EBX
0061B7D7  5E                        POP ESI
0061B7D8  5B                        POP EBX
0061B7D9  8B E5                     MOV ESP,EBP
0061B7DB  5D                        POP EBP
0061B7DC  C2 1C 00                  RET 0x1c
LAB_0061b7df:
0061B7DF  39 5D 1C                  CMP dword ptr [EBP + 0x1c],EBX
0061B7E2  0F 8D 94 03 00 00         JGE 0x0061bb7c
0061B7E8  83 F8 05                  CMP EAX,0x5
0061B7EB  7D DA                     JGE 0x0061b7c7
0061B7ED  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0061B7F0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061B7F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061B7F6  8D 56 FF                  LEA EDX,[ESI + -0x1]
0061B7F9  52                        PUSH EDX
0061B7FA  50                        PUSH EAX
0061B7FB  51                        PUSH ECX
0061B7FC  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0061B802  E8 34 95 DE FF            CALL 0x00404d3b
0061B807  85 C0                     TEST EAX,EAX
0061B809  74 BC                     JZ 0x0061b7c7
0061B80B  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0061B80E  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0061B815  5F                        POP EDI
0061B816  5E                        POP ESI
0061B817  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061B81A  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0061B81D  C1 E2 03                  SHL EDX,0x3
0061B820  89 10                     MOV dword ptr [EAX],EDX
0061B822  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061B825  5B                        POP EBX
0061B826  8B E5                     MOV ESP,EBP
0061B828  5D                        POP EBP
0061B829  C2 1C 00                  RET 0x1c
LAB_0061b82c:
0061B82C  66 85 DB                  TEST BX,BX
0061B82F  0F 8C 47 03 00 00         JL 0x0061bb7c
0061B835  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0061B83B  66 39 45 08               CMP word ptr [EBP + 0x8],AX
0061B83F  0F 8D 37 03 00 00         JGE 0x0061bb7c
0061B845  66 83 7D 0C 00            CMP word ptr [EBP + 0xc],0x0
0061B84A  0F 8C 2C 03 00 00         JL 0x0061bb7c
0061B850  66 8B 55 0C               MOV DX,word ptr [EBP + 0xc]
0061B854  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0061B85B  0F 8D 1B 03 00 00         JGE 0x0061bb7c
0061B861  66 83 7D 10 00            CMP word ptr [EBP + 0x10],0x0
0061B866  0F 8C 10 03 00 00         JL 0x0061bb7c
0061B86C  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0061B870  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0061B877  0F 8D FF 02 00 00         JGE 0x0061bb7c
0061B87D  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
0061B884  0F BF C9                  MOVSX ECX,CX
0061B887  0F AF D1                  IMUL EDX,ECX
0061B88A  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
0061B88E  0F BF C0                  MOVSX EAX,AX
0061B891  0F AF C1                  IMUL EAX,ECX
0061B894  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0061B89A  03 D0                     ADD EDX,EAX
0061B89C  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
0061B8A0  03 D0                     ADD EDX,EAX
0061B8A2  8B 3C D1                  MOV EDI,dword ptr [ECX + EDX*0x8]
0061B8A5  85 FF                     TEST EDI,EDI
0061B8A7  0F 84 CF 02 00 00         JZ 0x0061bb7c
0061B8AD  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
0061B8B0  83 F8 08                  CMP EAX,0x8
0061B8B3  0F 83 C3 02 00 00         JNC 0x0061bb7c
0061B8B9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061B8BF  85 C9                     TEST ECX,ECX
0061B8C1  74 11                     JZ 0x0061b8d4
0061B8C3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0061B8C6  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0061B8CE  0F 83 A8 02 00 00         JNC 0x0061bb7c
LAB_0061b8d4:
0061B8D4  81 7F 20 E8 03 00 00      CMP dword ptr [EDI + 0x20],0x3e8
0061B8DB  0F 85 9B 02 00 00         JNZ 0x0061bb7c
0061B8E1  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
0061B8E7  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0061B8EA  8A 4E 51                  MOV CL,byte ptr [ESI + 0x51]
0061B8ED  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
0061B8F0  84 D2                     TEST DL,DL
0061B8F2  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
0061B8F5  74 2D                     JZ 0x0061b924
0061B8F7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0061B8FA  25 FF 00 00 00            AND EAX,0xff
0061B8FF  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
0061B902  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061B905  25 FF 00 00 00            AND EAX,0xff
0061B90A  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
0061B911  33 C9                     XOR ECX,ECX
0061B913  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0061B916  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0061B91D  0F 95 C1                  SETNZ CL
0061B920  8B C1                     MOV EAX,ECX
0061B922  EB 7A                     JMP 0x0061b99e
LAB_0061b924:
0061B924  3A C1                     CMP AL,CL
0061B926  74 6B                     JZ 0x0061b993
0061B928  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0061B92B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0061B92E  25 FF 00 00 00            AND EAX,0xff
0061B933  81 E1 FF 00 00 00         AND ECX,0xff
0061B939  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
0061B940  84 D2                     TEST DL,DL
0061B942  75 12                     JNZ 0x0061b956
0061B944  8A 9C C8 4F 8A 80 00      MOV BL,byte ptr [EAX + ECX*0x8 + 0x808a4f]
0061B94B  84 DB                     TEST BL,BL
0061B94D  75 07                     JNZ 0x0061b956
0061B94F  B8 FE FF FF FF            MOV EAX,0xfffffffe
0061B954  EB 3F                     JMP 0x0061b995
LAB_0061b956:
0061B956  BB 01 00 00 00            MOV EBX,0x1
0061B95B  3A D3                     CMP DL,BL
0061B95D  75 0F                     JNZ 0x0061b96e
0061B95F  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
0061B967  75 05                     JNZ 0x0061b96e
0061B969  83 C8 FF                  OR EAX,0xffffffff
0061B96C  EB 27                     JMP 0x0061b995
LAB_0061b96e:
0061B96E  84 D2                     TEST DL,DL
0061B970  75 0D                     JNZ 0x0061b97f
0061B972  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
0061B979  75 04                     JNZ 0x0061b97f
0061B97B  8B C3                     MOV EAX,EBX
0061B97D  EB 16                     JMP 0x0061b995
LAB_0061b97f:
0061B97F  3A D3                     CMP DL,BL
0061B981  75 10                     JNZ 0x0061b993
0061B983  38 9C C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],BL
0061B98A  75 07                     JNZ 0x0061b993
0061B98C  B8 02 00 00 00            MOV EAX,0x2
0061B991  EB 02                     JMP 0x0061b995
LAB_0061b993:
0061B993  33 C0                     XOR EAX,EAX
LAB_0061b995:
0061B995  33 D2                     XOR EDX,EDX
0061B997  85 C0                     TEST EAX,EAX
0061B999  0F 9C C2                  SETL DL
0061B99C  8B C2                     MOV EAX,EDX
LAB_0061b99e:
0061B99E  85 C0                     TEST EAX,EAX
0061B9A0  0F 85 16 01 00 00         JNZ 0x0061babc
0061B9A6  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0061B9AC  8B 96 E3 00 00 00         MOV EDX,dword ptr [ESI + 0xe3]
0061B9B2  2B C2                     SUB EAX,EDX
0061B9B4  85 C0                     TEST EAX,EAX
0061B9B6  0F 8E D2 00 00 00         JLE 0x0061ba8e
0061B9BC  8B 8E CF 00 00 00         MOV ECX,dword ptr [ESI + 0xcf]
0061B9C2  B8 79 19 8C 02            MOV EAX,0x28c1979
0061B9C7  85 C9                     TEST ECX,ECX
0061B9C9  7C 10                     JL 0x0061b9db
0061B9CB  F7 E9                     IMUL ECX
0061B9CD  D1 FA                     SAR EDX,0x1
0061B9CF  8B CA                     MOV ECX,EDX
0061B9D1  C1 E9 1F                  SHR ECX,0x1f
0061B9D4  03 D1                     ADD EDX,ECX
0061B9D6  0F BF C2                  MOVSX EAX,DX
0061B9D9  EB 0F                     JMP 0x0061b9ea
LAB_0061b9db:
0061B9DB  F7 E9                     IMUL ECX
0061B9DD  D1 FA                     SAR EDX,0x1
0061B9DF  8B C2                     MOV EAX,EDX
0061B9E1  C1 E8 1F                  SHR EAX,0x1f
0061B9E4  03 D0                     ADD EDX,EAX
0061B9E6  0F BF C2                  MOVSX EAX,DX
0061B9E9  48                        DEC EAX
LAB_0061b9ea:
0061B9EA  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
0061B9ED  75 6C                     JNZ 0x0061ba5b
0061B9EF  8B 8E D3 00 00 00         MOV ECX,dword ptr [ESI + 0xd3]
0061B9F5  B8 79 19 8C 02            MOV EAX,0x28c1979
0061B9FA  85 C9                     TEST ECX,ECX
0061B9FC  7C 10                     JL 0x0061ba0e
0061B9FE  F7 E9                     IMUL ECX
0061BA00  D1 FA                     SAR EDX,0x1
0061BA02  8B CA                     MOV ECX,EDX
0061BA04  C1 E9 1F                  SHR ECX,0x1f
0061BA07  03 D1                     ADD EDX,ECX
0061BA09  0F BF C2                  MOVSX EAX,DX
0061BA0C  EB 0F                     JMP 0x0061ba1d
LAB_0061ba0e:
0061BA0E  F7 E9                     IMUL ECX
0061BA10  D1 FA                     SAR EDX,0x1
0061BA12  8B C2                     MOV EAX,EDX
0061BA14  C1 E8 1F                  SHR EAX,0x1f
0061BA17  03 D0                     ADD EDX,EAX
0061BA19  0F BF C2                  MOVSX EAX,DX
0061BA1C  48                        DEC EAX
LAB_0061ba1d:
0061BA1D  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
0061BA20  75 39                     JNZ 0x0061ba5b
0061BA22  8B B6 D7 00 00 00         MOV ESI,dword ptr [ESI + 0xd7]
0061BA28  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061BA2D  85 F6                     TEST ESI,ESI
0061BA2F  7C 11                     JL 0x0061ba42
0061BA31  F7 EE                     IMUL ESI
0061BA33  C1 FA 06                  SAR EDX,0x6
0061BA36  8B CA                     MOV ECX,EDX
0061BA38  C1 E9 1F                  SHR ECX,0x1f
0061BA3B  03 D1                     ADD EDX,ECX
0061BA3D  0F BF C2                  MOVSX EAX,DX
0061BA40  EB 10                     JMP 0x0061ba52
LAB_0061ba42:
0061BA42  F7 EE                     IMUL ESI
0061BA44  C1 FA 06                  SAR EDX,0x6
0061BA47  8B C2                     MOV EAX,EDX
0061BA49  C1 E8 1F                  SHR EAX,0x1f
0061BA4C  03 D0                     ADD EDX,EAX
0061BA4E  0F BF C2                  MOVSX EAX,DX
0061BA51  48                        DEC EAX
LAB_0061ba52:
0061BA52  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
0061BA55  0F 84 21 01 00 00         JZ 0x0061bb7c
LAB_0061ba5b:
0061BA5B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061BA5E  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061BA61  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061BA64  8D 84 D1 97 00 00 00      LEA EAX,[ECX + EDX*0x8 + 0x97]
0061BA6B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0061BA6E  3B C8                     CMP ECX,EAX
0061BA70  0F 8C 06 01 00 00         JL 0x0061bb7c
0061BA76  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0061BA79  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0061BA80  5F                        POP EDI
0061BA81  5E                        POP ESI
0061BA82  89 01                     MOV dword ptr [ECX],EAX
0061BA84  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061BA87  5B                        POP EBX
0061BA88  8B E5                     MOV ESP,EBP
0061BA8A  5D                        POP EBP
0061BA8B  C2 1C 00                  RET 0x1c
LAB_0061ba8e:
0061BA8E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061BA91  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061BA94  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061BA97  8D 44 D1 32               LEA EAX,[ECX + EDX*0x8 + 0x32]
LAB_0061ba9b:
0061BA9B  39 45 1C                  CMP dword ptr [EBP + 0x1c],EAX
0061BA9E  0F 8F D8 00 00 00         JG 0x0061bb7c
0061BAA4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0061BAA7  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0061BAAE  5F                        POP EDI
0061BAAF  5E                        POP ESI
0061BAB0  89 01                     MOV dword ptr [ECX],EAX
0061BAB2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061BAB5  5B                        POP EBX
0061BAB6  8B E5                     MOV ESP,EBP
0061BAB8  5D                        POP EBP
0061BAB9  C2 1C 00                  RET 0x1c
LAB_0061babc:
0061BABC  8B 17                     MOV EDX,dword ptr [EDI]
0061BABE  8B CF                     MOV ECX,EDI
0061BAC0  FF 92 F0 00 00 00         CALL dword ptr [EDX + 0xf0]
0061BAC6  85 C0                     TEST EAX,EAX
0061BAC8  0F 84 AE 00 00 00         JZ 0x0061bb7c
0061BACE  8B 07                     MOV EAX,dword ptr [EDI]
0061BAD0  8B CF                     MOV ECX,EDI
0061BAD2  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0061BAD8  85 C0                     TEST EAX,EAX
0061BADA  0F 84 9C 00 00 00         JZ 0x0061bb7c
0061BAE0  66 8B 8E 89 00 00 00      MOV CX,word ptr [ESI + 0x89]
0061BAE7  8B 96 85 00 00 00         MOV EDX,dword ptr [ESI + 0x85]
0061BAED  A1 AC 66 7E 00            MOV EAX,[0x007e66ac]
0061BAF2  6A 00                     PUSH 0x0
0061BAF4  6A 00                     PUSH 0x0
0061BAF6  68 B3 00 00 00            PUSH 0xb3
0061BAFB  51                        PUSH ECX
0061BAFC  8B 8E E3 00 00 00         MOV ECX,dword ptr [ESI + 0xe3]
0061BB02  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0061BB05  52                        PUSH EDX
0061BB06  8B 96 DF 00 00 00         MOV EDX,dword ptr [ESI + 0xdf]
0061BB0C  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0061BB0F  50                        PUSH EAX
0061BB10  8B 46 51                  MOV EAX,dword ptr [ESI + 0x51]
0061BB13  50                        PUSH EAX
0061BB14  8B 86 DB 00 00 00         MOV EAX,dword ptr [ESI + 0xdb]
0061BB1A  51                        PUSH ECX
0061BB1B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0061BB1E  52                        PUSH EDX
0061BB1F  50                        PUSH EAX
0061BB20  51                        PUSH ECX
0061BB21  57                        PUSH EDI
0061BB22  53                        PUSH EBX
0061BB23  8D 4E 20                  LEA ECX,[ESI + 0x20]
0061BB26  E8 EB 89 DE FF            CALL 0x00404516
0061BB2B  83 F8 02                  CMP EAX,0x2
0061BB2E  74 05                     JZ 0x0061bb35
0061BB30  83 F8 03                  CMP EAX,0x3
0061BB33  75 47                     JNZ 0x0061bb7c
LAB_0061bb35:
0061BB35  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0061BB38  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0061BB3B  52                        PUSH EDX
0061BB3C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0061BB3F  57                        PUSH EDI
0061BB40  53                        PUSH EBX
0061BB41  51                        PUSH ECX
0061BB42  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061BB45  52                        PUSH EDX
0061BB46  8B 96 93 00 00 00         MOV EDX,dword ptr [ESI + 0x93]
0061BB4C  51                        PUSH ECX
0061BB4D  52                        PUSH EDX
0061BB4E  E9 59 FB FF FF            JMP 0x0061b6ac
LAB_0061bb53:
0061BB53  85 FF                     TEST EDI,EDI
0061BB55  7D 19                     JGE 0x0061bb70
LAB_0061bb57:
0061BB57  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0061BB5E  5F                        POP EDI
0061BB5F  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
0061BB65  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061BB68  5E                        POP ESI
0061BB69  5B                        POP EBX
0061BB6A  8B E5                     MOV ESP,EBP
0061BB6C  5D                        POP EBP
0061BB6D  C2 1C 00                  RET 0x1c
LAB_0061bb70:
0061BB70  83 FF 05                  CMP EDI,0x5
0061BB73  7D 07                     JGE 0x0061bb7c
0061BB75  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
LAB_0061bb7c:
0061BB7C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061BB7F  5F                        POP EDI
0061BB80  5E                        POP ESI
0061BB81  5B                        POP EBX
0061BB82  8B E5                     MOV ESP,EBP
0061BB84  5D                        POP EBP
0061BB85  C2 1C 00                  RET 0x1c
