ccFntTy::SepColorStrInSarr:
007129D0  55                        PUSH EBP
007129D1  8B EC                     MOV EBP,ESP
007129D3  83 EC 64                  SUB ESP,0x64
007129D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007129DB  53                        PUSH EBX
007129DC  56                        PUSH ESI
007129DD  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007129E0  33 DB                     XOR EBX,EBX
007129E2  57                        PUSH EDI
007129E3  8D 55 A0                  LEA EDX,[EBP + -0x60]
007129E6  8D 4D 9C                  LEA ECX,[EBP + -0x64]
007129E9  53                        PUSH EBX
007129EA  52                        PUSH EDX
007129EB  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007129EE  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007129F1  C7 45 F4 FF FF FF FF      MOV dword ptr [EBP + -0xc],0xffffffff
007129F8  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
007129FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712A01  E8 EA AD 01 00            CALL 0x0072d7f0
00712A06  8B F8                     MOV EDI,EAX
00712A08  83 C4 08                  ADD ESP,0x8
00712A0B  3B FB                     CMP EDI,EBX
00712A0D  0F 85 8E 01 00 00         JNZ 0x00712ba1
00712A13  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00712A16  3B F3                     CMP ESI,EBX
00712A18  74 05                     JZ 0x00712a1f
00712A1A  39 5E 08                  CMP dword ptr [ESI + 0x8],EBX
00712A1D  75 17                     JNZ 0x00712a36
LAB_00712a1f:
00712A1F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00712A24  68 3B 08 00 00            PUSH 0x83b
00712A29  68 90 01 7F 00            PUSH 0x7f0190
00712A2E  50                        PUSH EAX
00712A2F  6A CC                     PUSH -0x34
00712A31  E8 0A 34 F9 FF            CALL 0x006a5e40
LAB_00712a36:
00712A36  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00712A39  3B C3                     CMP EAX,EBX
00712A3B  75 0A                     JNZ 0x00712a47
00712A3D  6A 14                     PUSH 0x14
00712A3F  6A 14                     PUSH 0x14
00712A41  53                        PUSH EBX
00712A42  E8 A9 2A FA FF            CALL 0x006b54f0
LAB_00712a47:
00712A47  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00712A4A  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00712A4D  85 C0                     TEST EAX,EAX
00712A4F  0F 8E 37 01 00 00         JLE 0x00712b8c
00712A55  3B D8                     CMP EBX,EAX
00712A57  7D 0B                     JGE 0x00712a64
LAB_00712a59:
00712A59  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00712A5C  8B 3C 99                  MOV EDI,dword ptr [ECX + EBX*0x4]
00712A5F  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00712A62  EB 0A                     JMP 0x00712a6e
LAB_00712a64:
00712A64  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00712A6B  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_00712a6e:
00712A6E  85 FF                     TEST EDI,EDI
00712A70  0F 84 0A 01 00 00         JZ 0x00712b80
00712A76  85 DB                     TEST EBX,EBX
00712A78  7E 31                     JLE 0x00712aab
00712A7A  8D 53 FF                  LEA EDX,[EBX + -0x1]
00712A7D  3B D0                     CMP EDX,EAX
00712A7F  7D 09                     JGE 0x00712a8a
00712A81  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
00712A84  8B 4C 99 FC               MOV ECX,dword ptr [ECX + EBX*0x4 + -0x4]
00712A88  EB 02                     JMP 0x00712a8c
LAB_00712a8a:
00712A8A  33 C9                     XOR ECX,ECX
LAB_00712a8c:
00712A8C  85 C9                     TEST ECX,ECX
00712A8E  74 1B                     JZ 0x00712aab
00712A90  3B D0                     CMP EDX,EAX
00712A92  7D 09                     JGE 0x00712a9d
00712A94  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00712A97  8B 44 9A FC               MOV EAX,dword ptr [EDX + EBX*0x4 + -0x4]
00712A9B  EB 02                     JMP 0x00712a9f
LAB_00712a9d:
00712A9D  33 C0                     XOR EAX,EAX
LAB_00712a9f:
00712A9F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00712AA2  50                        PUSH EAX
00712AA3  E8 38 E8 FF FF            CALL 0x007112e0
00712AA8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_00712aab:
00712AAB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00712AAE  85 C0                     TEST EAX,EAX
00712AB0  0F 8E BA 00 00 00         JLE 0x00712b70
00712AB6  83 C9 FF                  OR ECX,0xffffffff
00712AB9  33 C0                     XOR EAX,EAX
00712ABB  F2 AE                     SCASB.REPNE ES:EDI
00712ABD  F7 D1                     NOT ECX
00712ABF  83 C1 03                  ADD ECX,0x3
00712AC2  51                        PUSH ECX
00712AC3  E8 48 81 F9 FF            CALL 0x006aac10
00712AC8  8B D0                     MOV EDX,EAX
00712ACA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00712ACD  83 C9 FF                  OR ECX,0xffffffff
00712AD0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00712AD3  8D B8 9E 00 00 00         LEA EDI,[EAX + 0x9e]
00712AD9  33 C0                     XOR EAX,EAX
00712ADB  F2 AE                     SCASB.REPNE ES:EDI
00712ADD  F7 D1                     NOT ECX
00712ADF  2B F9                     SUB EDI,ECX
00712AE1  6A 10                     PUSH 0x10
00712AE3  8B C1                     MOV EAX,ECX
00712AE5  8B F7                     MOV ESI,EDI
00712AE7  8B FA                     MOV EDI,EDX
00712AE9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00712AEC  C1 E9 02                  SHR ECX,0x2
00712AEF  F3 A5                     MOVSD.REP ES:EDI,ESI
00712AF1  8B C8                     MOV ECX,EAX
00712AF3  83 E1 03                  AND ECX,0x3
00712AF6  F3 A4                     MOVSB.REP ES:EDI,ESI
00712AF8  8D 4D E0                  LEA ECX,[EBP + -0x20]
00712AFB  51                        PUSH ECX
00712AFC  52                        PUSH EDX
00712AFD  E8 5E B3 01 00            CALL 0x0072de60
00712B02  8B F8                     MOV EDI,EAX
00712B04  83 C9 FF                  OR ECX,0xffffffff
00712B07  33 C0                     XOR EAX,EAX
00712B09  83 C4 0C                  ADD ESP,0xc
00712B0C  F2 AE                     SCASB.REPNE ES:EDI
00712B0E  F7 D1                     NOT ECX
00712B10  2B F9                     SUB EDI,ECX
00712B12  8B F7                     MOV ESI,EDI
00712B14  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00712B17  8B D1                     MOV EDX,ECX
00712B19  83 C9 FF                  OR ECX,0xffffffff
00712B1C  F2 AE                     SCASB.REPNE ES:EDI
00712B1E  8B CA                     MOV ECX,EDX
00712B20  4F                        DEC EDI
00712B21  C1 E9 02                  SHR ECX,0x2
00712B24  F3 A5                     MOVSD.REP ES:EDI,ESI
00712B26  8B CA                     MOV ECX,EDX
00712B28  83 E1 03                  AND ECX,0x3
00712B2B  F3 A4                     MOVSB.REP ES:EDI,ESI
00712B2D  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00712B30  83 C9 FF                  OR ECX,0xffffffff
00712B33  F2 AE                     SCASB.REPNE ES:EDI
00712B35  F7 D1                     NOT ECX
00712B37  2B F9                     SUB EDI,ECX
00712B39  8B F7                     MOV ESI,EDI
00712B3B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00712B3E  8B D1                     MOV EDX,ECX
00712B40  83 C9 FF                  OR ECX,0xffffffff
00712B43  F2 AE                     SCASB.REPNE ES:EDI
00712B45  8B CA                     MOV ECX,EDX
00712B47  4F                        DEC EDI
00712B48  C1 E9 02                  SHR ECX,0x2
00712B4B  F3 A5                     MOVSD.REP ES:EDI,ESI
00712B4D  8B CA                     MOV ECX,EDX
00712B4F  83 E1 03                  AND ECX,0x3
00712B52  F3 A4                     MOVSB.REP ES:EDI,ESI
00712B54  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00712B57  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00712B5A  50                        PUSH EAX
00712B5B  53                        PUSH EBX
00712B5C  51                        PUSH ECX
00712B5D  E8 BE 34 FA FF            CALL 0x006b6020
00712B62  8D 55 FC                  LEA EDX,[EBP + -0x4]
00712B65  52                        PUSH EDX
00712B66  E8 F5 84 F9 FF            CALL 0x006ab060
00712B6B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00712B6E  EB 10                     JMP 0x00712b80
LAB_00712b70:
00712B70  3B 75 08                  CMP ESI,dword ptr [EBP + 0x8]
00712B73  74 0B                     JZ 0x00712b80
00712B75  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00712B78  57                        PUSH EDI
00712B79  53                        PUSH EBX
00712B7A  50                        PUSH EAX
00712B7B  E8 A0 34 FA FF            CALL 0x006b6020
LAB_00712b80:
00712B80  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00712B83  43                        INC EBX
00712B84  3B D8                     CMP EBX,EAX
00712B86  0F 8C CD FE FF FF         JL 0x00712a59
LAB_00712b8c:
00712B8C  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
00712B8F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00712B92  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712B98  5F                        POP EDI
00712B99  5E                        POP ESI
00712B9A  5B                        POP EBX
00712B9B  8B E5                     MOV ESP,EBP
00712B9D  5D                        POP EBP
00712B9E  C2 08 00                  RET 0x8
LAB_00712ba1:
00712BA1  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
00712BA4  68 04 03 7F 00            PUSH 0x7f0304
00712BA9  68 CC 4C 7A 00            PUSH 0x7a4ccc
00712BAE  57                        PUSH EDI
00712BAF  53                        PUSH EBX
00712BB0  68 57 08 00 00            PUSH 0x857
00712BB5  68 90 01 7F 00            PUSH 0x7f0190
00712BBA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00712BC0  E8 0B A9 F9 FF            CALL 0x006ad4d0
00712BC5  83 C4 18                  ADD ESP,0x18
00712BC8  85 C0                     TEST EAX,EAX
00712BCA  74 01                     JZ 0x00712bcd
00712BCC  CC                        INT3
LAB_00712bcd:
00712BCD  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
00712BD0  74 09                     JZ 0x00712bdb
00712BD2  8D 45 FC                  LEA EAX,[EBP + -0x4]
00712BD5  50                        PUSH EAX
00712BD6  E8 85 84 F9 FF            CALL 0x006ab060
LAB_00712bdb:
00712BDB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00712BDE  3B C3                     CMP EAX,EBX
00712BE0  74 0B                     JZ 0x00712bed
00712BE2  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
00712BE5  74 06                     JZ 0x00712bed
00712BE7  50                        PUSH EAX
00712BE8  E8 83 29 FA FF            CALL 0x006b5570
LAB_00712bed:
00712BED  68 5C 08 00 00            PUSH 0x85c
00712BF2  68 90 01 7F 00            PUSH 0x7f0190
00712BF7  53                        PUSH EBX
00712BF8  57                        PUSH EDI
00712BF9  E8 42 32 F9 FF            CALL 0x006a5e40
00712BFE  5F                        POP EDI
00712BFF  5E                        POP ESI
00712C00  33 C0                     XOR EAX,EAX
00712C02  5B                        POP EBX
00712C03  8B E5                     MOV ESP,EBP
00712C05  5D                        POP EBP
00712C06  C2 08 00                  RET 0x8
