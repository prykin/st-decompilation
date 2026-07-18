FUN_00638070:
00638070  55                        PUSH EBP
00638071  8B EC                     MOV EBP,ESP
00638073  51                        PUSH ECX
00638074  53                        PUSH EBX
00638075  A1 74 67 80 00            MOV EAX,[0x00806774]
0063807A  56                        PUSH ESI
0063807B  57                        PUSH EDI
0063807C  6A 00                     PUSH 0x0
0063807E  6A 00                     PUSH 0x0
00638080  6A 01                     PUSH 0x1
00638082  6A 00                     PUSH 0x0
00638084  6A FF                     PUSH -0x1
00638086  68 80 1C 7D 00            PUSH 0x7d1c80
0063808B  6A 1D                     PUSH 0x1d
0063808D  50                        PUSH EAX
0063808E  E8 5D 1A 0D 00            CALL 0x00709af0
00638093  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00638096  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00638099  8B F0                     MOV ESI,EAX
0063809B  83 C4 20                  ADD ESP,0x20
0063809E  85 F6                     TEST ESI,ESI
006380A0  74 76                     JZ 0x00638118
006380A2  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006380A8  85 C9                     TEST ECX,ECX
006380AA  74 6C                     JZ 0x00638118
006380AC  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
006380AF  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
006380B2  6A 00                     PUSH 0x0
006380B4  6A 45                     PUSH 0x45
006380B6  6A 5A                     PUSH 0x5a
006380B8  52                        PUSH EDX
006380B9  50                        PUSH EAX
006380BA  6A 00                     PUSH 0x0
006380BC  8D 55 FC                  LEA EDX,[EBP + -0x4]
006380BF  6A 01                     PUSH 0x1
006380C1  52                        PUSH EDX
006380C2  E8 99 05 0B 00            CALL 0x006e8660
006380C7  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
006380CA  8B 0E                     MOV ECX,dword ptr [ESI]
006380CC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006380CF  6A 01                     PUSH 0x1
006380D1  50                        PUSH EAX
006380D2  51                        PUSH ECX
006380D3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006380D9  6A 00                     PUSH 0x0
006380DB  52                        PUSH EDX
006380DC  E8 FF 17 0B 00            CALL 0x006e98e0
006380E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006380E4  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006380EA  6A 00                     PUSH 0x0
006380EC  6A 00                     PUSH 0x0
006380EE  50                        PUSH EAX
006380EF  E8 7C 21 0B 00            CALL 0x006ea270
006380F4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006380F7  53                        PUSH EBX
006380F8  57                        PUSH EDI
006380F9  6A 02                     PUSH 0x2
006380FB  51                        PUSH ECX
006380FC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638102  E8 49 1F 0B 00            CALL 0x006ea050
00638107  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063810A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638110  6A 00                     PUSH 0x0
00638112  52                        PUSH EDX
00638113  E8 88 29 0B 00            CALL 0x006eaaa0
LAB_00638118:
00638118  A1 74 67 80 00            MOV EAX,[0x00806774]
0063811D  6A 00                     PUSH 0x0
0063811F  6A 00                     PUSH 0x0
00638121  6A 01                     PUSH 0x1
00638123  6A 00                     PUSH 0x0
00638125  6A FF                     PUSH -0x1
00638127  68 8C 1C 7D 00            PUSH 0x7d1c8c
0063812C  6A 1D                     PUSH 0x1d
0063812E  50                        PUSH EAX
0063812F  E8 BC 19 0D 00            CALL 0x00709af0
00638134  8B F0                     MOV ESI,EAX
00638136  83 C4 20                  ADD ESP,0x20
00638139  85 F6                     TEST ESI,ESI
0063813B  0F 84 86 00 00 00         JZ 0x006381c7
00638141  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638147  85 C9                     TEST ECX,ECX
00638149  74 7C                     JZ 0x006381c7
0063814B  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
0063814E  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00638151  6A 00                     PUSH 0x0
00638153  6A 45                     PUSH 0x45
00638155  6A 5A                     PUSH 0x5a
00638157  52                        PUSH EDX
00638158  50                        PUSH EAX
00638159  6A 00                     PUSH 0x0
0063815B  8D 55 FC                  LEA EDX,[EBP + -0x4]
0063815E  6A 01                     PUSH 0x1
00638160  52                        PUSH EDX
00638161  E8 FA 04 0B 00            CALL 0x006e8660
00638166  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
00638169  8B 0E                     MOV ECX,dword ptr [ESI]
0063816B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063816E  6A 01                     PUSH 0x1
00638170  50                        PUSH EAX
00638171  51                        PUSH ECX
00638172  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638178  6A 00                     PUSH 0x0
0063817A  52                        PUSH EDX
0063817B  E8 60 17 0B 00            CALL 0x006e98e0
00638180  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00638183  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638189  6A 00                     PUSH 0x0
0063818B  6A 00                     PUSH 0x0
0063818D  50                        PUSH EAX
0063818E  E8 DD 20 0B 00            CALL 0x006ea270
00638193  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00638196  53                        PUSH EBX
00638197  57                        PUSH EDI
00638198  6A 02                     PUSH 0x2
0063819A  51                        PUSH ECX
0063819B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006381A1  E8 AA 1E 0B 00            CALL 0x006ea050
006381A6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006381A9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006381AF  52                        PUSH EDX
006381B0  57                        PUSH EDI
006381B1  E8 AA 22 0B 00            CALL 0x006ea460
006381B6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006381B9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006381BF  6A 00                     PUSH 0x0
006381C1  50                        PUSH EAX
006381C2  E8 D9 28 0B 00            CALL 0x006eaaa0
LAB_006381c7:
006381C7  5F                        POP EDI
006381C8  5E                        POP ESI
006381C9  5B                        POP EBX
006381CA  8B E5                     MOV ESP,EBP
006381CC  5D                        POP EBP
006381CD  C3                        RET
