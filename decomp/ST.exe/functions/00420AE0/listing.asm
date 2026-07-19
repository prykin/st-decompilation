STSprGameObjC::LoadLifeFrame:
00420AE0  55                        PUSH EBP
00420AE1  8B EC                     MOV EBP,ESP
00420AE3  83 EC 34                  SUB ESP,0x34
00420AE6  53                        PUSH EBX
00420AE7  56                        PUSH ESI
00420AE8  8B D9                     MOV EBX,ECX
00420AEA  57                        PUSH EDI
00420AEB  BF 4C 50 7A 00            MOV EDI,0x7a504c
00420AF0  83 C9 FF                  OR ECX,0xffffffff
00420AF3  33 C0                     XOR EAX,EAX
00420AF5  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420AF8  F2 AE                     SCASB.REPNE ES:EDI
00420AFA  F7 D1                     NOT ECX
00420AFC  2B F9                     SUB EDI,ECX
00420AFE  C6 45 E0 00               MOV byte ptr [EBP + -0x20],0x0
00420B02  8B F7                     MOV ESI,EDI
00420B04  8B FA                     MOV EDI,EDX
00420B06  8B D1                     MOV EDX,ECX
00420B08  83 C9 FF                  OR ECX,0xffffffff
00420B0B  F2 AE                     SCASB.REPNE ES:EDI
00420B0D  8B CA                     MOV ECX,EDX
00420B0F  4F                        DEC EDI
00420B10  C1 E9 02                  SHR ECX,0x2
00420B13  F3 A5                     MOVSD.REP ES:EDI,ESI
00420B15  8B CA                     MOV ECX,EDX
00420B17  8D 55 CC                  LEA EDX,[EBP + -0x34]
00420B1A  83 E1 03                  AND ECX,0x3
00420B1D  C6 45 CC 00               MOV byte ptr [EBP + -0x34],0x0
00420B21  F3 A4                     MOVSB.REP ES:EDI,ESI
00420B23  BF 44 50 7A 00            MOV EDI,0x7a5044
00420B28  83 C9 FF                  OR ECX,0xffffffff
00420B2B  F2 AE                     SCASB.REPNE ES:EDI
00420B2D  F7 D1                     NOT ECX
00420B2F  2B F9                     SUB EDI,ECX
00420B31  6A 0A                     PUSH 0xa
00420B33  8B F7                     MOV ESI,EDI
00420B35  8B FA                     MOV EDI,EDX
00420B37  8B D1                     MOV EDX,ECX
00420B39  83 C9 FF                  OR ECX,0xffffffff
00420B3C  F2 AE                     SCASB.REPNE ES:EDI
00420B3E  8B CA                     MOV ECX,EDX
00420B40  4F                        DEC EDI
00420B41  C1 E9 02                  SHR ECX,0x2
00420B44  F3 A5                     MOVSD.REP ES:EDI,ESI
00420B46  8B CA                     MOV ECX,EDX
00420B48  8D 45 F4                  LEA EAX,[EBP + -0xc]
00420B4B  83 E1 03                  AND ECX,0x3
00420B4E  50                        PUSH EAX
00420B4F  F3 A4                     MOVSB.REP ES:EDI,ESI
00420B51  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
00420B57  E8 DD 07 FE FF            CALL 0x00401339
00420B5C  25 FF 00 00 00            AND EAX,0xff
00420B61  50                        PUSH EAX
00420B62  E8 F9 D2 30 00            CALL 0x0072de60
00420B67  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00420B6A  83 C4 0C                  ADD ESP,0xc
00420B6D  83 F8 14                  CMP EAX,0x14
00420B70  74 28                     JZ 0x00420b9a
00420B72  3D E8 03 00 00            CMP EAX,0x3e8
00420B77  74 21                     JZ 0x00420b9a
00420B79  3D 72 01 00 00            CMP EAX,0x172
00420B7E  74 1A                     JZ 0x00420b9a
00420B80  3D A4 01 00 00            CMP EAX,0x1a4
00420B85  74 13                     JZ 0x00420b9a
00420B87  3D E9 03 00 00            CMP EAX,0x3e9
00420B8C  0F 85 C0 02 00 00         JNZ 0x00420e52
00420B92  8B 83 59 02 00 00         MOV EAX,dword ptr [EBX + 0x259]
00420B98  EB 07                     JMP 0x00420ba1
LAB_00420b9a:
00420B9A  8B 13                     MOV EDX,dword ptr [EBX]
00420B9C  8B CB                     MOV ECX,EBX
00420B9E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
LAB_00420ba1:
00420BA1  48                        DEC EAX
00420BA2  3D FD 00 00 00            CMP EAX,0xfd
00420BA7  0F 87 80 02 00 00         JA 0x00420e2d
00420BAD  33 C9                     XOR ECX,ECX
00420BAF  8A 88 6C 0E 42 00         MOV CL,byte ptr [EAX + 0x420e6c]
switchD_00420bb5::switchD:
00420BB5  FF 24 8D 5C 0E 42 00      JMP dword ptr [ECX*0x4 + 0x420e5c]
switchD_00420bb5::caseD_1:
00420BBC  83 C9 FF                  OR ECX,0xffffffff
00420BBF  8D 7D F4                  LEA EDI,[EBP + -0xc]
00420BC2  33 C0                     XOR EAX,EAX
00420BC4  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420BC7  F2 AE                     SCASB.REPNE ES:EDI
00420BC9  F7 D1                     NOT ECX
00420BCB  2B F9                     SUB EDI,ECX
00420BCD  8B F7                     MOV ESI,EDI
00420BCF  8B FA                     MOV EDI,EDX
00420BD1  8B D1                     MOV EDX,ECX
00420BD3  83 C9 FF                  OR ECX,0xffffffff
00420BD6  F2 AE                     SCASB.REPNE ES:EDI
00420BD8  8B CA                     MOV ECX,EDX
00420BDA  4F                        DEC EDI
00420BDB  C1 E9 02                  SHR ECX,0x2
00420BDE  F3 A5                     MOVSD.REP ES:EDI,ESI
00420BE0  8B CA                     MOV ECX,EDX
00420BE2  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420BE5  83 E1 03                  AND ECX,0x3
00420BE8  F3 A4                     MOVSB.REP ES:EDI,ESI
00420BEA  BF B4 4F 7A 00            MOV EDI,0x7a4fb4
00420BEF  83 C9 FF                  OR ECX,0xffffffff
00420BF2  F2 AE                     SCASB.REPNE ES:EDI
00420BF4  F7 D1                     NOT ECX
00420BF6  2B F9                     SUB EDI,ECX
00420BF8  8B F7                     MOV ESI,EDI
00420BFA  8B FA                     MOV EDI,EDX
00420BFC  8B D1                     MOV EDX,ECX
00420BFE  83 C9 FF                  OR ECX,0xffffffff
00420C01  F2 AE                     SCASB.REPNE ES:EDI
00420C03  8B CA                     MOV ECX,EDX
00420C05  4F                        DEC EDI
00420C06  C1 E9 02                  SHR ECX,0x2
00420C09  F3 A5                     MOVSD.REP ES:EDI,ESI
00420C0B  8B CA                     MOV ECX,EDX
00420C0D  8D 55 CC                  LEA EDX,[EBP + -0x34]
00420C10  83 E1 03                  AND ECX,0x3
00420C13  F3 A4                     MOVSB.REP ES:EDI,ESI
00420C15  8D 7D F4                  LEA EDI,[EBP + -0xc]
00420C18  83 C9 FF                  OR ECX,0xffffffff
00420C1B  F2 AE                     SCASB.REPNE ES:EDI
00420C1D  F7 D1                     NOT ECX
00420C1F  2B F9                     SUB EDI,ECX
00420C21  8B F7                     MOV ESI,EDI
00420C23  8B FA                     MOV EDI,EDX
00420C25  8B D1                     MOV EDX,ECX
00420C27  83 C9 FF                  OR ECX,0xffffffff
00420C2A  F2 AE                     SCASB.REPNE ES:EDI
00420C2C  8B CA                     MOV ECX,EDX
00420C2E  4F                        DEC EDI
00420C2F  C1 E9 02                  SHR ECX,0x2
00420C32  F3 A5                     MOVSD.REP ES:EDI,ESI
00420C34  8B CA                     MOV ECX,EDX
00420C36  8D 55 CC                  LEA EDX,[EBP + -0x34]
00420C39  83 E1 03                  AND ECX,0x3
00420C3C  F3 A4                     MOVSB.REP ES:EDI,ESI
00420C3E  BF B4 4F 7A 00            MOV EDI,0x7a4fb4
00420C43  E9 13 01 00 00            JMP 0x00420d5b
switchD_00420bb5::caseD_3b:
00420C48  83 C9 FF                  OR ECX,0xffffffff
00420C4B  8D 7D F4                  LEA EDI,[EBP + -0xc]
00420C4E  33 C0                     XOR EAX,EAX
00420C50  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420C53  F2 AE                     SCASB.REPNE ES:EDI
00420C55  F7 D1                     NOT ECX
00420C57  2B F9                     SUB EDI,ECX
00420C59  8B F7                     MOV ESI,EDI
00420C5B  8B FA                     MOV EDI,EDX
00420C5D  8B D1                     MOV EDX,ECX
00420C5F  83 C9 FF                  OR ECX,0xffffffff
00420C62  F2 AE                     SCASB.REPNE ES:EDI
00420C64  8B CA                     MOV ECX,EDX
00420C66  4F                        DEC EDI
00420C67  C1 E9 02                  SHR ECX,0x2
00420C6A  F3 A5                     MOVSD.REP ES:EDI,ESI
00420C6C  8B CA                     MOV ECX,EDX
00420C6E  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420C71  83 E1 03                  AND ECX,0x3
00420C74  F3 A4                     MOVSB.REP ES:EDI,ESI
00420C76  BF F4 4F 7A 00            MOV EDI,0x7a4ff4
00420C7B  83 C9 FF                  OR ECX,0xffffffff
00420C7E  F2 AE                     SCASB.REPNE ES:EDI
00420C80  F7 D1                     NOT ECX
00420C82  2B F9                     SUB EDI,ECX
00420C84  8B F7                     MOV ESI,EDI
00420C86  8B FA                     MOV EDI,EDX
00420C88  8B D1                     MOV EDX,ECX
00420C8A  83 C9 FF                  OR ECX,0xffffffff
00420C8D  F2 AE                     SCASB.REPNE ES:EDI
00420C8F  8B CA                     MOV ECX,EDX
00420C91  4F                        DEC EDI
00420C92  C1 E9 02                  SHR ECX,0x2
00420C95  F3 A5                     MOVSD.REP ES:EDI,ESI
00420C97  8B CA                     MOV ECX,EDX
00420C99  8D 55 CC                  LEA EDX,[EBP + -0x34]
00420C9C  83 E1 03                  AND ECX,0x3
00420C9F  F3 A4                     MOVSB.REP ES:EDI,ESI
00420CA1  8D 7D F4                  LEA EDI,[EBP + -0xc]
00420CA4  83 C9 FF                  OR ECX,0xffffffff
00420CA7  F2 AE                     SCASB.REPNE ES:EDI
00420CA9  F7 D1                     NOT ECX
00420CAB  2B F9                     SUB EDI,ECX
00420CAD  8B F7                     MOV ESI,EDI
00420CAF  8B FA                     MOV EDI,EDX
00420CB1  8B D1                     MOV EDX,ECX
00420CB3  83 C9 FF                  OR ECX,0xffffffff
00420CB6  F2 AE                     SCASB.REPNE ES:EDI
00420CB8  8B CA                     MOV ECX,EDX
00420CBA  4F                        DEC EDI
00420CBB  C1 E9 02                  SHR ECX,0x2
00420CBE  F3 A5                     MOVSD.REP ES:EDI,ESI
00420CC0  8B CA                     MOV ECX,EDX
00420CC2  8D 55 CC                  LEA EDX,[EBP + -0x34]
00420CC5  83 E1 03                  AND ECX,0x3
00420CC8  F3 A4                     MOVSB.REP ES:EDI,ESI
00420CCA  BF F4 4F 7A 00            MOV EDI,0x7a4ff4
00420CCF  E9 87 00 00 00            JMP 0x00420d5b
switchD_00420bb5::caseD_32:
00420CD4  83 C9 FF                  OR ECX,0xffffffff
00420CD7  8D 7D F4                  LEA EDI,[EBP + -0xc]
00420CDA  33 C0                     XOR EAX,EAX
00420CDC  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420CDF  F2 AE                     SCASB.REPNE ES:EDI
00420CE1  F7 D1                     NOT ECX
00420CE3  2B F9                     SUB EDI,ECX
00420CE5  8B F7                     MOV ESI,EDI
00420CE7  8B FA                     MOV EDI,EDX
00420CE9  8B D1                     MOV EDX,ECX
00420CEB  83 C9 FF                  OR ECX,0xffffffff
00420CEE  F2 AE                     SCASB.REPNE ES:EDI
00420CF0  8B CA                     MOV ECX,EDX
00420CF2  4F                        DEC EDI
00420CF3  C1 E9 02                  SHR ECX,0x2
00420CF6  F3 A5                     MOVSD.REP ES:EDI,ESI
00420CF8  8B CA                     MOV ECX,EDX
00420CFA  8D 55 E0                  LEA EDX,[EBP + -0x20]
00420CFD  83 E1 03                  AND ECX,0x3
00420D00  F3 A4                     MOVSB.REP ES:EDI,ESI
00420D02  BF F8 4F 7A 00            MOV EDI,0x7a4ff8
00420D07  83 C9 FF                  OR ECX,0xffffffff
00420D0A  F2 AE                     SCASB.REPNE ES:EDI
00420D0C  F7 D1                     NOT ECX
00420D0E  2B F9                     SUB EDI,ECX
00420D10  8B F7                     MOV ESI,EDI
00420D12  8B FA                     MOV EDI,EDX
00420D14  8B D1                     MOV EDX,ECX
00420D16  83 C9 FF                  OR ECX,0xffffffff
00420D19  F2 AE                     SCASB.REPNE ES:EDI
00420D1B  8B CA                     MOV ECX,EDX
00420D1D  4F                        DEC EDI
00420D1E  C1 E9 02                  SHR ECX,0x2
00420D21  F3 A5                     MOVSD.REP ES:EDI,ESI
00420D23  8B CA                     MOV ECX,EDX
00420D25  8D 55 CC                  LEA EDX,[EBP + -0x34]
00420D28  83 E1 03                  AND ECX,0x3
00420D2B  F3 A4                     MOVSB.REP ES:EDI,ESI
00420D2D  8D 7D F4                  LEA EDI,[EBP + -0xc]
00420D30  83 C9 FF                  OR ECX,0xffffffff
00420D33  F2 AE                     SCASB.REPNE ES:EDI
00420D35  F7 D1                     NOT ECX
00420D37  2B F9                     SUB EDI,ECX
00420D39  8B F7                     MOV ESI,EDI
00420D3B  8B FA                     MOV EDI,EDX
00420D3D  8B D1                     MOV EDX,ECX
00420D3F  83 C9 FF                  OR ECX,0xffffffff
00420D42  F2 AE                     SCASB.REPNE ES:EDI
00420D44  8B CA                     MOV ECX,EDX
00420D46  4F                        DEC EDI
00420D47  C1 E9 02                  SHR ECX,0x2
00420D4A  F3 A5                     MOVSD.REP ES:EDI,ESI
00420D4C  8B CA                     MOV ECX,EDX
00420D4E  8D 55 CC                  LEA EDX,[EBP + -0x34]
00420D51  83 E1 03                  AND ECX,0x3
00420D54  F3 A4                     MOVSB.REP ES:EDI,ESI
00420D56  BF F8 4F 7A 00            MOV EDI,0x7a4ff8
LAB_00420d5b:
00420D5B  83 C9 FF                  OR ECX,0xffffffff
00420D5E  33 C0                     XOR EAX,EAX
00420D60  F2 AE                     SCASB.REPNE ES:EDI
00420D62  F7 D1                     NOT ECX
00420D64  2B F9                     SUB EDI,ECX
00420D66  6A 1D                     PUSH 0x1d
00420D68  8B F7                     MOV ESI,EDI
00420D6A  8B FA                     MOV EDI,EDX
00420D6C  8B D1                     MOV EDX,ECX
00420D6E  83 C9 FF                  OR ECX,0xffffffff
00420D71  F2 AE                     SCASB.REPNE ES:EDI
00420D73  8B CA                     MOV ECX,EDX
00420D75  4F                        DEC EDI
00420D76  C1 E9 02                  SHR ECX,0x2
00420D79  F3 A5                     MOVSD.REP ES:EDI,ESI
00420D7B  8B CA                     MOV ECX,EDX
00420D7D  8D 45 E0                  LEA EAX,[EBP + -0x20]
00420D80  83 E1 03                  AND ECX,0x3
00420D83  50                        PUSH EAX
00420D84  F3 A4                     MOVSB.REP ES:EDI,ESI
00420D86  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00420D8C  8D B3 D5 01 00 00         LEA ESI,[EBX + 0x1d5]
00420D92  51                        PUSH ECX
00420D93  6A 01                     PUSH 0x1
00420D95  8B CE                     MOV ECX,ESI
00420D97  E8 E7 33 FE FF            CALL 0x00404183
00420D9C  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
00420DA2  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00420DA8  6A 00                     PUSH 0x0
00420DAA  6A 01                     PUSH 0x1
00420DAC  52                        PUSH EDX
00420DAD  E8 2E 98 2C 00            CALL 0x006ea5e0
00420DB2  6A 01                     PUSH 0x1
00420DB4  8B CE                     MOV ECX,ESI
00420DB6  E8 EB 4C FE FF            CALL 0x00405aa6
00420DBB  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00420DC0  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00420DC6  51                        PUSH ECX
00420DC7  6A 01                     PUSH 0x1
00420DC9  8B CE                     MOV ECX,ESI
00420DCB  E8 70 44 FE FF            CALL 0x00405240
00420DD0  8B 13                     MOV EDX,dword ptr [EBX]
00420DD2  8B CB                     MOV ECX,EBX
00420DD4  FF 52 0C                  CALL dword ptr [EDX + 0xc]
00420DD7  83 F8 03                  CMP EAX,0x3
00420DDA  75 76                     JNZ 0x00420e52
00420DDC  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00420DE2  8D 45 CC                  LEA EAX,[EBP + -0x34]
00420DE5  6A 1D                     PUSH 0x1d
00420DE7  50                        PUSH EAX
00420DE8  51                        PUSH ECX
00420DE9  6A 02                     PUSH 0x2
00420DEB  8B CE                     MOV ECX,ESI
00420DED  E8 91 33 FE FF            CALL 0x00404183
00420DF2  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
00420DF8  8B 8B 11 02 00 00         MOV ECX,dword ptr [EBX + 0x211]
00420DFE  6A 00                     PUSH 0x0
00420E00  6A 02                     PUSH 0x2
00420E02  52                        PUSH EDX
00420E03  E8 D8 97 2C 00            CALL 0x006ea5e0
00420E08  6A 02                     PUSH 0x2
00420E0A  8B CE                     MOV ECX,ESI
00420E0C  E8 95 4C FE FF            CALL 0x00405aa6
00420E11  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00420E16  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00420E1C  51                        PUSH ECX
00420E1D  6A 02                     PUSH 0x2
00420E1F  8B CE                     MOV ECX,ESI
00420E21  E8 1A 44 FE FF            CALL 0x00405240
00420E26  5F                        POP EDI
00420E27  5E                        POP ESI
00420E28  5B                        POP EBX
00420E29  8B E5                     MOV ESP,EBP
00420E2B  5D                        POP EBP
00420E2C  C3                        RET
switchD_00420bb5::caseD_29:
00420E2D  68 08 50 7A 00            PUSH 0x7a5008
00420E32  68 CC 4C 7A 00            PUSH 0x7a4ccc
00420E37  6A 00                     PUSH 0x0
00420E39  6A 00                     PUSH 0x0
00420E3B  68 E5 0C 00 00            PUSH 0xce5
00420E40  68 0C 4E 7A 00            PUSH 0x7a4e0c
00420E45  E8 86 C6 28 00            CALL 0x006ad4d0
00420E4A  83 C4 18                  ADD ESP,0x18
00420E4D  85 C0                     TEST EAX,EAX
00420E4F  74 01                     JZ 0x00420e52
00420E51  CC                        INT3
LAB_00420e52:
00420E52  5F                        POP EDI
00420E53  5E                        POP ESI
00420E54  5B                        POP EBX
00420E55  8B E5                     MOV ESP,EBP
00420E57  5D                        POP EBP
00420E58  C3                        RET
