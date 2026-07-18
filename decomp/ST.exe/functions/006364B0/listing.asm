FUN_006364b0:
006364B0  55                        PUSH EBP
006364B1  8B EC                     MOV EBP,ESP
006364B3  51                        PUSH ECX
006364B4  53                        PUSH EBX
006364B5  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006364B8  56                        PUSH ESI
006364B9  57                        PUSH EDI
006364BA  85 DB                     TEST EBX,EBX
006364BC  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006364C3  0F 84 00 01 00 00         JZ 0x006365c9
006364C9  0F 8E 7E 01 00 00         JLE 0x0063664d
006364CF  83 FB 02                  CMP EBX,0x2
006364D2  0F 8F 75 01 00 00         JG 0x0063664d
006364D8  6A 00                     PUSH 0x0
006364DA  6A 00                     PUSH 0x0
006364DC  6A 01                     PUSH 0x1
006364DE  83 FB 01                  CMP EBX,0x1
006364E1  6A 00                     PUSH 0x0
006364E3  6A FF                     PUSH -0x1
006364E5  75 0F                     JNZ 0x006364f6
006364E7  A1 74 67 80 00            MOV EAX,[0x00806774]
006364EC  68 1C 1C 7D 00            PUSH 0x7d1c1c
006364F1  6A 1D                     PUSH 0x1d
006364F3  50                        PUSH EAX
006364F4  EB 0E                     JMP 0x00636504
LAB_006364f6:
006364F6  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
006364FC  68 24 1C 7D 00            PUSH 0x7d1c24
00636501  6A 1D                     PUSH 0x1d
00636503  51                        PUSH ECX
LAB_00636504:
00636504  E8 E7 35 0D 00            CALL 0x00709af0
00636509  8B F0                     MOV ESI,EAX
0063650B  83 C4 20                  ADD ESP,0x20
0063650E  85 F6                     TEST ESI,ESI
00636510  0F 84 37 01 00 00         JZ 0x0063664d
00636516  A1 98 75 80 00            MOV EAX,[0x00807598]
0063651B  85 C0                     TEST EAX,EAX
0063651D  0F 84 2A 01 00 00         JZ 0x0063664d
00636523  8B 7E 0D                  MOV EDI,dword ptr [ESI + 0xd]
00636526  8B 4E 09                  MOV ECX,dword ptr [ESI + 0x9]
00636529  8B C7                     MOV EAX,EDI
0063652B  6A 00                     PUSH 0x0
0063652D  99                        CDQ
0063652E  2B C2                     SUB EAX,EDX
00636530  D1 F8                     SAR EAX,0x1
00636532  50                        PUSH EAX
00636533  8B C1                     MOV EAX,ECX
00636535  99                        CDQ
00636536  2B C2                     SUB EAX,EDX
00636538  8D 55 FC                  LEA EDX,[EBP + -0x4]
0063653B  D1 F8                     SAR EAX,0x1
0063653D  50                        PUSH EAX
0063653E  57                        PUSH EDI
0063653F  51                        PUSH ECX
00636540  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00636546  6A 00                     PUSH 0x0
00636548  6A 01                     PUSH 0x1
0063654A  52                        PUSH EDX
0063654B  E8 10 21 0B 00            CALL 0x006e8660
00636550  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
00636553  8B 0E                     MOV ECX,dword ptr [ESI]
00636555  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00636558  6A 01                     PUSH 0x1
0063655A  50                        PUSH EAX
0063655B  51                        PUSH ECX
0063655C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00636562  6A 00                     PUSH 0x0
00636564  52                        PUSH EDX
00636565  E8 76 33 0B 00            CALL 0x006e98e0
0063656A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063656D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00636573  6A 00                     PUSH 0x0
00636575  6A 00                     PUSH 0x0
00636577  50                        PUSH EAX
00636578  E8 F3 3C 0B 00            CALL 0x006ea270
0063657D  83 FB 01                  CMP EBX,0x1
00636580  75 21                     JNZ 0x006365a3
00636582  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00636585  6A 00                     PUSH 0x0
00636587  6A 02                     PUSH 0x2
00636589  6A 00                     PUSH 0x0
0063658B  51                        PUSH ECX
0063658C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00636592  E8 09 43 0B 00            CALL 0x006ea8a0
00636597  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063659A  5F                        POP EDI
0063659B  5E                        POP ESI
0063659C  5B                        POP EBX
0063659D  8B E5                     MOV ESP,EBP
0063659F  5D                        POP EBP
006365A0  C2 04 00                  RET 0x4
LAB_006365a3:
006365A3  8B 15 B8 32 80 00         MOV EDX,dword ptr [0x008032b8]
006365A9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006365AC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006365B2  52                        PUSH EDX
006365B3  6A 02                     PUSH 0x2
006365B5  6A 00                     PUSH 0x0
006365B7  50                        PUSH EAX
006365B8  E8 E3 42 0B 00            CALL 0x006ea8a0
006365BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006365C0  5F                        POP EDI
006365C1  5E                        POP ESI
006365C2  5B                        POP EBX
006365C3  8B E5                     MOV ESP,EBP
006365C5  5D                        POP EBP
006365C6  C2 04 00                  RET 0x4
LAB_006365c9:
006365C9  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
006365CF  6A 00                     PUSH 0x0
006365D1  6A 00                     PUSH 0x0
006365D3  6A 00                     PUSH 0x0
006365D5  6A 00                     PUSH 0x0
006365D7  6A FF                     PUSH -0x1
006365D9  68 14 1C 7D 00            PUSH 0x7d1c14
006365DE  6A 1D                     PUSH 0x1d
006365E0  51                        PUSH ECX
006365E1  E8 0A 35 0D 00            CALL 0x00709af0
006365E6  8B F0                     MOV ESI,EAX
006365E8  83 C4 20                  ADD ESP,0x20
006365EB  85 F6                     TEST ESI,ESI
006365ED  74 5E                     JZ 0x0063664d
006365EF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006365F5  85 C9                     TEST ECX,ECX
006365F7  74 54                     JZ 0x0063664d
006365F9  8B 7E 0D                  MOV EDI,dword ptr [ESI + 0xd]
006365FC  8B 5E 09                  MOV EBX,dword ptr [ESI + 0x9]
006365FF  8B C7                     MOV EAX,EDI
00636601  6A 00                     PUSH 0x0
00636603  99                        CDQ
00636604  2B C2                     SUB EAX,EDX
00636606  D1 F8                     SAR EAX,0x1
00636608  50                        PUSH EAX
00636609  8B C3                     MOV EAX,EBX
0063660B  99                        CDQ
0063660C  2B C2                     SUB EAX,EDX
0063660E  8D 55 FC                  LEA EDX,[EBP + -0x4]
00636611  D1 F8                     SAR EAX,0x1
00636613  50                        PUSH EAX
00636614  57                        PUSH EDI
00636615  53                        PUSH EBX
00636616  6A 00                     PUSH 0x0
00636618  6A 01                     PUSH 0x1
0063661A  52                        PUSH EDX
0063661B  E8 40 20 0B 00            CALL 0x006e8660
00636620  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
00636623  8B 0E                     MOV ECX,dword ptr [ESI]
00636625  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00636628  6A 01                     PUSH 0x1
0063662A  50                        PUSH EAX
0063662B  51                        PUSH ECX
0063662C  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00636632  6A 00                     PUSH 0x0
00636634  52                        PUSH EDX
00636635  E8 A6 32 0B 00            CALL 0x006e98e0
0063663A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063663D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00636643  6A 00                     PUSH 0x0
00636645  6A 00                     PUSH 0x0
00636647  50                        PUSH EAX
00636648  E8 23 3C 0B 00            CALL 0x006ea270
LAB_0063664d:
0063664D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00636650  5F                        POP EDI
00636651  5E                        POP ESI
00636652  5B                        POP EBX
00636653  8B E5                     MOV ESP,EBP
00636655  5D                        POP EBP
00636656  C2 04 00                  RET 0x4
