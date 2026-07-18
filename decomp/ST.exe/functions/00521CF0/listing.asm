FUN_00521cf0:
00521CF0  55                        PUSH EBP
00521CF1  8B EC                     MOV EBP,ESP
00521CF3  81 EC B0 04 00 00         SUB ESP,0x4b0
00521CF9  8B 81 98 01 00 00         MOV EAX,dword ptr [ECX + 0x198]
00521CFF  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00521D02  53                        PUSH EBX
00521D03  56                        PUSH ESI
00521D04  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00521D07  57                        PUSH EDI
00521D08  85 C9                     TEST ECX,ECX
00521D0A  7E 07                     JLE 0x00521d13
00521D0C  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00521D0F  8B 00                     MOV EAX,dword ptr [EAX]
00521D11  EB 02                     JMP 0x00521d15
LAB_00521d13:
00521D13  33 C0                     XOR EAX,EAX
LAB_00521d15:
00521D15  85 C0                     TEST EAX,EAX
00521D17  0F 84 A3 08 00 00         JZ 0x005225c0
00521D1D  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00521D23  8D 45 A8                  LEA EAX,[EBP + -0x58]
00521D26  8D 55 A4                  LEA EDX,[EBP + -0x5c]
00521D29  6A 00                     PUSH 0x0
00521D2B  50                        PUSH EAX
00521D2C  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00521D2F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00521D35  E8 B6 BA 20 00            CALL 0x0072d7f0
00521D3A  83 C4 08                  ADD ESP,0x8
00521D3D  85 C0                     TEST EAX,EAX
00521D3F  0F 85 72 08 00 00         JNZ 0x005225b7
00521D45  80 3D 83 87 80 00 03      CMP byte ptr [0x00808783],0x3
00521D4C  0F 85 19 08 00 00         JNZ 0x0052256b
00521D52  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00521D55  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00521D5C  8B 81 98 01 00 00         MOV EAX,dword ptr [ECX + 0x198]
00521D62  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00521D65  85 C9                     TEST ECX,ECX
00521D67  7E 07                     JLE 0x00521d70
00521D69  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00521D6C  8B 3A                     MOV EDI,dword ptr [EDX]
00521D6E  EB 02                     JMP 0x00521d72
LAB_00521d70:
00521D70  33 FF                     XOR EDI,EDI
LAB_00521d72:
00521D72  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00521D75  83 C9 FF                  OR ECX,0xffffffff
00521D78  8D 58 6C                  LEA EBX,[EAX + 0x6c]
00521D7B  33 C0                     XOR EAX,EAX
00521D7D  F2 AE                     SCASB.REPNE ES:EDI
00521D7F  F7 D1                     NOT ECX
00521D81  2B F9                     SUB EDI,ECX
00521D83  53                        PUSH EBX
00521D84  8B D1                     MOV EDX,ECX
00521D86  8B F7                     MOV ESI,EDI
00521D88  8B FB                     MOV EDI,EBX
00521D8A  53                        PUSH EBX
00521D8B  C1 E9 02                  SHR ECX,0x2
00521D8E  F3 A5                     MOVSD.REP ES:EDI,ESI
00521D90  8B CA                     MOV ECX,EDX
00521D92  83 E1 03                  AND ECX,0x3
00521D95  F3 A4                     MOVSB.REP ES:EDI,ESI
00521D97  E8 44 5A 19 00            CALL 0x006b77e0
00521D9C  53                        PUSH EBX
00521D9D  53                        PUSH EBX
00521D9E  E8 DD 59 19 00            CALL 0x006b7780
00521DA3  6A 08                     PUSH 0x8
00521DA5  68 24 41 7C 00            PUSH 0x7c4124
00521DAA  53                        PUSH EBX
00521DAB  E8 40 C9 20 00            CALL 0x0072e6f0
00521DB0  83 C4 0C                  ADD ESP,0xc
00521DB3  85 C0                     TEST EAX,EAX
00521DB5  0F 85 A6 00 00 00         JNZ 0x00521e61
00521DBB  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00521DC0  33 FF                     XOR EDI,EDI
00521DC2  85 C0                     TEST EAX,EAX
00521DC4  0F 84 9A 00 00 00         JZ 0x00521e64
00521DCA  8B 90 F0 00 00 00         MOV EDX,dword ptr [EAX + 0xf0]
00521DD0  33 C9                     XOR ECX,ECX
00521DD2  85 D2                     TEST EDX,EDX
00521DD4  0F 94 C1                  SETZ CL
00521DD7  89 88 F0 00 00 00         MOV dword ptr [EAX + 0xf0],ECX
00521DDD  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00521DE2  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00521DE8  8B 88 F0 00 00 00         MOV ECX,dword ptr [EAX + 0xf0]
00521DEE  52                        PUSH EDX
00521DEF  F7 D9                     NEG ECX
00521DF1  1B C9                     SBB ECX,ECX
00521DF3  81 C1 47 27 00 00         ADD ECX,0x2747
00521DF9  51                        PUSH ECX
00521DFA  E8 41 E3 18 00            CALL 0x006b0140
00521DFF  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00521E05  50                        PUSH EAX
00521E06  52                        PUSH EDX
00521E07  68 C3 42 00 00            PUSH 0x42c3
00521E0C  E8 2F E3 18 00            CALL 0x006b0140
00521E11  50                        PUSH EAX
00521E12  68 1C 41 7C 00            PUSH 0x7c411c
00521E17  68 3A F3 80 00            PUSH 0x80f33a
00521E1C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00521E22  8B 35 D8 16 80 00         MOV ESI,dword ptr [0x008016d8]
00521E28  83 C4 10                  ADD ESP,0x10
00521E2B  85 F6                     TEST ESI,ESI
00521E2D  74 35                     JZ 0x00521e64
00521E2F  A0 4D 87 80 00            MOV AL,[0x0080874d]
00521E34  3C FF                     CMP AL,0xff
00521E36  74 15                     JZ 0x00521e4d
00521E38  33 C9                     XOR ECX,ECX
00521E3A  8A C8                     MOV CL,AL
00521E3C  8B C1                     MOV EAX,ECX
00521E3E  8B CE                     MOV ECX,ESI
00521E40  50                        PUSH EAX
00521E41  68 3A F3 80 00            PUSH 0x80f33a
00521E46  E8 8D F6 ED FF            CALL 0x004014d8
00521E4B  EB 17                     JMP 0x00521e64
LAB_00521e4d:
00521E4D  B8 08 00 00 00            MOV EAX,0x8
00521E52  8B CE                     MOV ECX,ESI
00521E54  50                        PUSH EAX
00521E55  68 3A F3 80 00            PUSH 0x80f33a
00521E5A  E8 79 F6 ED FF            CALL 0x004014d8
00521E5F  EB 03                     JMP 0x00521e64
LAB_00521e61:
00521E61  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_00521e64:
00521E64  6A 0D                     PUSH 0xd
00521E66  68 0C 41 7C 00            PUSH 0x7c410c
00521E6B  53                        PUSH EBX
00521E6C  E8 7F C8 20 00            CALL 0x0072e6f0
00521E71  83 C4 0C                  ADD ESP,0xc
00521E74  85 C0                     TEST EAX,EAX
00521E76  75 79                     JNZ 0x00521ef1
00521E78  A0 5E 73 80 00            MOV AL,[0x0080735e]
00521E7D  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00521E83  84 C0                     TEST AL,AL
00521E85  0F 94 C0                  SETZ AL
00521E88  A2 5E 73 80 00            MOV [0x0080735e],AL
00521E8D  33 FF                     XOR EDI,EDI
00521E8F  F6 D8                     NEG AL
00521E91  1B C0                     SBB EAX,EAX
00521E93  52                        PUSH EDX
00521E94  05 47 27 00 00            ADD EAX,0x2747
00521E99  50                        PUSH EAX
00521E9A  E8 A1 E2 18 00            CALL 0x006b0140
00521E9F  50                        PUSH EAX
00521EA0  A1 18 76 80 00            MOV EAX,[0x00807618]
00521EA5  50                        PUSH EAX
00521EA6  68 C5 42 00 00            PUSH 0x42c5
00521EAB  E8 90 E2 18 00            CALL 0x006b0140
00521EB0  50                        PUSH EAX
00521EB1  68 1C 41 7C 00            PUSH 0x7c411c
00521EB6  68 3A F3 80 00            PUSH 0x80f33a
00521EBB  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00521EC1  8B 35 D8 16 80 00         MOV ESI,dword ptr [0x008016d8]
00521EC7  83 C4 10                  ADD ESP,0x10
00521ECA  85 F6                     TEST ESI,ESI
00521ECC  74 23                     JZ 0x00521ef1
00521ECE  A0 4D 87 80 00            MOV AL,[0x0080874d]
00521ED3  3C FF                     CMP AL,0xff
00521ED5  74 08                     JZ 0x00521edf
00521ED7  33 C9                     XOR ECX,ECX
00521ED9  8A C8                     MOV CL,AL
00521EDB  8B C1                     MOV EAX,ECX
00521EDD  EB 05                     JMP 0x00521ee4
LAB_00521edf:
00521EDF  B8 08 00 00 00            MOV EAX,0x8
LAB_00521ee4:
00521EE4  50                        PUSH EAX
00521EE5  68 3A F3 80 00            PUSH 0x80f33a
00521EEA  8B CE                     MOV ECX,ESI
00521EEC  E8 E7 F5 ED FF            CALL 0x004014d8
LAB_00521ef1:
00521EF1  6A 0D                     PUSH 0xd
00521EF3  68 FC 40 7C 00            PUSH 0x7c40fc
00521EF8  53                        PUSH EBX
00521EF9  E8 F2 C7 20 00            CALL 0x0072e6f0
00521EFE  83 C4 0C                  ADD ESP,0xc
00521F01  85 C0                     TEST EAX,EAX
00521F03  0F 85 90 00 00 00         JNZ 0x00521f99
00521F09  8B 35 3C 73 80 00         MOV ESI,dword ptr [0x0080733c]
00521F0F  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
00521F15  85 F6                     TEST ESI,ESI
00521F17  0F 94 C0                  SETZ AL
00521F1A  33 FF                     XOR EDI,EDI
00521F1C  A3 3C 73 80 00            MOV [0x0080733c],EAX
00521F21  85 C9                     TEST ECX,ECX
00521F23  74 0C                     JZ 0x00521f31
00521F25  50                        PUSH EAX
00521F26  51                        PUSH ECX
00521F27  E8 D4 45 19 00            CALL 0x006b6500
00521F2C  A1 3C 73 80 00            MOV EAX,[0x0080733c]
LAB_00521f31:
00521F31  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00521F37  F7 D8                     NEG EAX
00521F39  1B C0                     SBB EAX,EAX
00521F3B  52                        PUSH EDX
00521F3C  05 47 27 00 00            ADD EAX,0x2747
00521F41  50                        PUSH EAX
00521F42  E8 F9 E1 18 00            CALL 0x006b0140
00521F47  50                        PUSH EAX
00521F48  A1 18 76 80 00            MOV EAX,[0x00807618]
00521F4D  50                        PUSH EAX
00521F4E  68 C4 42 00 00            PUSH 0x42c4
00521F53  E8 E8 E1 18 00            CALL 0x006b0140
00521F58  50                        PUSH EAX
00521F59  68 1C 41 7C 00            PUSH 0x7c411c
00521F5E  68 3A F3 80 00            PUSH 0x80f33a
00521F63  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00521F69  8B 35 D8 16 80 00         MOV ESI,dword ptr [0x008016d8]
00521F6F  83 C4 10                  ADD ESP,0x10
00521F72  85 F6                     TEST ESI,ESI
00521F74  74 23                     JZ 0x00521f99
00521F76  A0 4D 87 80 00            MOV AL,[0x0080874d]
00521F7B  3C FF                     CMP AL,0xff
00521F7D  74 08                     JZ 0x00521f87
00521F7F  33 C9                     XOR ECX,ECX
00521F81  8A C8                     MOV CL,AL
00521F83  8B C1                     MOV EAX,ECX
00521F85  EB 05                     JMP 0x00521f8c
LAB_00521f87:
00521F87  B8 08 00 00 00            MOV EAX,0x8
LAB_00521f8c:
00521F8C  50                        PUSH EAX
00521F8D  68 3A F3 80 00            PUSH 0x80f33a
00521F92  8B CE                     MOV ECX,ESI
00521F94  E8 3F F5 ED FF            CALL 0x004014d8
LAB_00521f99:
00521F99  85 FF                     TEST EDI,EDI
00521F9B  0F 84 06 06 00 00         JZ 0x005225a7
00521FA1  6A 04                     PUSH 0x4
00521FA3  68 F4 40 7C 00            PUSH 0x7c40f4
00521FA8  53                        PUSH EBX
00521FA9  C6 45 F8 00               MOV byte ptr [EBP + -0x8],0x0
00521FAD  C6 45 FF 00               MOV byte ptr [EBP + -0x1],0x0
00521FB1  E8 3A C7 20 00            CALL 0x0072e6f0
00521FB6  83 C4 0C                  ADD ESP,0xc
00521FB9  85 C0                     TEST EAX,EAX
00521FBB  75 04                     JNZ 0x00521fc1
00521FBD  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
LAB_00521fc1:
00521FC1  6A 05                     PUSH 0x5
00521FC3  68 EC 40 7C 00            PUSH 0x7c40ec
00521FC8  53                        PUSH EBX
00521FC9  E8 22 C7 20 00            CALL 0x0072e6f0
00521FCE  83 C4 0C                  ADD ESP,0xc
00521FD1  85 C0                     TEST EAX,EAX
00521FD3  75 04                     JNZ 0x00521fd9
00521FD5  C6 45 F8 02               MOV byte ptr [EBP + -0x8],0x2
LAB_00521fd9:
00521FD9  6A 05                     PUSH 0x5
00521FDB  68 E4 40 7C 00            PUSH 0x7c40e4
00521FE0  53                        PUSH EBX
00521FE1  E8 0A C7 20 00            CALL 0x0072e6f0
00521FE6  83 C4 0C                  ADD ESP,0xc
00521FE9  85 C0                     TEST EAX,EAX
00521FEB  75 07                     JNZ 0x00521ff4
00521FED  B3 03                     MOV BL,0x3
00521FEF  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
00521FF2  EB 03                     JMP 0x00521ff7
LAB_00521ff4:
00521FF4  8A 5D F8                  MOV BL,byte ptr [EBP + -0x8]
LAB_00521ff7:
00521FF7  A0 A0 67 80 00            MOV AL,[0x008067a0]
00521FFC  84 C0                     TEST AL,AL
00521FFE  74 78                     JZ 0x00522078
00522000  84 DB                     TEST BL,BL
00522002  75 74                     JNZ 0x00522078
00522004  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00522007  8B 86 98 01 00 00         MOV EAX,dword ptr [ESI + 0x198]
0052200D  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00522010  85 C9                     TEST ECX,ECX
00522012  7E 07                     JLE 0x0052201b
00522014  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00522017  8B 02                     MOV EAX,dword ptr [EDX]
00522019  EB 02                     JMP 0x0052201d
LAB_0052201b:
0052201B  33 C0                     XOR EAX,EAX
LAB_0052201d:
0052201D  50                        PUSH EAX
0052201E  B9 20 76 80 00            MOV ECX,0x807620
00522023  E8 F5 FA ED FF            CALL 0x00401b1d
00522028  85 C0                     TEST EAX,EAX
0052202A  74 4C                     JZ 0x00522078
0052202C  8B 86 98 01 00 00         MOV EAX,dword ptr [ESI + 0x198]
00522032  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00522035  85 C9                     TEST ECX,ECX
00522037  7E 21                     JLE 0x0052205a
00522039  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
0052203C  B9 90 2A 80 00            MOV ECX,0x802a90
00522041  8B 00                     MOV EAX,dword ptr [EAX]
00522043  50                        PUSH EAX
00522044  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
0052204A  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0052204D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522053  5F                        POP EDI
00522054  5E                        POP ESI
00522055  5B                        POP EBX
00522056  8B E5                     MOV ESP,EBP
00522058  5D                        POP EBP
00522059  C3                        RET
LAB_0052205a:
0052205A  33 C0                     XOR EAX,EAX
0052205C  B9 90 2A 80 00            MOV ECX,0x802a90
00522061  50                        PUSH EAX
00522062  FF 15 64 C0 85 00         CALL dword ptr [0x0085c064]
00522068  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0052206B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522071  5F                        POP EDI
00522072  5E                        POP ESI
00522073  5B                        POP EBX
00522074  8B E5                     MOV ESP,EBP
00522076  5D                        POP EBP
00522077  C3                        RET
LAB_00522078:
00522078  B9 14 01 00 00            MOV ECX,0x114
0052207D  33 C0                     XOR EAX,EAX
0052207F  8D BD 50 FB FF FF         LEA EDI,[EBP + 0xfffffb50]
00522085  F3 AB                     STOSD.REP ES:EDI
00522087  AA                        STOSB ES:EDI
00522088  A0 A0 67 80 00            MOV AL,[0x008067a0]
0052208D  BF 1D 7E 80 00            MOV EDI,0x807e1d
00522092  84 C0                     TEST AL,AL
00522094  75 05                     JNZ 0x0052209b
00522096  BF DD 7D 80 00            MOV EDI,0x807ddd
LAB_0052209b:
0052209B  83 C9 FF                  OR ECX,0xffffffff
0052209E  33 C0                     XOR EAX,EAX
005220A0  F2 AE                     SCASB.REPNE ES:EDI
005220A2  F7 D1                     NOT ECX
005220A4  2B F9                     SUB EDI,ECX
005220A6  8D 95 50 FB FF FF         LEA EDX,[EBP + 0xfffffb50]
005220AC  8B C1                     MOV EAX,ECX
005220AE  8B F7                     MOV ESI,EDI
005220B0  8B FA                     MOV EDI,EDX
005220B2  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
005220B5  C1 E9 02                  SHR ECX,0x2
005220B8  F3 A5                     MOVSD.REP ES:EDI,ESI
005220BA  8B C8                     MOV ECX,EAX
005220BC  83 E1 03                  AND ECX,0x3
005220BF  F3 A4                     MOVSB.REP ES:EDI,ESI
005220C1  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
005220C7  84 DB                     TEST BL,BL
005220C9  88 4D A0                  MOV byte ptr [EBP + -0x60],CL
005220CC  75 13                     JNZ 0x005220e1
005220CE  8A 82 A4 01 00 00         MOV AL,byte ptr [EDX + 0x1a4]
005220D4  84 C0                     TEST AL,AL
005220D6  74 09                     JZ 0x005220e1
005220D8  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
005220DB  C6 45 FF 01               MOV byte ptr [EBP + -0x1],0x1
005220DF  8A D8                     MOV BL,AL
LAB_005220e1:
005220E1  84 DB                     TEST BL,BL
005220E3  0F 86 5B 03 00 00         JBE 0x00522444
005220E9  80 FB 03                  CMP BL,0x3
005220EC  0F 87 52 03 00 00         JA 0x00522444
005220F2  8A 45 FF                  MOV AL,byte ptr [EBP + -0x1]
005220F5  84 C0                     TEST AL,AL
005220F7  74 04                     JZ 0x005220fd
005220F9  33 C9                     XOR ECX,ECX
005220FB  EB 0B                     JMP 0x00522108
LAB_005220fd:
005220FD  33 C9                     XOR ECX,ECX
005220FF  80 FB 01                  CMP BL,0x1
00522102  0F 95 C1                  SETNZ CL
00522105  83 C1 04                  ADD ECX,0x4
LAB_00522108:
00522108  8B 82 98 01 00 00         MOV EAX,dword ptr [EDX + 0x198]
0052210E  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00522111  85 D2                     TEST EDX,EDX
00522113  7E 07                     JLE 0x0052211c
00522115  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
00522118  8B 02                     MOV EAX,dword ptr [EDX]
0052211A  EB 02                     JMP 0x0052211e
LAB_0052211c:
0052211C  33 C0                     XOR EAX,EAX
LAB_0052211e:
0052211E  8D 3C 08                  LEA EDI,[EAX + ECX*0x1]
00522121  8D 95 90 FB FF FF         LEA EDX,[EBP + 0xfffffb90]
00522127  85 FF                     TEST EDI,EDI
00522129  74 32                     JZ 0x0052215d
0052212B  83 C9 FF                  OR ECX,0xffffffff
0052212E  33 C0                     XOR EAX,EAX
00522130  F2 AE                     SCASB.REPNE ES:EDI
00522132  F7 D1                     NOT ECX
00522134  2B F9                     SUB EDI,ECX
00522136  8B C1                     MOV EAX,ECX
00522138  8B F7                     MOV ESI,EDI
0052213A  8B FA                     MOV EDI,EDX
0052213C  8D 95 90 FB FF FF         LEA EDX,[EBP + 0xfffffb90]
00522142  C1 E9 02                  SHR ECX,0x2
00522145  F3 A5                     MOVSD.REP ES:EDI,ESI
00522147  8B C8                     MOV ECX,EAX
00522149  83 E1 03                  AND ECX,0x3
0052214C  F3 A4                     MOVSB.REP ES:EDI,ESI
0052214E  8D 8D 90 FB FF FF         LEA ECX,[EBP + 0xfffffb90]
00522154  51                        PUSH ECX
00522155  52                        PUSH EDX
00522156  E8 55 3F 19 00            CALL 0x006b60b0
0052215B  EB 22                     JMP 0x0052217f
LAB_0052215d:
0052215D  BF A0 16 80 00            MOV EDI,0x8016a0
00522162  83 C9 FF                  OR ECX,0xffffffff
00522165  33 C0                     XOR EAX,EAX
00522167  F2 AE                     SCASB.REPNE ES:EDI
00522169  F7 D1                     NOT ECX
0052216B  2B F9                     SUB EDI,ECX
0052216D  8B C1                     MOV EAX,ECX
0052216F  8B F7                     MOV ESI,EDI
00522171  8B FA                     MOV EDI,EDX
00522173  C1 E9 02                  SHR ECX,0x2
00522176  F3 A5                     MOVSD.REP ES:EDI,ESI
00522178  8B C8                     MOV ECX,EAX
0052217A  83 E1 03                  AND ECX,0x3
0052217D  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0052217f:
0052217F  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
00522184  32 DB                     XOR BL,BL
00522186  84 C0                     TEST AL,AL
00522188  88 5D EC                  MOV byte ptr [EBP + -0x14],BL
0052218B  0F 86 61 03 00 00         JBE 0x005224f2
00522191  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00522194  25 FF 00 00 00            AND EAX,0xff
00522199  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0052219C  EB 03                     JMP 0x005221a1
LAB_0052219e:
0052219E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_005221a1:
005221A1  8B 15 7F 87 80 00         MOV EDX,dword ptr [0x0080877f]
005221A7  48                        DEC EAX
005221A8  0F 84 36 02 00 00         JZ 0x005223e4
005221AE  48                        DEC EAX
005221AF  0F 84 24 01 00 00         JZ 0x005222d9
005221B5  48                        DEC EAX
005221B6  0F 85 71 02 00 00         JNZ 0x0052242d
005221BC  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
005221C2  80 F9 08                  CMP CL,0x8
005221C5  0F 83 62 02 00 00         JNC 0x0052242d
005221CB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005221CE  25 FF 00 00 00            AND EAX,0xff
005221D3  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
005221D6  C1 E6 03                  SHL ESI,0x3
005221D9  2B F0                     SUB ESI,EAX
005221DB  C1 E6 02                  SHL ESI,0x2
005221DE  8B BE F0 8A 80 00         MOV EDI,dword ptr [ESI + 0x808af0]
005221E4  3B FA                     CMP EDI,EDX
005221E6  0F 84 41 02 00 00         JZ 0x0052242d
005221EC  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
005221F2  8A 86 F4 8A 80 00         MOV AL,byte ptr [ESI + 0x808af4]
005221F8  84 D2                     TEST DL,DL
005221FA  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
005221FD  74 29                     JZ 0x00522228
005221FF  33 C0                     XOR EAX,EAX
00522201  33 D2                     XOR EDX,EDX
00522203  8A C1                     MOV AL,CL
00522205  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00522208  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0052220B  25 FF 00 00 00            AND EAX,0xff
00522210  8A 8C C9 EA 87 80 00      MOV CL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00522217  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0052221A  3A 8C C0 EA 87 80 00      CMP CL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
00522221  0F 95 C2                  SETNZ DL
00522224  8B C2                     MOV EAX,EDX
00522226  EB 77                     JMP 0x0052229f
LAB_00522228:
00522228  3A C1                     CMP AL,CL
0052222A  74 68                     JZ 0x00522294
0052222C  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0052222F  33 D2                     XOR EDX,EDX
00522231  8A D1                     MOV DL,CL
00522233  25 FF 00 00 00            AND EAX,0xff
00522238  8B CA                     MOV ECX,EDX
0052223A  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00522241  84 D2                     TEST DL,DL
00522243  75 10                     JNZ 0x00522255
00522245  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0052224C  75 07                     JNZ 0x00522255
0052224E  B8 FE FF FF FF            MOV EAX,0xfffffffe
00522253  EB 41                     JMP 0x00522296
LAB_00522255:
00522255  80 FA 01                  CMP DL,0x1
00522258  75 0F                     JNZ 0x00522269
0052225A  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00522262  75 05                     JNZ 0x00522269
00522264  83 C8 FF                  OR EAX,0xffffffff
00522267  EB 2D                     JMP 0x00522296
LAB_00522269:
00522269  84 D2                     TEST DL,DL
0052226B  75 11                     JNZ 0x0052227e
0052226D  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00522275  75 07                     JNZ 0x0052227e
00522277  B8 01 00 00 00            MOV EAX,0x1
0052227C  EB 18                     JMP 0x00522296
LAB_0052227e:
0052227E  80 FA 01                  CMP DL,0x1
00522281  75 11                     JNZ 0x00522294
00522283  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0052228B  75 07                     JNZ 0x00522294
0052228D  B8 02 00 00 00            MOV EAX,0x2
00522292  EB 02                     JMP 0x00522296
LAB_00522294:
00522294  33 C0                     XOR EAX,EAX
LAB_00522296:
00522296  33 C9                     XOR ECX,ECX
00522298  85 C0                     TEST EAX,EAX
0052229A  0F 9C C1                  SETL CL
0052229D  8B C1                     MOV EAX,ECX
LAB_0052229f:
0052229F  BA 01 00 00 00            MOV EDX,0x1
005222A4  2B D0                     SUB EDX,EAX
005222A6  0F 84 81 01 00 00         JZ 0x0052242d
005222AC  8A 86 F6 8A 80 00         MOV AL,byte ptr [ESI + 0x808af6]
005222B2  84 C0                     TEST AL,AL
005222B4  0F 84 73 01 00 00         JZ 0x0052242d
005222BA  8B 0D 64 17 81 00         MOV ECX,dword ptr [0x00811764]
005222C0  6A FF                     PUSH -0x1
005222C2  6A 01                     PUSH 0x1
005222C4  8D 85 50 FB FF FF         LEA EAX,[EBP + 0xfffffb50]
005222CA  68 51 04 00 00            PUSH 0x451
005222CF  50                        PUSH EAX
005222D0  6A 33                     PUSH 0x33
005222D2  57                        PUSH EDI
005222D3  51                        PUSH ECX
005222D4  E9 4C 01 00 00            JMP 0x00522425
LAB_005222d9:
005222D9  80 3D 4D 87 80 00 08      CMP byte ptr [0x0080874d],0x8
005222E0  0F 83 47 01 00 00         JNC 0x0052242d
005222E6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005222E9  25 FF 00 00 00            AND EAX,0xff
005222EE  8D 34 80                  LEA ESI,[EAX + EAX*0x4]
005222F1  C1 E6 03                  SHL ESI,0x3
005222F4  2B F0                     SUB ESI,EAX
005222F6  C1 E6 02                  SHL ESI,0x2
005222F9  8B BE F0 8A 80 00         MOV EDI,dword ptr [ESI + 0x808af0]
005222FF  3B FA                     CMP EDI,EDX
00522301  0F 84 26 01 00 00         JZ 0x0052242d
00522307  8A 0D 8F 8A 80 00         MOV CL,byte ptr [0x00808a8f]
0052230D  8A 86 F4 8A 80 00         MOV AL,byte ptr [ESI + 0x808af4]
00522313  84 C9                     TEST CL,CL
00522315  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00522318  74 2A                     JZ 0x00522344
0052231A  33 C0                     XOR EAX,EAX
0052231C  A0 4D 87 80 00            MOV AL,[0x0080874d]
00522321  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00522324  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00522327  25 FF 00 00 00            AND EAX,0xff
0052232C  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
00522333  33 C9                     XOR ECX,ECX
00522335  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00522338  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
0052233F  0F 95 C1                  SETNZ CL
00522342  EB 7B                     JMP 0x005223bf
LAB_00522344:
00522344  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0052234A  3A C1                     CMP AL,CL
0052234C  74 68                     JZ 0x005223b6
0052234E  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00522351  33 D2                     XOR EDX,EDX
00522353  8A D1                     MOV DL,CL
00522355  25 FF 00 00 00            AND EAX,0xff
0052235A  8B CA                     MOV ECX,EDX
0052235C  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00522363  84 D2                     TEST DL,DL
00522365  75 10                     JNZ 0x00522377
00522367  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
0052236E  75 07                     JNZ 0x00522377
00522370  B8 FE FF FF FF            MOV EAX,0xfffffffe
00522375  EB 41                     JMP 0x005223b8
LAB_00522377:
00522377  80 FA 01                  CMP DL,0x1
0052237A  75 0F                     JNZ 0x0052238b
0052237C  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00522384  75 05                     JNZ 0x0052238b
00522386  83 C8 FF                  OR EAX,0xffffffff
00522389  EB 2D                     JMP 0x005223b8
LAB_0052238b:
0052238B  84 D2                     TEST DL,DL
0052238D  75 11                     JNZ 0x005223a0
0052238F  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00522397  75 07                     JNZ 0x005223a0
00522399  B8 01 00 00 00            MOV EAX,0x1
0052239E  EB 18                     JMP 0x005223b8
LAB_005223a0:
005223A0  80 FA 01                  CMP DL,0x1
005223A3  75 11                     JNZ 0x005223b6
005223A5  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
005223AD  75 07                     JNZ 0x005223b6
005223AF  B8 02 00 00 00            MOV EAX,0x2
005223B4  EB 02                     JMP 0x005223b8
LAB_005223b6:
005223B6  33 C0                     XOR EAX,EAX
LAB_005223b8:
005223B8  33 C9                     XOR ECX,ECX
005223BA  85 C0                     TEST EAX,EAX
005223BC  0F 9C C1                  SETL CL
LAB_005223bf:
005223BF  8B C1                     MOV EAX,ECX
005223C1  85 C0                     TEST EAX,EAX
005223C3  74 68                     JZ 0x0052242d
005223C5  8A 86 F6 8A 80 00         MOV AL,byte ptr [ESI + 0x808af6]
005223CB  84 C0                     TEST AL,AL
005223CD  74 5E                     JZ 0x0052242d
005223CF  6A FF                     PUSH -0x1
005223D1  6A 01                     PUSH 0x1
005223D3  8D 95 50 FB FF FF         LEA EDX,[EBP + 0xfffffb50]
005223D9  68 51 04 00 00            PUSH 0x451
005223DE  52                        PUSH EDX
005223DF  6A 33                     PUSH 0x33
005223E1  57                        PUSH EDI
005223E2  EB 3B                     JMP 0x0052241f
LAB_005223e4:
005223E4  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005223E7  81 E1 FF 00 00 00         AND ECX,0xff
005223ED  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
005223F0  C1 E0 03                  SHL EAX,0x3
005223F3  2B C1                     SUB EAX,ECX
005223F5  C1 E0 02                  SHL EAX,0x2
005223F8  8B 88 F0 8A 80 00         MOV ECX,dword ptr [EAX + 0x808af0]
005223FE  3B CA                     CMP ECX,EDX
00522400  74 2B                     JZ 0x0052242d
00522402  8A 90 F6 8A 80 00         MOV DL,byte ptr [EAX + 0x808af6]
00522408  84 D2                     TEST DL,DL
0052240A  74 21                     JZ 0x0052242d
0052240C  6A FF                     PUSH -0x1
0052240E  6A 01                     PUSH 0x1
00522410  8D 95 50 FB FF FF         LEA EDX,[EBP + 0xfffffb50]
00522416  68 51 04 00 00            PUSH 0x451
0052241B  52                        PUSH EDX
0052241C  6A 33                     PUSH 0x33
0052241E  51                        PUSH ECX
LAB_0052241f:
0052241F  A1 64 17 81 00            MOV EAX,[0x00811764]
00522424  50                        PUSH EAX
LAB_00522425:
00522425  E8 36 2F 1F 00            CALL 0x00715360
0052242A  83 C4 1C                  ADD ESP,0x1c
LAB_0052242d:
0052242D  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
00522432  FE C3                     INC BL
00522434  3A D8                     CMP BL,AL
00522436  88 5D EC                  MOV byte ptr [EBP + -0x14],BL
00522439  0F 82 5F FD FF FF         JC 0x0052219e
0052243F  E9 AE 00 00 00            JMP 0x005224f2
LAB_00522444:
00522444  8B 82 98 01 00 00         MOV EAX,dword ptr [EDX + 0x198]
0052244A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0052244D  85 C9                     TEST ECX,ECX
0052244F  7E 07                     JLE 0x00522458
00522451  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00522454  8B 39                     MOV EDI,dword ptr [ECX]
00522456  EB 02                     JMP 0x0052245a
LAB_00522458:
00522458  33 FF                     XOR EDI,EDI
LAB_0052245a:
0052245A  83 C9 FF                  OR ECX,0xffffffff
0052245D  33 C0                     XOR EAX,EAX
0052245F  F2 AE                     SCASB.REPNE ES:EDI
00522461  F7 D1                     NOT ECX
00522463  2B F9                     SUB EDI,ECX
00522465  8D 95 90 FB FF FF         LEA EDX,[EBP + 0xfffffb90]
0052246B  8B C1                     MOV EAX,ECX
0052246D  8B F7                     MOV ESI,EDI
0052246F  8B FA                     MOV EDI,EDX
00522471  32 DB                     XOR BL,BL
00522473  C1 E9 02                  SHR ECX,0x2
00522476  F3 A5                     MOVSD.REP ES:EDI,ESI
00522478  8B C8                     MOV ECX,EAX
0052247A  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
0052247F  83 E1 03                  AND ECX,0x3
00522482  88 5D F4                  MOV byte ptr [EBP + -0xc],BL
00522485  84 C0                     TEST AL,AL
00522487  F3 A4                     MOVSB.REP ES:EDI,ESI
00522489  76 67                     JBE 0x005224f2
LAB_0052248b:
0052248B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0052248E  81 E1 FF 00 00 00         AND ECX,0xff
00522494  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00522497  C1 E0 03                  SHL EAX,0x3
0052249A  2B C1                     SUB EAX,ECX
0052249C  C1 E0 02                  SHL EAX,0x2
0052249F  8A 88 F7 8A 80 00         MOV CL,byte ptr [EAX + 0x808af7]
005224A5  84 C9                     TEST CL,CL
005224A7  74 3B                     JZ 0x005224e4
005224A9  8B 88 F0 8A 80 00         MOV ECX,dword ptr [EAX + 0x808af0]
005224AF  8B 15 7F 87 80 00         MOV EDX,dword ptr [0x0080877f]
005224B5  3B CA                     CMP ECX,EDX
005224B7  74 2B                     JZ 0x005224e4
005224B9  8A 90 F6 8A 80 00         MOV DL,byte ptr [EAX + 0x808af6]
005224BF  84 D2                     TEST DL,DL
005224C1  74 21                     JZ 0x005224e4
005224C3  A1 64 17 81 00            MOV EAX,[0x00811764]
005224C8  6A FF                     PUSH -0x1
005224CA  6A 01                     PUSH 0x1
005224CC  8D 95 50 FB FF FF         LEA EDX,[EBP + 0xfffffb50]
005224D2  68 51 04 00 00            PUSH 0x451
005224D7  52                        PUSH EDX
005224D8  6A 33                     PUSH 0x33
005224DA  51                        PUSH ECX
005224DB  50                        PUSH EAX
005224DC  E8 7F 2E 1F 00            CALL 0x00715360
005224E1  83 C4 1C                  ADD ESP,0x1c
LAB_005224e4:
005224E4  A0 AF 8A 80 00            MOV AL,[0x00808aaf]
005224E9  FE C3                     INC BL
005224EB  3A D8                     CMP BL,AL
005224ED  88 5D F4                  MOV byte ptr [EBP + -0xc],BL
005224F0  72 99                     JC 0x0052248b
LAB_005224f2:
005224F2  8D 8D 90 FB FF FF         LEA ECX,[EBP + 0xfffffb90]
005224F8  8D 95 50 FB FF FF         LEA EDX,[EBP + 0xfffffb50]
005224FE  51                        PUSH ECX
005224FF  52                        PUSH EDX
00522500  68 DC 40 7C 00            PUSH 0x7c40dc
00522505  68 3A F3 80 00            PUSH 0x80f33a
0052250A  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00522510  8B 0D D8 16 80 00         MOV ECX,dword ptr [0x008016d8]
00522516  83 C4 10                  ADD ESP,0x10
00522519  85 C9                     TEST ECX,ECX
0052251B  0F 84 86 00 00 00         JZ 0x005225a7
00522521  A0 4D 87 80 00            MOV AL,[0x0080874d]
00522526  3C FF                     CMP AL,0xff
00522528  74 21                     JZ 0x0052254b
0052252A  33 D2                     XOR EDX,EDX
0052252C  8A D0                     MOV DL,AL
0052252E  8B C2                     MOV EAX,EDX
00522530  50                        PUSH EAX
00522531  68 3A F3 80 00            PUSH 0x80f33a
00522536  E8 9D EF ED FF            CALL 0x004014d8
0052253B  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0052253E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522544  5F                        POP EDI
00522545  5E                        POP ESI
00522546  5B                        POP EBX
00522547  8B E5                     MOV ESP,EBP
00522549  5D                        POP EBP
0052254A  C3                        RET
LAB_0052254b:
0052254B  B8 08 00 00 00            MOV EAX,0x8
00522550  50                        PUSH EAX
00522551  68 3A F3 80 00            PUSH 0x80f33a
00522556  E8 7D EF ED FF            CALL 0x004014d8
0052255B  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0052255E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522564  5F                        POP EDI
00522565  5E                        POP ESI
00522566  5B                        POP EBX
00522567  8B E5                     MOV ESP,EBP
00522569  5D                        POP EBP
0052256A  C3                        RET
LAB_0052256b:
0052256B  A0 4E 87 80 00            MOV AL,[0x0080874e]
00522570  84 C0                     TEST AL,AL
00522572  74 33                     JZ 0x005225a7
00522574  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00522577  8B 81 98 01 00 00         MOV EAX,dword ptr [ECX + 0x198]
0052257D  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00522580  85 D2                     TEST EDX,EDX
00522582  7E 1B                     JLE 0x0052259f
00522584  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00522587  8B 00                     MOV EAX,dword ptr [EAX]
00522589  50                        PUSH EAX
0052258A  E8 B5 2D EE FF            CALL 0x00405344
0052258F  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
00522592  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522598  5F                        POP EDI
00522599  5E                        POP ESI
0052259A  5B                        POP EBX
0052259B  8B E5                     MOV ESP,EBP
0052259D  5D                        POP EBP
0052259E  C3                        RET
LAB_0052259f:
0052259F  33 C0                     XOR EAX,EAX
005225A1  50                        PUSH EAX
005225A2  E8 9D 2D EE FF            CALL 0x00405344
LAB_005225a7:
005225A7  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
005225AA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005225B0  5F                        POP EDI
005225B1  5E                        POP ESI
005225B2  5B                        POP EBX
005225B3  8B E5                     MOV ESP,EBP
005225B5  5D                        POP EBP
005225B6  C3                        RET
LAB_005225b7:
005225B7  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
005225BA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_005225c0:
005225C0  5F                        POP EDI
005225C1  5E                        POP ESI
005225C2  5B                        POP EBX
005225C3  8B E5                     MOV ESP,EBP
005225C5  5D                        POP EBP
005225C6  C3                        RET
