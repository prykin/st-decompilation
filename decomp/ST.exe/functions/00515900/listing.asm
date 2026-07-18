HelpPanelTy::DrawWeapon:
00515900  55                        PUSH EBP
00515901  8B EC                     MOV EBP,ESP
00515903  83 EC 68                  SUB ESP,0x68
00515906  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0051590B  53                        PUSH EBX
0051590C  56                        PUSH ESI
0051590D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00515910  57                        PUSH EDI
00515911  8D 55 9C                  LEA EDX,[EBP + -0x64]
00515914  8D 4D 98                  LEA ECX,[EBP + -0x68]
00515917  6A 00                     PUSH 0x0
00515919  52                        PUSH EDX
0051591A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00515921  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
00515924  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051592A  E8 C1 7E 21 00            CALL 0x0072d7f0
0051592F  8B F0                     MOV ESI,EAX
00515931  83 C4 08                  ADD ESP,0x8
00515934  85 F6                     TEST ESI,ESI
00515936  0F 85 CC 01 00 00         JNZ 0x00515b08
0051593C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0051593F  85 C0                     TEST EAX,EAX
00515941  0F 84 AC 01 00 00         JZ 0x00515af3
00515947  6A 01                     PUSH 0x1
00515949  56                        PUSH ESI
0051594A  50                        PUSH EAX
0051594B  E8 2F BA EE FF            CALL 0x0040137f
00515950  50                        PUSH EAX
00515951  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00515954  8B 88 44 02 00 00         MOV ECX,dword ptr [EAX + 0x244]
0051595A  51                        PUSH ECX
0051595B  E8 40 5A 1F 00            CALL 0x0070b3a0
00515960  8B F0                     MOV ESI,EAX
00515962  83 C4 14                  ADD ESP,0x14
00515965  85 F6                     TEST ESI,ESI
00515967  0F 84 86 01 00 00         JZ 0x00515af3
0051596D  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00515970  83 C0 F1                  ADD EAX,-0xf
00515973  85 C0                     TEST EAX,EAX
00515975  7E 07                     JLE 0x0051597e
00515977  99                        CDQ
00515978  2B C2                     SUB EAX,EDX
0051597A  D1 F8                     SAR EAX,0x1
0051597C  EB 02                     JMP 0x00515980
LAB_0051597e:
0051597E  33 C0                     XOR EAX,EAX
LAB_00515980:
00515980  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00515983  BA 9C 01 00 00            MOV EDX,0x19c
00515988  6A 0F                     PUSH 0xf
0051598A  8B 3B                     MOV EDI,dword ptr [EBX]
0051598C  03 F8                     ADD EDI,EAX
0051598E  89 3B                     MOV dword ptr [EBX],EDI
00515990  8B C7                     MOV EAX,EDI
00515992  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00515995  2B D7                     SUB EDX,EDI
00515997  52                        PUSH EDX
00515998  50                        PUSH EAX
00515999  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051599C  57                        PUSH EDI
0051599D  6A 00                     PUSH 0x0
0051599F  8B 88 18 02 00 00         MOV ECX,dword ptr [EAX + 0x218]
005159A5  51                        PUSH ECX
005159A6  8B 88 E0 01 00 00         MOV ECX,dword ptr [EAX + 0x1e0]
005159AC  E8 DF B0 1F 00            CALL 0x00710a90
005159B1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005159B4  85 C0                     TEST EAX,EAX
005159B6  74 30                     JZ 0x005159e8
005159B8  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
005159BE  50                        PUSH EAX
005159BF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005159C2  52                        PUSH EDX
005159C3  50                        PUSH EAX
005159C4  E8 CB EA EE FF            CALL 0x00404494
005159C9  83 C4 04                  ADD ESP,0x4
005159CC  50                        PUSH EAX
005159CD  E8 6E A7 19 00            CALL 0x006b0140
005159D2  50                        PUSH EAX
005159D3  68 C0 3B 7C 00            PUSH 0x7c3bc0
005159D8  68 3A F3 80 00            PUSH 0x80f33a
005159DD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005159E3  83 C4 10                  ADD ESP,0x10
005159E6  EB 2D                     JMP 0x00515a15
LAB_005159e8:
005159E8  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005159EE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005159F1  51                        PUSH ECX
005159F2  52                        PUSH EDX
005159F3  E8 9C EA EE FF            CALL 0x00404494
005159F8  83 C4 04                  ADD ESP,0x4
005159FB  50                        PUSH EAX
005159FC  E8 3F A7 19 00            CALL 0x006b0140
00515A01  50                        PUSH EAX
00515A02  68 CC 4C 7A 00            PUSH 0x7a4ccc
00515A07  68 3A F3 80 00            PUSH 0x80f33a
00515A0C  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00515A12  83 C4 0C                  ADD ESP,0xc
LAB_00515a15:
00515A15  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
00515A1B  33 C0                     XOR EAX,EAX
00515A1D  80 F9 03                  CMP CL,0x3
00515A20  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00515A23  0F 95 C0                  SETNZ AL
00515A26  8B 89 E0 01 00 00         MOV ECX,dword ptr [ECX + 0x1e0]
00515A2C  48                        DEC EAX
00515A2D  83 E0 05                  AND EAX,0x5
00515A30  50                        PUSH EAX
00515A31  6A FF                     PUSH -0x1
00515A33  6A 01                     PUSH 0x1
00515A35  68 3A F3 80 00            PUSH 0x80f33a
00515A3A  E8 81 BF 1F 00            CALL 0x007119c0
00515A3F  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00515A42  B8 0F 00 00 00            MOV EAX,0xf
00515A47  2B C2                     SUB EAX,EDX
00515A49  56                        PUSH ESI
00515A4A  99                        CDQ
00515A4B  2B C2                     SUB EAX,EDX
00515A4D  8B 13                     MOV EDX,dword ptr [EBX]
00515A4F  D1 F8                     SAR EAX,0x1
00515A51  03 C2                     ADD EAX,EDX
00515A53  6A 06                     PUSH 0x6
00515A55  50                        PUSH EAX
00515A56  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00515A59  8B D7                     MOV EDX,EDI
00515A5B  2B D0                     SUB EDX,EAX
00515A5D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00515A60  83 EA 05                  SUB EDX,0x5
00515A63  8B 88 18 02 00 00         MOV ECX,dword ptr [EAX + 0x218]
00515A69  52                        PUSH EDX
00515A6A  51                        PUSH ECX
00515A6B  E8 B9 D7 EE FF            CALL 0x00403229
00515A70  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00515A73  83 C4 14                  ADD ESP,0x14
00515A76  2B F8                     SUB EDI,EAX
00515A78  B8 0F 00 00 00            MOV EAX,0xf
00515A7D  83 EF 05                  SUB EDI,0x5
00515A80  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00515A83  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00515A86  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00515A89  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00515A8C  2B C1                     SUB EAX,ECX
00515A8E  8B 0B                     MOV ECX,dword ptr [EBX]
00515A90  99                        CDQ
00515A91  2B C2                     SUB EAX,EDX
00515A93  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00515A96  D1 F8                     SAR EAX,0x1
00515A98  03 C1                     ADD EAX,ECX
00515A9A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00515A9D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00515AA0  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00515AA3  89 4D ED                  MOV dword ptr [EBP + -0x13],ECX
00515AA6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00515AA9  81 E2 FF 00 00 00         AND EDX,0xff
00515AAF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00515AB2  89 55 F1                  MOV dword ptr [EBP + -0xf],EDX
00515AB5  8B 91 D7 01 00 00         MOV EDX,dword ptr [ECX + 0x1d7]
00515ABB  8D 45 DC                  LEA EAX,[EBP + -0x24]
00515ABE  C6 45 EC 04               MOV byte ptr [EBP + -0x14],0x4
00515AC2  50                        PUSH EAX
00515AC3  52                        PUSH EDX
00515AC4  E8 F7 86 19 00            CALL 0x006ae1c0
00515AC9  8B 76 08                  MOV ESI,dword ptr [ESI + 0x8]
00515ACC  83 FE 0F                  CMP ESI,0xf
00515ACF  7F 05                     JG 0x00515ad6
00515AD1  BE 0F 00 00 00            MOV ESI,0xf
LAB_00515ad6:
00515AD6  8B 03                     MOV EAX,dword ptr [EBX]
00515AD8  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00515ADB  03 C6                     ADD EAX,ESI
00515ADD  89 03                     MOV dword ptr [EBX],EAX
00515ADF  B8 01 00 00 00            MOV EAX,0x1
00515AE4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00515AEA  5F                        POP EDI
00515AEB  5E                        POP ESI
00515AEC  5B                        POP EBX
00515AED  8B E5                     MOV ESP,EBP
00515AEF  5D                        POP EBP
00515AF0  C2 14 00                  RET 0x14
LAB_00515af3:
00515AF3  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
00515AF6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00515AF9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00515AFF  5F                        POP EDI
00515B00  5E                        POP ESI
00515B01  5B                        POP EBX
00515B02  8B E5                     MOV ESP,EBP
00515B04  5D                        POP EBP
00515B05  C2 14 00                  RET 0x14
LAB_00515b08:
00515B08  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00515B0B  68 A4 3B 7C 00            PUSH 0x7c3ba4
00515B10  68 CC 4C 7A 00            PUSH 0x7a4ccc
00515B15  56                        PUSH ESI
00515B16  6A 00                     PUSH 0x0
00515B18  68 12 04 00 00            PUSH 0x412
00515B1D  68 3C 38 7C 00            PUSH 0x7c383c
00515B22  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00515B28  E8 A3 79 19 00            CALL 0x006ad4d0
00515B2D  83 C4 18                  ADD ESP,0x18
00515B30  85 C0                     TEST EAX,EAX
00515B32  74 01                     JZ 0x00515b35
00515B34  CC                        INT3
LAB_00515b35:
00515B35  68 12 04 00 00            PUSH 0x412
00515B3A  68 3C 38 7C 00            PUSH 0x7c383c
00515B3F  6A 00                     PUSH 0x0
00515B41  56                        PUSH ESI
00515B42  E8 F9 02 19 00            CALL 0x006a5e40
00515B47  5F                        POP EDI
00515B48  5E                        POP ESI
00515B49  33 C0                     XOR EAX,EAX
00515B4B  5B                        POP EBX
00515B4C  8B E5                     MOV ESP,EBP
00515B4E  5D                        POP EBP
00515B4F  C2 14 00                  RET 0x14
