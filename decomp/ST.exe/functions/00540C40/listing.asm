FUN_00540c40:
00540C40  55                        PUSH EBP
00540C41  8B EC                     MOV EBP,ESP
00540C43  83 EC 08                  SUB ESP,0x8
00540C46  53                        PUSH EBX
00540C47  56                        PUSH ESI
00540C48  57                        PUSH EDI
00540C49  BF A0 16 80 00            MOV EDI,0x8016a0
00540C4E  83 C9 FF                  OR ECX,0xffffffff
00540C51  33 C0                     XOR EAX,EAX
00540C53  33 DB                     XOR EBX,EBX
00540C55  F2 AE                     SCASB.REPNE ES:EDI
00540C57  F7 D1                     NOT ECX
00540C59  2B F9                     SUB EDI,ECX
00540C5B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00540C5E  8B C1                     MOV EAX,ECX
00540C60  8B F7                     MOV ESI,EDI
00540C62  BF F0 16 80 00            MOV EDI,0x8016f0
00540C67  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00540C6A  C1 E9 02                  SHR ECX,0x2
00540C6D  F3 A5                     MOVSD.REP ES:EDI,ESI
00540C6F  8B C8                     MOV ECX,EAX
00540C71  83 E1 03                  AND ECX,0x3
00540C74  F3 A4                     MOVSB.REP ES:EDI,ESI
00540C76  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00540C79  3B F3                     CMP ESI,EBX
00540C7B  0F 84 D8 00 00 00         JZ 0x00540d59
00540C81  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00540C84  3B FB                     CMP EDI,EBX
00540C86  0F 84 CD 00 00 00         JZ 0x00540d59
00540C8C  57                        PUSH EDI
00540C8D  8B CE                     MOV ECX,ESI
00540C8F  E8 7C 04 1D 00            CALL 0x00711110
00540C94  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00540C97  3B C1                     CMP EAX,ECX
00540C99  7F 19                     JG 0x00540cb4
00540C9B  83 C9 FF                  OR ECX,0xffffffff
00540C9E  33 C0                     XOR EAX,EAX
00540CA0  F2 AE                     SCASB.REPNE ES:EDI
00540CA2  F7 D1                     NOT ECX
00540CA4  2B F9                     SUB EDI,ECX
00540CA6  8B F7                     MOV ESI,EDI
00540CA8  8B D1                     MOV EDX,ECX
00540CAA  BF F0 16 80 00            MOV EDI,0x8016f0
00540CAF  E9 99 00 00 00            JMP 0x00540d4d
LAB_00540cb4:
00540CB4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00540CB7  85 C0                     TEST EAX,EAX
00540CB9  74 10                     JZ 0x00540ccb
00540CBB  50                        PUSH EAX
00540CBC  8B CE                     MOV ECX,ESI
00540CBE  E8 4D 04 1D 00            CALL 0x00711110
00540CC3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00540CC6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00540CC9  EB 03                     JMP 0x00540cce
LAB_00540ccb:
00540CCB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00540cce:
00540CCE  3B C1                     CMP EAX,ECX
00540CD0  0F 8F 83 00 00 00         JG 0x00540d59
00540CD6  7D 3A                     JGE 0x00540d12
LAB_00540cd8:
00540CD8  57                        PUSH EDI
00540CD9  8B CE                     MOV ECX,ESI
00540CDB  E8 D0 02 1D 00            CALL 0x00710fb0
00540CE0  8B 8E 9A 00 00 00         MOV ECX,dword ptr [ESI + 0x9a]
00540CE6  25 FF FF 00 00            AND EAX,0xffff
00540CEB  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
00540CEE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00540CF1  0F BF 44 41 6A            MOVSX EAX,word ptr [ECX + EAX*0x2 + 0x6a]
00540CF6  03 D0                     ADD EDX,EAX
00540CF8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00540CFB  03 DA                     ADD EBX,EDX
00540CFD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00540D00  42                        INC EDX
00540D01  47                        INC EDI
00540D02  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00540D05  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00540D08  3B C8                     CMP ECX,EAX
00540D0A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00540D0D  7C C9                     JL 0x00540cd8
00540D0F  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_00540d12:
00540D12  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00540D15  8D 56 FF                  LEA EDX,[ESI + -0x1]
00540D18  52                        PUSH EDX
00540D19  57                        PUSH EDI
00540D1A  68 F0 16 80 00            PUSH 0x8016f0
00540D1F  E8 1C D6 1E 00            CALL 0x0072e340
00540D24  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00540D27  83 C9 FF                  OR ECX,0xffffffff
00540D2A  33 C0                     XOR EAX,EAX
00540D2C  83 C4 0C                  ADD ESP,0xc
00540D2F  C6 86 EF 16 80 00 00      MOV byte ptr [ESI + 0x8016ef],0x0
00540D36  F2 AE                     SCASB.REPNE ES:EDI
00540D38  F7 D1                     NOT ECX
00540D3A  2B F9                     SUB EDI,ECX
00540D3C  8B F7                     MOV ESI,EDI
00540D3E  8B D1                     MOV EDX,ECX
00540D40  BF F0 16 80 00            MOV EDI,0x8016f0
00540D45  83 C9 FF                  OR ECX,0xffffffff
00540D48  F2 AE                     SCASB.REPNE ES:EDI
00540D4A  4F                        DEC EDI
00540D4B  8B CA                     MOV ECX,EDX
LAB_00540d4d:
00540D4D  C1 E9 02                  SHR ECX,0x2
00540D50  F3 A5                     MOVSD.REP ES:EDI,ESI
00540D52  8B CA                     MOV ECX,EDX
00540D54  83 E1 03                  AND ECX,0x3
00540D57  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_00540d59:
00540D59  5F                        POP EDI
00540D5A  5E                        POP ESI
00540D5B  B8 F0 16 80 00            MOV EAX,0x8016f0
00540D60  5B                        POP EBX
00540D61  8B E5                     MOV ESP,EBP
00540D63  5D                        POP EBP
00540D64  C3                        RET
