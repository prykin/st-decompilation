STMineSetC::GetMessage:
00621B50  55                        PUSH EBP
00621B51  8B EC                     MOV EBP,ESP
00621B53  83 EC 5C                  SUB ESP,0x5c
00621B56  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00621B59  53                        PUSH EBX
00621B5A  56                        PUSH ESI
00621B5B  57                        PUSH EDI
00621B5C  50                        PUSH EAX
00621B5D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00621B60  E8 A2 33 DE FF            CALL 0x00404f07
00621B65  3D FF FF 00 00            CMP EAX,0xffff
00621B6A  0F 84 26 08 00 00         JZ 0x00622396
00621B70  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00621B76  8D 45 A8                  LEA EAX,[EBP + -0x58]
00621B79  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00621B7C  6A 00                     PUSH 0x0
00621B7E  50                        PUSH EAX
00621B7F  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00621B82  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00621B88  E8 63 BC 10 00            CALL 0x0072d7f0
00621B8D  8B F0                     MOV ESI,EAX
00621B8F  83 C4 08                  ADD ESP,0x8
00621B92  85 F6                     TEST ESI,ESI
00621B94  0F 85 BD 07 00 00         JNZ 0x00622357
00621B9A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00621B9D  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
00621BA0  3D 10 01 00 00            CMP EAX,0x110
00621BA5  0F 87 FE 06 00 00         JA 0x006222a9
00621BAB  0F 84 DD 06 00 00         JZ 0x0062228e
00621BB1  BB 03 00 00 00            MOV EBX,0x3
00621BB6  3B C3                     CMP EAX,EBX
00621BB8  0F 87 58 06 00 00         JA 0x00622216
00621BBE  0F 84 09 06 00 00         JZ 0x006221cd
00621BC4  2B C6                     SUB EAX,ESI
00621BC6  0F 84 0B 03 00 00         JZ 0x00621ed7
00621BCC  83 E8 02                  SUB EAX,0x2
00621BCF  0F 85 6F 07 00 00         JNZ 0x00622344
00621BD5  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00621BD8  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
00621BDB  C7 83 19 02 00 00 3A 02 00 00  MOV dword ptr [EBX + 0x219],0x23a
00621BE5  C7 83 15 02 00 00 32 00 00 00  MOV dword ptr [EBX + 0x215],0x32
00621BEF  83 78 0C 02               CMP dword ptr [EAX + 0xc],0x2
00621BF3  0F 84 95 01 00 00         JZ 0x00621d8e
00621BF9  8B 72 14                  MOV ESI,dword ptr [EDX + 0x14]
00621BFC  B9 13 00 00 00            MOV ECX,0x13
00621C01  8D BB 5E 02 00 00         LEA EDI,[EBX + 0x25e]
00621C07  F3 A5                     MOVSD.REP ES:EDI,ESI
00621C09  66 A5                     MOVSW ES:EDI,ESI
00621C0B  A4                        MOVSB ES:EDI,ESI
00621C0C  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00621C0F  85 C9                     TEST ECX,ECX
00621C11  75 6C                     JNZ 0x00621c7f
00621C13  66 8B 8B 76 02 00 00      MOV CX,word ptr [EBX + 0x276]
00621C1A  66 69 C9 C9 00            IMUL CX,CX,0xc9
00621C1F  83 C1 64                  ADD ECX,0x64
00621C22  0F BF D1                  MOVSX EDX,CX
00621C25  89 93 76 02 00 00         MOV dword ptr [EBX + 0x276],EDX
00621C2B  66 8B 83 7A 02 00 00      MOV AX,word ptr [EBX + 0x27a]
00621C32  66 69 C0 C9 00            IMUL AX,AX,0xc9
00621C37  83 C0 64                  ADD EAX,0x64
00621C3A  0F BF C8                  MOVSX ECX,AX
00621C3D  89 8B 7A 02 00 00         MOV dword ptr [EBX + 0x27a],ECX
00621C43  66 8B 93 7E 02 00 00      MOV DX,word ptr [EBX + 0x27e]
00621C4A  66 69 D2 C8 00            IMUL DX,DX,0xc8
00621C4F  83 C2 64                  ADD EDX,0x64
00621C52  0F BF C2                  MOVSX EAX,DX
00621C55  89 83 7E 02 00 00         MOV dword ptr [EBX + 0x27e],EAX
00621C5B  8B 8B 76 02 00 00         MOV ECX,dword ptr [EBX + 0x276]
00621C61  89 8B 82 02 00 00         MOV dword ptr [EBX + 0x282],ECX
00621C67  8B 93 7A 02 00 00         MOV EDX,dword ptr [EBX + 0x27a]
00621C6D  89 93 86 02 00 00         MOV dword ptr [EBX + 0x286],EDX
00621C73  8B 83 7E 02 00 00         MOV EAX,dword ptr [EBX + 0x27e]
00621C79  89 83 8A 02 00 00         MOV dword ptr [EBX + 0x28a],EAX
LAB_00621c7f:
00621C7F  8B CB                     MOV ECX,EBX
00621C81  E8 EE 2E DE FF            CALL 0x00404b74
00621C86  85 C0                     TEST EAX,EAX
00621C88  75 1A                     JNZ 0x00621ca4
00621C8A  8B CB                     MOV ECX,EBX
00621C8C  E8 B6 24 DE FF            CALL 0x00404147
00621C91  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00621C94  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00621C99  33 C0                     XOR EAX,EAX
00621C9B  5F                        POP EDI
00621C9C  5E                        POP ESI
00621C9D  5B                        POP EBX
00621C9E  8B E5                     MOV ESP,EBP
00621CA0  5D                        POP EBP
00621CA1  C2 04 00                  RET 0x4
LAB_00621ca4:
00621CA4  8B 83 F6 02 00 00         MOV EAX,dword ptr [EBX + 0x2f6]
00621CAA  33 F6                     XOR ESI,ESI
00621CAC  85 C0                     TEST EAX,EAX
00621CAE  BF 01 00 00 00            MOV EDI,0x1
00621CB3  74 28                     JZ 0x00621cdd
00621CB5  0F BF 4B 3E               MOVSX ECX,word ptr [EBX + 0x3e]
00621CB9  0F BF 53 3C               MOVSX EDX,word ptr [EBX + 0x3c]
00621CBD  0F BF 43 3A               MOVSX EAX,word ptr [EBX + 0x3a]
00621CC1  51                        PUSH ECX
00621CC2  52                        PUSH EDX
00621CC3  50                        PUSH EAX
00621CC4  6A 02                     PUSH 0x2
00621CC6  8B CB                     MOV ECX,EBX
00621CC8  E8 A0 30 DE FF            CALL 0x00404d6d
00621CCD  85 C0                     TEST EAX,EAX
00621CCF  74 53                     JZ 0x00621d24
00621CD1  C7 83 EE 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x2ee],0x2
00621CDB  EB 3F                     JMP 0x00621d1c
LAB_00621cdd:
00621CDD  66 8B 4B 41               MOV CX,word ptr [EBX + 0x41]
00621CE1  66 8B 53 43               MOV DX,word ptr [EBX + 0x43]
00621CE5  66 8B 43 45               MOV AX,word ptr [EBX + 0x45]
00621CE9  66 89 4B 34               MOV word ptr [EBX + 0x34],CX
00621CED  8B 8B CA 02 00 00         MOV ECX,dword ptr [EBX + 0x2ca]
00621CF3  66 89 53 36               MOV word ptr [EBX + 0x36],DX
00621CF7  8B 93 C6 02 00 00         MOV EDX,dword ptr [EBX + 0x2c6]
00621CFD  66 89 43 38               MOV word ptr [EBX + 0x38],AX
00621D01  8B 83 C2 02 00 00         MOV EAX,dword ptr [EBX + 0x2c2]
00621D07  51                        PUSH ECX
00621D08  52                        PUSH EDX
00621D09  50                        PUSH EAX
00621D0A  57                        PUSH EDI
00621D0B  8B CB                     MOV ECX,EBX
00621D0D  E8 5B 30 DE FF            CALL 0x00404d6d
00621D12  85 C0                     TEST EAX,EAX
00621D14  74 0E                     JZ 0x00621d24
00621D16  89 BB EE 02 00 00         MOV dword ptr [EBX + 0x2ee],EDI
LAB_00621d1c:
00621D1C  89 BB AE 02 00 00         MOV dword ptr [EBX + 0x2ae],EDI
00621D22  8B F7                     MOV ESI,EDI
LAB_00621d24:
00621D24  85 F6                     TEST ESI,ESI
00621D26  75 1A                     JNZ 0x00621d42
00621D28  8B CB                     MOV ECX,EBX
00621D2A  E8 18 24 DE FF            CALL 0x00404147
00621D2F  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00621D32  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00621D37  33 C0                     XOR EAX,EAX
00621D39  5F                        POP EDI
00621D3A  5E                        POP ESI
00621D3B  5B                        POP EBX
00621D3C  8B E5                     MOV ESP,EBP
00621D3E  5D                        POP EBP
00621D3F  C2 04 00                  RET 0x4
LAB_00621d42:
00621D42  6A 00                     PUSH 0x0
00621D44  8B CB                     MOV ECX,EBX
00621D46  89 BB AE 02 00 00         MOV dword ptr [EBX + 0x2ae],EDI
00621D4C  C6 83 53 03 00 00 01      MOV byte ptr [EBX + 0x353],0x1
00621D53  E8 6E F5 DD FF            CALL 0x004012c6
00621D58  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00621D5E  53                        PUSH EBX
00621D5F  68 FF FF 00 00            PUSH 0xffff
00621D64  E8 4E 13 DE FF            CALL 0x004030b7
00621D69  85 C0                     TEST EAX,EAX
00621D6B  74 07                     JZ 0x00621d74
00621D6D  8B CB                     MOV ECX,EBX
00621D6F  E8 D3 23 DE FF            CALL 0x00404147
LAB_00621d74:
00621D74  8B CB                     MOV ECX,EBX
00621D76  E8 3C 0E DE FF            CALL 0x00402bb7
00621D7B  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00621D7E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00621D83  33 C0                     XOR EAX,EAX
00621D85  5F                        POP EDI
00621D86  5E                        POP ESI
00621D87  5B                        POP EBX
00621D88  8B E5                     MOV ESP,EBP
00621D8A  5D                        POP EBP
00621D8B  C2 04 00                  RET 0x4
LAB_00621d8e:
00621D8E  8B 4A 14                  MOV ECX,dword ptr [EDX + 0x14]
00621D91  51                        PUSH ECX
00621D92  8B CB                     MOV ECX,EBX
00621D94  E8 F8 FC DD FF            CALL 0x00401a91
00621D99  8A 83 13 03 00 00         MOV AL,byte ptr [EBX + 0x313]
00621D9F  84 C0                     TEST AL,AL
00621DA1  0F 84 C8 00 00 00         JZ 0x00621e6f
00621DA7  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
00621DAB  33 D2                     XOR EDX,EDX
00621DAD  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
00621DB4  8A 93 8E 00 00 00         MOV DL,byte ptr [EBX + 0x8e]
00621DBA  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
00621DBE  8B FA                     MOV EDI,EDX
00621DC0  0F BF 53 49               MOVSX EDX,word ptr [EBX + 0x49]
00621DC4  66 85 C0                  TEST AX,AX
00621DC7  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00621DCA  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00621DCD  7C 62                     JL 0x00621e31
00621DCF  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
00621DD6  7D 59                     JGE 0x00621e31
00621DD8  66 85 D2                  TEST DX,DX
00621DDB  7C 54                     JL 0x00621e31
00621DDD  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00621DE4  7D 4B                     JGE 0x00621e31
00621DE6  66 85 C9                  TEST CX,CX
00621DE9  7C 46                     JL 0x00621e31
00621DEB  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00621DF2  7D 3D                     JGE 0x00621e31
00621DF4  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
00621DFB  0F BF F9                  MOVSX EDI,CX
00621DFE  0F AF F7                  IMUL ESI,EDI
00621E01  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
00621E08  0F BF D2                  MOVSX EDX,DX
00621E0B  0F AF FA                  IMUL EDI,EDX
00621E0E  0F BF D0                  MOVSX EDX,AX
00621E11  03 F7                     ADD ESI,EDI
00621E13  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00621E16  03 F2                     ADD ESI,EDX
00621E18  8B D7                     MOV EDX,EDI
00621E1A  81 E2 FF 00 00 00         AND EDX,0xff
00621E20  8D 14 72                  LEA EDX,[EDX + ESI*0x2]
00621E23  8B 35 48 B2 7F 00         MOV ESI,dword ptr [0x007fb248]
00621E29  8B 34 96                  MOV ESI,dword ptr [ESI + EDX*0x4]
00621E2C  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00621E2F  EB 02                     JMP 0x00621e33
LAB_00621e31:
00621E31  33 F6                     XOR ESI,ESI
LAB_00621e33:
00621E33  85 F6                     TEST ESI,ESI
00621E35  75 2B                     JNZ 0x00621e62
00621E37  8B 73 18                  MOV ESI,dword ptr [EBX + 0x18]
00621E3A  56                        PUSH ESI
00621E3B  53                        PUSH EBX
00621E3C  57                        PUSH EDI
00621E3D  51                        PUSH ECX
00621E3E  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00621E44  52                        PUSH EDX
00621E45  50                        PUSH EAX
00621E46  E8 DA F4 DD FF            CALL 0x00401325
00621E4B  85 C0                     TEST EAX,EAX
00621E4D  75 13                     JNZ 0x00621e62
00621E4F  8A 83 14 03 00 00         MOV AL,byte ptr [EBX + 0x314]
00621E55  FE C0                     INC AL
00621E57  88 83 14 03 00 00         MOV byte ptr [EBX + 0x314],AL
00621E5D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00621E60  EB 02                     JMP 0x00621e64
LAB_00621e62:
00621E62  33 C0                     XOR EAX,EAX
LAB_00621e64:
00621E64  85 C0                     TEST EAX,EAX
00621E66  75 07                     JNZ 0x00621e6f
00621E68  8B CB                     MOV ECX,EBX
00621E6A  E8 D8 22 DE FF            CALL 0x00404147
LAB_00621e6f:
00621E6F  B9 0B 00 00 00            MOV ECX,0xb
00621E74  33 C0                     XOR EAX,EAX
00621E76  8D BB 31 02 00 00         LEA EDI,[EBX + 0x231]
00621E7C  F3 AB                     STOSD.REP ES:EDI
00621E7E  AA                        STOSB ES:EDI
00621E7F  8A 83 53 03 00 00         MOV AL,byte ptr [EBX + 0x353]
00621E85  84 C0                     TEST AL,AL
00621E87  74 11                     JZ 0x00621e9a
00621E89  8D 8B D5 01 00 00         LEA ECX,[EBX + 0x1d5]
00621E8F  E8 38 34 DE FF            CALL 0x004052cc
00621E94  89 83 BA 02 00 00         MOV dword ptr [EBX + 0x2ba],EAX
LAB_00621e9a:
00621E9A  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
00621E9E  C7 83 63 03 00 00 00 00 00 00  MOV dword ptr [EBX + 0x363],0x0
00621EA8  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00621EAE  53                        PUSH EBX
00621EAF  50                        PUSH EAX
00621EB0  E8 02 12 DE FF            CALL 0x004030b7
00621EB5  85 C0                     TEST EAX,EAX
00621EB7  0F 84 87 04 00 00         JZ 0x00622344
00621EBD  8B CB                     MOV ECX,EBX
00621EBF  E8 83 22 DE FF            CALL 0x00404147
00621EC4  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00621EC7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00621ECC  33 C0                     XOR EAX,EAX
00621ECE  5F                        POP EDI
00621ECF  5E                        POP ESI
00621ED0  5B                        POP EBX
00621ED1  8B E5                     MOV ESP,EBP
00621ED3  5D                        POP EBP
00621ED4  C2 04 00                  RET 0x4
LAB_00621ed7:
00621ED7  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00621EDA  38 9F AD 02 00 00         CMP byte ptr [EDI + 0x2ad],BL
00621EE0  75 23                     JNZ 0x00621f05
00621EE2  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00621EE8  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00621EEE  8B 8F 5F 03 00 00         MOV ECX,dword ptr [EDI + 0x35f]
00621EF4  2B D1                     SUB EDX,ECX
00621EF6  81 FA 94 11 00 00         CMP EDX,0x1194
00621EFC  76 07                     JBE 0x00621f05
00621EFE  8B CF                     MOV ECX,EDI
00621F00  E8 59 33 DE FF            CALL 0x0040525e
LAB_00621f05:
00621F05  8B CF                     MOV ECX,EDI
00621F07  E8 EE 3C DE FF            CALL 0x00405bfa
00621F0C  85 C0                     TEST EAX,EAX
00621F0E  0F 84 C9 01 00 00         JZ 0x006220dd
00621F14  8A 87 14 03 00 00         MOV AL,byte ptr [EDI + 0x314]
00621F1A  84 C0                     TEST AL,AL
00621F1C  75 27                     JNZ 0x00621f45
00621F1E  8B 87 AE 02 00 00         MOV EAX,dword ptr [EDI + 0x2ae]
00621F24  83 F8 02                  CMP EAX,0x2
00621F27  74 1C                     JZ 0x00621f45
00621F29  3B C3                     CMP EAX,EBX
00621F2B  74 18                     JZ 0x00621f45
00621F2D  83 F8 04                  CMP EAX,0x4
00621F30  74 13                     JZ 0x00621f45
00621F32  83 F8 05                  CMP EAX,0x5
00621F35  74 0E                     JZ 0x00621f45
00621F37  50                        PUSH EAX
00621F38  8B CF                     MOV ECX,EDI
00621F3A  E8 54 21 DE FF            CALL 0x00404093
00621F3F  89 87 AE 02 00 00         MOV dword ptr [EDI + 0x2ae],EAX
LAB_00621f45:
00621F45  8B 87 AE 02 00 00         MOV EAX,dword ptr [EDI + 0x2ae]
00621F4B  83 F8 02                  CMP EAX,0x2
00621F4E  0F 84 D2 01 00 00         JZ 0x00622126
00621F54  3B C3                     CMP EAX,EBX
00621F56  0F 84 CA 01 00 00         JZ 0x00622126
00621F5C  83 F8 04                  CMP EAX,0x4
00621F5F  0F 84 C1 01 00 00         JZ 0x00622126
00621F65  83 F8 05                  CMP EAX,0x5
00621F68  0F 84 B8 01 00 00         JZ 0x00622126
00621F6E  8A 87 53 03 00 00         MOV AL,byte ptr [EDI + 0x353]
00621F74  84 C0                     TEST AL,AL
00621F76  75 42                     JNZ 0x00621fba
00621F78  0F BF 47 4B               MOVSX EAX,word ptr [EDI + 0x4b]
00621F7C  0F BF 4F 49               MOVSX ECX,word ptr [EDI + 0x49]
00621F80  0F BF 57 47               MOVSX EDX,word ptr [EDI + 0x47]
00621F84  50                        PUSH EAX
00621F85  51                        PUSH ECX
00621F86  52                        PUSH EDX
00621F87  8B CF                     MOV ECX,EDI
00621F89  E8 A9 36 DE FF            CALL 0x00405637
00621F8E  84 C0                     TEST AL,AL
00621F90  88 87 53 03 00 00         MOV byte ptr [EDI + 0x353],AL
00621F96  74 6B                     JZ 0x00622003
00621F98  8B 87 BA 02 00 00         MOV EAX,dword ptr [EDI + 0x2ba]
00621F9E  85 C0                     TEST EAX,EAX
00621FA0  7D 61                     JGE 0x00622003
00621FA2  6A 00                     PUSH 0x0
00621FA4  8B CF                     MOV ECX,EDI
00621FA6  E8 1B F3 DD FF            CALL 0x004012c6
00621FAB  6A 01                     PUSH 0x1
00621FAD  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
00621FB3  E8 CA 09 DE FF            CALL 0x00402982
00621FB8  EB 49                     JMP 0x00622003
LAB_00621fba:
00621FBA  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00621FBF  84 98 E4 00 00 00         TEST byte ptr [EAX + 0xe4],BL
00621FC5  75 3C                     JNZ 0x00622003
00621FC7  0F BF 4F 4B               MOVSX ECX,word ptr [EDI + 0x4b]
00621FCB  0F BF 57 49               MOVSX EDX,word ptr [EDI + 0x49]
00621FCF  0F BF 47 47               MOVSX EAX,word ptr [EDI + 0x47]
00621FD3  51                        PUSH ECX
00621FD4  52                        PUSH EDX
00621FD5  50                        PUSH EAX
00621FD6  8B CF                     MOV ECX,EDI
00621FD8  E8 5A 36 DE FF            CALL 0x00405637
00621FDD  84 C0                     TEST AL,AL
00621FDF  88 87 53 03 00 00         MOV byte ptr [EDI + 0x353],AL
00621FE5  75 1C                     JNZ 0x00622003
00621FE7  8A 87 E9 02 00 00         MOV AL,byte ptr [EDI + 0x2e9]
00621FED  84 C0                     TEST AL,AL
00621FEF  74 12                     JZ 0x00622003
00621FF1  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
00621FF7  E8 13 1D DE FF            CALL 0x00403d0f
00621FFC  C6 87 E9 02 00 00 00      MOV byte ptr [EDI + 0x2e9],0x0
LAB_00622003:
00622003  66 8B 87 CA 02 00 00      MOV AX,word ptr [EDI + 0x2ca]
0062200A  66 8B 8F C2 02 00 00      MOV CX,word ptr [EDI + 0x2c2]
00622011  66 8B 97 C6 02 00 00      MOV DX,word ptr [EDI + 0x2c6]
00622018  66 89 47 45               MOV word ptr [EDI + 0x45],AX
0062201C  8A 87 53 03 00 00         MOV AL,byte ptr [EDI + 0x353]
00622022  66 89 4F 41               MOV word ptr [EDI + 0x41],CX
00622026  84 C0                     TEST AL,AL
00622028  66 89 57 43               MOV word ptr [EDI + 0x43],DX
0062202C  74 07                     JZ 0x00622035
0062202E  8B CF                     MOV ECX,EDI
00622030  E8 87 F2 DD FF            CALL 0x004012bc
LAB_00622035:
00622035  8A 87 AD 02 00 00         MOV AL,byte ptr [EDI + 0x2ad]
0062203B  84 C0                     TEST AL,AL
0062203D  74 0C                     JZ 0x0062204b
0062203F  3C 01                     CMP AL,0x1
00622041  74 08                     JZ 0x0062204b
00622043  3C 02                     CMP AL,0x2
00622045  0F 85 DB 00 00 00         JNZ 0x00622126
LAB_0062204b:
0062204B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00622051  33 D2                     XOR EDX,EDX
00622053  BE 05 00 00 00            MOV ESI,0x5
00622058  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
0062205E  8B C1                     MOV EAX,ECX
00622060  F7 F6                     DIV ESI
00622062  85 D2                     TEST EDX,EDX
00622064  0F 85 BC 00 00 00         JNZ 0x00622126
0062206A  2B 8F 46 03 00 00         SUB ECX,dword ptr [EDI + 0x346]
00622070  83 F9 19                  CMP ECX,0x19
00622073  0F 86 AD 00 00 00         JBE 0x00622126
00622079  8B 87 AE 02 00 00         MOV EAX,dword ptr [EDI + 0x2ae]
0062207F  85 C0                     TEST EAX,EAX
00622081  74 09                     JZ 0x0062208c
00622083  83 F8 01                  CMP EAX,0x1
00622086  0F 85 9A 00 00 00         JNZ 0x00622126
LAB_0062208c:
0062208C  8B 97 CA 02 00 00         MOV EDX,dword ptr [EDI + 0x2ca]
00622092  8B 87 C6 02 00 00         MOV EAX,dword ptr [EDI + 0x2c6]
00622098  8B 8F C2 02 00 00         MOV ECX,dword ptr [EDI + 0x2c2]
0062209E  6A 00                     PUSH 0x0
006220A0  52                        PUSH EDX
006220A1  50                        PUSH EAX
006220A2  51                        PUSH ECX
006220A3  8B CF                     MOV ECX,EDI
006220A5  E8 B4 3B DE FF            CALL 0x00405c5e
006220AA  85 C0                     TEST EAX,EAX
006220AC  74 78                     JZ 0x00622126
006220AE  33 D2                     XOR EDX,EDX
006220B0  C7 87 AE 02 00 00 02 00 00 00  MOV dword ptr [EDI + 0x2ae],0x2
006220BA  8A 97 AD 02 00 00         MOV DL,byte ptr [EDI + 0x2ad]
006220C0  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006220C6  8B 04 95 A4 02 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d02a4]
006220CD  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
006220D3  03 C2                     ADD EAX,EDX
006220D5  89 87 0F 03 00 00         MOV dword ptr [EDI + 0x30f],EAX
006220DB  EB 49                     JMP 0x00622126
LAB_006220dd:
006220DD  83 BF AE 02 00 00 02      CMP dword ptr [EDI + 0x2ae],0x2
006220E4  75 40                     JNZ 0x00622126
006220E6  8A 87 53 03 00 00         MOV AL,byte ptr [EDI + 0x353]
006220EC  84 C0                     TEST AL,AL
006220EE  75 36                     JNZ 0x00622126
006220F0  0F BF 57 4B               MOVSX EDX,word ptr [EDI + 0x4b]
006220F4  0F BF 47 49               MOVSX EAX,word ptr [EDI + 0x49]
006220F8  0F BF 4F 47               MOVSX ECX,word ptr [EDI + 0x47]
006220FC  52                        PUSH EDX
006220FD  50                        PUSH EAX
006220FE  51                        PUSH ECX
006220FF  8B CF                     MOV ECX,EDI
00622101  E8 31 35 DE FF            CALL 0x00405637
00622106  84 C0                     TEST AL,AL
00622108  88 87 53 03 00 00         MOV byte ptr [EDI + 0x353],AL
0062210E  74 16                     JZ 0x00622126
00622110  6A 00                     PUSH 0x0
00622112  8B CF                     MOV ECX,EDI
00622114  E8 AD F1 DD FF            CALL 0x004012c6
00622119  6A 01                     PUSH 0x1
0062211B  8D 8F D5 01 00 00         LEA ECX,[EDI + 0x1d5]
00622121  E8 5C 08 DE FF            CALL 0x00402982
LAB_00622126:
00622126  8B 87 55 03 00 00         MOV EAX,dword ptr [EDI + 0x355]
0062212C  85 C0                     TEST EAX,EAX
0062212E  75 3E                     JNZ 0x0062216e
00622130  8B 87 AE 02 00 00         MOV EAX,dword ptr [EDI + 0x2ae]
00622136  83 F8 02                  CMP EAX,0x2
00622139  74 33                     JZ 0x0062216e
0062213B  83 F8 04                  CMP EAX,0x4
0062213E  74 2E                     JZ 0x0062216e
00622140  66 8B 57 47               MOV DX,word ptr [EDI + 0x47]
00622144  66 69 D2 C9 00            IMUL DX,DX,0xc9
00622149  83 C2 64                  ADD EDX,0x64
0062214C  66 3B 57 41               CMP DX,word ptr [EDI + 0x41]
00622150  75 1C                     JNZ 0x0062216e
00622152  66 8B 47 49               MOV AX,word ptr [EDI + 0x49]
00622156  66 69 C0 C9 00            IMUL AX,AX,0xc9
0062215B  83 C0 64                  ADD EAX,0x64
0062215E  66 3B 47 43               CMP AX,word ptr [EDI + 0x43]
00622162  75 0A                     JNZ 0x0062216e
00622164  C7 87 55 03 00 00 01 00 00 00  MOV dword ptr [EDI + 0x355],0x1
LAB_0062216e:
0062216E  8B 8F 63 03 00 00         MOV ECX,dword ptr [EDI + 0x363]
00622174  85 C9                     TEST ECX,ECX
00622176  74 2D                     JZ 0x006221a5
00622178  E8 CF 1A DE FF            CALL 0x00403c4c
0062217D  85 C0                     TEST EAX,EAX
0062217F  74 24                     JZ 0x006221a5
00622181  8B 8F 63 03 00 00         MOV ECX,dword ptr [EDI + 0x363]
00622187  E8 B4 F9 DD FF            CALL 0x00401b40
0062218C  8B 8F 63 03 00 00         MOV ECX,dword ptr [EDI + 0x363]
00622192  51                        PUSH ECX
00622193  E8 18 C1 10 00            CALL 0x0072e2b0
00622198  83 C4 04                  ADD ESP,0x4
0062219B  C7 87 63 03 00 00 00 00 00 00  MOV dword ptr [EDI + 0x363],0x0
LAB_006221a5:
006221A5  8A 87 59 03 00 00         MOV AL,byte ptr [EDI + 0x359]
006221AB  84 C0                     TEST AL,AL
006221AD  0F 84 91 01 00 00         JZ 0x00622344
006221B3  8B CF                     MOV ECX,EDI
006221B5  E8 12 FA DD FF            CALL 0x00401bcc
006221BA  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006221BD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006221C2  33 C0                     XOR EAX,EAX
006221C4  5F                        POP EDI
006221C5  5E                        POP ESI
006221C6  5B                        POP EBX
006221C7  8B E5                     MOV ESP,EBP
006221C9  5D                        POP EBP
006221CA  C2 04 00                  RET 0x4
LAB_006221cd:
006221CD  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006221D0  8B CE                     MOV ECX,ESI
006221D2  E8 9D 01 DE FF            CALL 0x00402374
006221D7  8B 8E 63 03 00 00         MOV ECX,dword ptr [ESI + 0x363]
006221DD  85 C9                     TEST ECX,ECX
006221DF  0F 84 5F 01 00 00         JZ 0x00622344
006221E5  E8 56 F9 DD FF            CALL 0x00401b40
006221EA  8B 96 63 03 00 00         MOV EDX,dword ptr [ESI + 0x363]
006221F0  52                        PUSH EDX
006221F1  E8 BA C0 10 00            CALL 0x0072e2b0
006221F6  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006221F9  C7 86 63 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x363],0x0
00622203  83 C4 04                  ADD ESP,0x4
00622206  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062220B  33 C0                     XOR EAX,EAX
0062220D  5F                        POP EDI
0062220E  5E                        POP ESI
0062220F  5B                        POP EBX
00622210  8B E5                     MOV ESP,EBP
00622212  5D                        POP EBP
00622213  C2 04 00                  RET 0x4
LAB_00622216:
00622216  2D 08 01 00 00            SUB EAX,0x108
0062221B  74 4A                     JZ 0x00622267
0062221D  83 E8 07                  SUB EAX,0x7
00622220  0F 85 1E 01 00 00         JNZ 0x00622344
00622226  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00622229  8D 45 F8                  LEA EAX,[EBP + -0x8]
0062222C  50                        PUSH EAX
0062222D  8B CE                     MOV ECX,ESI
0062222F  E8 F1 F5 DD FF            CALL 0x00401825
00622234  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00622237  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0062223A  51                        PUSH ECX
0062223B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00622241  50                        PUSH EAX
00622242  52                        PUSH EDX
00622243  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00622246  E8 AE 03 DE FF            CALL 0x004025f9
0062224B  8D 45 F4                  LEA EAX,[EBP + -0xc]
0062224E  50                        PUSH EAX
0062224F  E8 0C 8E 08 00            CALL 0x006ab060
00622254  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00622257  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062225C  33 C0                     XOR EAX,EAX
0062225E  5F                        POP EDI
0062225F  5E                        POP ESI
00622260  5B                        POP EBX
00622261  8B E5                     MOV ESP,EBP
00622263  5D                        POP EBP
00622264  C2 04 00                  RET 0x4
LAB_00622267:
00622267  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0062226D  E8 AA 35 DE FF            CALL 0x0040581c
00622272  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00622275  50                        PUSH EAX
00622276  E8 99 01 DE FF            CALL 0x00402414
0062227B  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0062227E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00622283  33 C0                     XOR EAX,EAX
00622285  5F                        POP EDI
00622286  5E                        POP ESI
00622287  5B                        POP EBX
00622288  8B E5                     MOV ESP,EBP
0062228A  5D                        POP EBP
0062228B  C2 04 00                  RET 0x4
LAB_0062228e:
0062228E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00622291  E8 C8 2F DE FF            CALL 0x0040525e
00622296  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00622299  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062229E  33 C0                     XOR EAX,EAX
006222A0  5F                        POP EDI
006222A1  5E                        POP ESI
006222A2  5B                        POP EBX
006222A3  8B E5                     MOV ESP,EBP
006222A5  5D                        POP EBP
006222A6  C2 04 00                  RET 0x4
LAB_006222a9:
006222A9  3D 28 01 00 00            CMP EAX,0x128
006222AE  0F 87 90 00 00 00         JA 0x00622344
006222B4  74 79                     JZ 0x0062232f
006222B6  2D 12 01 00 00            SUB EAX,0x112
006222BB  74 3E                     JZ 0x006222fb
006222BD  48                        DEC EAX
006222BE  0F 85 80 00 00 00         JNZ 0x00622344
006222C4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006222C7  8B 88 BA 02 00 00         MOV ECX,dword ptr [EAX + 0x2ba]
006222CD  85 C9                     TEST ECX,ECX
006222CF  7C 73                     JL 0x00622344
006222D1  83 B8 AE 02 00 00 01      CMP dword ptr [EAX + 0x2ae],0x1
006222D8  75 6A                     JNZ 0x00622344
006222DA  8B 90 D5 01 00 00         MOV EDX,dword ptr [EAX + 0x1d5]
006222E0  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
006222E6  FF 12                     CALL dword ptr [EDX]
006222E8  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006222EB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006222F0  33 C0                     XOR EAX,EAX
006222F2  5F                        POP EDI
006222F3  5E                        POP ESI
006222F4  5B                        POP EBX
006222F5  8B E5                     MOV ESP,EBP
006222F7  5D                        POP EBP
006222F8  C2 04 00                  RET 0x4
LAB_006222fb:
006222FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006222FE  8B 88 BA 02 00 00         MOV ECX,dword ptr [EAX + 0x2ba]
00622304  85 C9                     TEST ECX,ECX
00622306  7C 3C                     JL 0x00622344
00622308  83 B8 AE 02 00 00 01      CMP dword ptr [EAX + 0x2ae],0x1
0062230F  75 33                     JNZ 0x00622344
00622311  8D 88 D5 01 00 00         LEA ECX,[EAX + 0x1d5]
00622317  E8 74 07 DE FF            CALL 0x00402a90
0062231C  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0062231F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00622324  33 C0                     XOR EAX,EAX
00622326  5F                        POP EDI
00622327  5E                        POP ESI
00622328  5B                        POP EBX
00622329  8B E5                     MOV ESP,EBP
0062232B  5D                        POP EBP
0062232C  C2 04 00                  RET 0x4
LAB_0062232f:
0062232F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00622332  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
00622338  E8 D2 19 DE FF            CALL 0x00403d0f
0062233D  8B CE                     MOV ECX,ESI
0062233F  E8 03 1E DE FF            CALL 0x00404147
LAB_00622344:
00622344  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
00622347  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0062234C  33 C0                     XOR EAX,EAX
0062234E  5F                        POP EDI
0062234F  5E                        POP ESI
00622350  5B                        POP EBX
00622351  8B E5                     MOV ESP,EBP
00622353  5D                        POP EBP
00622354  C2 04 00                  RET 0x4
LAB_00622357:
00622357  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0062235A  68 D8 06 7D 00            PUSH 0x7d06d8
0062235F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00622364  56                        PUSH ESI
00622365  6A 00                     PUSH 0x0
00622367  68 74 01 00 00            PUSH 0x174
0062236C  68 B0 06 7D 00            PUSH 0x7d06b0
00622371  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00622377  E8 54 B1 08 00            CALL 0x006ad4d0
0062237C  83 C4 18                  ADD ESP,0x18
0062237F  85 C0                     TEST EAX,EAX
00622381  74 01                     JZ 0x00622384
00622383  CC                        INT3
LAB_00622384:
00622384  68 76 01 00 00            PUSH 0x176
00622389  68 B0 06 7D 00            PUSH 0x7d06b0
0062238E  6A 00                     PUSH 0x0
00622390  56                        PUSH ESI
00622391  E8 AA 3A 08 00            CALL 0x006a5e40
LAB_00622396:
00622396  5F                        POP EDI
00622397  5E                        POP ESI
00622398  B8 FF FF 00 00            MOV EAX,0xffff
0062239D  5B                        POP EBX
0062239E  8B E5                     MOV ESP,EBP
006223A0  5D                        POP EBP
006223A1  C2 04 00                  RET 0x4
