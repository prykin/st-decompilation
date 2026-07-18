STTmMineC::LoadImagVacuum:
0063F3D0  55                        PUSH EBP
0063F3D1  8B EC                     MOV EBP,ESP
0063F3D3  83 EC 50                  SUB ESP,0x50
0063F3D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0063F3DB  53                        PUSH EBX
0063F3DC  56                        PUSH ESI
0063F3DD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063F3E0  57                        PUSH EDI
0063F3E1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0063F3E4  8D 4D B0                  LEA ECX,[EBP + -0x50]
0063F3E7  6A 00                     PUSH 0x0
0063F3E9  52                        PUSH EDX
0063F3EA  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0063F3F1  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0063F3F4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0063F3FA  E8 F1 E3 0E 00            CALL 0x0072d7f0
0063F3FF  8B F0                     MOV ESI,EAX
0063F401  83 C4 08                  ADD ESP,0x8
0063F404  85 F6                     TEST ESI,ESI
0063F406  0F 85 6E 02 00 00         JNZ 0x0063f67a
0063F40C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0063F40F  83 CB FF                  OR EBX,0xffffffff
0063F412  39 9E 3A 03 00 00         CMP dword ptr [ESI + 0x33a],EBX
0063F418  0F 85 04 01 00 00         JNZ 0x0063f522
0063F41E  A1 74 67 80 00            MOV EAX,[0x00806774]
0063F423  6A 00                     PUSH 0x0
0063F425  6A 00                     PUSH 0x0
0063F427  6A 01                     PUSH 0x1
0063F429  6A 00                     PUSH 0x0
0063F42B  53                        PUSH EBX
0063F42C  68 1C 20 7D 00            PUSH 0x7d201c
0063F431  6A 1D                     PUSH 0x1d
0063F433  50                        PUSH EAX
0063F434  E8 B7 A6 0C 00            CALL 0x00709af0
0063F439  8B F8                     MOV EDI,EAX
0063F43B  83 C4 20                  ADD ESP,0x20
0063F43E  8B 4F 09                  MOV ECX,dword ptr [EDI + 0x9]
0063F441  6A 00                     PUSH 0x0
0063F443  8B C1                     MOV EAX,ECX
0063F445  68 A9 00 00 00            PUSH 0xa9
0063F44A  99                        CDQ
0063F44B  2B C2                     SUB EAX,EDX
0063F44D  8B 57 0D                  MOV EDX,dword ptr [EDI + 0xd]
0063F450  D1 F8                     SAR EAX,0x1
0063F452  50                        PUSH EAX
0063F453  52                        PUSH EDX
0063F454  51                        PUSH ECX
0063F455  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F45B  6A 00                     PUSH 0x0
0063F45D  8D 45 FC                  LEA EAX,[EBP + -0x4]
0063F460  6A 01                     PUSH 0x1
0063F462  50                        PUSH EAX
0063F463  E8 F8 91 0A 00            CALL 0x006e8660
0063F468  8B 4F 21                  MOV ECX,dword ptr [EDI + 0x21]
0063F46B  8B 17                     MOV EDX,dword ptr [EDI]
0063F46D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063F470  6A 01                     PUSH 0x1
0063F472  51                        PUSH ECX
0063F473  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F479  52                        PUSH EDX
0063F47A  6A 00                     PUSH 0x0
0063F47C  50                        PUSH EAX
0063F47D  E8 5E A4 0A 00            CALL 0x006e98e0
0063F482  8B 8E 3E 03 00 00         MOV ECX,dword ptr [ESI + 0x33e]
0063F488  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063F48B  51                        PUSH ECX
0063F48C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F492  6A 00                     PUSH 0x0
0063F494  52                        PUSH EDX
0063F495  E8 D6 AD 0A 00            CALL 0x006ea270
0063F49A  DB 86 6E 02 00 00         FILD dword ptr [ESI + 0x26e]
0063F4A0  51                        PUSH ECX
0063F4A1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063F4A4  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063F4AA  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063F4B0  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063F4B6  D9 1C 24                  FSTP float ptr [ESP]
0063F4B9  DB 86 6A 02 00 00         FILD dword ptr [ESI + 0x26a]
0063F4BF  51                        PUSH ECX
0063F4C0  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063F4C6  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063F4CC  D9 1C 24                  FSTP float ptr [ESP]
0063F4CF  DB 86 66 02 00 00         FILD dword ptr [ESI + 0x266]
0063F4D5  51                        PUSH ECX
0063F4D6  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F4DC  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063F4E2  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063F4E8  D9 1C 24                  FSTP float ptr [ESP]
0063F4EB  50                        PUSH EAX
0063F4EC  E8 6F B4 0A 00            CALL 0x006ea960
0063F4F1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0063F4F4  6A 00                     PUSH 0x0
0063F4F6  51                        PUSH ECX
0063F4F7  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F4FD  E8 9E B5 0A 00            CALL 0x006eaaa0
0063F502  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063F505  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F50B  52                        PUSH EDX
0063F50C  E8 4F B6 0A 00            CALL 0x006eab60
0063F511  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063F514  89 86 3A 03 00 00         MOV dword ptr [ESI + 0x33a],EAX
0063F51A  8B 0F                     MOV ECX,dword ptr [EDI]
0063F51C  89 8E 42 03 00 00         MOV dword ptr [ESI + 0x342],ECX
LAB_0063f522:
0063F522  8B 86 53 03 00 00         MOV EAX,dword ptr [ESI + 0x353]
0063F528  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0063F52B  3B C3                     CMP EAX,EBX
0063F52D  75 33                     JNZ 0x0063f562
0063F52F  85 FF                     TEST EDI,EDI
0063F531  74 2F                     JZ 0x0063f562
0063F533  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
0063F539  6A 00                     PUSH 0x0
0063F53B  6A 00                     PUSH 0x0
0063F53D  6A 01                     PUSH 0x1
0063F53F  6A 00                     PUSH 0x0
0063F541  53                        PUSH EBX
0063F542  68 5C 1F 7D 00            PUSH 0x7d1f5c
0063F547  6A 1D                     PUSH 0x1d
0063F549  52                        PUSH EDX
0063F54A  E8 A1 A5 0C 00            CALL 0x00709af0
0063F54F  83 C4 20                  ADD ESP,0x20
0063F552  89 86 4B 03 00 00         MOV dword ptr [ESI + 0x34b],EAX
0063F558  C7 86 4F 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x34f],0x0
LAB_0063f562:
0063F562  8B 86 63 03 00 00         MOV EAX,dword ptr [ESI + 0x363]
0063F568  8D 9E 63 03 00 00         LEA EBX,[ESI + 0x363]
0063F56E  83 F8 FF                  CMP EAX,-0x1
0063F571  0F 85 EE 00 00 00         JNZ 0x0063f665
0063F577  85 FF                     TEST EDI,EDI
0063F579  0F 84 E6 00 00 00         JZ 0x0063f665
0063F57F  A1 74 67 80 00            MOV EAX,[0x00806774]
0063F584  6A 00                     PUSH 0x0
0063F586  6A 00                     PUSH 0x0
0063F588  6A 01                     PUSH 0x1
0063F58A  6A 00                     PUSH 0x0
0063F58C  6A FF                     PUSH -0x1
0063F58E  68 28 20 7D 00            PUSH 0x7d2028
0063F593  6A 1D                     PUSH 0x1d
0063F595  50                        PUSH EAX
0063F596  E8 55 A5 0C 00            CALL 0x00709af0
0063F59B  83 C4 20                  ADD ESP,0x20
0063F59E  8B F8                     MOV EDI,EAX
0063F5A0  89 BE 5F 03 00 00         MOV dword ptr [ESI + 0x35f],EDI
0063F5A6  8B 4F 0D                  MOV ECX,dword ptr [EDI + 0xd]
0063F5A9  8B 57 09                  MOV EDX,dword ptr [EDI + 0x9]
0063F5AC  6A 00                     PUSH 0x0
0063F5AE  6A 43                     PUSH 0x43
0063F5B0  68 A8 00 00 00            PUSH 0xa8
0063F5B5  51                        PUSH ECX
0063F5B6  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F5BC  52                        PUSH EDX
0063F5BD  6A 00                     PUSH 0x0
0063F5BF  6A 01                     PUSH 0x1
0063F5C1  53                        PUSH EBX
0063F5C2  E8 99 90 0A 00            CALL 0x006e8660
0063F5C7  8B 47 21                  MOV EAX,dword ptr [EDI + 0x21]
0063F5CA  8B 0F                     MOV ECX,dword ptr [EDI]
0063F5CC  8B 13                     MOV EDX,dword ptr [EBX]
0063F5CE  6A 01                     PUSH 0x1
0063F5D0  50                        PUSH EAX
0063F5D1  51                        PUSH ECX
0063F5D2  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F5D8  6A 00                     PUSH 0x0
0063F5DA  52                        PUSH EDX
0063F5DB  E8 00 A3 0A 00            CALL 0x006e98e0
0063F5E0  8B 86 67 03 00 00         MOV EAX,dword ptr [ESI + 0x367]
0063F5E6  8B 0B                     MOV ECX,dword ptr [EBX]
0063F5E8  50                        PUSH EAX
0063F5E9  6A 00                     PUSH 0x0
0063F5EB  51                        PUSH ECX
0063F5EC  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F5F2  E8 79 AC 0A 00            CALL 0x006ea270
0063F5F7  DB 86 6E 02 00 00         FILD dword ptr [ESI + 0x26e]
0063F5FD  51                        PUSH ECX
0063F5FE  8B 13                     MOV EDX,dword ptr [EBX]
0063F600  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063F606  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063F60C  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063F612  D9 1C 24                  FSTP float ptr [ESP]
0063F615  DB 86 6A 02 00 00         FILD dword ptr [ESI + 0x26a]
0063F61B  51                        PUSH ECX
0063F61C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063F622  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063F628  D9 1C 24                  FSTP float ptr [ESP]
0063F62B  DB 86 66 02 00 00         FILD dword ptr [ESI + 0x266]
0063F631  51                        PUSH ECX
0063F632  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F638  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063F63E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063F644  D9 1C 24                  FSTP float ptr [ESP]
0063F647  52                        PUSH EDX
0063F648  E8 13 B3 0A 00            CALL 0x006ea960
0063F64D  8B 03                     MOV EAX,dword ptr [EBX]
0063F64F  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0063F655  6A 00                     PUSH 0x0
0063F657  50                        PUSH EAX
0063F658  E8 43 B4 0A 00            CALL 0x006eaaa0
0063F65D  8B 0F                     MOV ECX,dword ptr [EDI]
0063F65F  89 8E 6B 03 00 00         MOV dword ptr [ESI + 0x36b],ECX
LAB_0063f665:
0063F665  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0063F668  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0063F66B  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0063F671  5F                        POP EDI
0063F672  5E                        POP ESI
0063F673  5B                        POP EBX
0063F674  8B E5                     MOV ESP,EBP
0063F676  5D                        POP EBP
0063F677  C2 04 00                  RET 0x4
LAB_0063f67a:
0063F67A  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0063F67D  68 18 21 7D 00            PUSH 0x7d2118
0063F682  68 CC 4C 7A 00            PUSH 0x7a4ccc
0063F687  56                        PUSH ESI
0063F688  6A 00                     PUSH 0x0
0063F68A  68 94 07 00 00            PUSH 0x794
0063F68F  68 9C 20 7D 00            PUSH 0x7d209c
0063F694  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0063F699  E8 32 DE 06 00            CALL 0x006ad4d0
0063F69E  83 C4 18                  ADD ESP,0x18
0063F6A1  85 C0                     TEST EAX,EAX
0063F6A3  74 01                     JZ 0x0063f6a6
0063F6A5  CC                        INT3
LAB_0063f6a6:
0063F6A6  68 96 07 00 00            PUSH 0x796
0063F6AB  68 9C 20 7D 00            PUSH 0x7d209c
0063F6B0  6A 00                     PUSH 0x0
0063F6B2  56                        PUSH ESI
0063F6B3  E8 88 67 06 00            CALL 0x006a5e40
0063F6B8  5F                        POP EDI
0063F6B9  5E                        POP ESI
0063F6BA  B8 FF FF 00 00            MOV EAX,0xffff
0063F6BF  5B                        POP EBX
0063F6C0  8B E5                     MOV ESP,EBP
0063F6C2  5D                        POP EBP
0063F6C3  C2 04 00                  RET 0x4
