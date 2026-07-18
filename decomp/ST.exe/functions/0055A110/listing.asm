FUN_0055a110:
0055A110  55                        PUSH EBP
0055A111  8B EC                     MOV EBP,ESP
0055A113  51                        PUSH ECX
0055A114  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
0055A11A  53                        PUSH EBX
0055A11B  56                        PUSH ESI
0055A11C  57                        PUSH EDI
0055A11D  85 C0                     TEST EAX,EAX
0055A11F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0055A122  0F 84 E7 00 00 00         JZ 0x0055a20f
0055A128  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
0055A12B  85 F6                     TEST ESI,ESI
0055A12D  0F 8C DC 00 00 00         JL 0x0055a20f
0055A133  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0055A136  83 F8 08                  CMP EAX,0x8
0055A139  0F 83 D0 00 00 00         JNC 0x0055a20f
0055A13F  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0055A145  85 D2                     TEST EDX,EDX
0055A147  74 11                     JZ 0x0055a15a
0055A149  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
0055A14C  80 BC D2 E9 87 80 00 08   CMP byte ptr [EDX + EDX*0x8 + 0x8087e9],0x8
0055A154  0F 83 B5 00 00 00         JNC 0x0055a20f
LAB_0055a15a:
0055A15A  8B 94 81 94 00 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x94]
0055A161  85 D2                     TEST EDX,EDX
0055A163  0F 84 A6 00 00 00         JZ 0x0055a20f
0055A169  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0055A16C  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0055A16F  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055A172  52                        PUSH EDX
0055A173  56                        PUSH ESI
0055A174  50                        PUSH EAX
0055A175  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055A178  50                        PUSH EAX
0055A179  57                        PUSH EDI
0055A17A  53                        PUSH EBX
0055A17B  6A 04                     PUSH 0x4
0055A17D  E8 63 7A EA FF            CALL 0x00401be5
0055A182  8D 4C 36 01               LEA ECX,[ESI + ESI*0x1 + 0x1]
0055A186  2B DE                     SUB EBX,ESI
0055A188  56                        PUSH ESI
0055A189  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0055A18C  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
0055A18F  2B FE                     SUB EDI,ESI
0055A191  E8 29 87 EA FF            CALL 0x004028bf
0055A196  8B C8                     MOV ECX,EAX
0055A198  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0055A19B  83 C4 04                  ADD ESP,0x4
0055A19E  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0055A1A1  85 C0                     TEST EAX,EAX
0055A1A3  7E 6A                     JLE 0x0055a20f
0055A1A5  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
0055A1A8  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0055a1ab:
0055A1AB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0055A1AE  33 C0                     XOR EAX,EAX
LAB_0055a1b0:
0055A1B0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055A1B3  85 C9                     TEST ECX,ECX
0055A1B5  74 09                     JZ 0x0055a1c0
0055A1B7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055A1BA  80 3C 02 00               CMP byte ptr [EDX + EAX*0x1],0x0
0055A1BE  74 34                     JZ 0x0055a1f4
LAB_0055a1c0:
0055A1C0  85 F6                     TEST ESI,ESI
0055A1C2  7C 30                     JL 0x0055a1f4
0055A1C4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0055A1C7  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
0055A1CA  3B F1                     CMP ESI,ECX
0055A1CC  7D 26                     JGE 0x0055a1f4
0055A1CE  85 FF                     TEST EDI,EDI
0055A1D0  7C 22                     JL 0x0055a1f4
0055A1D2  3B 7A 24                  CMP EDI,dword ptr [EDX + 0x24]
0055A1D5  7D 1D                     JGE 0x0055a1f4
0055A1D7  8B DF                     MOV EBX,EDI
0055A1D9  0F AF D9                  IMUL EBX,ECX
0055A1DC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0055A1DF  03 9C 8A 94 00 00 00      ADD EBX,dword ptr [EDX + ECX*0x4 + 0x94]
0055A1E6  8A 0C 33                  MOV CL,byte ptr [EBX + ESI*0x1]
0055A1E9  84 C9                     TEST CL,CL
0055A1EB  8D 14 33                  LEA EDX,[EBX + ESI*0x1]
0055A1EE  76 04                     JBE 0x0055a1f4
0055A1F0  FE C9                     DEC CL
0055A1F2  88 0A                     MOV byte ptr [EDX],CL
LAB_0055a1f4:
0055A1F4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0055A1F7  40                        INC EAX
0055A1F8  46                        INC ESI
0055A1F9  3B C1                     CMP EAX,ECX
0055A1FB  7C B3                     JL 0x0055a1b0
0055A1FD  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0055A200  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055A203  03 D1                     ADD EDX,ECX
0055A205  47                        INC EDI
0055A206  48                        DEC EAX
0055A207  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0055A20A  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0055A20D  75 9C                     JNZ 0x0055a1ab
LAB_0055a20f:
0055A20F  5F                        POP EDI
0055A210  5E                        POP ESI
0055A211  5B                        POP EBX
0055A212  8B E5                     MOV ESP,EBP
0055A214  5D                        POP EBP
0055A215  C2 18 00                  RET 0x18
