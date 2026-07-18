FUN_007288a0:
007288A0  55                        PUSH EBP
007288A1  8B EC                     MOV EBP,ESP
007288A3  83 EC 48                  SUB ESP,0x48
007288A6  A1 14 71 85 00            MOV EAX,[0x00857114]
007288AB  8B 15 10 71 85 00         MOV EDX,dword ptr [0x00857110]
007288B1  53                        PUSH EBX
007288B2  56                        PUSH ESI
007288B3  0F BF 74 C2 02            MOVSX ESI,word ptr [EDX + EAX*0x8 + 0x2]
007288B8  8B D6                     MOV EDX,ESI
007288BA  57                        PUSH EDI
007288BB  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
007288BF  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007288C2  8B D9                     MOV EBX,ECX
007288C4  03 FA                     ADD EDI,EDX
007288C6  50                        PUSH EAX
007288C7  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
007288CA  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
007288CD  8B FE                     MOV EDI,ESI
007288CF  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
007288D2  0F AF F9                  IMUL EDI,ECX
007288D5  8D 45 D4                  LEA EAX,[EBP + -0x2c]
007288D8  03 FA                     ADD EDI,EDX
007288DA  50                        PUSH EAX
007288DB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007288DE  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
007288E1  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
007288E4  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
007288E7  C7 45 D4 01 00 00 00      MOV dword ptr [EBP + -0x2c],0x1
007288EE  E8 ED FE FF FF            CALL 0x007287e0
007288F3  85 C0                     TEST EAX,EAX
007288F5  0F 84 79 01 00 00         JZ 0x00728a74
007288FB  8B 0D 14 71 85 00         MOV ECX,dword ptr [0x00857114]
00728901  8D 55 B8                  LEA EDX,[EBP + -0x48]
00728904  51                        PUSH ECX
00728905  52                        PUSH EDX
00728906  C7 45 B8 FF FF FF FF      MOV dword ptr [EBP + -0x48],0xffffffff
0072890D  E8 CE FE FF FF            CALL 0x007287e0
00728912  85 C0                     TEST EAX,EAX
00728914  0F 84 5A 01 00 00         JZ 0x00728a74
0072891A  3B 73 3C                  CMP ESI,dword ptr [EBX + 0x3c]
0072891D  0F 8D 51 01 00 00         JGE 0x00728a74
LAB_00728923:
00728923  3B 73 34                  CMP ESI,dword ptr [EBX + 0x34]
00728926  0F 8C D8 00 00 00         JL 0x00728a04
0072892C  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0072892F  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
00728932  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00728935  C1 F9 10                  SAR ECX,0x10
00728938  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0072893B  3B 4B 38                  CMP ECX,dword ptr [EBX + 0x38]
0072893E  7C 03                     JL 0x00728943
00728940  8B 4B 38                  MOV ECX,dword ptr [EBX + 0x38]
LAB_00728943:
00728943  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00728946  C1 F8 10                  SAR EAX,0x10
00728949  3B 43 30                  CMP EAX,dword ptr [EBX + 0x30]
0072894C  7D 03                     JGE 0x00728951
0072894E  8B 43 30                  MOV EAX,dword ptr [EBX + 0x30]
LAB_00728951:
00728951  2B C8                     SUB ECX,EAX
00728953  0F 8E A2 00 00 00         JLE 0x007289fb
00728959  03 F8                     ADD EDI,EAX
0072895B  03 F0                     ADD ESI,EAX
0072895D  55                        PUSH EBP
0072895E  8B 6D 10                  MOV EBP,dword ptr [EBP + 0x10]
00728961  2B C0                     SUB EAX,EAX
00728963  2B D2                     SUB EDX,EDX
00728965  83 F9 03                  CMP ECX,0x3
00728968  7C 70                     JL 0x007289da
0072896A  8A 16                     MOV DL,byte ptr [ESI]
0072896C  F7 C7 01 00 00 00         TEST EDI,0x1
00728972  74 0B                     JZ 0x0072897f
00728974  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
00728978  46                        INC ESI
00728979  88 07                     MOV byte ptr [EDI],AL
0072897B  47                        INC EDI
0072897C  49                        DEC ECX
0072897D  8A 16                     MOV DL,byte ptr [ESI]
LAB_0072897f:
0072897F  F7 C7 02 00 00 00         TEST EDI,0x2
00728985  74 1A                     JZ 0x007289a1
00728987  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
0072898A  83 C6 02                  ADD ESI,0x2
0072898D  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
00728991  83 C7 02                  ADD EDI,0x2
00728994  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
00728998  83 E9 02                  SUB ECX,0x2
0072899B  66 89 5F FE               MOV word ptr [EDI + -0x2],BX
0072899F  8A 16                     MOV DL,byte ptr [ESI]
LAB_007289a1:
007289A1  83 E9 04                  SUB ECX,0x4
007289A4  7C 2F                     JL 0x007289d5
LAB_007289a6:
007289A6  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
007289A9  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
007289AD  8A 56 02                  MOV DL,byte ptr [ESI + 0x2]
007289B0  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
007289B4  C1 E3 10                  SHL EBX,0x10
007289B7  8A 46 03                  MOV AL,byte ptr [ESI + 0x3]
007289BA  8A 5C 15 00               MOV BL,byte ptr [EBP + EDX*0x1]
007289BE  83 C6 04                  ADD ESI,0x4
007289C1  8A 7C 05 00               MOV BH,byte ptr [EBP + EAX*0x1]
007289C5  83 C7 04                  ADD EDI,0x4
007289C8  C1 CB 10                  ROR EBX,0x10
007289CB  89 5F FC                  MOV dword ptr [EDI + -0x4],EBX
007289CE  83 E9 04                  SUB ECX,0x4
007289D1  8A 16                     MOV DL,byte ptr [ESI]
007289D3  7D D1                     JGE 0x007289a6
LAB_007289d5:
007289D5  83 C1 04                  ADD ECX,0x4
007289D8  74 20                     JZ 0x007289fa
LAB_007289da:
007289DA  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
007289DE  49                        DEC ECX
007289DF  8A 56 01                  MOV DL,byte ptr [ESI + 0x1]
007289E2  88 07                     MOV byte ptr [EDI],AL
007289E4  74 14                     JZ 0x007289fa
007289E6  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
007289EA  49                        DEC ECX
007289EB  8A 56 02                  MOV DL,byte ptr [ESI + 0x2]
007289EE  88 47 01                  MOV byte ptr [EDI + 0x1],AL
007289F1  74 07                     JZ 0x007289fa
007289F3  8A 44 15 00               MOV AL,byte ptr [EBP + EDX*0x1]
007289F7  88 47 02                  MOV byte ptr [EDI + 0x2],AL
LAB_007289fa:
007289FA  5D                        POP EBP
LAB_007289fb:
007289FB  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007289FE  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00728A01  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
LAB_00728a04:
00728A04  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00728A07  48                        DEC EAX
00728A08  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00728A0B  75 13                     JNZ 0x00728a20
00728A0D  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00728A10  8D 4D D4                  LEA ECX,[EBP + -0x2c]
00728A13  50                        PUSH EAX
00728A14  51                        PUSH ECX
00728A15  E8 C6 FD FF FF            CALL 0x007287e0
00728A1A  85 C0                     TEST EAX,EAX
00728A1C  74 56                     JZ 0x00728a74
00728A1E  EB 0B                     JMP 0x00728a2b
LAB_00728a20:
00728A20  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00728A23  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00728A26  03 C2                     ADD EAX,EDX
00728A28  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_00728a2b:
00728A2B  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00728A2E  48                        DEC EAX
00728A2F  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00728A32  75 13                     JNZ 0x00728a47
00728A34  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00728A37  8D 4D B8                  LEA ECX,[EBP + -0x48]
00728A3A  50                        PUSH EAX
00728A3B  51                        PUSH ECX
00728A3C  E8 9F FD FF FF            CALL 0x007287e0
00728A41  85 C0                     TEST EAX,EAX
00728A43  74 2F                     JZ 0x00728a74
00728A45  EB 0B                     JMP 0x00728a52
LAB_00728a47:
00728A47  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
00728A4A  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
00728A4D  03 C2                     ADD EAX,EDX
00728A4F  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_00728a52:
00728A52  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00728A55  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00728A58  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00728A5B  03 D0                     ADD EDX,EAX
00728A5D  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00728A60  46                        INC ESI
00728A61  03 F9                     ADD EDI,ECX
00728A63  3B F0                     CMP ESI,EAX
00728A65  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00728A68  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00728A6B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00728A6E  0F 8C AF FE FF FF         JL 0x00728923
LAB_00728a74:
00728A74  5F                        POP EDI
00728A75  5E                        POP ESI
00728A76  5B                        POP EBX
00728A77  8B E5                     MOV ESP,EBP
00728A79  5D                        POP EBP
00728A7A  C2 0C 00                  RET 0xc
