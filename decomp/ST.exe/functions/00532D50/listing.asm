OptPanelTy::PrepFiles:
00532D50  55                        PUSH EBP
00532D51  8B EC                     MOV EBP,ESP
00532D53  81 EC F8 03 00 00         SUB ESP,0x3f8
00532D59  33 C0                     XOR EAX,EAX
00532D5B  53                        PUSH EBX
00532D5C  A0 83 87 80 00            MOV AL,[0x00808783]
00532D61  56                        PUSH ESI
00532D62  48                        DEC EAX
00532D63  57                        PUSH EDI
00532D64  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00532D67  C7 45 F0 16 00 00 88      MOV dword ptr [EBP + -0x10],0x88000016
00532D6E  74 0C                     JZ 0x00532d7c
00532D70  48                        DEC EAX
00532D71  75 10                     JNZ 0x00532d83
00532D73  C7 45 F0 16 02 00 88      MOV dword ptr [EBP + -0x10],0x88000216
00532D7A  EB 07                     JMP 0x00532d83
LAB_00532d7c:
00532D7C  C7 45 F0 16 01 00 88      MOV dword ptr [EBP + -0x10],0x88000116
LAB_00532d83:
00532D83  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00532D88  33 F6                     XOR ESI,ESI
00532D8A  8D 55 98                  LEA EDX,[EBP + -0x68]
00532D8D  8D 4D 94                  LEA ECX,[EBP + -0x6c]
00532D90  56                        PUSH ESI
00532D91  52                        PUSH EDX
00532D92  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00532D95  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00532D9B  E8 50 AA 1F 00            CALL 0x0072d7f0
00532DA0  8B F8                     MOV EDI,EAX
00532DA2  83 C4 08                  ADD ESP,0x8
00532DA5  3B FE                     CMP EDI,ESI
00532DA7  0F 85 02 05 00 00         JNZ 0x005332af
00532DAD  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00532DB0  8B 83 E9 01 00 00         MOV EAX,dword ptr [EBX + 0x1e9]
00532DB6  3B C6                     CMP EAX,ESI
00532DB8  74 0C                     JZ 0x00532dc6
00532DBA  50                        PUSH EAX
00532DBB  E8 B0 27 18 00            CALL 0x006b5570
00532DC0  89 B3 E9 01 00 00         MOV dword ptr [EBX + 0x1e9],ESI
LAB_00532dc6:
00532DC6  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
00532DCC  3B C6                     CMP EAX,ESI
00532DCE  74 0C                     JZ 0x00532ddc
00532DD0  50                        PUSH EAX
00532DD1  E8 3A B3 17 00            CALL 0x006ae110
00532DD6  89 B3 ED 01 00 00         MOV dword ptr [EBX + 0x1ed],ESI
LAB_00532ddc:
00532DDC  6A 0A                     PUSH 0xa
00532DDE  6A 32                     PUSH 0x32
00532DE0  56                        PUSH ESI
00532DE1  E8 0A 27 18 00            CALL 0x006b54f0
00532DE6  6A 0A                     PUSH 0xa
00532DE8  6A 08                     PUSH 0x8
00532DEA  6A 32                     PUSH 0x32
00532DEC  56                        PUSH ESI
00532DED  89 83 E9 01 00 00         MOV dword ptr [EBX + 0x1e9],EAX
00532DF3  E8 98 B4 17 00            CALL 0x006ae290
00532DF8  8B 8B B5 01 00 00         MOV ECX,dword ptr [EBX + 0x1b5]
00532DFE  89 83 ED 01 00 00         MOV dword ptr [EBX + 0x1ed],EAX
00532E04  8D 43 18                  LEA EAX,[EBX + 0x18]
00532E07  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00532E0E  50                        PUSH EAX
00532E0F  51                        PUSH ECX
00532E10  6A 02                     PUSH 0x2
00532E12  8B CB                     MOV ECX,EBX
00532E14  89 73 2C                  MOV dword ptr [EBX + 0x2c],ESI
00532E17  E8 64 32 1B 00            CALL 0x006e6080
00532E1C  83 C9 FF                  OR ECX,0xffffffff
00532E1F  BF 80 76 80 00            MOV EDI,0x807680
00532E24  33 C0                     XOR EAX,EAX
00532E26  8D 53 6C                  LEA EDX,[EBX + 0x6c]
00532E29  F2 AE                     SCASB.REPNE ES:EDI
00532E2B  F7 D1                     NOT ECX
00532E2D  2B F9                     SUB EDI,ECX
00532E2F  8B C1                     MOV EAX,ECX
00532E31  8B F7                     MOV ESI,EDI
00532E33  8B FA                     MOV EDI,EDX
00532E35  C1 E9 02                  SHR ECX,0x2
00532E38  F3 A5                     MOVSD.REP ES:EDI,ESI
00532E3A  8B C8                     MOV ECX,EAX
00532E3C  33 C0                     XOR EAX,EAX
00532E3E  83 E1 03                  AND ECX,0x3
00532E41  F3 A4                     MOVSB.REP ES:EDI,ESI
00532E43  8B 3D EC AC 79 00         MOV EDI,dword ptr [0x0079acec]
00532E49  83 C9 FF                  OR ECX,0xffffffff
00532E4C  F2 AE                     SCASB.REPNE ES:EDI
00532E4E  F7 D1                     NOT ECX
00532E50  2B F9                     SUB EDI,ECX
00532E52  8B C1                     MOV EAX,ECX
00532E54  8B F7                     MOV ESI,EDI
00532E56  8B FA                     MOV EDI,EDX
00532E58  8B D0                     MOV EDX,EAX
00532E5A  83 C9 FF                  OR ECX,0xffffffff
00532E5D  33 C0                     XOR EAX,EAX
00532E5F  F2 AE                     SCASB.REPNE ES:EDI
00532E61  8B CA                     MOV ECX,EDX
00532E63  4F                        DEC EDI
00532E64  C1 E9 02                  SHR ECX,0x2
00532E67  F3 A5                     MOVSD.REP ES:EDI,ESI
00532E69  8B CA                     MOV ECX,EDX
00532E6B  83 E1 03                  AND ECX,0x3
00532E6E  F3 A4                     MOVSB.REP ES:EDI,ESI
00532E70  BF DD 7D 80 00            MOV EDI,0x807ddd
00532E75  83 C9 FF                  OR ECX,0xffffffff
00532E78  F2 AE                     SCASB.REPNE ES:EDI
00532E7A  F7 D1                     NOT ECX
00532E7C  2B F9                     SUB EDI,ECX
00532E7E  8B F7                     MOV ESI,EDI
00532E80  8B D1                     MOV EDX,ECX
00532E82  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00532E85  83 C9 FF                  OR ECX,0xffffffff
00532E88  F2 AE                     SCASB.REPNE ES:EDI
00532E8A  8B CA                     MOV ECX,EDX
00532E8C  4F                        DEC EDI
00532E8D  C1 E9 02                  SHR ECX,0x2
00532E90  F3 A5                     MOVSD.REP ES:EDI,ESI
00532E92  8B CA                     MOV ECX,EDX
00532E94  83 E1 03                  AND ECX,0x3
00532E97  F3 A4                     MOVSB.REP ES:EDI,ESI
00532E99  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00532E9C  57                        PUSH EDI
00532E9D  57                        PUSH EDI
00532E9E  E8 DD 53 18 00            CALL 0x006b8280
00532EA3  83 C9 FF                  OR ECX,0xffffffff
00532EA6  33 C0                     XOR EAX,EAX
00532EA8  8D 95 08 FC FF FF         LEA EDX,[EBP + 0xfffffc08]
00532EAE  F2 AE                     SCASB.REPNE ES:EDI
00532EB0  F7 D1                     NOT ECX
00532EB2  2B F9                     SUB EDI,ECX
00532EB4  8B C1                     MOV EAX,ECX
00532EB6  8B F7                     MOV ESI,EDI
00532EB8  C1 E9 02                  SHR ECX,0x2
00532EBB  8B FA                     MOV EDI,EDX
00532EBD  F3 A5                     MOVSD.REP ES:EDI,ESI
00532EBF  8B C8                     MOV ECX,EAX
00532EC1  33 C0                     XOR EAX,EAX
00532EC3  83 E1 03                  AND ECX,0x3
00532EC6  F3 A4                     MOVSB.REP ES:EDI,ESI
00532EC8  8B 3D 00 AD 79 00         MOV EDI,dword ptr [0x0079ad00]
00532ECE  83 C9 FF                  OR ECX,0xffffffff
00532ED1  F2 AE                     SCASB.REPNE ES:EDI
00532ED3  F7 D1                     NOT ECX
00532ED5  2B F9                     SUB EDI,ECX
00532ED7  8B D1                     MOV EDX,ECX
00532ED9  8B F7                     MOV ESI,EDI
00532EDB  83 C9 FF                  OR ECX,0xffffffff
00532EDE  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00532EE1  F2 AE                     SCASB.REPNE ES:EDI
00532EE3  8B CA                     MOV ECX,EDX
00532EE5  4F                        DEC EDI
00532EE6  C1 E9 02                  SHR ECX,0x2
00532EE9  F3 A5                     MOVSD.REP ES:EDI,ESI
00532EEB  8B CA                     MOV ECX,EDX
00532EED  83 E1 03                  AND ECX,0x3
00532EF0  F3 A4                     MOVSB.REP ES:EDI,ESI
00532EF2  BF D8 72 7C 00            MOV EDI,0x7c72d8
00532EF7  83 C9 FF                  OR ECX,0xffffffff
00532EFA  F2 AE                     SCASB.REPNE ES:EDI
00532EFC  F7 D1                     NOT ECX
00532EFE  2B F9                     SUB EDI,ECX
00532F00  8B F7                     MOV ESI,EDI
00532F02  8B D1                     MOV EDX,ECX
00532F04  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00532F07  83 C9 FF                  OR ECX,0xffffffff
00532F0A  F2 AE                     SCASB.REPNE ES:EDI
00532F0C  8B CA                     MOV ECX,EDX
00532F0E  4F                        DEC EDI
00532F0F  C1 E9 02                  SHR ECX,0x2
00532F12  F3 A5                     MOVSD.REP ES:EDI,ESI
00532F14  8B CA                     MOV ECX,EDX
00532F16  83 E1 03                  AND ECX,0x3
00532F19  F3 A4                     MOVSB.REP ES:EDI,ESI
00532F1B  8B 3D F4 AC 79 00         MOV EDI,dword ptr [0x0079acf4]
00532F21  83 C9 FF                  OR ECX,0xffffffff
00532F24  F2 AE                     SCASB.REPNE ES:EDI
00532F26  F7 D1                     NOT ECX
00532F28  2B F9                     SUB EDI,ECX
00532F2A  8B F7                     MOV ESI,EDI
00532F2C  8B D1                     MOV EDX,ECX
00532F2E  8D 7B 6C                  LEA EDI,[EBX + 0x6c]
00532F31  83 C9 FF                  OR ECX,0xffffffff
00532F34  F2 AE                     SCASB.REPNE ES:EDI
00532F36  8B CA                     MOV ECX,EDX
00532F38  4F                        DEC EDI
00532F39  C1 E9 02                  SHR ECX,0x2
00532F3C  F3 A5                     MOVSD.REP ES:EDI,ESI
00532F3E  8D 85 10 FE FF FF         LEA EAX,[EBP + 0xfffffe10]
00532F44  8B CA                     MOV ECX,EDX
00532F46  50                        PUSH EAX
00532F47  83 E1 03                  AND ECX,0x3
00532F4A  8D 43 6C                  LEA EAX,[EBX + 0x6c]
00532F4D  F3 A4                     MOVSB.REP ES:EDI,ESI
00532F4F  50                        PUSH EAX
00532F50  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
00532F56  8B F0                     MOV ESI,EAX
00532F58  33 C0                     XOR EAX,EAX
00532F5A  83 FE FF                  CMP ESI,-0x1
00532F5D  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00532F60  0F 95 C0                  SETNZ AL
00532F63  85 C0                     TEST EAX,EAX
00532F65  0F 84 B7 01 00 00         JZ 0x00533122
LAB_00532f6b:
00532F6B  F6 85 10 FE FF FF 10      TEST byte ptr [EBP + 0xfffffe10],0x10
00532F72  0F 85 94 01 00 00         JNZ 0x0053310c
00532F78  8D 95 0C FD FF FF         LEA EDX,[EBP + 0xfffffd0c]
00532F7E  6A 00                     PUSH 0x0
00532F80  52                        PUSH EDX
00532F81  6A 00                     PUSH 0x0
00532F83  8D 85 3C FE FF FF         LEA EAX,[EBP + 0xfffffe3c]
00532F89  8D 4D FC                  LEA ECX,[EBP + -0x4]
00532F8C  6A 00                     PUSH 0x0
00532F8E  50                        PUSH EAX
00532F8F  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00532F96  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00532F99  E8 92 B7 1F 00            CALL 0x0072e730
00532F9E  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00532FA4  8D 85 54 FF FF FF         LEA EAX,[EBP + 0xffffff54]
00532FAA  8D 95 50 FF FF FF         LEA EDX,[EBP + 0xffffff50]
00532FB0  6A 00                     PUSH 0x0
00532FB2  50                        PUSH EAX
00532FB3  89 8D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],ECX
00532FB9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00532FBF  E8 2C A8 1F 00            CALL 0x0072d7f0
00532FC4  83 C4 1C                  ADD ESP,0x1c
00532FC7  85 C0                     TEST EAX,EAX
00532FC9  0F 85 2B 01 00 00         JNZ 0x005330fa
00532FCF  8D BD 08 FC FF FF         LEA EDI,[EBP + 0xfffffc08]
00532FD5  83 C9 FF                  OR ECX,0xffffffff
00532FD8  F2 AE                     SCASB.REPNE ES:EDI
00532FDA  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00532FDD  F7 D1                     NOT ECX
00532FDF  2B F9                     SUB EDI,ECX
00532FE1  8D 53 6C                  LEA EDX,[EBX + 0x6c]
00532FE4  8B C1                     MOV EAX,ECX
00532FE6  8B F7                     MOV ESI,EDI
00532FE8  8B FA                     MOV EDI,EDX
00532FEA  C1 E9 02                  SHR ECX,0x2
00532FED  F3 A5                     MOVSD.REP ES:EDI,ESI
00532FEF  8B C8                     MOV ECX,EAX
00532FF1  33 C0                     XOR EAX,EAX
00532FF3  83 E1 03                  AND ECX,0x3
00532FF6  F3 A4                     MOVSB.REP ES:EDI,ESI
00532FF8  8D BD 0C FD FF FF         LEA EDI,[EBP + 0xfffffd0c]
00532FFE  83 C9 FF                  OR ECX,0xffffffff
00533001  F2 AE                     SCASB.REPNE ES:EDI
00533003  F7 D1                     NOT ECX
00533005  2B F9                     SUB EDI,ECX
00533007  8B C1                     MOV EAX,ECX
00533009  8B F7                     MOV ESI,EDI
0053300B  8B FA                     MOV EDI,EDX
0053300D  8B D0                     MOV EDX,EAX
0053300F  83 C9 FF                  OR ECX,0xffffffff
00533012  33 C0                     XOR EAX,EAX
00533014  F2 AE                     SCASB.REPNE ES:EDI
00533016  8B CA                     MOV ECX,EDX
00533018  4F                        DEC EDI
00533019  C1 E9 02                  SHR ECX,0x2
0053301C  F3 A5                     MOVSD.REP ES:EDI,ESI
0053301E  50                        PUSH EAX
0053301F  50                        PUSH EAX
00533020  8B CA                     MOV ECX,EDX
00533022  50                        PUSH EAX
00533023  8D 43 6C                  LEA EAX,[EBX + 0x6c]
00533026  83 E1 03                  AND ECX,0x3
00533029  50                        PUSH EAX
0053302A  68 45 03 00 00            PUSH 0x345
0053302F  F3 A4                     MOVSB.REP ES:EDI,ESI
00533031  E8 8A DE 1B 00            CALL 0x006f0ec0
00533036  8B 0D 04 AD 79 00         MOV ECX,dword ptr [0x0079ad04]
0053303C  83 C4 14                  ADD ESP,0x14
0053303F  8B F0                     MOV ESI,EAX
00533041  8D 45 E8                  LEA EAX,[EBP + -0x18]
00533044  6A 00                     PUSH 0x0
00533046  50                        PUSH EAX
00533047  51                        PUSH ECX
00533048  68 80 00 00 00            PUSH 0x80
0053304D  8B CE                     MOV ECX,ESI
0053304F  E8 8C EC 1B 00            CALL 0x006f1ce0
00533054  85 C0                     TEST EAX,EAX
00533056  0F 84 80 00 00 00         JZ 0x005330dc
0053305C  33 C0                     XOR EAX,EAX
0053305E  33 C9                     XOR ECX,ECX
00533060  8A 83 A4 01 00 00         MOV AL,byte ptr [EBX + 0x1a4]
00533066  83 E8 03                  SUB EAX,0x3
00533069  74 10                     JZ 0x0053307b
0053306B  48                        DEC EAX
0053306C  75 2B                     JNZ 0x00533099
0053306E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00533071  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00533074  3B D0                     CMP EDX,EAX
00533076  0F 94 C1                  SETZ CL
00533079  EB 1E                     JMP 0x00533099
LAB_0053307b:
0053307B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0053307E  33 D2                     XOR EDX,EDX
00533080  8B C8                     MOV ECX,EAX
00533082  C1 E9 10                  SHR ECX,0x10
00533085  8A D5                     MOV DL,CH
00533087  80 FA 88                  CMP DL,0x88
0053308A  75 0B                     JNZ 0x00533097
0053308C  3C 16                     CMP AL,0x16
0053308E  75 07                     JNZ 0x00533097
00533090  B9 01 00 00 00            MOV ECX,0x1
00533095  EB 02                     JMP 0x00533099
LAB_00533097:
00533097  33 C9                     XOR ECX,ECX
LAB_00533099:
00533099  85 C9                     TEST ECX,ECX
0053309B  74 46                     JZ 0x005330e3
0053309D  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
005330A3  8D 85 24 FE FF FF         LEA EAX,[EBP + 0xfffffe24]
005330A9  50                        PUSH EAX
005330AA  51                        PUSH ECX
005330AB  E8 10 B1 17 00            CALL 0x006ae1c0
005330B0  8B 3D 00 AD 79 00         MOV EDI,dword ptr [0x0079ad00]
005330B6  83 C9 FF                  OR ECX,0xffffffff
005330B9  33 C0                     XOR EAX,EAX
005330BB  8D 95 0C FD FF FF         LEA EDX,[EBP + 0xfffffd0c]
005330C1  F2 AE                     SCASB.REPNE ES:EDI
005330C3  F7 D1                     NOT ECX
005330C5  49                        DEC ECX
005330C6  51                        PUSH ECX
005330C7  52                        PUSH EDX
005330C8  E8 73 51 18 00            CALL 0x006b8240
005330CD  50                        PUSH EAX
005330CE  8B 83 E9 01 00 00         MOV EAX,dword ptr [EBX + 0x1e9]
005330D4  50                        PUSH EAX
005330D5  E8 C6 29 18 00            CALL 0x006b5aa0
005330DA  EB 07                     JMP 0x005330e3
LAB_005330dc:
005330DC  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_005330e3:
005330E3  56                        PUSH ESI
005330E4  E8 87 E0 1B 00            CALL 0x006f1170
005330E9  8B 8D 50 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff50]
005330EF  83 C4 04                  ADD ESP,0x4
005330F2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005330F8  EB 0F                     JMP 0x00533109
LAB_005330fa:
005330FA  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
00533100  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00533103  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_00533109:
00533109  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_0053310c:
0053310C  8D 85 10 FE FF FF         LEA EAX,[EBP + 0xfffffe10]
00533112  50                        PUSH EAX
00533113  56                        PUSH ESI
00533114  FF 15 F0 BC 85 00         CALL dword ptr [0x0085bcf0]
0053311A  85 C0                     TEST EAX,EAX
0053311C  0F 85 49 FE FF FF         JNZ 0x00532f6b
LAB_00533122:
00533122  83 FE FF                  CMP ESI,-0x1
00533125  74 07                     JZ 0x0053312e
00533127  56                        PUSH ESI
00533128  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
LAB_0053312e:
0053312E  8B 8B E9 01 00 00         MOV ECX,dword ptr [EBX + 0x1e9]
00533134  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00533137  85 FF                     TEST EDI,EDI
00533139  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0053313C  0F 86 DB 00 00 00         JBE 0x0053321d
00533142  83 FF 01                  CMP EDI,0x1
00533145  76 7B                     JBE 0x005331c2
LAB_00533147:
00533147  8D 47 FF                  LEA EAX,[EDI + -0x1]
0053314A  33 F6                     XOR ESI,ESI
0053314C  85 C0                     TEST EAX,EAX
0053314E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00533151  76 68                     JBE 0x005331bb
LAB_00533153:
00533153  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
00533159  8D 55 D8                  LEA EDX,[EBP + -0x28]
0053315C  52                        PUSH EDX
0053315D  8B D6                     MOV EDX,ESI
0053315F  E8 0C 9B 17 00            CALL 0x006acc70
00533164  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
0053316A  8D 7E 01                  LEA EDI,[ESI + 0x1]
0053316D  8D 45 E0                  LEA EAX,[EBP + -0x20]
00533170  8B D7                     MOV EDX,EDI
00533172  50                        PUSH EAX
00533173  E8 F8 9A 17 00            CALL 0x006acc70
00533178  8D 4D E0                  LEA ECX,[EBP + -0x20]
0053317B  8D 55 D8                  LEA EDX,[EBP + -0x28]
0053317E  51                        PUSH ECX
0053317F  52                        PUSH EDX
00533180  FF 15 D8 BC 85 00         CALL dword ptr [0x0085bcd8]
00533186  85 C0                     TEST EAX,EAX
00533188  7D 23                     JGE 0x005331ad
0053318A  8B 83 ED 01 00 00         MOV EAX,dword ptr [EBX + 0x1ed]
00533190  57                        PUSH EDI
00533191  56                        PUSH ESI
00533192  50                        PUSH EAX
00533193  E8 38 DB 17 00            CALL 0x006b0cd0
00533198  8B 8B E9 01 00 00         MOV ECX,dword ptr [EBX + 0x1e9]
0053319E  57                        PUSH EDI
0053319F  56                        PUSH ESI
005331A0  51                        PUSH ECX
005331A1  E8 5A 50 18 00            CALL 0x006b8200
005331A6  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_005331ad:
005331AD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005331B0  8B F7                     MOV ESI,EDI
005331B2  8D 42 FF                  LEA EAX,[EDX + -0x1]
005331B5  3B F0                     CMP ESI,EAX
005331B7  72 9A                     JC 0x00533153
005331B9  8B FA                     MOV EDI,EDX
LAB_005331bb:
005331BB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005331BE  85 C0                     TEST EAX,EAX
005331C0  75 85                     JNZ 0x00533147
LAB_005331c2:
005331C2  8B 83 B5 01 00 00         MOV EAX,dword ptr [EBX + 0x1b5]
005331C8  8D 73 18                  LEA ESI,[EBX + 0x18]
005331CB  56                        PUSH ESI
005331CC  50                        PUSH EAX
005331CD  6A 02                     PUSH 0x2
005331CF  8B CB                     MOV ECX,EBX
005331D1  C7 43 28 28 00 00 00      MOV dword ptr [EBX + 0x28],0x28
005331D8  89 7B 2C                  MOV dword ptr [EBX + 0x2c],EDI
005331DB  E8 A0 2E 1B 00            CALL 0x006e6080
005331E0  8B 8B B5 01 00 00         MOV ECX,dword ptr [EBX + 0x1b5]
005331E6  56                        PUSH ESI
005331E7  51                        PUSH ECX
005331E8  6A 02                     PUSH 0x2
005331EA  8B CB                     MOV ECX,EBX
005331EC  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
005331F3  C7 43 2C 01 00 00 00      MOV dword ptr [EBX + 0x2c],0x1
005331FA  E8 81 2E 1B 00            CALL 0x006e6080
005331FF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00533202  C7 43 28 22 00 00 00      MOV dword ptr [EBX + 0x28],0x22
00533209  3B C7                     CMP EAX,EDI
0053320B  72 03                     JC 0x00533210
0053320D  8D 47 FF                  LEA EAX,[EDI + -0x1]
LAB_00533210:
00533210  8B 93 B5 01 00 00         MOV EDX,dword ptr [EBX + 0x1b5]
00533216  56                        PUSH ESI
00533217  89 43 2C                  MOV dword ptr [EBX + 0x2c],EAX
0053321A  52                        PUSH EDX
0053321B  EB 37                     JMP 0x00533254
LAB_0053321d:
0053321D  80 BB A4 01 00 00 03      CMP byte ptr [EBX + 0x1a4],0x3
00533224  75 37                     JNZ 0x0053325d
00533226  8B 83 F1 01 00 00         MOV EAX,dword ptr [EBX + 0x1f1]
0053322C  68 A0 16 80 00            PUSH 0x8016a0
00533231  6A 00                     PUSH 0x0
00533233  50                        PUSH EAX
00533234  E8 E7 2D 18 00            CALL 0x006b6020
00533239  8B 8B F1 01 00 00         MOV ECX,dword ptr [EBX + 0x1f1]
0053323F  8B 83 B9 01 00 00         MOV EAX,dword ptr [EBX + 0x1b9]
00533245  8D 53 18                  LEA EDX,[EBX + 0x18]
00533248  C7 43 28 33 00 00 00      MOV dword ptr [EBX + 0x28],0x33
0053324F  52                        PUSH EDX
00533250  89 4B 2C                  MOV dword ptr [EBX + 0x2c],ECX
00533253  50                        PUSH EAX
LAB_00533254:
00533254  6A 02                     PUSH 0x2
00533256  8B CB                     MOV ECX,EBX
00533258  E8 23 2E 1B 00            CALL 0x006e6080
LAB_0053325d:
0053325D  8B 83 C1 01 00 00         MOV EAX,dword ptr [EBX + 0x1c1]
00533263  33 C9                     XOR ECX,ECX
00533265  3B CF                     CMP ECX,EDI
00533267  8D 73 18                  LEA ESI,[EBX + 0x18]
0053326A  1B D2                     SBB EDX,EDX
0053326C  56                        PUSH ESI
0053326D  F7 DA                     NEG EDX
0053326F  50                        PUSH EAX
00533270  6A 02                     PUSH 0x2
00533272  8B CB                     MOV ECX,EBX
00533274  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
0053327B  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
0053327E  E8 FD 2D 1B 00            CALL 0x006e6080
00533283  80 BB A4 01 00 00 04      CMP byte ptr [EBX + 0x1a4],0x4
0053328A  75 11                     JNZ 0x0053329d
0053328C  8B 8B BD 01 00 00         MOV ECX,dword ptr [EBX + 0x1bd]
00533292  56                        PUSH ESI
00533293  51                        PUSH ECX
00533294  6A 02                     PUSH 0x2
00533296  8B CB                     MOV ECX,EBX
00533298  E8 E3 2D 1B 00            CALL 0x006e6080
LAB_0053329d:
0053329D  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
005332A0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005332A6  5F                        POP EDI
005332A7  5E                        POP ESI
005332A8  5B                        POP EBX
005332A9  8B E5                     MOV ESP,EBP
005332AB  5D                        POP EBP
005332AC  C2 04 00                  RET 0x4
LAB_005332af:
005332AF  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
005332B2  68 BC 72 7C 00            PUSH 0x7c72bc
005332B7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005332BC  57                        PUSH EDI
005332BD  56                        PUSH ESI
005332BE  68 4F 04 00 00            PUSH 0x44f
005332C3  68 A0 70 7C 00            PUSH 0x7c70a0
005332C8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005332CD  E8 FE A1 17 00            CALL 0x006ad4d0
005332D2  83 C4 18                  ADD ESP,0x18
005332D5  85 C0                     TEST EAX,EAX
005332D7  74 01                     JZ 0x005332da
005332D9  CC                        INT3
LAB_005332da:
005332DA  68 4F 04 00 00            PUSH 0x44f
005332DF  68 A0 70 7C 00            PUSH 0x7c70a0
005332E4  56                        PUSH ESI
005332E5  57                        PUSH EDI
005332E6  E8 55 2B 17 00            CALL 0x006a5e40
005332EB  5F                        POP EDI
005332EC  5E                        POP ESI
005332ED  5B                        POP EBX
005332EE  8B E5                     MOV ESP,EBP
005332F0  5D                        POP EBP
005332F1  C2 04 00                  RET 0x4
