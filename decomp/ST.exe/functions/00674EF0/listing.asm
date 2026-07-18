FUN_00674ef0:
00674EF0  55                        PUSH EBP
00674EF1  8B EC                     MOV EBP,ESP
00674EF3  81 EC 04 01 00 00         SUB ESP,0x104
00674EF9  A1 74 19 81 00            MOV EAX,[0x00811974]
00674EFE  85 C0                     TEST EAX,EAX
00674F00  74 76                     JZ 0x00674f78
00674F02  8B 15 78 19 81 00         MOV EDX,dword ptr [0x00811978]
00674F08  85 D2                     TEST EDX,EDX
00674F0A  74 6C                     JZ 0x00674f78
00674F0C  53                        PUSH EBX
00674F0D  56                        PUSH ESI
00674F0E  57                        PUSH EDI
00674F0F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00674F12  83 C9 FF                  OR ECX,0xffffffff
00674F15  33 C0                     XOR EAX,EAX
00674F17  F2 AE                     SCASB.REPNE ES:EDI
00674F19  F7 D1                     NOT ECX
00674F1B  2B F9                     SUB EDI,ECX
00674F1D  8D 9D FC FE FF FF         LEA EBX,[EBP + 0xfffffefc]
00674F23  8B C1                     MOV EAX,ECX
00674F25  8B F7                     MOV ESI,EDI
00674F27  8B FB                     MOV EDI,EBX
00674F29  8D 9D FC FE FF FF         LEA EBX,[EBP + 0xfffffefc]
00674F2F  C1 E9 02                  SHR ECX,0x2
00674F32  F3 A5                     MOVSD.REP ES:EDI,ESI
00674F34  8B C8                     MOV ECX,EAX
00674F36  33 C0                     XOR EAX,EAX
00674F38  83 E1 03                  AND ECX,0x3
00674F3B  52                        PUSH EDX
00674F3C  F3 A4                     MOVSB.REP ES:EDI,ESI
00674F3E  BF F4 8F 7C 00            MOV EDI,0x7c8ff4
00674F43  83 C9 FF                  OR ECX,0xffffffff
00674F46  F2 AE                     SCASB.REPNE ES:EDI
00674F48  F7 D1                     NOT ECX
00674F4A  2B F9                     SUB EDI,ECX
00674F4C  8B F7                     MOV ESI,EDI
00674F4E  8B FB                     MOV EDI,EBX
00674F50  8B D9                     MOV EBX,ECX
00674F52  83 C9 FF                  OR ECX,0xffffffff
00674F55  F2 AE                     SCASB.REPNE ES:EDI
00674F57  8B CB                     MOV ECX,EBX
00674F59  4F                        DEC EDI
00674F5A  C1 E9 02                  SHR ECX,0x2
00674F5D  F3 A5                     MOVSD.REP ES:EDI,ESI
00674F5F  8B CB                     MOV ECX,EBX
00674F61  83 E1 03                  AND ECX,0x3
00674F64  F3 A4                     MOVSB.REP ES:EDI,ESI
00674F66  8D 8D FC FE FF FF         LEA ECX,[EBP + 0xfffffefc]
00674F6C  51                        PUSH ECX
00674F6D  E8 FE 9B 0B 00            CALL 0x0072eb70
00674F72  83 C4 08                  ADD ESP,0x8
00674F75  5F                        POP EDI
00674F76  5E                        POP ESI
00674F77  5B                        POP EBX
LAB_00674f78:
00674F78  8B E5                     MOV ESP,EBP
00674F7A  5D                        POP EBP
00674F7B  C3                        RET
