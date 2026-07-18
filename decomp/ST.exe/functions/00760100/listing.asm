FUN_00760100:
00760100  55                        PUSH EBP
00760101  8B EC                     MOV EBP,ESP
00760103  83 EC 34                  SUB ESP,0x34
00760106  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00760109  53                        PUSH EBX
0076010A  56                        PUSH ESI
0076010B  8B 88 BA 01 00 00         MOV ECX,dword ptr [EAX + 0x1ba]
00760111  8B 58 70                  MOV EBX,dword ptr [EAX + 0x70]
00760114  8B 70 68                  MOV ESI,dword ptr [EAX + 0x68]
00760117  8B 90 32 01 00 00         MOV EDX,dword ptr [EAX + 0x132]
0076011D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00760120  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00760123  85 C0                     TEST EAX,EAX
00760125  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
00760128  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0076012B  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
0076012E  0F 8E 72 01 00 00         JLE 0x007602a6
00760134  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00760137  57                        PUSH EDI
00760138  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0076013B  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0076013E  2B CF                     SUB ECX,EDI
00760140  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00760143  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_00760146:
00760146  8B 07                     MOV EAX,dword ptr [EDI]
00760148  56                        PUSH ESI
00760149  50                        PUSH EAX
0076014A  E8 E1 9D FF FF            CALL 0x00759f30
0076014F  33 C0                     XOR EAX,EAX
00760151  85 DB                     TEST EBX,EBX
00760153  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00760156  0F 8E 26 01 00 00         JLE 0x00760282
0076015C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0076015F  83 C1 44                  ADD ECX,0x44
00760162  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00760165  EB 03                     JMP 0x0076016a
LAB_00760167:
00760167  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_0076016a:
0076016A  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0076016D  8B 0C 3A                  MOV ECX,dword ptr [EDX + EDI*0x1]
00760170  8B 17                     MOV EDX,dword ptr [EDI]
00760172  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00760175  03 C8                     ADD ECX,EAX
00760177  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0076017A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0076017D  83 7F 54 00               CMP dword ptr [EDI + 0x54],0x0
00760181  74 2A                     JZ 0x007601ad
00760183  8D 46 FF                  LEA EAX,[ESI + -0x1]
00760186  8B F8                     MOV EDI,EAX
00760188  03 D0                     ADD EDX,EAX
0076018A  0F AF FB                  IMUL EDI,EBX
0076018D  03 CF                     ADD ECX,EDI
0076018F  8B C3                     MOV EAX,EBX
00760191  83 CF FF                  OR EDI,0xffffffff
00760194  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00760197  F7 D8                     NEG EAX
00760199  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0076019C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0076019F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007601A2  8B 00                     MOV EAX,dword ptr [EAX]
007601A4  8D 74 70 02               LEA ESI,[EAX + ESI*0x2 + 0x2]
007601A8  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007601AB  EB 0D                     JMP 0x007601ba
LAB_007601ad:
007601AD  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007601B0  BF 01 00 00 00            MOV EDI,0x1
007601B5  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
007601B8  8B 36                     MOV ESI,dword ptr [ESI]
LAB_007601ba:
007601BA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
007601BD  8B 5B 18                  MOV EBX,dword ptr [EBX + 0x18]
007601C0  8B 1C 83                  MOV EBX,dword ptr [EBX + EAX*0x4]
007601C3  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
007601C6  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
007601C9  8B 5B 10                  MOV EBX,dword ptr [EBX + 0x10]
007601CC  8B 04 83                  MOV EAX,dword ptr [EBX + EAX*0x4]
007601CF  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
007601D2  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
007601D5  33 C0                     XOR EAX,EAX
007601D7  85 DB                     TEST EBX,EBX
007601D9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007601DC  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
007601DF  76 79                     JBE 0x0076025a
007601E1  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
LAB_007601e4:
007601E4  0F BF 1C 7E               MOVSX EBX,word ptr [ESI + EDI*0x2]
007601E8  8D 44 03 08               LEA EAX,[EBX + EAX*0x1 + 0x8]
007601EC  33 DB                     XOR EBX,EBX
007601EE  8A 19                     MOV BL,byte ptr [ECX]
007601F0  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
007601F3  C1 F8 04                  SAR EAX,0x4
007601F6  03 C8                     ADD ECX,EAX
007601F8  33 C0                     XOR EAX,EAX
007601FA  8A 04 0B                  MOV AL,byte ptr [EBX + ECX*0x1]
007601FD  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
00760200  33 C9                     XOR ECX,ECX
00760202  8A 0C 18                  MOV CL,byte ptr [EAX + EBX*0x1]
00760205  8A 1A                     MOV BL,byte ptr [EDX]
00760207  02 D9                     ADD BL,CL
00760209  88 1A                     MOV byte ptr [EDX],BL
0076020B  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
0076020E  33 D2                     XOR EDX,EDX
00760210  8A 14 19                  MOV DL,byte ptr [ECX + EBX*0x1]
00760213  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00760216  2B C2                     SUB EAX,EDX
00760218  8B D0                     MOV EDX,EAX
0076021A  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
0076021D  03 C1                     ADD EAX,ECX
0076021F  03 D8                     ADD EBX,EAX
00760221  03 C1                     ADD EAX,ECX
00760223  66 89 1E                  MOV word ptr [ESI],BX
00760226  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
00760229  03 D8                     ADD EBX,EAX
0076022B  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0076022E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00760231  03 C1                     ADD EAX,ECX
00760233  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00760236  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00760239  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
0076023C  03 CA                     ADD ECX,EDX
0076023E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00760241  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00760244  03 D7                     ADD EDX,EDI
00760246  4B                        DEC EBX
00760247  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0076024A  8D 34 7E                  LEA ESI,[ESI + EDI*0x2]
0076024D  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00760250  75 92                     JNZ 0x007601e4
00760252  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00760255  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00760258  EB 06                     JMP 0x00760260
LAB_0076025a:
0076025A  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0076025D  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
LAB_00760260:
00760260  66 8B 45 F8               MOV AX,word ptr [EBP + -0x8]
00760264  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00760267  66 89 06                  MOV word ptr [ESI],AX
0076026A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0076026D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00760270  40                        INC EAX
00760271  83 C2 04                  ADD EDX,0x4
00760274  3B C3                     CMP EAX,EBX
00760276  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
00760279  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0076027C  0F 8C E5 FE FF FF         JL 0x00760167
LAB_00760282:
00760282  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00760285  33 C9                     XOR ECX,ECX
00760287  8B 50 54                  MOV EDX,dword ptr [EAX + 0x54]
0076028A  85 D2                     TEST EDX,EDX
0076028C  0F 94 C1                  SETZ CL
0076028F  89 48 54                  MOV dword ptr [EAX + 0x54],ECX
00760292  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00760295  83 C7 04                  ADD EDI,0x4
00760298  48                        DEC EAX
00760299  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0076029C  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0076029F  0F 85 A1 FE FF FF         JNZ 0x00760146
007602A5  5F                        POP EDI
LAB_007602a6:
007602A6  5E                        POP ESI
007602A7  5B                        POP EBX
007602A8  8B E5                     MOV ESP,EBP
007602AA  5D                        POP EBP
007602AB  C2 10 00                  RET 0x10
