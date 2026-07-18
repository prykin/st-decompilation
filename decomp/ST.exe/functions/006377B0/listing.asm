FUN_006377b0:
006377B0  55                        PUSH EBP
006377B1  8B EC                     MOV EBP,ESP
006377B3  51                        PUSH ECX
006377B4  A1 74 67 80 00            MOV EAX,[0x00806774]
006377B9  56                        PUSH ESI
006377BA  6A 00                     PUSH 0x0
006377BC  6A 00                     PUSH 0x0
006377BE  6A 01                     PUSH 0x1
006377C0  6A 00                     PUSH 0x0
006377C2  6A FF                     PUSH -0x1
006377C4  68 30 1C 7D 00            PUSH 0x7d1c30
006377C9  6A 1D                     PUSH 0x1d
006377CB  50                        PUSH EAX
006377CC  E8 1F 23 0D 00            CALL 0x00709af0
006377D1  8B F0                     MOV ESI,EAX
006377D3  83 C4 20                  ADD ESP,0x20
006377D6  85 F6                     TEST ESI,ESI
006377D8  0F 84 EF 00 00 00         JZ 0x006378cd
006377DE  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006377E4  85 C9                     TEST ECX,ECX
006377E6  0F 84 E1 00 00 00         JZ 0x006378cd
006377EC  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
006377EF  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
006377F2  6A 00                     PUSH 0x0
006377F4  6A 33                     PUSH 0x33
006377F6  6A 5A                     PUSH 0x5a
006377F8  52                        PUSH EDX
006377F9  50                        PUSH EAX
006377FA  6A 00                     PUSH 0x0
006377FC  8D 55 FC                  LEA EDX,[EBP + -0x4]
006377FF  6A 01                     PUSH 0x1
00637801  52                        PUSH EDX
00637802  E8 59 0E 0B 00            CALL 0x006e8660
00637807  8B 46 21                  MOV EAX,dword ptr [ESI + 0x21]
0063780A  8B 0E                     MOV ECX,dword ptr [ESI]
0063780C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063780F  6A 01                     PUSH 0x1
00637811  50                        PUSH EAX
00637812  51                        PUSH ECX
00637813  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637819  6A 00                     PUSH 0x0
0063781B  52                        PUSH EDX
0063781C  E8 BF 20 0B 00            CALL 0x006e98e0
00637821  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00637824  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00637827  50                        PUSH EAX
00637828  6A 00                     PUSH 0x0
0063782A  51                        PUSH ECX
0063782B  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637831  E8 3A 2A 0B 00            CALL 0x006ea270
00637836  DB 45 18                  FILD dword ptr [EBP + 0x18]
00637839  51                        PUSH ECX
0063783A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063783D  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00637843  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00637849  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
0063784F  D9 1C 24                  FSTP float ptr [ESP]
00637852  DB 45 14                  FILD dword ptr [EBP + 0x14]
00637855  51                        PUSH ECX
00637856  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063785C  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00637862  D9 1C 24                  FSTP float ptr [ESP]
00637865  DB 45 10                  FILD dword ptr [EBP + 0x10]
00637868  51                        PUSH ECX
00637869  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0063786F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00637875  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063787B  D9 1C 24                  FSTP float ptr [ESP]
0063787E  52                        PUSH EDX
0063787F  E8 DC 30 0B 00            CALL 0x006ea960
00637884  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00637887  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063788A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637890  56                        PUSH ESI
00637891  50                        PUSH EAX
00637892  E8 C9 2B 0B 00            CALL 0x006ea460
00637897  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0063789A  6A 00                     PUSH 0x0
0063789C  85 C0                     TEST EAX,EAX
0063789E  74 09                     JZ 0x006378a9
006378A0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006378A3  56                        PUSH ESI
006378A4  6A 01                     PUSH 0x1
006378A6  51                        PUSH ECX
006378A7  EB 08                     JMP 0x006378b1
LAB_006378a9:
006378A9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006378AC  6A FF                     PUSH -0x1
006378AE  6A 01                     PUSH 0x1
006378B0  52                        PUSH EDX
LAB_006378b1:
006378B1  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006378B7  E8 94 27 0B 00            CALL 0x006ea050
006378BC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006378BF  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006378C5  6A 00                     PUSH 0x0
006378C7  50                        PUSH EAX
006378C8  E8 D3 31 0B 00            CALL 0x006eaaa0
LAB_006378cd:
006378CD  5E                        POP ESI
006378CE  8B E5                     MOV ESP,EBP
006378D0  5D                        POP EBP
006378D1  C3                        RET
