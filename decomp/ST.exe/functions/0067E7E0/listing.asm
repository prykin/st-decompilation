FUN_0067e7e0:
0067E7E0  55                        PUSH EBP
0067E7E1  8B EC                     MOV EBP,ESP
0067E7E3  81 EC 38 03 00 00         SUB ESP,0x338
0067E7E9  53                        PUSH EBX
0067E7EA  56                        PUSH ESI
0067E7EB  57                        PUSH EDI
0067E7EC  B9 80 00 00 00            MOV ECX,0x80
0067E7F1  33 C0                     XOR EAX,EAX
0067E7F3  8D BD C8 FC FF FF         LEA EDI,[EBP + 0xfffffcc8]
0067E7F9  F3 AB                     STOSD.REP ES:EDI
0067E7FB  33 F6                     XOR ESI,ESI
0067E7FD  8D 95 68 FF FF FF         LEA EDX,[EBP + 0xffffff68]
0067E803  AA                        STOSB ES:EDI
0067E804  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067E809  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
0067E80F  56                        PUSH ESI
0067E810  52                        PUSH EDX
0067E811  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0067E814  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0067E817  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0067E81D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E823  E8 C8 EF 0A 00            CALL 0x0072d7f0
0067E828  8B F8                     MOV EDI,EAX
0067E82A  83 C4 08                  ADD ESP,0x8
0067E82D  3B FE                     CMP EDI,ESI
0067E82F  0F 85 CE 02 00 00         JNZ 0x0067eb03
0067E835  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0067E838  3B DE                     CMP EBX,ESI
0067E83A  75 17                     JNZ 0x0067e853
0067E83C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067E841  68 16 02 00 00            PUSH 0x216
0067E846  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E84B  50                        PUSH EAX
0067E84C  6A CC                     PUSH -0x34
0067E84E  E8 ED 75 02 00            CALL 0x006a5e40
LAB_0067e853:
0067E853  6A 05                     PUSH 0x5
0067E855  68 98 00 00 00            PUSH 0x98
0067E85A  6A 05                     PUSH 0x5
0067E85C  56                        PUSH ESI
0067E85D  E8 2E FA 02 00            CALL 0x006ae290
0067E862  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067E865  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067E868  3B C6                     CMP EAX,ESI
0067E86A  74 0F                     JZ 0x0067e87b
0067E86C  6A FF                     PUSH -0x1
0067E86E  56                        PUSH ESI
0067E86F  53                        PUSH EBX
0067E870  E8 CF 56 D8 FF            CALL 0x00403f44
0067E875  83 C4 0C                  ADD ESP,0xc
0067E878  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0067e87b:
0067E87B  8B 3D 20 D7 79 00         MOV EDI,dword ptr [0x0079d720]
0067E881  83 C9 FF                  OR ECX,0xffffffff
0067E884  33 C0                     XOR EAX,EAX
0067E886  C6 85 C8 FC FF FF 0C      MOV byte ptr [EBP + 0xfffffcc8],0xc
0067E88D  F2 AE                     SCASB.REPNE ES:EDI
0067E88F  F7 D1                     NOT ECX
0067E891  2B F9                     SUB EDI,ECX
0067E893  8D 95 C9 FC FF FF         LEA EDX,[EBP + 0xfffffcc9]
0067E899  8B C1                     MOV EAX,ECX
0067E89B  8B F7                     MOV ESI,EDI
0067E89D  8B FA                     MOV EDI,EDX
0067E89F  C1 E9 02                  SHR ECX,0x2
0067E8A2  F3 A5                     MOVSD.REP ES:EDI,ESI
0067E8A4  8B C8                     MOV ECX,EAX
0067E8A6  83 E1 03                  AND ECX,0x3
0067E8A9  F3 A4                     MOVSB.REP ES:EDI,ESI
0067E8AB  8D 8D C8 FC FF FF         LEA ECX,[EBP + 0xfffffcc8]
0067E8B1  51                        PUSH ECX
0067E8B2  68 10 2D 6F 00            PUSH 0x6f2d10
0067E8B7  8B CB                     MOV ECX,EBX
0067E8B9  E8 F2 29 07 00            CALL 0x006f12b0
0067E8BE  8B CB                     MOV ECX,EBX
0067E8C0  E8 CB 3E 07 00            CALL 0x006f2790
0067E8C5  8B D8                     MOV EBX,EAX
0067E8C7  85 DB                     TEST EBX,EBX
0067E8C9  0F 84 11 02 00 00         JZ 0x0067eae0
LAB_0067e8cf:
0067E8CF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067E8D2  6A 01                     PUSH 0x1
0067E8D4  6A 00                     PUSH 0x0
0067E8D6  53                        PUSH EBX
0067E8D7  52                        PUSH EDX
0067E8D8  E8 B3 44 07 00            CALL 0x006f2d90
0067E8DD  8B D0                     MOV EDX,EAX
0067E8DF  83 C4 10                  ADD ESP,0x10
0067E8E2  85 D2                     TEST EDX,EDX
0067E8E4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0067E8E7  0F 84 E1 01 00 00         JZ 0x0067eace
0067E8ED  B9 26 00 00 00            MOV ECX,0x26
0067E8F2  33 C0                     XOR EAX,EAX
0067E8F4  8D BD CC FE FF FF         LEA EDI,[EBP + 0xfffffecc]
0067E8FA  83 C2 06                  ADD EDX,0x6
0067E8FD  F3 AB                     STOSD.REP ES:EDI
0067E8FF  6A 3F                     PUSH 0x3f
0067E901  8D 85 CC FE FF FF         LEA EAX,[EBP + 0xfffffecc]
0067E907  52                        PUSH EDX
0067E908  50                        PUSH EAX
0067E909  E8 32 FA 0A 00            CALL 0x0072e340
0067E90E  6A 1F                     PUSH 0x1f
0067E910  8D 8D 18 FF FF FF         LEA ECX,[EBP + 0xffffff18]
0067E916  53                        PUSH EBX
0067E917  51                        PUSH ECX
0067E918  E8 23 FA 0A 00            CALL 0x0072e340
0067E91D  8B 3D 20 D7 79 00         MOV EDI,dword ptr [0x0079d720]
0067E923  83 C9 FF                  OR ECX,0xffffffff
0067E926  33 C0                     XOR EAX,EAX
0067E928  8D 55 A8                  LEA EDX,[EBP + -0x58]
0067E92B  F2 AE                     SCASB.REPNE ES:EDI
0067E92D  F7 D1                     NOT ECX
0067E92F  2B F9                     SUB EDI,ECX
0067E931  8B C1                     MOV EAX,ECX
0067E933  8B F7                     MOV ESI,EDI
0067E935  8B FA                     MOV EDI,EDX
0067E937  8D 55 A8                  LEA EDX,[EBP + -0x58]
0067E93A  C1 E9 02                  SHR ECX,0x2
0067E93D  F3 A5                     MOVSD.REP ES:EDI,ESI
0067E93F  8B C8                     MOV ECX,EAX
0067E941  33 C0                     XOR EAX,EAX
0067E943  83 E1 03                  AND ECX,0x3
0067E946  F3 A4                     MOVSB.REP ES:EDI,ESI
0067E948  BF 90 18 7C 00            MOV EDI,0x7c1890
0067E94D  83 C9 FF                  OR ECX,0xffffffff
0067E950  F2 AE                     SCASB.REPNE ES:EDI
0067E952  F7 D1                     NOT ECX
0067E954  2B F9                     SUB EDI,ECX
0067E956  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0067E959  8B F7                     MOV ESI,EDI
0067E95B  8B FA                     MOV EDI,EDX
0067E95D  8B D1                     MOV EDX,ECX
0067E95F  83 C9 FF                  OR ECX,0xffffffff
0067E962  F2 AE                     SCASB.REPNE ES:EDI
0067E964  8B CA                     MOV ECX,EDX
0067E966  4F                        DEC EDI
0067E967  C1 E9 02                  SHR ECX,0x2
0067E96A  F3 A5                     MOVSD.REP ES:EDI,ESI
0067E96C  8B CA                     MOV ECX,EDX
0067E96E  8D 45 EC                  LEA EAX,[EBP + -0x14]
0067E971  83 E1 03                  AND ECX,0x3
0067E974  50                        PUSH EAX
0067E975  F3 A4                     MOVSB.REP ES:EDI,ESI
0067E977  8D 4D A8                  LEA ECX,[EBP + -0x58]
0067E97A  51                        PUSH ECX
0067E97B  53                        PUSH EBX
0067E97C  E8 FF 04 0B 00            CALL 0x0072ee80
0067E981  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0067E984  83 C4 24                  ADD ESP,0x24
0067E987  85 D2                     TEST EDX,EDX
0067E989  75 17                     JNZ 0x0067e9a2
0067E98B  8B 15 18 D7 79 00         MOV EDX,dword ptr [0x0079d718]
0067E991  6A 1F                     PUSH 0x1f
0067E993  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
0067E999  52                        PUSH EDX
0067E99A  50                        PUSH EAX
0067E99B  E8 A0 F9 0A 00            CALL 0x0072e340
0067E9A0  EB 65                     JMP 0x0067ea07
LAB_0067e9a2:
0067E9A2  8B 3D 18 D7 79 00         MOV EDI,dword ptr [0x0079d718]
0067E9A8  83 C9 FF                  OR ECX,0xffffffff
0067E9AB  33 C0                     XOR EAX,EAX
0067E9AD  8D 5D A8                  LEA EBX,[EBP + -0x58]
0067E9B0  F2 AE                     SCASB.REPNE ES:EDI
0067E9B2  F7 D1                     NOT ECX
0067E9B4  2B F9                     SUB EDI,ECX
0067E9B6  52                        PUSH EDX
0067E9B7  8B C1                     MOV EAX,ECX
0067E9B9  8B F7                     MOV ESI,EDI
0067E9BB  8B FB                     MOV EDI,EBX
0067E9BD  8D 5D A8                  LEA EBX,[EBP + -0x58]
0067E9C0  C1 E9 02                  SHR ECX,0x2
0067E9C3  F3 A5                     MOVSD.REP ES:EDI,ESI
0067E9C5  8B C8                     MOV ECX,EAX
0067E9C7  33 C0                     XOR EAX,EAX
0067E9C9  83 E1 03                  AND ECX,0x3
0067E9CC  8D 95 3C FF FF FF         LEA EDX,[EBP + 0xffffff3c]
0067E9D2  F3 A4                     MOVSB.REP ES:EDI,ESI
0067E9D4  BF F0 30 7D 00            MOV EDI,0x7d30f0
0067E9D9  83 C9 FF                  OR ECX,0xffffffff
0067E9DC  F2 AE                     SCASB.REPNE ES:EDI
0067E9DE  F7 D1                     NOT ECX
0067E9E0  2B F9                     SUB EDI,ECX
0067E9E2  8B F7                     MOV ESI,EDI
0067E9E4  8B FB                     MOV EDI,EBX
0067E9E6  8B D9                     MOV EBX,ECX
0067E9E8  83 C9 FF                  OR ECX,0xffffffff
0067E9EB  F2 AE                     SCASB.REPNE ES:EDI
0067E9ED  8B CB                     MOV ECX,EBX
0067E9EF  4F                        DEC EDI
0067E9F0  C1 E9 02                  SHR ECX,0x2
0067E9F3  F3 A5                     MOVSD.REP ES:EDI,ESI
0067E9F5  8B CB                     MOV ECX,EBX
0067E9F7  83 E1 03                  AND ECX,0x3
0067E9FA  F3 A4                     MOVSB.REP ES:EDI,ESI
0067E9FC  8D 4D A8                  LEA ECX,[EBP + -0x58]
0067E9FF  51                        PUSH ECX
0067EA00  52                        PUSH EDX
0067EA01  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
LAB_0067ea07:
0067EA07  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067EA0A  33 C9                     XOR ECX,ECX
0067EA0C  83 C4 0C                  ADD ESP,0xc
0067EA0F  8B 58 52                  MOV EBX,dword ptr [EAX + 0x52]
0067EA12  3B D9                     CMP EBX,ECX
0067EA14  89 9D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EBX
0067EA1A  75 0B                     JNZ 0x0067ea27
0067EA1C  BB 01 00 00 00            MOV EBX,0x1
0067EA21  89 9D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EBX
LAB_0067ea27:
0067EA27  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0067EA2A  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
0067EA30  3B D1                     CMP EDX,ECX
0067EA32  B8 01 00 00 00            MOV EAX,0x1
0067EA37  74 75                     JZ 0x0067eaae
0067EA39  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0067EA3C  33 FF                     XOR EDI,EDI
0067EA3E  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0067EA41  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0067EA44  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0067EA47  85 D2                     TEST EDX,EDX
0067EA49  7E 48                     JLE 0x0067ea93
0067EA4B  3B CA                     CMP ECX,EDX
LAB_0067ea4d:
0067EA4D  73 0B                     JNC 0x0067ea5a
0067EA4F  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0067EA52  0F AF C1                  IMUL EAX,ECX
0067EA55  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
0067EA58  EB 02                     JMP 0x0067ea5c
LAB_0067ea5a:
0067EA5A  33 C0                     XOR EAX,EAX
LAB_0067ea5c:
0067EA5C  85 C0                     TEST EAX,EAX
0067EA5E  74 2E                     JZ 0x0067ea8e
0067EA60  85 98 90 00 00 00         TEST dword ptr [EAX + 0x90],EBX
0067EA66  74 26                     JZ 0x0067ea8e
0067EA68  8B 80 94 00 00 00         MOV EAX,dword ptr [EAX + 0x94]
0067EA6E  48                        DEC EAX
0067EA6F  74 18                     JZ 0x0067ea89
0067EA71  48                        DEC EAX
0067EA72  74 0C                     JZ 0x0067ea80
0067EA74  48                        DEC EAX
0067EA75  75 17                     JNZ 0x0067ea8e
0067EA77  C7 45 E8 01 00 00 00      MOV dword ptr [EBP + -0x18],0x1
0067EA7E  EB 0E                     JMP 0x0067ea8e
LAB_0067ea80:
0067EA80  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0067EA87  EB 05                     JMP 0x0067ea8e
LAB_0067ea89:
0067EA89  BF 01 00 00 00            MOV EDI,0x1
LAB_0067ea8e:
0067EA8E  41                        INC ECX
0067EA8F  3B CA                     CMP ECX,EDX
0067EA91  7C BA                     JL 0x0067ea4d
LAB_0067ea93:
0067EA93  85 FF                     TEST EDI,EDI
0067EA95  74 15                     JZ 0x0067eaac
0067EA97  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0067EA9A  85 C0                     TEST EAX,EAX
0067EA9C  74 0E                     JZ 0x0067eaac
0067EA9E  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0067EAA1  85 C0                     TEST EAX,EAX
0067EAA3  74 07                     JZ 0x0067eaac
0067EAA5  B8 01 00 00 00            MOV EAX,0x1
0067EAAA  EB 02                     JMP 0x0067eaae
LAB_0067eaac:
0067EAAC  33 C0                     XOR EAX,EAX
LAB_0067eaae:
0067EAAE  85 C0                     TEST EAX,EAX
0067EAB0  74 10                     JZ 0x0067eac2
0067EAB2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067EAB5  8D 8D CC FE FF FF         LEA ECX,[EBP + 0xfffffecc]
0067EABB  51                        PUSH ECX
0067EABC  52                        PUSH EDX
0067EABD  E8 FE F6 02 00            CALL 0x006ae1c0
LAB_0067eac2:
0067EAC2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067EAC5  8D 45 F8                  LEA EAX,[EBP + -0x8]
0067EAC8  50                        PUSH EAX
0067EAC9  E8 12 36 07 00            CALL 0x006f20e0
LAB_0067eace:
0067EACE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0067EAD1  E8 BA 3C 07 00            CALL 0x006f2790
0067EAD6  8B D8                     MOV EBX,EAX
0067EAD8  85 DB                     TEST EBX,EBX
0067EADA  0F 85 EF FD FF FF         JNZ 0x0067e8cf
LAB_0067eae0:
0067EAE0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067EAE3  85 C0                     TEST EAX,EAX
0067EAE5  74 06                     JZ 0x0067eaed
0067EAE7  50                        PUSH EAX
0067EAE8  E8 23 F6 02 00            CALL 0x006ae110
LAB_0067eaed:
0067EAED  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
0067EAF3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067EAF6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067EAFC  5F                        POP EDI
0067EAFD  5E                        POP ESI
0067EAFE  5B                        POP EBX
0067EAFF  8B E5                     MOV ESP,EBP
0067EB01  5D                        POP EBP
0067EB02  C3                        RET
LAB_0067eb03:
0067EB03  8B 95 64 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff64]
0067EB09  68 E0 30 7D 00            PUSH 0x7d30e0
0067EB0E  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067EB13  57                        PUSH EDI
0067EB14  56                        PUSH ESI
0067EB15  68 45 02 00 00            PUSH 0x245
0067EB1A  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067EB1F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067EB25  E8 A6 E9 02 00            CALL 0x006ad4d0
0067EB2A  83 C4 18                  ADD ESP,0x18
0067EB2D  85 C0                     TEST EAX,EAX
0067EB2F  74 01                     JZ 0x0067eb32
0067EB31  CC                        INT3
LAB_0067eb32:
0067EB32  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067EB35  3B C6                     CMP EAX,ESI
0067EB37  74 06                     JZ 0x0067eb3f
0067EB39  50                        PUSH EAX
0067EB3A  E8 D1 F5 02 00            CALL 0x006ae110
LAB_0067eb3f:
0067EB3F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067EB42  3B C6                     CMP EAX,ESI
0067EB44  74 06                     JZ 0x0067eb4c
0067EB46  50                        PUSH EAX
0067EB47  E8 C4 F5 02 00            CALL 0x006ae110
LAB_0067eb4c:
0067EB4C  68 48 02 00 00            PUSH 0x248
0067EB51  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067EB56  56                        PUSH ESI
0067EB57  57                        PUSH EDI
0067EB58  E8 E3 72 02 00            CALL 0x006a5e40
0067EB5D  5F                        POP EDI
0067EB5E  5E                        POP ESI
0067EB5F  33 C0                     XOR EAX,EAX
0067EB61  5B                        POP EBX
0067EB62  8B E5                     MOV ESP,EBP
0067EB64  5D                        POP EBP
0067EB65  C3                        RET
