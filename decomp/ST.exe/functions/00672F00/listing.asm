FUN_00672f00:
00672F00  A1 60 75 85 00            MOV EAX,[0x00857560]
00672F05  53                        PUSH EBX
00672F06  8B 1D 58 19 81 00         MOV EBX,dword ptr [0x00811958]
00672F0C  56                        PUSH ESI
00672F0D  85 C0                     TEST EAX,EAX
00672F0F  74 13                     JZ 0x00672f24
00672F11  50                        PUSH EAX
00672F12  A1 4C 19 81 00            MOV EAX,[0x0081194c]
00672F17  FF 50 04                  CALL dword ptr [EAX + 0x4]
00672F1A  C7 05 60 75 85 00 00 00 00 00  MOV dword ptr [0x00857560],0x0
LAB_00672f24:
00672F24  53                        PUSH EBX
00672F25  68 58 19 81 00            PUSH 0x811958
00672F2A  E8 91 69 04 00            CALL 0x006b98c0
00672F2F  85 DB                     TEST EBX,EBX
00672F31  0F 84 EC 00 00 00         JZ 0x00673023
00672F37  8B 15 28 75 85 00         MOV EDX,dword ptr [0x00857528]
00672F3D  57                        PUSH EDI
00672F3E  85 D2                     TEST EDX,EDX
00672F40  74 24                     JZ 0x00672f66
00672F42  8B 7B 18                  MOV EDI,dword ptr [EBX + 0x18]
00672F45  85 FF                     TEST EDI,EDI
00672F47  74 1D                     JZ 0x00672f66
00672F49  83 C9 FF                  OR ECX,0xffffffff
00672F4C  33 C0                     XOR EAX,EAX
00672F4E  F2 AE                     SCASB.REPNE ES:EDI
00672F50  F7 D1                     NOT ECX
00672F52  2B F9                     SUB EDI,ECX
00672F54  8B C1                     MOV EAX,ECX
00672F56  8B F7                     MOV ESI,EDI
00672F58  8B FA                     MOV EDI,EDX
00672F5A  C1 E9 02                  SHR ECX,0x2
00672F5D  F3 A5                     MOVSD.REP ES:EDI,ESI
00672F5F  8B C8                     MOV ECX,EAX
00672F61  83 E1 03                  AND ECX,0x3
00672F64  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00672f66:
00672F66  8B 4B 18                  MOV ECX,dword ptr [EBX + 0x18]
00672F69  51                        PUSH ECX
00672F6A  E8 21 2F 03 00            CALL 0x006a5e90
00672F6F  8B 15 48 19 81 00         MOV EDX,dword ptr [0x00811948]
00672F75  85 D2                     TEST EDX,EDX
00672F77  74 24                     JZ 0x00672f9d
00672F79  8B 7B 2C                  MOV EDI,dword ptr [EBX + 0x2c]
00672F7C  85 FF                     TEST EDI,EDI
00672F7E  74 1D                     JZ 0x00672f9d
00672F80  83 C9 FF                  OR ECX,0xffffffff
00672F83  33 C0                     XOR EAX,EAX
00672F85  F2 AE                     SCASB.REPNE ES:EDI
00672F87  F7 D1                     NOT ECX
00672F89  2B F9                     SUB EDI,ECX
00672F8B  8B C1                     MOV EAX,ECX
00672F8D  8B F7                     MOV ESI,EDI
00672F8F  8B FA                     MOV EDI,EDX
00672F91  C1 E9 02                  SHR ECX,0x2
00672F94  F3 A5                     MOVSD.REP ES:EDI,ESI
00672F96  8B C8                     MOV ECX,EAX
00672F98  83 E1 03                  AND ECX,0x3
00672F9B  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00672f9d:
00672F9D  8B 4B 2C                  MOV ECX,dword ptr [EBX + 0x2c]
00672FA0  51                        PUSH ECX
00672FA1  E8 EA 2E 03 00            CALL 0x006a5e90
00672FA6  8B 15 3C 75 85 00         MOV EDX,dword ptr [0x0085753c]
00672FAC  85 D2                     TEST EDX,EDX
00672FAE  74 24                     JZ 0x00672fd4
00672FB0  8B 7B 1C                  MOV EDI,dword ptr [EBX + 0x1c]
00672FB3  85 FF                     TEST EDI,EDI
00672FB5  74 1D                     JZ 0x00672fd4
00672FB7  83 C9 FF                  OR ECX,0xffffffff
00672FBA  33 C0                     XOR EAX,EAX
00672FBC  F2 AE                     SCASB.REPNE ES:EDI
00672FBE  F7 D1                     NOT ECX
00672FC0  2B F9                     SUB EDI,ECX
00672FC2  8B C1                     MOV EAX,ECX
00672FC4  8B F7                     MOV ESI,EDI
00672FC6  8B FA                     MOV EDI,EDX
00672FC8  C1 E9 02                  SHR ECX,0x2
00672FCB  F3 A5                     MOVSD.REP ES:EDI,ESI
00672FCD  8B C8                     MOV ECX,EAX
00672FCF  83 E1 03                  AND ECX,0x3
00672FD2  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00672fd4:
00672FD4  8B 4B 1C                  MOV ECX,dword ptr [EBX + 0x1c]
00672FD7  51                        PUSH ECX
00672FD8  E8 B3 2E 03 00            CALL 0x006a5e90
00672FDD  8B 53 0C                  MOV EDX,dword ptr [EBX + 0xc]
00672FE0  5F                        POP EDI
00672FE1  89 15 24 2D 7D 00         MOV dword ptr [0x007d2d24],EDX
00672FE7  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00672FEA  A3 48 75 85 00            MOV [0x00857548],EAX
00672FEF  8B 4B 28                  MOV ECX,dword ptr [EBX + 0x28]
00672FF2  89 0D 4C 75 85 00         MOV dword ptr [0x0085754c],ECX
00672FF8  8B 53 10                  MOV EDX,dword ptr [EBX + 0x10]
00672FFB  89 15 18 2D 7D 00         MOV dword ptr [0x007d2d18],EDX
00673001  8B 43 14                  MOV EAX,dword ptr [EBX + 0x14]
00673004  A3 54 19 81 00            MOV [0x00811954],EAX
00673009  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
0067300C  89 0D 60 75 85 00         MOV dword ptr [0x00857560],ECX
00673012  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
00673015  89 15 4C 19 81 00         MOV dword ptr [0x0081194c],EDX
0067301B  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
0067301E  A3 54 75 85 00            MOV [0x00857554],EAX
LAB_00673023:
00673023  A1 58 19 81 00            MOV EAX,[0x00811958]
00673028  85 C0                     TEST EAX,EAX
0067302A  75 54                     JNZ 0x00673080
0067302C  68 28 75 85 00            PUSH 0x857528
00673031  E8 2A 80 03 00            CALL 0x006ab060
00673036  68 48 19 81 00            PUSH 0x811948
0067303B  E8 20 80 03 00            CALL 0x006ab060
00673040  68 5C 75 85 00            PUSH 0x85755c
00673045  E8 16 80 03 00            CALL 0x006ab060
0067304A  68 3C 75 85 00            PUSH 0x85753c
0067304F  E8 0C 80 03 00            CALL 0x006ab060
00673054  8B 35 08 19 81 00         MOV ESI,dword ptr [0x00811908]
0067305A  85 F6                     TEST ESI,ESI
0067305C  74 18                     JZ 0x00673076
LAB_0067305e:
0067305E  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00673061  51                        PUSH ECX
00673062  E8 29 2E 03 00            CALL 0x006a5e90
00673067  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0067306A  52                        PUSH EDX
0067306B  E8 20 2E 03 00            CALL 0x006a5e90
00673070  8B 36                     MOV ESI,dword ptr [ESI]
00673072  85 F6                     TEST ESI,ESI
00673074  75 E8                     JNZ 0x0067305e
LAB_00673076:
00673076  68 08 19 81 00            PUSH 0x811908
0067307B  E8 10 68 04 00            CALL 0x006b9890
LAB_00673080:
00673080  53                        PUSH EBX
00673081  E8 0A 2E 03 00            CALL 0x006a5e90
00673086  8B 0D 58 19 81 00         MOV ECX,dword ptr [0x00811958]
0067308C  33 C0                     XOR EAX,EAX
0067308E  85 C9                     TEST ECX,ECX
00673090  5E                        POP ESI
00673091  5B                        POP EBX
00673092  0F 95 C0                  SETNZ AL
00673095  C3                        RET
