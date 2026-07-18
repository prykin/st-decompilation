FUN_00709a10:
00709A10  55                        PUSH EBP
00709A11  8B EC                     MOV EBP,ESP
00709A13  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709A16  25 FF 00 00 00            AND EAX,0xff
00709A1B  83 F8 1F                  CMP EAX,0x1f
00709A1E  77 7F                     JA 0x00709a9f
00709A20  33 C9                     XOR ECX,ECX
00709A22  8A 88 C8 9A 70 00         MOV CL,byte ptr [EAX + 0x709ac8]
switchD_00709a28::switchD:
00709A28  FF 24 8D A4 9A 70 00      JMP dword ptr [ECX*0x4 + 0x709aa4]
switchD_00709a28::caseD_0:
00709A2F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00709A32  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00709A35  52                        PUSH EDX
00709A36  8B 08                     MOV ECX,dword ptr [EAX]
00709A38  E8 A3 86 FE FF            CALL 0x006f20e0
00709A3D  5D                        POP EBP
00709A3E  C3                        RET
switchD_00709a28::caseD_b:
00709A3F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00709A42  51                        PUSH ECX
00709A43  E8 88 17 00 00            CALL 0x0070b1d0
00709A48  83 C4 04                  ADD ESP,0x4
00709A4B  5D                        POP EBP
00709A4C  C3                        RET
switchD_00709a28::caseD_7:
00709A4D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00709A50  52                        PUSH EDX
00709A51  E8 DA C3 01 00            CALL 0x00725e30
00709A56  83 C4 04                  ADD ESP,0x4
00709A59  5D                        POP EBP
00709A5A  C3                        RET
switchD_00709a28::caseD_8:
00709A5B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00709A5E  50                        PUSH EAX
00709A5F  E8 FC C7 01 00            CALL 0x00726260
00709A64  83 C4 04                  ADD ESP,0x4
00709A67  5D                        POP EBP
00709A68  C3                        RET
switchD_00709a28::caseD_13:
00709A69  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00709A6C  51                        PUSH ECX
00709A6D  E8 3E D3 00 00            CALL 0x00716db0
00709A72  83 C4 04                  ADD ESP,0x4
00709A75  5D                        POP EBP
00709A76  C3                        RET
switchD_00709a28::caseD_15:
00709A77  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00709A7A  52                        PUSH EDX
00709A7B  E8 F0 CD 01 00            CALL 0x00726870
00709A80  83 C4 04                  ADD ESP,0x4
00709A83  5D                        POP EBP
00709A84  C3                        RET
switchD_00709a28::caseD_1f:
00709A85  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00709A88  50                        PUSH EAX
00709A89  E8 72 1B 00 00            CALL 0x0070b600
00709A8E  83 C4 04                  ADD ESP,0x4
00709A91  5D                        POP EBP
00709A92  C3                        RET
switchD_00709a28::caseD_1e:
00709A93  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00709A96  51                        PUSH ECX
00709A97  E8 34 D1 01 00            CALL 0x00726bd0
00709A9C  83 C4 04                  ADD ESP,0x4
switchD_00709a28::caseD_3:
00709A9F  5D                        POP EBP
00709AA0  C3                        RET
