FUN_006f7fc0:
006F7FC0  55                        PUSH EBP
006F7FC1  8B EC                     MOV EBP,ESP
006F7FC3  51                        PUSH ECX
006F7FC4  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006F7FC7  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
006F7FD1  48                        DEC EAX
006F7FD2  0F 88 E3 01 00 00         JS 0x006f81bb
006F7FD8  53                        PUSH EBX
006F7FD9  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006F7FDC  40                        INC EAX
006F7FDD  56                        PUSH ESI
006F7FDE  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006F7FE1  57                        PUSH EDI
006F7FE2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006f7fe5:
006F7FE5  33 C9                     XOR ECX,ECX
006F7FE7  8A 0E                     MOV CL,byte ptr [ESI]
006F7FE9  46                        INC ESI
006F7FEA  85 C9                     TEST ECX,ECX
006F7FEC  0F 84 A9 01 00 00         JZ 0x006f819b
006F7FF2  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
LAB_006f7ff5:
006F7FF5  F6 C1 80                  TEST CL,0x80
006F7FF8  8B C1                     MOV EAX,ECX
006F7FFA  74 21                     JZ 0x006f801d
006F7FFC  83 E0 3F                  AND EAX,0x3f
006F7FFF  3B C7                     CMP EAX,EDI
006F8001  7F 2A                     JG 0x006f802d
006F8003  F6 C1 40                  TEST CL,0x40
006F8006  74 0A                     JZ 0x006f8012
006F8008  46                        INC ESI
006F8009  33 C9                     XOR ECX,ECX
006F800B  2B F8                     SUB EDI,EAX
006F800D  8A 0E                     MOV CL,byte ptr [ESI]
006F800F  46                        INC ESI
006F8010  EB E3                     JMP 0x006f7ff5
LAB_006f8012:
006F8012  03 F0                     ADD ESI,EAX
006F8014  33 C9                     XOR ECX,ECX
006F8016  2B F8                     SUB EDI,EAX
006F8018  8A 0E                     MOV CL,byte ptr [ESI]
006F801A  46                        INC ESI
006F801B  EB D8                     JMP 0x006f7ff5
LAB_006f801d:
006F801D  83 E0 7F                  AND EAX,0x7f
006F8020  3B C7                     CMP EAX,EDI
006F8022  7F 09                     JG 0x006f802d
006F8024  33 C9                     XOR ECX,ECX
006F8026  2B F8                     SUB EDI,EAX
006F8028  8A 0E                     MOV CL,byte ptr [ESI]
006F802A  46                        INC ESI
006F802B  EB C8                     JMP 0x006f7ff5
LAB_006f802d:
006F802D  8B D1                     MOV EDX,ECX
006F802F  2B C7                     SUB EAX,EDI
006F8031  81 E2 C0 00 00 00         AND EDX,0xc0
006F8037  80 FA 80                  CMP DL,0x80
006F803A  75 02                     JNZ 0x006f803e
006F803C  03 F7                     ADD ESI,EDI
LAB_006f803e:
006F803E  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006F8041  3B C7                     CMP EAX,EDI
006F8043  0F 8F 8A 00 00 00         JG 0x006f80d3
006F8049  8B D1                     MOV EDX,ECX
006F804B  81 E2 80 00 00 00         AND EDX,0x80
LAB_006f8051:
006F8051  2B F8                     SUB EDI,EAX
006F8053  85 D2                     TEST EDX,EDX
006F8055  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
006F8058  74 47                     JZ 0x006f80a1
006F805A  F6 C1 40                  TEST CL,0x40
006F805D  74 0E                     JZ 0x006f806d
006F805F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F8062  46                        INC ESI
006F8063  03 D8                     ADD EBX,EAX
006F8065  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
006F8068  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F806B  EB 3F                     JMP 0x006f80ac
LAB_006f806d:
006F806D  48                        DEC EAX
006F806E  78 3C                     JS 0x006f80ac
006F8070  40                        INC EAX
LAB_006f8071:
006F8071  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F8074  33 D2                     XOR EDX,EDX
006F8076  66 8B 17                  MOV DX,word ptr [EDI]
006F8079  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F807C  3B FA                     CMP EDI,EDX
006F807E  77 0E                     JA 0x006f808e
006F8080  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006F8083  33 D2                     XOR EDX,EDX
006F8085  8A 36                     MOV DH,byte ptr [ESI]
006F8087  8A 13                     MOV DL,byte ptr [EBX]
006F8089  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
006F808C  88 13                     MOV byte ptr [EBX],DL
LAB_006f808e:
006F808E  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F8091  83 C7 02                  ADD EDI,0x2
006F8094  43                        INC EBX
006F8095  46                        INC ESI
006F8096  48                        DEC EAX
006F8097  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006F809A  75 D5                     JNZ 0x006f8071
006F809C  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006F809F  EB 0B                     JMP 0x006f80ac
LAB_006f80a1:
006F80A1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F80A4  03 D8                     ADD EBX,EAX
006F80A6  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006F80A9  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006f80ac:
006F80AC  85 FF                     TEST EDI,EDI
006F80AE  7E 21                     JLE 0x006f80d1
006F80B0  33 C9                     XOR ECX,ECX
006F80B2  8A 0E                     MOV CL,byte ptr [ESI]
006F80B4  8B D1                     MOV EDX,ECX
006F80B6  8B C1                     MOV EAX,ECX
006F80B8  81 E2 80 00 00 00         AND EDX,0x80
006F80BE  46                        INC ESI
006F80BF  85 D2                     TEST EDX,EDX
006F80C1  74 05                     JZ 0x006f80c8
006F80C3  83 E0 3F                  AND EAX,0x3f
006F80C6  EB 03                     JMP 0x006f80cb
LAB_006f80c8:
006F80C8  83 E0 7F                  AND EAX,0x7f
LAB_006f80cb:
006F80CB  3B C7                     CMP EAX,EDI
006F80CD  7E 82                     JLE 0x006f8051
006F80CF  EB 02                     JMP 0x006f80d3
LAB_006f80d1:
006F80D1  33 C0                     XOR EAX,EAX
LAB_006f80d3:
006F80D3  2B C7                     SUB EAX,EDI
006F80D5  F6 C1 80                  TEST CL,0x80
006F80D8  74 51                     JZ 0x006f812b
006F80DA  F6 C1 40                  TEST CL,0x40
006F80DD  74 12                     JZ 0x006f80f1
006F80DF  85 FF                     TEST EDI,EDI
006F80E1  7E 53                     JLE 0x006f8136
006F80E3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F80E6  46                        INC ESI
006F80E7  03 DF                     ADD EBX,EDI
006F80E9  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
006F80EC  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006F80EF  EB 45                     JMP 0x006f8136
LAB_006f80f1:
006F80F1  4F                        DEC EDI
006F80F2  78 42                     JS 0x006f8136
006F80F4  47                        INC EDI
006F80F5  89 7D 2C                  MOV dword ptr [EBP + 0x2c],EDI
LAB_006f80f8:
006F80F8  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F80FB  33 D2                     XOR EDX,EDX
006F80FD  66 8B 17                  MOV DX,word ptr [EDI]
006F8100  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006F8103  3B FA                     CMP EDI,EDX
006F8105  77 0E                     JA 0x006f8115
006F8107  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006F810A  33 D2                     XOR EDX,EDX
006F810C  8A 36                     MOV DH,byte ptr [ESI]
006F810E  8A 13                     MOV DL,byte ptr [EBX]
006F8110  8A 14 3A                  MOV DL,byte ptr [EDX + EDI*0x1]
006F8113  88 13                     MOV byte ptr [EBX],DL
LAB_006f8115:
006F8115  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006F8118  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006F811B  83 C7 02                  ADD EDI,0x2
006F811E  43                        INC EBX
006F811F  46                        INC ESI
006F8120  4A                        DEC EDX
006F8121  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006F8124  89 55 2C                  MOV dword ptr [EBP + 0x2c],EDX
006F8127  75 CF                     JNZ 0x006f80f8
006F8129  EB 0B                     JMP 0x006f8136
LAB_006f812b:
006F812B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006F812E  03 DF                     ADD EBX,EDI
006F8130  8D 14 7A                  LEA EDX,[EDX + EDI*0x2]
006F8133  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_006f8136:
006F8136  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006F8139  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006F813C  2B D7                     SUB EDX,EDI
006F813E  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006F8141  2B D7                     SUB EDX,EDI
006F8143  3B C2                     CMP EAX,EDX
006F8145  7D 2E                     JGE 0x006f8175
LAB_006f8147:
006F8147  81 E1 C0 00 00 00         AND ECX,0xc0
006F814D  2B D0                     SUB EDX,EAX
006F814F  80 F9 80                  CMP CL,0x80
006F8152  75 02                     JNZ 0x006f8156
006F8154  03 F0                     ADD ESI,EAX
LAB_006f8156:
006F8156  33 C9                     XOR ECX,ECX
006F8158  8A 0E                     MOV CL,byte ptr [ESI]
006F815A  8B C1                     MOV EAX,ECX
006F815C  24 80                     AND AL,0x80
006F815E  46                        INC ESI
006F815F  84 C0                     TEST AL,AL
006F8161  8B C1                     MOV EAX,ECX
006F8163  74 09                     JZ 0x006f816e
006F8165  83 E0 3F                  AND EAX,0x3f
006F8168  F6 C1 40                  TEST CL,0x40
006F816B  74 01                     JZ 0x006f816e
006F816D  46                        INC ESI
LAB_006f816e:
006F816E  3B C2                     CMP EAX,EDX
006F8170  7C D5                     JL 0x006f8147
006F8172  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
LAB_006f8175:
006F8175  81 E1 C0 00 00 00         AND ECX,0xc0
006F817B  80 F9 80                  CMP CL,0x80
006F817E  75 02                     JNZ 0x006f8182
006F8180  03 F2                     ADD ESI,EDX
LAB_006f8182:
006F8182  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F8185  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F8188  2B CF                     SUB ECX,EDI
006F818A  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
006F818D  03 D9                     ADD EBX,ECX
006F818F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006F8192  2B C2                     SUB EAX,EDX
006F8194  03 C8                     ADD ECX,EAX
006F8196  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006F8199  EB 10                     JMP 0x006f81ab
LAB_006f819b:
006F819B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006F819E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F81A1  03 D9                     ADD EBX,ECX
006F81A3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006F81A6  03 C1                     ADD EAX,ECX
006F81A8  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006f81ab:
006F81AB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F81AE  48                        DEC EAX
006F81AF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F81B2  0F 85 2D FE FF FF         JNZ 0x006f7fe5
006F81B8  5F                        POP EDI
006F81B9  5E                        POP ESI
006F81BA  5B                        POP EBX
LAB_006f81bb:
006F81BB  8B E5                     MOV ESP,EBP
006F81BD  5D                        POP EBP
006F81BE  C2 2C 00                  RET 0x2c
