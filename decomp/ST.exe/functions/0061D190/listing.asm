FUN_0061d190:
0061D190  55                        PUSH EBP
0061D191  8B EC                     MOV EBP,ESP
0061D193  83 EC 5C                  SUB ESP,0x5c
0061D196  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0061D19B  53                        PUSH EBX
0061D19C  56                        PUSH ESI
0061D19D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0061D1A0  57                        PUSH EDI
0061D1A1  8D 55 A8                  LEA EDX,[EBP + -0x58]
0061D1A4  8D 4D A4                  LEA ECX,[EBP + -0x5c]
0061D1A7  6A 00                     PUSH 0x0
0061D1A9  52                        PUSH EDX
0061D1AA  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
0061D1AD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061D1B3  E8 38 06 11 00            CALL 0x0072d7f0
0061D1B8  8B F0                     MOV ESI,EAX
0061D1BA  83 C4 08                  ADD ESP,0x8
0061D1BD  85 F6                     TEST ESI,ESI
0061D1BF  0F 85 F6 02 00 00         JNZ 0x0061d4bb
0061D1C5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061D1C8  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0061D1CB  83 F8 03                  CMP EAX,0x3
0061D1CE  0F 87 9E 02 00 00         JA 0x0061d472
0061D1D4  0F 84 73 02 00 00         JZ 0x0061d44d
0061D1DA  2B C6                     SUB EAX,ESI
0061D1DC  0F 84 C6 00 00 00         JZ 0x0061d2a8
0061D1E2  83 E8 02                  SUB EAX,0x2
0061D1E5  0F 85 BC 02 00 00         JNZ 0x0061d4a7
0061D1EB  8B 71 14                  MOV ESI,dword ptr [ECX + 0x14]
0061D1EE  83 7E 0C 02               CMP dword ptr [ESI + 0xc],0x2
0061D1F2  74 72                     JZ 0x0061d266
0061D1F4  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0061D1F7  B9 0A 00 00 00            MOV ECX,0xa
0061D1FC  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
0061D1FF  F3 A5                     MOVSD.REP ES:EDI,ESI
0061D201  66 A5                     MOVSW ES:EDI,ESI
0061D203  A1 54 87 80 00            MOV EAX,[0x00808754]
0061D208  8B C8                     MOV ECX,EAX
0061D20A  89 83 AC 00 00 00         MOV dword ptr [EBX + 0xac],EAX
0061D210  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0061D216  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0061D21C  8B CB                     MOV ECX,EBX
0061D21E  89 83 AC 00 00 00         MOV dword ptr [EBX + 0xac],EAX
0061D224  C1 E8 10                  SHR EAX,0x10
0061D227  83 E0 03                  AND EAX,0x3
0061D22A  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
0061D22D  E8 BF 6A DE FF            CALL 0x00403cf1
0061D232  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
0061D235  8B CB                     MOV ECX,EBX
0061D237  52                        PUSH EDX
0061D238  88 83 A7 00 00 00         MOV byte ptr [EBX + 0xa7],AL
0061D23E  E8 29 8B DE FF            CALL 0x00405d6c
0061D243  85 C0                     TEST EAX,EAX
0061D245  8B CB                     MOV ECX,EBX
0061D247  0F 84 E7 01 00 00         JZ 0x0061d434
0061D24D  E8 5B 59 DE FF            CALL 0x00402bad
0061D252  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0061D255  33 C0                     XOR EAX,EAX
0061D257  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061D25D  5F                        POP EDI
0061D25E  5E                        POP ESI
0061D25F  5B                        POP EBX
0061D260  8B E5                     MOV ESP,EBP
0061D262  5D                        POP EBP
0061D263  C2 04 00                  RET 0x4
LAB_0061d266:
0061D266  56                        PUSH ESI
0061D267  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0061D26A  8B CE                     MOV ECX,ESI
0061D26C  E8 94 60 DE FF            CALL 0x00403305
0061D271  B9 0B 00 00 00            MOV ECX,0xb
0061D276  33 C0                     XOR EAX,EAX
0061D278  8D BE B0 00 00 00         LEA EDI,[ESI + 0xb0]
0061D27E  F3 AB                     STOSD.REP ES:EDI
0061D280  AA                        STOSB ES:EDI
0061D281  8B 86 A8 00 00 00         MOV EAX,dword ptr [ESI + 0xa8]
0061D287  8B CE                     MOV ECX,ESI
0061D289  89 86 AC 00 00 00         MOV dword ptr [ESI + 0xac],EAX
0061D28F  E8 90 41 DE FF            CALL 0x00401424
0061D294  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0061D297  33 C0                     XOR EAX,EAX
0061D299  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061D29F  5F                        POP EDI
0061D2A0  5E                        POP ESI
0061D2A1  5B                        POP EBX
0061D2A2  8B E5                     MOV ESP,EBP
0061D2A4  5D                        POP EBP
0061D2A5  C2 04 00                  RET 0x4
LAB_0061d2a8:
0061D2A8  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0061D2AB  8B CE                     MOV ECX,ESI
0061D2AD  E8 C0 4D DE FF            CALL 0x00402072
0061D2B2  8B 46 4F                  MOV EAX,dword ptr [ESI + 0x4f]
0061D2B5  83 F8 05                  CMP EAX,0x5
0061D2B8  0F 85 87 00 00 00         JNZ 0x0061d345
0061D2BE  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
0061D2C2  33 C9                     XOR ECX,ECX
0061D2C4  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0061D2C7  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0061D2CA  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0061D2CD  66 85 C0                  TEST AX,AX
0061D2D0  0F BF C8                  MOVSX ECX,AX
0061D2D3  B8 79 19 8C 02            MOV EAX,0x28c1979
0061D2D8  7C 10                     JL 0x0061d2ea
0061D2DA  F7 E9                     IMUL ECX
0061D2DC  D1 FA                     SAR EDX,0x1
0061D2DE  8B C2                     MOV EAX,EDX
0061D2E0  C1 E8 1F                  SHR EAX,0x1f
0061D2E3  03 D0                     ADD EDX,EAX
0061D2E5  0F BF CA                  MOVSX ECX,DX
0061D2E8  EB 0F                     JMP 0x0061d2f9
LAB_0061d2ea:
0061D2EA  F7 E9                     IMUL ECX
0061D2EC  D1 FA                     SAR EDX,0x1
0061D2EE  8B C2                     MOV EAX,EDX
0061D2F0  C1 E8 1F                  SHR EAX,0x1f
0061D2F3  03 D0                     ADD EDX,EAX
0061D2F5  0F BF CA                  MOVSX ECX,DX
0061D2F8  49                        DEC ECX
LAB_0061d2f9:
0061D2F9  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0061D2FD  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0061D300  66 85 C0                  TEST AX,AX
0061D303  0F BF C8                  MOVSX ECX,AX
0061D306  B8 79 19 8C 02            MOV EAX,0x28c1979
0061D30B  7C 10                     JL 0x0061d31d
0061D30D  F7 E9                     IMUL ECX
0061D30F  D1 FA                     SAR EDX,0x1
0061D311  8B C2                     MOV EAX,EDX
0061D313  C1 E8 1F                  SHR EAX,0x1f
0061D316  03 D0                     ADD EDX,EAX
0061D318  0F BF CA                  MOVSX ECX,DX
0061D31B  EB 0F                     JMP 0x0061d32c
LAB_0061d31d:
0061D31D  F7 E9                     IMUL ECX
0061D31F  D1 FA                     SAR EDX,0x1
0061D321  8B C2                     MOV EAX,EDX
0061D323  C1 E8 1F                  SHR EAX,0x1f
0061D326  03 D0                     ADD EDX,EAX
0061D328  0F BF CA                  MOVSX ECX,DX
0061D32B  49                        DEC ECX
LAB_0061d32c:
0061D32C  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0061D32F  8D 45 E8                  LEA EAX,[EBP + -0x18]
0061D332  6A 00                     PUSH 0x0
0061D334  50                        PUSH EAX
0061D335  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0061D338  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0061D33B  68 76 04 00 00            PUSH 0x476
0061D340  E9 87 00 00 00            JMP 0x0061d3cc
LAB_0061d345:
0061D345  83 F8 01                  CMP EAX,0x1
0061D348  7D 0B                     JGE 0x0061d355
0061D34A  33 C9                     XOR ECX,ECX
0061D34C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0061D34F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0061D352  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_0061d355:
0061D355  66 8B 46 30               MOV AX,word ptr [ESI + 0x30]
0061D359  66 85 C0                  TEST AX,AX
0061D35C  0F BF C8                  MOVSX ECX,AX
0061D35F  B8 79 19 8C 02            MOV EAX,0x28c1979
0061D364  7C 10                     JL 0x0061d376
0061D366  F7 E9                     IMUL ECX
0061D368  D1 FA                     SAR EDX,0x1
0061D36A  8B C2                     MOV EAX,EDX
0061D36C  C1 E8 1F                  SHR EAX,0x1f
0061D36F  03 D0                     ADD EDX,EAX
0061D371  0F BF CA                  MOVSX ECX,DX
0061D374  EB 0F                     JMP 0x0061d385
LAB_0061d376:
0061D376  F7 E9                     IMUL ECX
0061D378  D1 FA                     SAR EDX,0x1
0061D37A  8B C2                     MOV EAX,EDX
0061D37C  C1 E8 1F                  SHR EAX,0x1f
0061D37F  03 D0                     ADD EDX,EAX
0061D381  0F BF CA                  MOVSX ECX,DX
0061D384  49                        DEC ECX
LAB_0061d385:
0061D385  66 8B 46 32               MOV AX,word ptr [ESI + 0x32]
0061D389  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0061D38C  66 85 C0                  TEST AX,AX
0061D38F  0F BF C8                  MOVSX ECX,AX
0061D392  B8 79 19 8C 02            MOV EAX,0x28c1979
0061D397  7C 10                     JL 0x0061d3a9
0061D399  F7 E9                     IMUL ECX
0061D39B  D1 FA                     SAR EDX,0x1
0061D39D  8B C2                     MOV EAX,EDX
0061D39F  C1 E8 1F                  SHR EAX,0x1f
0061D3A2  03 D0                     ADD EDX,EAX
0061D3A4  0F BF CA                  MOVSX ECX,DX
0061D3A7  EB 0F                     JMP 0x0061d3b8
LAB_0061d3a9:
0061D3A9  F7 E9                     IMUL ECX
0061D3AB  D1 FA                     SAR EDX,0x1
0061D3AD  8B C2                     MOV EAX,EDX
0061D3AF  C1 E8 1F                  SHR EAX,0x1f
0061D3B2  03 D0                     ADD EDX,EAX
0061D3B4  0F BF CA                  MOVSX ECX,DX
0061D3B7  49                        DEC ECX
LAB_0061d3b8:
0061D3B8  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0061D3BB  8D 45 E8                  LEA EAX,[EBP + -0x18]
0061D3BE  6A 00                     PUSH 0x0
0061D3C0  50                        PUSH EAX
0061D3C1  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0061D3C4  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0061D3C7  68 75 04 00 00            PUSH 0x475
LAB_0061d3cc:
0061D3CC  6A 00                     PUSH 0x0
0061D3CE  6A 02                     PUSH 0x2
0061D3D0  B9 58 76 80 00            MOV ECX,0x807658
0061D3D5  E8 FE 77 DE FF            CALL 0x00404bd8
0061D3DA  8B 5E 4F                  MOV EBX,dword ptr [ESI + 0x4f]
0061D3DD  8B 4E 5F                  MOV ECX,dword ptr [ESI + 0x5f]
0061D3E0  43                        INC EBX
0061D3E1  8B C3                     MOV EAX,EBX
0061D3E3  89 5E 4F                  MOV dword ptr [ESI + 0x4f],EBX
0061D3E6  C1 E1 02                  SHL ECX,0x2
0061D3E9  3B C1                     CMP EAX,ECX
0061D3EB  7C 07                     JL 0x0061d3f4
0061D3ED  8B CE                     MOV ECX,ESI
0061D3EF  E8 52 3C DE FF            CALL 0x00401046
LAB_0061d3f4:
0061D3F4  8B 4E 5B                  MOV ECX,dword ptr [ESI + 0x5b]
0061D3F7  81 C1 FC 08 00 00         ADD ECX,0x8fc
0061D3FD  89 4E 5B                  MOV dword ptr [ESI + 0x5b],ECX
0061D400  8B CE                     MOV ECX,ESI
0061D402  E8 DA 5F DE FF            CALL 0x004033e1
0061D407  8A 86 A7 00 00 00         MOV AL,byte ptr [ESI + 0xa7]
0061D40D  84 C0                     TEST AL,AL
0061D40F  75 0D                     JNZ 0x0061d41e
0061D411  8B CE                     MOV ECX,ESI
0061D413  E8 D9 68 DE FF            CALL 0x00403cf1
0061D418  88 86 A7 00 00 00         MOV byte ptr [ESI + 0xa7],AL
LAB_0061d41e:
0061D41E  33 D2                     XOR EDX,EDX
0061D420  8B CE                     MOV ECX,ESI
0061D422  8A 96 A7 00 00 00         MOV DL,byte ptr [ESI + 0xa7]
0061D428  52                        PUSH EDX
0061D429  E8 BB 48 DE FF            CALL 0x00401ce9
0061D42E  85 C0                     TEST EAX,EAX
0061D430  75 75                     JNZ 0x0061d4a7
0061D432  8B CE                     MOV ECX,ESI
LAB_0061d434:
0061D434  E8 0D 3C DE FF            CALL 0x00401046
0061D439  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0061D43C  33 C0                     XOR EAX,EAX
0061D43E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061D444  5F                        POP EDI
0061D445  5E                        POP ESI
0061D446  5B                        POP EBX
0061D447  8B E5                     MOV ESP,EBP
0061D449  5D                        POP EBP
0061D44A  C2 04 00                  RET 0x4
LAB_0061d44d:
0061D44D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0061D450  8B CE                     MOV ECX,ESI
0061D452  E8 46 58 DE FF            CALL 0x00402c9d
0061D457  8B CE                     MOV ECX,ESI
0061D459  E8 68 84 DE FF            CALL 0x004058c6
0061D45E  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0061D461  33 C0                     XOR EAX,EAX
0061D463  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061D469  5F                        POP EDI
0061D46A  5E                        POP ESI
0061D46B  5B                        POP EBX
0061D46C  8B E5                     MOV ESP,EBP
0061D46E  5D                        POP EBP
0061D46F  C2 04 00                  RET 0x4
LAB_0061d472:
0061D472  3D 0F 01 00 00            CMP EAX,0x10f
0061D477  75 2E                     JNZ 0x0061d4a7
0061D479  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0061D47C  8D 45 F8                  LEA EAX,[EBP + -0x8]
0061D47F  50                        PUSH EAX
0061D480  8B CE                     MOV ECX,ESI
0061D482  E8 F3 43 DE FF            CALL 0x0040187a
0061D487  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0061D48A  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0061D48D  51                        PUSH ECX
0061D48E  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061D494  50                        PUSH EAX
0061D495  52                        PUSH EDX
0061D496  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0061D499  E8 5B 51 DE FF            CALL 0x004025f9
0061D49E  8D 45 F4                  LEA EAX,[EBP + -0xc]
0061D4A1  50                        PUSH EAX
0061D4A2  E8 B9 DB 08 00            CALL 0x006ab060
LAB_0061d4a7:
0061D4A7  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0061D4AA  33 C0                     XOR EAX,EAX
0061D4AC  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0061D4B2  5F                        POP EDI
0061D4B3  5E                        POP ESI
0061D4B4  5B                        POP EBX
0061D4B5  8B E5                     MOV ESP,EBP
0061D4B7  5D                        POP EBP
0061D4B8  C2 04 00                  RET 0x4
LAB_0061d4bb:
0061D4BB  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
0061D4BE  68 D4 01 7D 00            PUSH 0x7d01d4
0061D4C3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0061D4C8  56                        PUSH ESI
0061D4C9  6A 00                     PUSH 0x0
0061D4CB  6A 7A                     PUSH 0x7a
0061D4CD  68 B0 01 7D 00            PUSH 0x7d01b0
0061D4D2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0061D4D8  E8 F3 FF 08 00            CALL 0x006ad4d0
0061D4DD  83 C4 18                  ADD ESP,0x18
0061D4E0  85 C0                     TEST EAX,EAX
0061D4E2  74 01                     JZ 0x0061d4e5
0061D4E4  CC                        INT3
LAB_0061d4e5:
0061D4E5  6A 7C                     PUSH 0x7c
0061D4E7  68 B0 01 7D 00            PUSH 0x7d01b0
0061D4EC  6A 00                     PUSH 0x0
0061D4EE  56                        PUSH ESI
0061D4EF  E8 4C 89 08 00            CALL 0x006a5e40
0061D4F4  5F                        POP EDI
0061D4F5  5E                        POP ESI
0061D4F6  B8 FF FF 00 00            MOV EAX,0xffff
0061D4FB  5B                        POP EBX
0061D4FC  8B E5                     MOV ESP,EBP
0061D4FE  5D                        POP EBP
0061D4FF  C2 04 00                  RET 0x4
