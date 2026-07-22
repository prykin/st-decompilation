CPanelTy::sub_00501A10:
00501A10  53                        PUSH EBX
00501A11  56                        PUSH ESI
00501A12  8B F1                     MOV ESI,ECX
00501A14  57                        PUSH EDI
00501A15  B9 46 00 00 00            MOV ECX,0x46
00501A1A  33 C0                     XOR EAX,EAX
00501A1C  8D 9E 34 04 00 00         LEA EBX,[ESI + 0x434]
00501A22  8B FB                     MOV EDI,EBX
00501A24  F3 AB                     STOSD.REP ES:EDI
00501A26  80 BE 9E 0B 00 00 01      CMP byte ptr [ESI + 0xb9e],0x1
00501A2D  0F 85 E4 01 00 00         JNZ 0x00501c17
00501A33  A0 4E 87 80 00            MOV AL,[0x0080874e]
00501A38  3C 03                     CMP AL,0x3
00501A3A  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
00501A40  0F 85 F6 00 00 00         JNZ 0x00501b3c
00501A46  83 F8 1A                  CMP EAX,0x1a
00501A49  75 38                     JNZ 0x00501a83
00501A4B  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
00501A4E  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
00501A54  83 C0 3C                  ADD EAX,0x3c
00501A57  81 C1 84 00 00 00         ADD ECX,0x84
00501A5D  89 03                     MOV dword ptr [EBX],EAX
00501A5F  89 8E 38 04 00 00         MOV dword ptr [ESI + 0x438],ECX
00501A65  C7 86 3C 04 00 00 55 00 00 00  MOV dword ptr [ESI + 0x43c],0x55
00501A6F  C7 86 40 04 00 00 0E 00 00 00  MOV dword ptr [ESI + 0x440],0xe
00501A79  C7 86 4C 04 00 00 F3 2E 00 00  MOV dword ptr [ESI + 0x44c],0x2ef3
LAB_00501a83:
00501A83  8B 56 48                  MOV EDX,dword ptr [ESI + 0x48]
00501A86  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
00501A8C  8B 8E 7C 07 00 00         MOV ECX,dword ptr [ESI + 0x77c]
00501A92  83 C2 04                  ADD EDX,0x4
00501A95  83 C0 08                  ADD EAX,0x8
00501A98  6A 00                     PUSH 0x0
00501A9A  51                        PUSH ECX
00501A9B  89 96 50 04 00 00         MOV dword ptr [ESI + 0x450],EDX
00501AA1  89 86 54 04 00 00         MOV dword ptr [ESI + 0x454],EAX
00501AA7  C7 86 58 04 00 00 64 00 00 00  MOV dword ptr [ESI + 0x458],0x64
00501AB1  C7 86 5C 04 00 00 3C 00 00 00  MOV dword ptr [ESI + 0x45c],0x3c
00501ABB  E8 E0 98 20 00            CALL 0x0070b3a0
00501AC0  8B 96 58 04 00 00         MOV EDX,dword ptr [ESI + 0x458]
00501AC6  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
00501ACC  89 86 60 04 00 00         MOV dword ptr [ESI + 0x460],EAX
00501AD2  8B 46 48                  MOV EAX,dword ptr [ESI + 0x48]
00501AD5  89 96 64 04 00 00         MOV dword ptr [ESI + 0x464],EDX
00501ADB  8B 96 7C 07 00 00         MOV EDX,dword ptr [ESI + 0x77c]
00501AE1  83 C0 02                  ADD EAX,0x2
00501AE4  83 C1 06                  ADD ECX,0x6
00501AE7  6A 02                     PUSH 0x2
00501AE9  52                        PUSH EDX
00501AEA  C7 86 68 04 00 00 87 4E 00 00  MOV dword ptr [ESI + 0x468],0x4e87
00501AF4  89 86 6C 04 00 00         MOV dword ptr [ESI + 0x46c],EAX
00501AFA  89 8E 70 04 00 00         MOV dword ptr [ESI + 0x470],ECX
00501B00  C7 86 74 04 00 00 20 00 00 00  MOV dword ptr [ESI + 0x474],0x20
00501B0A  C7 86 78 04 00 00 35 00 00 00  MOV dword ptr [ESI + 0x478],0x35
00501B14  E8 87 98 20 00            CALL 0x0070b3a0
00501B19  83 C4 10                  ADD ESP,0x10
00501B1C  89 86 7C 04 00 00         MOV dword ptr [ESI + 0x47c],EAX
00501B22  8B 86 74 04 00 00         MOV EAX,dword ptr [ESI + 0x474]
00501B28  C7 86 84 04 00 00 F0 2E 00 00  MOV dword ptr [ESI + 0x484],0x2ef0
00501B32  89 86 80 04 00 00         MOV dword ptr [ESI + 0x480],EAX
00501B38  5F                        POP EDI
00501B39  5E                        POP ESI
00501B3A  5B                        POP EBX
00501B3B  C3                        RET
LAB_00501b3c:
00501B3C  83 C0 F8                  ADD EAX,-0x8
00501B3F  83 F8 1D                  CMP EAX,0x1d
00501B42  77 6C                     JA 0x00501bb0
00501B44  33 C9                     XOR ECX,ECX
00501B46  8A 88 24 1C 50 00         MOV CL,byte ptr [EAX + 0x501c24]
switchD_00501b4c::switchD:
00501B4C  FF 24 8D 1C 1C 50 00      JMP dword ptr [ECX*0x4 + 0x501c1c]
switchD_00501b4c::caseD_8:
00501B53  8B 96 B2 02 00 00         MOV EDX,dword ptr [ESI + 0x2b2]
00501B59  6A 00                     PUSH 0x0
00501B5B  52                        PUSH EDX
00501B5C  E8 3F 98 20 00            CALL 0x0070b3a0
00501B61  8B 8E B2 02 00 00         MOV ECX,dword ptr [ESI + 0x2b2]
00501B67  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00501B6A  6A 00                     PUSH 0x0
00501B6C  51                        PUSH ECX
00501B6D  89 86 3C 04 00 00         MOV dword ptr [ESI + 0x43c],EAX
00501B73  E8 28 98 20 00            CALL 0x0070b3a0
00501B78  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00501B7B  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
00501B81  8B 8E 3C 04 00 00         MOV ECX,dword ptr [ESI + 0x43c]
00501B87  89 96 40 04 00 00         MOV dword ptr [ESI + 0x440],EDX
00501B8D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00501B90  83 C4 10                  ADD ESP,0x10
00501B93  2B C1                     SUB EAX,ECX
00501B95  8B 4E 48                  MOV ECX,dword ptr [ESI + 0x48]
00501B98  99                        CDQ
00501B99  2B C2                     SUB EAX,EDX
00501B9B  D1 F8                     SAR EAX,0x1
00501B9D  03 C1                     ADD EAX,ECX
00501B9F  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
00501BA5  83 C1 50                  ADD ECX,0x50
00501BA8  89 03                     MOV dword ptr [EBX],EAX
00501BAA  89 8E 38 04 00 00         MOV dword ptr [ESI + 0x438],ECX
switchD_00501b4c::caseD_9:
00501BB0  8B 86 99 0B 00 00         MOV EAX,dword ptr [ESI + 0xb99]
00501BB6  83 C0 F8                  ADD EAX,-0x8
00501BB9  83 F8 0F                  CMP EAX,0xf
00501BBC  77 25                     JA 0x00501be3
00501BBE  33 D2                     XOR EDX,EDX
00501BC0  8A 90 50 1C 50 00         MOV DL,byte ptr [EAX + 0x501c50]
switchD_00501bc6::switchD:
00501BC6  FF 24 95 44 1C 50 00      JMP dword ptr [EDX*0x4 + 0x501c44]
switchD_00501bc6::caseD_16:
00501BCD  C7 86 4C 04 00 00 F0 2E 00 00  MOV dword ptr [ESI + 0x44c],0x2ef0
00501BD7  EB 0A                     JMP 0x00501be3
switchD_00501bc6::caseD_8:
00501BD9  C7 86 4C 04 00 00 F3 2E 00 00  MOV dword ptr [ESI + 0x44c],0x2ef3
switchD_00501bc6::caseD_9:
00501BE3  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
00501BE6  8B 8E 9C 00 00 00         MOV ECX,dword ptr [ESI + 0x9c]
00501BEC  8B 56 70                  MOV EDX,dword ptr [ESI + 0x70]
00501BEF  89 86 50 04 00 00         MOV dword ptr [ESI + 0x450],EAX
00501BF5  8B 86 C8 00 00 00         MOV EAX,dword ptr [ESI + 0xc8]
00501BFB  89 8E 54 04 00 00         MOV dword ptr [ESI + 0x454],ECX
00501C01  89 96 58 04 00 00         MOV dword ptr [ESI + 0x458],EDX
00501C07  89 86 5C 04 00 00         MOV dword ptr [ESI + 0x45c],EAX
00501C0D  C7 86 68 04 00 00 87 4E 00 00  MOV dword ptr [ESI + 0x468],0x4e87
LAB_00501c17:
00501C17  5F                        POP EDI
00501C18  5E                        POP ESI
00501C19  5B                        POP EBX
00501C1A  C3                        RET
