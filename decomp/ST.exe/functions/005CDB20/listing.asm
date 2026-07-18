FUN_005cdb20:
005CDB20  55                        PUSH EBP
005CDB21  8B EC                     MOV EBP,ESP
005CDB23  81 EC 60 01 00 00         SUB ESP,0x160
005CDB29  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005CDB2E  53                        PUSH EBX
005CDB2F  56                        PUSH ESI
005CDB30  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005CDB33  57                        PUSH EDI
005CDB34  8D 55 B8                  LEA EDX,[EBP + -0x48]
005CDB37  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005CDB3A  6A 00                     PUSH 0x0
005CDB3C  52                        PUSH EDX
005CDB3D  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005CDB44  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005CDB47  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CDB4D  E8 9E FC 15 00            CALL 0x0072d7f0
005CDB52  8B F0                     MOV ESI,EAX
005CDB54  83 C4 08                  ADD ESP,0x8
005CDB57  85 F6                     TEST ESI,ESI
005CDB59  0F 85 CD 02 00 00         JNZ 0x005cde2c
005CDB5F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005CDB62  85 C0                     TEST EAX,EAX
005CDB64  0F 84 60 01 00 00         JZ 0x005cdcca
005CDB6A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CDB6D  33 C9                     XOR ECX,ECX
005CDB6F  8B B0 84 1F 00 00         MOV ESI,dword ptr [EAX + 0x1f84]
005CDB75  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005CDB78  85 FF                     TEST EDI,EDI
005CDB7A  76 46                     JBE 0x005cdbc2
005CDB7C  8B 15 7F 87 80 00         MOV EDX,dword ptr [0x0080877f]
005CDB82  3B CF                     CMP ECX,EDI
005CDB84  73 0D                     JNC 0x005cdb93
LAB_005cdb86:
005CDB86  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005CDB89  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
005CDB8C  0F AF C1                  IMUL EAX,ECX
005CDB8F  03 C3                     ADD EAX,EBX
005CDB91  EB 02                     JMP 0x005cdb95
LAB_005cdb93:
005CDB93  33 C0                     XOR EAX,EAX
LAB_005cdb95:
005CDB95  85 C0                     TEST EAX,EAX
005CDB97  74 1B                     JZ 0x005cdbb4
005CDB99  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
005CDB9F  3A 58 02                  CMP BL,byte ptr [EAX + 0x2]
005CDBA2  75 10                     JNZ 0x005cdbb4
005CDBA4  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
005CDBAA  3A 58 03                  CMP BL,byte ptr [EAX + 0x3]
005CDBAD  75 05                     JNZ 0x005cdbb4
005CDBAF  39 50 06                  CMP dword ptr [EAX + 0x6],EDX
005CDBB2  74 07                     JZ 0x005cdbbb
LAB_005cdbb4:
005CDBB4  41                        INC ECX
005CDBB5  3B CF                     CMP ECX,EDI
005CDBB7  72 CD                     JC 0x005cdb86
005CDBB9  EB 07                     JMP 0x005cdbc2
LAB_005cdbbb:
005CDBBB  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_005cdbc2:
005CDBC2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005CDBC5  85 C0                     TEST EAX,EAX
005CDBC7  0F 84 4D 02 00 00         JZ 0x005cde1a
005CDBCD  33 C9                     XOR ECX,ECX
005CDBCF  85 FF                     TEST EDI,EDI
005CDBD1  0F 86 43 02 00 00         JBE 0x005cde1a
005CDBD7  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
005CDBDD  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
005CDBE3  3B CF                     CMP ECX,EDI
005CDBE5  73 0B                     JNC 0x005cdbf2
LAB_005cdbe7:
005CDBE7  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005CDBEA  0F AF C1                  IMUL EAX,ECX
005CDBED  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
005CDBF0  EB 02                     JMP 0x005cdbf4
LAB_005cdbf2:
005CDBF2  33 C0                     XOR EAX,EAX
LAB_005cdbf4:
005CDBF4  85 C0                     TEST EAX,EAX
005CDBF6  74 0A                     JZ 0x005cdc02
005CDBF8  3A 50 02                  CMP DL,byte ptr [EAX + 0x2]
005CDBFB  75 05                     JNZ 0x005cdc02
005CDBFD  3A 58 03                  CMP BL,byte ptr [EAX + 0x3]
005CDC00  74 17                     JZ 0x005cdc19
LAB_005cdc02:
005CDC02  41                        INC ECX
005CDC03  3B CF                     CMP ECX,EDI
005CDC05  72 E0                     JC 0x005cdbe7
005CDC07  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005CDC0A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CDC10  5F                        POP EDI
005CDC11  5E                        POP ESI
005CDC12  5B                        POP EBX
005CDC13  8B E5                     MOV ESP,EBP
005CDC15  5D                        POP EBP
005CDC16  C2 04 00                  RET 0x4
LAB_005cdc19:
005CDC19  8A 1D 4F 87 80 00         MOV BL,byte ptr [0x0080874f]
005CDC1F  A0 A0 67 80 00            MOV AL,[0x008067a0]
005CDC24  89 8D A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],ECX
005CDC2A  33 C9                     XOR ECX,ECX
005CDC2C  84 DB                     TEST BL,BL
005CDC2E  0F 95 C1                  SETNZ CL
005CDC31  83 C1 02                  ADD ECX,0x2
005CDC34  C7 85 A4 FE FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffea4],0x3
005CDC3E  84 C0                     TEST AL,AL
005CDC40  89 8D A8 FE FF FF         MOV dword ptr [EBP + 0xfffffea8],ECX
005CDC46  BF 1D 7E 80 00            MOV EDI,0x807e1d
005CDC4B  75 05                     JNZ 0x005cdc52
005CDC4D  BF DD 7D 80 00            MOV EDI,0x807ddd
LAB_005cdc52:
005CDC52  83 C9 FF                  OR ECX,0xffffffff
005CDC55  33 C0                     XOR EAX,EAX
005CDC57  F2 AE                     SCASB.REPNE ES:EDI
005CDC59  F7 D1                     NOT ECX
005CDC5B  2B F9                     SUB EDI,ECX
005CDC5D  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
005CDC63  8B C1                     MOV EAX,ECX
005CDC65  8B F7                     MOV ESI,EDI
005CDC67  8B FA                     MOV EDI,EDX
005CDC69  6A 01                     PUSH 0x1
005CDC6B  C1 E9 02                  SHR ECX,0x2
005CDC6E  F3 A5                     MOVSD.REP ES:EDI,ESI
005CDC70  8B C8                     MOV ECX,EAX
005CDC72  83 E1 03                  AND ECX,0x3
005CDC75  F3 A4                     MOVSB.REP ES:EDI,ESI
005CDC77  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CDC7D  51                        PUSH ECX
005CDC7E  E8 7D 88 0E 00            CALL 0x006b6500
005CDC83  A1 64 17 81 00            MOV EAX,[0x00811764]
005CDC88  6A FF                     PUSH -0x1
005CDC8A  6A 01                     PUSH 0x1
005CDC8C  8D 95 A0 FE FF FF         LEA EDX,[EBP + 0xfffffea0]
005CDC92  68 14 01 00 00            PUSH 0x114
005CDC97  52                        PUSH EDX
005CDC98  6A 28                     PUSH 0x28
005CDC9A  6A 01                     PUSH 0x1
005CDC9C  50                        PUSH EAX
005CDC9D  E8 BE 76 14 00            CALL 0x00715360
005CDCA2  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
005CDCA8  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CDCAE  83 C4 1C                  ADD ESP,0x1c
005CDCB1  51                        PUSH ECX
005CDCB2  52                        PUSH EDX
005CDCB3  E8 48 88 0E 00            CALL 0x006b6500
005CDCB8  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005CDCBB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CDCC1  5F                        POP EDI
005CDCC2  5E                        POP ESI
005CDCC3  5B                        POP EBX
005CDCC4  8B E5                     MOV ESP,EBP
005CDCC6  5D                        POP EBP
005CDCC7  C2 04 00                  RET 0x4
LAB_005cdcca:
005CDCCA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CDCCD  8A 88 44 22 00 00         MOV CL,byte ptr [EAX + 0x2244]
005CDCD3  84 C9                     TEST CL,CL
005CDCD5  0F 84 3F 01 00 00         JZ 0x005cde1a
005CDCDB  8B 90 84 1F 00 00         MOV EDX,dword ptr [EAX + 0x1f84]
005CDCE1  32 DB                     XOR BL,BL
005CDCE3  33 C9                     XOR ECX,ECX
005CDCE5  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005CDCE8  85 F6                     TEST ESI,ESI
005CDCEA  76 3B                     JBE 0x005cdd27
005CDCEC  8B 3D 7F 87 80 00         MOV EDI,dword ptr [0x0080877f]
005CDCF2  3B CE                     CMP ECX,ESI
005CDCF4  73 0B                     JNC 0x005cdd01
LAB_005cdcf6:
005CDCF6  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005CDCF9  0F AF C1                  IMUL EAX,ECX
005CDCFC  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
005CDCFF  EB 02                     JMP 0x005cdd03
LAB_005cdd01:
005CDD01  33 C0                     XOR EAX,EAX
LAB_005cdd03:
005CDD03  85 C0                     TEST EAX,EAX
005CDD05  74 12                     JZ 0x005cdd19
005CDD07  39 78 06                  CMP dword ptr [EAX + 0x6],EDI
005CDD0A  74 14                     JZ 0x005cdd20
005CDD0C  80 38 00                  CMP byte ptr [EAX],0x0
005CDD0F  74 08                     JZ 0x005cdd19
005CDD11  80 78 04 01               CMP byte ptr [EAX + 0x4],0x1
005CDD15  75 02                     JNZ 0x005cdd19
005CDD17  FE C3                     INC BL
LAB_005cdd19:
005CDD19  41                        INC ECX
005CDD1A  3B CE                     CMP ECX,ESI
005CDD1C  72 D8                     JC 0x005cdcf6
005CDD1E  EB 07                     JMP 0x005cdd27
LAB_005cdd20:
005CDD20  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_005cdd27:
005CDD27  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005CDD2A  85 C0                     TEST EAX,EAX
005CDD2C  0F 84 E8 00 00 00         JZ 0x005cde1a
005CDD32  84 DB                     TEST BL,BL
005CDD34  0F 84 E0 00 00 00         JZ 0x005cde1a
005CDD3A  33 C9                     XOR ECX,ECX
005CDD3C  85 F6                     TEST ESI,ESI
005CDD3E  0F 86 D6 00 00 00         JBE 0x005cde1a
005CDD44  3B CE                     CMP ECX,ESI
005CDD46  73 0D                     JNC 0x005cdd55
LAB_005cdd48:
005CDD48  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005CDD4B  8B 7A 1C                  MOV EDI,dword ptr [EDX + 0x1c]
005CDD4E  0F AF C1                  IMUL EAX,ECX
005CDD51  03 C7                     ADD EAX,EDI
005CDD53  EB 02                     JMP 0x005cdd57
LAB_005cdd55:
005CDD55  33 C0                     XOR EAX,EAX
LAB_005cdd57:
005CDD57  85 C0                     TEST EAX,EAX
005CDD59  74 0B                     JZ 0x005cdd66
005CDD5B  80 38 00                  CMP byte ptr [EAX],0x0
005CDD5E  74 06                     JZ 0x005cdd66
005CDD60  80 78 04 01               CMP byte ptr [EAX + 0x4],0x1
005CDD64  74 17                     JZ 0x005cdd7d
LAB_005cdd66:
005CDD66  41                        INC ECX
005CDD67  3B CE                     CMP ECX,ESI
005CDD69  72 DD                     JC 0x005cdd48
005CDD6B  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005CDD6E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CDD74  5F                        POP EDI
005CDD75  5E                        POP ESI
005CDD76  5B                        POP EBX
005CDD77  8B E5                     MOV ESP,EBP
005CDD79  5D                        POP EBP
005CDD7A  C2 04 00                  RET 0x4
LAB_005cdd7d:
005CDD7D  A0 A0 67 80 00            MOV AL,[0x008067a0]
005CDD82  89 8D A0 FE FF FF         MOV dword ptr [EBP + 0xfffffea0],ECX
005CDD88  84 C0                     TEST AL,AL
005CDD8A  C7 85 A4 FE FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffea4],0x3
005CDD94  C7 85 A8 FE FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffea8],0x2
005CDD9E  BF 1D 7E 80 00            MOV EDI,0x807e1d
005CDDA3  75 05                     JNZ 0x005cddaa
005CDDA5  BF DD 7D 80 00            MOV EDI,0x807ddd
LAB_005cddaa:
005CDDAA  83 C9 FF                  OR ECX,0xffffffff
005CDDAD  33 C0                     XOR EAX,EAX
005CDDAF  F2 AE                     SCASB.REPNE ES:EDI
005CDDB1  F7 D1                     NOT ECX
005CDDB3  2B F9                     SUB EDI,ECX
005CDDB5  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
005CDDBB  8B C1                     MOV EAX,ECX
005CDDBD  8B F7                     MOV ESI,EDI
005CDDBF  8B FA                     MOV EDI,EDX
005CDDC1  6A 01                     PUSH 0x1
005CDDC3  C1 E9 02                  SHR ECX,0x2
005CDDC6  F3 A5                     MOVSD.REP ES:EDI,ESI
005CDDC8  8B C8                     MOV ECX,EAX
005CDDCA  83 E1 03                  AND ECX,0x3
005CDDCD  F3 A4                     MOVSB.REP ES:EDI,ESI
005CDDCF  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005CDDD5  51                        PUSH ECX
005CDDD6  E8 25 87 0E 00            CALL 0x006b6500
005CDDDB  A1 64 17 81 00            MOV EAX,[0x00811764]
005CDDE0  6A FF                     PUSH -0x1
005CDDE2  6A 01                     PUSH 0x1
005CDDE4  8D 95 A0 FE FF FF         LEA EDX,[EBP + 0xfffffea0]
005CDDEA  68 14 01 00 00            PUSH 0x114
005CDDEF  52                        PUSH EDX
005CDDF0  6A 28                     PUSH 0x28
005CDDF2  6A 01                     PUSH 0x1
005CDDF4  50                        PUSH EAX
005CDDF5  E8 66 75 14 00            CALL 0x00715360
005CDDFA  8B 0D 3C 73 80 00         MOV ECX,dword ptr [0x0080733c]
005CDE00  8B 15 64 17 81 00         MOV EDX,dword ptr [0x00811764]
005CDE06  83 C4 1C                  ADD ESP,0x1c
005CDE09  51                        PUSH ECX
005CDE0A  52                        PUSH EDX
005CDE0B  E8 F0 86 0E 00            CALL 0x006b6500
005CDE10  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005CDE13  C6 80 44 22 00 00 00      MOV byte ptr [EAX + 0x2244],0x0
LAB_005cde1a:
005CDE1A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005CDE1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005CDE23  5F                        POP EDI
005CDE24  5E                        POP ESI
005CDE25  5B                        POP EBX
005CDE26  8B E5                     MOV ESP,EBP
005CDE28  5D                        POP EBP
005CDE29  C2 04 00                  RET 0x4
LAB_005cde2c:
005CDE2C  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005CDE2F  68 48 D3 7C 00            PUSH 0x7cd348
005CDE34  68 CC 4C 7A 00            PUSH 0x7a4ccc
005CDE39  56                        PUSH ESI
005CDE3A  6A 00                     PUSH 0x0
005CDE3C  68 1B 02 00 00            PUSH 0x21b
005CDE41  68 58 D2 7C 00            PUSH 0x7cd258
005CDE46  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005CDE4C  E8 7F F6 0D 00            CALL 0x006ad4d0
005CDE51  83 C4 18                  ADD ESP,0x18
005CDE54  85 C0                     TEST EAX,EAX
005CDE56  74 01                     JZ 0x005cde59
005CDE58  CC                        INT3
LAB_005cde59:
005CDE59  68 1B 02 00 00            PUSH 0x21b
005CDE5E  68 58 D2 7C 00            PUSH 0x7cd258
005CDE63  6A 00                     PUSH 0x0
005CDE65  56                        PUSH ESI
005CDE66  E8 D5 7F 0D 00            CALL 0x006a5e40
005CDE6B  5F                        POP EDI
005CDE6C  5E                        POP ESI
005CDE6D  5B                        POP EBX
005CDE6E  8B E5                     MOV ESP,EBP
005CDE70  5D                        POP EBP
005CDE71  C2 04 00                  RET 0x4
