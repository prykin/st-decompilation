FUN_00648a30:
00648A30  55                        PUSH EBP
00648A31  8B EC                     MOV EBP,ESP
00648A33  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00648A39  85 C9                     TEST ECX,ECX
00648A3B  74 4B                     JZ 0x00648a88
00648A3D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00648A40  85 C0                     TEST EAX,EAX
00648A42  7C 44                     JL 0x00648a88
00648A44  83 F8 08                  CMP EAX,0x8
00648A47  7D 3F                     JGE 0x00648a88
00648A49  50                        PUSH EAX
00648A4A  E8 76 93 DB FF            CALL 0x00401dc5
00648A4F  85 C0                     TEST EAX,EAX
00648A51  74 35                     JZ 0x00648a88
00648A53  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00648A56  85 D2                     TEST EDX,EDX
00648A58  74 27                     JZ 0x00648a81
00648A5A  56                        PUSH ESI
00648A5B  57                        PUSH EDI
00648A5C  8D B8 EE 05 00 00         LEA EDI,[EAX + 0x5ee]
00648A62  83 C9 FF                  OR ECX,0xffffffff
00648A65  33 C0                     XOR EAX,EAX
00648A67  F2 AE                     SCASB.REPNE ES:EDI
00648A69  F7 D1                     NOT ECX
00648A6B  2B F9                     SUB EDI,ECX
00648A6D  8B C1                     MOV EAX,ECX
00648A6F  8B F7                     MOV ESI,EDI
00648A71  8B FA                     MOV EDI,EDX
00648A73  C1 E9 02                  SHR ECX,0x2
00648A76  F3 A5                     MOVSD.REP ES:EDI,ESI
00648A78  8B C8                     MOV ECX,EAX
00648A7A  83 E1 03                  AND ECX,0x3
00648A7D  F3 A4                     MOVSB.REP ES:EDI,ESI
00648A7F  5F                        POP EDI
00648A80  5E                        POP ESI
LAB_00648a81:
00648A81  B8 01 00 00 00            MOV EAX,0x1
00648A86  5D                        POP EBP
00648A87  C3                        RET
LAB_00648a88:
00648A88  33 C0                     XOR EAX,EAX
00648A8A  5D                        POP EBP
00648A8B  C3                        RET
