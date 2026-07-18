FUN_00501000:
00501000  55                        PUSH EBP
00501001  8B EC                     MOV EBP,ESP
00501003  83 EC 4C                  SUB ESP,0x4c
00501006  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050100B  53                        PUSH EBX
0050100C  56                        PUSH ESI
0050100D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00501010  57                        PUSH EDI
00501011  8D 55 B8                  LEA EDX,[EBP + -0x48]
00501014  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00501017  6A 00                     PUSH 0x0
00501019  52                        PUSH EDX
0050101A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0050101D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00501023  E8 C8 C7 22 00            CALL 0x0072d7f0
00501028  8B F0                     MOV ESI,EAX
0050102A  83 C4 08                  ADD ESP,0x8
0050102D  85 F6                     TEST ESI,ESI
0050102F  0F 85 CA 00 00 00         JNZ 0x005010ff
00501035  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00501038  50                        PUSH EAX
00501039  8B 86 B2 02 00 00         MOV EAX,dword ptr [ESI + 0x2b2]
0050103F  50                        PUSH EAX
00501040  E8 5B A3 20 00            CALL 0x0070b3a0
00501045  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
0050104B  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0050104E  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00501051  8B 8E B2 02 00 00         MOV ECX,dword ptr [ESI + 0x2b2]
00501057  2B D7                     SUB EDX,EDI
00501059  8B C2                     MOV EAX,EDX
0050105B  99                        CDQ
0050105C  2B C2                     SUB EAX,EDX
0050105E  8B F8                     MOV EDI,EAX
00501060  A0 4E 87 80 00            MOV AL,[0x0080874e]
00501065  D1 FF                     SAR EDI,0x1
00501067  FE C8                     DEC AL
00501069  F6 D8                     NEG AL
0050106B  1B C0                     SBB EAX,EAX
0050106D  83 E0 06                  AND EAX,0x6
00501070  50                        PUSH EAX
00501071  51                        PUSH ECX
00501072  E8 29 A3 20 00            CALL 0x0070b3a0
00501077  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
0050107D  50                        PUSH EAX
0050107E  6A 01                     PUSH 0x1
00501080  6A 50                     PUSH 0x50
00501082  57                        PUSH EDI
00501083  52                        PUSH EDX
00501084  E8 A0 21 F0 FF            CALL 0x00403229
00501089  8A 86 CD 0B 00 00         MOV AL,byte ptr [ESI + 0xbcd]
0050108F  83 C4 24                  ADD ESP,0x24
00501092  3C FF                     CMP AL,0xff
00501094  74 59                     JZ 0x005010ef
00501096  3C 28                     CMP AL,0x28
00501098  76 07                     JBE 0x005010a1
0050109A  C6 86 CD 0B 00 00 28      MOV byte ptr [ESI + 0xbcd],0x28
LAB_005010a1:
005010A1  8A 86 CD 0B 00 00         MOV AL,byte ptr [ESI + 0xbcd]
005010A7  32 DB                     XOR BL,BL
005010A9  84 C0                     TEST AL,AL
005010AB  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005010AE  76 3F                     JBE 0x005010ef
LAB_005010b0:
005010B0  8B 86 B6 02 00 00         MOV EAX,dword ptr [ESI + 0x2b6]
005010B6  6A 03                     PUSH 0x3
005010B8  50                        PUSH EAX
005010B9  E8 E2 A2 20 00            CALL 0x0070b3a0
005010BE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005010C1  50                        PUSH EAX
005010C2  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
005010C8  81 E1 FF 00 00 00         AND ECX,0xff
005010CE  6A 01                     PUSH 0x1
005010D0  6A 53                     PUSH 0x53
005010D2  8D 54 8F 03               LEA EDX,[EDI + ECX*0x4 + 0x3]
005010D6  52                        PUSH EDX
005010D7  50                        PUSH EAX
005010D8  E8 4C 21 F0 FF            CALL 0x00403229
005010DD  8A 86 CD 0B 00 00         MOV AL,byte ptr [ESI + 0xbcd]
005010E3  83 C4 1C                  ADD ESP,0x1c
005010E6  FE C3                     INC BL
005010E8  3A D8                     CMP BL,AL
005010EA  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005010ED  72 C1                     JC 0x005010b0
LAB_005010ef:
005010EF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005010F2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005010F8  5F                        POP EDI
005010F9  5E                        POP ESI
005010FA  5B                        POP EBX
005010FB  8B E5                     MOV ESP,EBP
005010FD  5D                        POP EBP
005010FE  C3                        RET
LAB_005010ff:
005010FF  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00501102  68 4C 25 7C 00            PUSH 0x7c254c
00501107  68 CC 4C 7A 00            PUSH 0x7a4ccc
0050110C  56                        PUSH ESI
0050110D  6A 00                     PUSH 0x0
0050110F  6A 21                     PUSH 0x21
00501111  68 24 25 7C 00            PUSH 0x7c2524
00501116  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050111C  E8 AF C3 1A 00            CALL 0x006ad4d0
00501121  83 C4 18                  ADD ESP,0x18
00501124  85 C0                     TEST EAX,EAX
00501126  74 01                     JZ 0x00501129
00501128  CC                        INT3
LAB_00501129:
00501129  6A 21                     PUSH 0x21
0050112B  68 24 25 7C 00            PUSH 0x7c2524
00501130  6A 00                     PUSH 0x0
00501132  56                        PUSH ESI
00501133  E8 08 4D 1A 00            CALL 0x006a5e40
00501138  5F                        POP EDI
00501139  5E                        POP ESI
0050113A  5B                        POP EBX
0050113B  8B E5                     MOV ESP,EBP
0050113D  5D                        POP EBP
0050113E  C3                        RET
