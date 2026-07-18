HelpPanelTy::DrawDescription:
00515C00  55                        PUSH EBP
00515C01  8B EC                     MOV EBP,ESP
00515C03  83 EC 48                  SUB ESP,0x48
00515C06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00515C0B  53                        PUSH EBX
00515C0C  56                        PUSH ESI
00515C0D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00515C10  57                        PUSH EDI
00515C11  8D 55 BC                  LEA EDX,[EBP + -0x44]
00515C14  8D 4D B8                  LEA ECX,[EBP + -0x48]
00515C17  6A 00                     PUSH 0x0
00515C19  52                        PUSH EDX
00515C1A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00515C1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00515C23  E8 C8 7B 21 00            CALL 0x0072d7f0
00515C28  8B F0                     MOV ESI,EAX
00515C2A  83 C4 08                  ADD ESP,0x8
00515C2D  85 F6                     TEST ESI,ESI
00515C2F  0F 85 37 01 00 00         JNZ 0x00515d6c
00515C35  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00515C38  81 FF 10 27 00 00         CMP EDI,0x2710
00515C3E  0F 84 16 01 00 00         JZ 0x00515d5a
00515C44  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00515C47  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00515C4A  6A 0F                     PUSH 0xf
00515C4C  68 9C 01 00 00            PUSH 0x19c
00515C51  8B 06                     MOV EAX,dword ptr [ESI]
00515C53  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
00515C59  50                        PUSH EAX
00515C5A  6A 00                     PUSH 0x0
00515C5C  6A 00                     PUSH 0x0
00515C5E  51                        PUSH ECX
00515C5F  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515C65  E8 26 AE 1F 00            CALL 0x00710a90
00515C6A  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
00515C70  6A 03                     PUSH 0x3
00515C72  6A FF                     PUSH -0x1
00515C74  6A FF                     PUSH -0x1
00515C76  52                        PUSH EDX
00515C77  68 F5 55 00 00            PUSH 0x55f5
00515C7C  E8 BF A4 19 00            CALL 0x006b0140
00515C81  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515C87  50                        PUSH EAX
00515C88  E8 33 BD 1F 00            CALL 0x007119c0
00515C8D  8B 16                     MOV EDX,dword ptr [ESI]
00515C8F  83 C2 0F                  ADD EDX,0xf
00515C92  89 16                     MOV dword ptr [ESI],EDX
00515C94  A1 18 76 80 00            MOV EAX,[0x00807618]
00515C99  50                        PUSH EAX
00515C9A  57                        PUSH EDI
00515C9B  E8 A0 A4 19 00            CALL 0x006b0140
00515CA0  8B F8                     MOV EDI,EAX
00515CA2  83 C9 FF                  OR ECX,0xffffffff
00515CA5  33 C0                     XOR EAX,EAX
00515CA7  6A 01                     PUSH 0x1
00515CA9  F2 AE                     SCASB.REPNE ES:EDI
00515CAB  F7 D1                     NOT ECX
00515CAD  2B F9                     SUB EDI,ECX
00515CAF  68 98 21 7C 00            PUSH 0x7c2198
00515CB4  8B D1                     MOV EDX,ECX
00515CB6  8B F7                     MOV ESI,EDI
00515CB8  BF 3A F3 80 00            MOV EDI,0x80f33a
00515CBD  68 9C 01 00 00            PUSH 0x19c
00515CC2  C1 E9 02                  SHR ECX,0x2
00515CC5  F3 A5                     MOVSD.REP ES:EDI,ESI
00515CC7  8B CA                     MOV ECX,EDX
00515CC9  68 EC 21 7C 00            PUSH 0x7c21ec
00515CCE  83 E1 03                  AND ECX,0x3
00515CD1  68 D8 21 7C 00            PUSH 0x7c21d8
00515CD6  F3 A4                     MOVSB.REP ES:EDI,ESI
00515CD8  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515CDE  68 3A F3 80 00            PUSH 0x80f33a
00515CE3  68 3A F3 80 00            PUSH 0x80f33a
00515CE8  E8 43 D0 1F 00            CALL 0x00712d30
00515CED  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515CF3  68 3A F3 80 00            PUSH 0x80f33a
00515CF8  E8 E3 B6 1F 00            CALL 0x007113e0
00515CFD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00515D00  8B F8                     MOV EDI,EAX
00515D02  57                        PUSH EDI
00515D03  8B CB                     MOV ECX,EBX
00515D05  8B 06                     MOV EAX,dword ptr [ESI]
00515D07  50                        PUSH EAX
00515D08  E8 63 BB EE FF            CALL 0x00401870
00515D0D  8B 16                     MOV EDX,dword ptr [ESI]
00515D0F  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
00515D15  8D 4F 02                  LEA ECX,[EDI + 0x2]
00515D18  51                        PUSH ECX
00515D19  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515D1F  68 9C 01 00 00            PUSH 0x19c
00515D24  52                        PUSH EDX
00515D25  6A 00                     PUSH 0x0
00515D27  6A 00                     PUSH 0x0
00515D29  50                        PUSH EAX
00515D2A  E8 61 AD 1F 00            CALL 0x00710a90
00515D2F  A0 4E 87 80 00            MOV AL,[0x0080874e]
00515D34  33 C9                     XOR ECX,ECX
00515D36  3C 03                     CMP AL,0x3
00515D38  6A FF                     PUSH -0x1
00515D3A  0F 95 C1                  SETNZ CL
00515D3D  49                        DEC ECX
00515D3E  6A FF                     PUSH -0x1
00515D40  83 E1 05                  AND ECX,0x5
00515D43  51                        PUSH ECX
00515D44  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
00515D4A  6A FF                     PUSH -0x1
00515D4C  6A 01                     PUSH 0x1
00515D4E  68 3A F3 80 00            PUSH 0x80f33a
00515D53  E8 18 BE 1F 00            CALL 0x00711b70
00515D58  01 3E                     ADD dword ptr [ESI],EDI
LAB_00515d5a:
00515D5A  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00515D5D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00515D63  5F                        POP EDI
00515D64  5E                        POP ESI
00515D65  5B                        POP EBX
00515D66  8B E5                     MOV ESP,EBP
00515D68  5D                        POP EBP
00515D69  C2 08 00                  RET 0x8
LAB_00515d6c:
00515D6C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00515D6F  68 CC 3B 7C 00            PUSH 0x7c3bcc
00515D74  68 CC 4C 7A 00            PUSH 0x7a4ccc
00515D79  56                        PUSH ESI
00515D7A  6A 00                     PUSH 0x0
00515D7C  68 25 04 00 00            PUSH 0x425
00515D81  68 3C 38 7C 00            PUSH 0x7c383c
00515D86  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00515D8B  E8 40 77 19 00            CALL 0x006ad4d0
00515D90  83 C4 18                  ADD ESP,0x18
00515D93  85 C0                     TEST EAX,EAX
00515D95  74 01                     JZ 0x00515d98
00515D97  CC                        INT3
LAB_00515d98:
00515D98  68 25 04 00 00            PUSH 0x425
00515D9D  68 3C 38 7C 00            PUSH 0x7c383c
00515DA2  6A 00                     PUSH 0x0
00515DA4  56                        PUSH ESI
00515DA5  E8 96 00 19 00            CALL 0x006a5e40
00515DAA  5F                        POP EDI
00515DAB  5E                        POP ESI
00515DAC  5B                        POP EBX
00515DAD  8B E5                     MOV ESP,EBP
00515DAF  5D                        POP EBP
00515DB0  C2 08 00                  RET 0x8
