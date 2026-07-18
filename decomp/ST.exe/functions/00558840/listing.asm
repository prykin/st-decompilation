FUN_00558840:
00558840  55                        PUSH EBP
00558841  8B EC                     MOV EBP,ESP
00558843  83 EC 54                  SUB ESP,0x54
00558846  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0055884B  56                        PUSH ESI
0055884C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0055884F  57                        PUSH EDI
00558850  8D 55 B0                  LEA EDX,[EBP + -0x50]
00558853  8D 4D AC                  LEA ECX,[EBP + -0x54]
00558856  6A 00                     PUSH 0x0
00558858  52                        PUSH EDX
00558859  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0055885C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00558862  E8 89 4F 1D 00            CALL 0x0072d7f0
00558867  8B F0                     MOV ESI,EAX
00558869  83 C4 08                  ADD ESP,0x8
0055886C  85 F6                     TEST ESI,ESI
0055886E  0F 85 26 02 00 00         JNZ 0x00558a9a
00558874  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00558879  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0055887C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055887F  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00558885  89 8E 08 01 00 00         MOV dword ptr [ESI + 0x108],ECX
0055888B  8B 42 10                  MOV EAX,dword ptr [EDX + 0x10]
0055888E  3D 08 01 00 00            CMP EAX,0x108
00558893  0F 87 8D 01 00 00         JA 0x00558a26
00558899  0F 84 CC 00 00 00         JZ 0x0055896b
0055889F  83 E8 00                  SUB EAX,0x0
005588A2  0F 84 A9 00 00 00         JZ 0x00558951
005588A8  83 E8 02                  SUB EAX,0x2
005588AB  74 37                     JZ 0x005588e4
005588AD  48                        DEC EAX
005588AE  0F 85 C8 01 00 00         JNZ 0x00558a7c
005588B4  8B CE                     MOV ECX,ESI
005588B6  E8 D4 98 EA FF            CALL 0x0040218f
005588BB  8B 86 14 01 00 00         MOV EAX,dword ptr [ESI + 0x114]
005588C1  85 C0                     TEST EAX,EAX
005588C3  74 0B                     JZ 0x005588d0
005588C5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005588CB  E8 A0 EF 1B 00            CALL 0x00717870
LAB_005588d0:
005588D0  E8 89 A1 EA FF            CALL 0x00402a5e
005588D5  C7 05 88 2A 80 00 00 00 00 00  MOV dword ptr [0x00802a88],0x0
005588DF  E9 98 01 00 00            JMP 0x00558a7c
LAB_005588e4:
005588E4  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
005588EA  33 C0                     XOR EAX,EAX
005588EC  85 C9                     TEST ECX,ECX
005588EE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005588F1  74 14                     JZ 0x00558907
005588F3  50                        PUSH EAX
005588F4  50                        PUSH EAX
005588F5  A1 C4 AE 79 00            MOV EAX,[0x0079aec4]
005588FA  50                        PUSH EAX
005588FB  51                        PUSH ECX
005588FC  E8 8F A4 19 00            CALL 0x006f2d90
00558901  83 C4 10                  ADD ESP,0x10
00558904  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00558907:
00558907  85 C0                     TEST EAX,EAX
00558909  74 11                     JZ 0x0055891c
0055890B  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0055890E  85 C9                     TEST ECX,ECX
00558910  74 0A                     JZ 0x0055891c
00558912  50                        PUSH EAX
00558913  8B CE                     MOV ECX,ESI
00558915  E8 D6 C8 EA FF            CALL 0x004051f0
0055891A  EB 07                     JMP 0x00558923
LAB_0055891c:
0055891C  8B CE                     MOV ECX,ESI
0055891E  E8 39 C1 EA FF            CALL 0x00404a5c
LAB_00558923:
00558923  8B CE                     MOV ECX,ESI
00558925  E8 D5 D2 EA FF            CALL 0x00405bff
0055892A  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
00558930  85 C9                     TEST ECX,ECX
00558932  0F 84 44 01 00 00         JZ 0x00558a7c
00558938  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0055893B  85 C0                     TEST EAX,EAX
0055893D  0F 84 39 01 00 00         JZ 0x00558a7c
00558943  8D 55 FC                  LEA EDX,[EBP + -0x4]
00558946  52                        PUSH EDX
00558947  E8 94 97 19 00            CALL 0x006f20e0
0055894C  E9 2B 01 00 00            JMP 0x00558a7c
LAB_00558951:
00558951  8B 86 14 01 00 00         MOV EAX,dword ptr [ESI + 0x114]
00558957  85 C0                     TEST EAX,EAX
00558959  0F 84 1D 01 00 00         JZ 0x00558a7c
0055895F  8B CE                     MOV ECX,ESI
00558961  E8 CE B6 EA FF            CALL 0x00404034
00558966  E9 11 01 00 00            JMP 0x00558a7c
LAB_0055896b:
0055896B  8B 86 14 01 00 00         MOV EAX,dword ptr [ESI + 0x114]
00558971  85 C0                     TEST EAX,EAX
00558973  0F 84 03 01 00 00         JZ 0x00558a7c
00558979  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
0055897F  E8 98 CE EA FF            CALL 0x0040581c
00558984  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
00558987  8B 7E 50                  MOV EDI,dword ptr [ESI + 0x50]
0055898A  0F AF 4E 34               IMUL ECX,dword ptr [ESI + 0x34]
0055898E  D1 E1                     SHL ECX,0x1
00558990  8B D1                     MOV EDX,ECX
00558992  89 86 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EAX
00558998  33 C0                     XOR EAX,EAX
0055899A  C1 E9 02                  SHR ECX,0x2
0055899D  F3 AB                     STOSD.REP ES:EDI
0055899F  8B CA                     MOV ECX,EDX
005589A1  83 E1 03                  AND ECX,0x3
005589A4  F3 AA                     STOSB.REP ES:EDI
005589A6  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
005589A9  8B 7E 4C                  MOV EDI,dword ptr [ESI + 0x4c]
005589AC  0F AF 4E 34               IMUL ECX,dword ptr [ESI + 0x34]
005589B0  8B D1                     MOV EDX,ECX
005589B2  33 C0                     XOR EAX,EAX
005589B4  C1 E9 02                  SHR ECX,0x2
005589B7  F3 AB                     STOSD.REP ES:EDI
005589B9  8B CA                     MOV ECX,EDX
005589BB  83 E1 03                  AND ECX,0x3
005589BE  F3 AA                     STOSB.REP ES:EDI
005589C0  8B 8E 10 01 00 00         MOV ECX,dword ptr [ESI + 0x110]
005589C6  33 FF                     XOR EDI,EDI
005589C8  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005589CB  85 C0                     TEST EAX,EAX
005589CD  0F 8E A9 00 00 00         JLE 0x00558a7c
005589D3  3B F8                     CMP EDI,EAX
LAB_005589d5:
005589D5  73 0D                     JNC 0x005589e4
005589D7  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005589DA  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005589DD  0F AF C7                  IMUL EAX,EDI
005589E0  03 C2                     ADD EAX,EDX
005589E2  EB 02                     JMP 0x005589e6
LAB_005589e4:
005589E4  33 C0                     XOR EAX,EAX
LAB_005589e6:
005589E6  80 38 00                  CMP byte ptr [EAX],0x0
005589E9  75 2B                     JNZ 0x00558a16
005589EB  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005589EE  33 D2                     XOR EDX,EDX
005589F0  8A 50 07                  MOV DL,byte ptr [EAX + 0x7]
005589F3  68 00 40 00 00            PUSH 0x4000
005589F8  51                        PUSH ECX
005589F9  52                        PUSH EDX
005589FA  0F BE 50 06               MOVSX EDX,byte ptr [EAX + 0x6]
005589FE  33 C9                     XOR ECX,ECX
00558A00  8A 48 01                  MOV CL,byte ptr [EAX + 0x1]
00558A03  51                        PUSH ECX
00558A04  52                        PUSH EDX
00558A05  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
00558A09  0F BF 50 02               MOVSX EDX,word ptr [EAX + 0x2]
00558A0D  51                        PUSH ECX
00558A0E  52                        PUSH EDX
00558A0F  8B CE                     MOV ECX,ESI
00558A11  E8 76 AE EA FF            CALL 0x0040388c
LAB_00558a16:
00558A16  8B 8E 10 01 00 00         MOV ECX,dword ptr [ESI + 0x110]
00558A1C  47                        INC EDI
00558A1D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00558A20  3B F8                     CMP EDI,EAX
00558A22  7C B1                     JL 0x005589d5
00558A24  EB 56                     JMP 0x00558a7c
LAB_00558a26:
00558A26  2D 0F 01 00 00            SUB EAX,0x10f
00558A2B  74 11                     JZ 0x00558a3e
00558A2D  83 E8 02                  SUB EAX,0x2
00558A30  75 4A                     JNZ 0x00558a7c
00558A32  C7 86 04 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x104],0x0
00558A3C  EB 3E                     JMP 0x00558a7c
LAB_00558a3e:
00558A3E  8D 45 F8                  LEA EAX,[EBP + -0x8]
00558A41  8B CE                     MOV ECX,ESI
00558A43  50                        PUSH EAX
00558A44  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00558A4B  E8 D4 A7 EA FF            CALL 0x00403224
00558A50  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00558A53  8B 15 C4 AE 79 00         MOV EDX,dword ptr [0x0079aec4]
00558A59  6A 0C                     PUSH 0xc
00558A5B  51                        PUSH ECX
00558A5C  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00558A62  50                        PUSH EAX
00558A63  52                        PUSH EDX
00558A64  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00558A67  E8 0C 86 EA FF            CALL 0x00401078
00558A6C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00558A6F  85 C0                     TEST EAX,EAX
00558A71  74 09                     JZ 0x00558a7c
00558A73  8D 45 F4                  LEA EAX,[EBP + -0xc]
00558A76  50                        PUSH EAX
00558A77  E8 E4 25 15 00            CALL 0x006ab060
LAB_00558a7c:
00558A7C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00558A7F  51                        PUSH ECX
00558A80  8B CE                     MOV ECX,ESI
00558A82  E8 49 D5 18 00            CALL 0x006e5fd0
00558A87  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00558A8A  33 C0                     XOR EAX,EAX
00558A8C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00558A92  5F                        POP EDI
00558A93  5E                        POP ESI
00558A94  8B E5                     MOV ESP,EBP
00558A96  5D                        POP EBP
00558A97  C2 04 00                  RET 0x4
LAB_00558a9a:
00558A9A  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00558A9D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00558AA0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00558AA5  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00558AA8  52                        PUSH EDX
00558AA9  68 80 93 7C 00            PUSH 0x7c9380
00558AAE  56                        PUSH ESI
00558AAF  6A 00                     PUSH 0x0
00558AB1  68 86 01 00 00            PUSH 0x186
00558AB6  68 CC 92 7C 00            PUSH 0x7c92cc
00558ABB  E8 10 4A 15 00            CALL 0x006ad4d0
00558AC0  83 C4 18                  ADD ESP,0x18
00558AC3  85 C0                     TEST EAX,EAX
00558AC5  74 01                     JZ 0x00558ac8
00558AC7  CC                        INT3
LAB_00558ac8:
00558AC8  68 87 01 00 00            PUSH 0x187
00558ACD  68 CC 92 7C 00            PUSH 0x7c92cc
00558AD2  6A 00                     PUSH 0x0
00558AD4  56                        PUSH ESI
00558AD5  E8 66 D3 14 00            CALL 0x006a5e40
00558ADA  5F                        POP EDI
00558ADB  B8 FF FF 00 00            MOV EAX,0xffff
00558AE0  5E                        POP ESI
00558AE1  8B E5                     MOV ESP,EBP
00558AE3  5D                        POP EBP
00558AE4  C2 04 00                  RET 0x4
