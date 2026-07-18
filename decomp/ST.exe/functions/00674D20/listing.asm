FUN_00674d20:
00674D20  55                        PUSH EBP
00674D21  8B EC                     MOV EBP,ESP
00674D23  81 EC 04 01 00 00         SUB ESP,0x104
00674D29  A1 6C 19 81 00            MOV EAX,[0x0081196c]
00674D2E  85 C0                     TEST EAX,EAX
00674D30  74 76                     JZ 0x00674da8
00674D32  8B 15 70 19 81 00         MOV EDX,dword ptr [0x00811970]
00674D38  85 D2                     TEST EDX,EDX
00674D3A  74 6C                     JZ 0x00674da8
00674D3C  53                        PUSH EBX
00674D3D  56                        PUSH ESI
00674D3E  57                        PUSH EDI
00674D3F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00674D42  83 C9 FF                  OR ECX,0xffffffff
00674D45  33 C0                     XOR EAX,EAX
00674D47  F2 AE                     SCASB.REPNE ES:EDI
00674D49  F7 D1                     NOT ECX
00674D4B  2B F9                     SUB EDI,ECX
00674D4D  8D 9D FC FE FF FF         LEA EBX,[EBP + 0xfffffefc]
00674D53  8B C1                     MOV EAX,ECX
00674D55  8B F7                     MOV ESI,EDI
00674D57  8B FB                     MOV EDI,EBX
00674D59  8D 9D FC FE FF FF         LEA EBX,[EBP + 0xfffffefc]
00674D5F  C1 E9 02                  SHR ECX,0x2
00674D62  F3 A5                     MOVSD.REP ES:EDI,ESI
00674D64  8B C8                     MOV ECX,EAX
00674D66  33 C0                     XOR EAX,EAX
00674D68  83 E1 03                  AND ECX,0x3
00674D6B  52                        PUSH EDX
00674D6C  F3 A4                     MOVSB.REP ES:EDI,ESI
00674D6E  BF F4 8F 7C 00            MOV EDI,0x7c8ff4
00674D73  83 C9 FF                  OR ECX,0xffffffff
00674D76  F2 AE                     SCASB.REPNE ES:EDI
00674D78  F7 D1                     NOT ECX
00674D7A  2B F9                     SUB EDI,ECX
00674D7C  8B F7                     MOV ESI,EDI
00674D7E  8B FB                     MOV EDI,EBX
00674D80  8B D9                     MOV EBX,ECX
00674D82  83 C9 FF                  OR ECX,0xffffffff
00674D85  F2 AE                     SCASB.REPNE ES:EDI
00674D87  8B CB                     MOV ECX,EBX
00674D89  4F                        DEC EDI
00674D8A  C1 E9 02                  SHR ECX,0x2
00674D8D  F3 A5                     MOVSD.REP ES:EDI,ESI
00674D8F  8B CB                     MOV ECX,EBX
00674D91  83 E1 03                  AND ECX,0x3
00674D94  F3 A4                     MOVSB.REP ES:EDI,ESI
00674D96  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00674D9C  51                        PUSH ECX
00674D9D  E8 CE 9D 0B 00            CALL 0x0072eb70
00674DA2  83 C4 08                  ADD ESP,0x8
00674DA5  5F                        POP EDI
00674DA6  5E                        POP ESI
00674DA7  5B                        POP EBX
LAB_00674da8:
00674DA8  8B E5                     MOV ESP,EBP
00674DAA  5D                        POP EBP
00674DAB  C3                        RET
