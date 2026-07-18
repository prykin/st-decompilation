FUN_00609d60:
00609D60  55                        PUSH EBP
00609D61  8B EC                     MOV EBP,ESP
00609D63  83 EC 50                  SUB ESP,0x50
00609D66  8B 89 34 02 00 00         MOV ECX,dword ptr [ECX + 0x234]
00609D6C  56                        PUSH ESI
00609D6D  85 C9                     TEST ECX,ECX
00609D6F  57                        PUSH EDI
00609D70  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00609D77  0F 84 DB 01 00 00         JZ 0x00609f58
00609D7D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00609D80  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00609D83  3B D0                     CMP EDX,EAX
00609D85  73 0B                     JNC 0x00609d92
00609D87  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00609D8A  0F AF C2                  IMUL EAX,EDX
00609D8D  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
00609D90  EB 02                     JMP 0x00609d94
LAB_00609d92:
00609D92  33 C0                     XOR EAX,EAX
LAB_00609d94:
00609D94  85 C0                     TEST EAX,EAX
00609D96  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00609D99  0F 84 62 01 00 00         JZ 0x00609f01
00609D9F  83 78 04 FF               CMP dword ptr [EAX + 0x4],-0x1
00609DA3  0F 84 58 01 00 00         JZ 0x00609f01
00609DA9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00609DAE  8D 55 B4                  LEA EDX,[EBP + -0x4c]
00609DB1  8D 4D B0                  LEA ECX,[EBP + -0x50]
00609DB4  6A 00                     PUSH 0x0
00609DB6  52                        PUSH EDX
00609DB7  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
00609DBA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00609DC0  E8 2B 3A 12 00            CALL 0x0072d7f0
00609DC5  8B F0                     MOV ESI,EAX
00609DC7  83 C4 08                  ADD ESP,0x8
00609DCA  85 F6                     TEST ESI,ESI
00609DCC  0F 85 3A 01 00 00         JNZ 0x00609f0c
00609DD2  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00609DD5  56                        PUSH ESI
00609DD6  56                        PUSH ESI
00609DD7  6A 01                     PUSH 0x1
00609DD9  8B 07                     MOV EAX,dword ptr [EDI]
00609DDB  56                        PUSH ESI
00609DDC  83 F8 04                  CMP EAX,0x4
00609DDF  6A FF                     PUSH -0x1
00609DE1  73 13                     JNC 0x00609df6
00609DE3  8B 04 85 D0 F6 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7cf6d0]
00609DEA  8B 0D 64 67 80 00         MOV ECX,dword ptr [0x00806764]
00609DF0  50                        PUSH EAX
00609DF1  6A 1D                     PUSH 0x1d
00609DF3  51                        PUSH ECX
00609DF4  EB 10                     JMP 0x00609e06
LAB_00609df6:
00609DF6  8B 14 85 D0 F6 7C 00      MOV EDX,dword ptr [EAX*0x4 + 0x7cf6d0]
00609DFD  A1 74 67 80 00            MOV EAX,[0x00806774]
00609E02  52                        PUSH EDX
00609E03  6A 1D                     PUSH 0x1d
00609E05  50                        PUSH EAX
LAB_00609e06:
00609E06  E8 E5 FC 0F 00            CALL 0x00709af0
00609E0B  8B 0F                     MOV ECX,dword ptr [EDI]
00609E0D  8B F0                     MOV ESI,EAX
00609E0F  C1 E1 03                  SHL ECX,0x3
00609E12  83 C4 20                  ADD ESP,0x20
00609E15  8B 81 F4 F6 7C 00         MOV EAX,dword ptr [ECX + 0x7cf6f4]
00609E1B  99                        CDQ
00609E1C  2B C2                     SUB EAX,EDX
00609E1E  6A 00                     PUSH 0x0
00609E20  D1 F8                     SAR EAX,0x1
00609E22  83 E8 0E                  SUB EAX,0xe
00609E25  50                        PUSH EAX
00609E26  8B 81 F0 F6 7C 00         MOV EAX,dword ptr [ECX + 0x7cf6f0]
00609E2C  8B 4E 0D                  MOV ECX,dword ptr [ESI + 0xd]
00609E2F  99                        CDQ
00609E30  2B C2                     SUB EAX,EDX
00609E32  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
00609E35  D1 F8                     SAR EAX,0x1
00609E37  50                        PUSH EAX
00609E38  51                        PUSH ECX
00609E39  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00609E3F  52                        PUSH EDX
00609E40  6A 00                     PUSH 0x0
00609E42  8D 45 FC                  LEA EAX,[EBP + -0x4]
00609E45  6A 01                     PUSH 0x1
00609E47  50                        PUSH EAX
00609E48  E8 13 E8 0D 00            CALL 0x006e8660
00609E4D  8B 4E 21                  MOV ECX,dword ptr [ESI + 0x21]
00609E50  8B 16                     MOV EDX,dword ptr [ESI]
00609E52  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00609E55  6A 01                     PUSH 0x1
00609E57  51                        PUSH ECX
00609E58  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00609E5E  52                        PUSH EDX
00609E5F  6A 00                     PUSH 0x0
00609E61  50                        PUSH EAX
00609E62  E8 79 FA 0D 00            CALL 0x006e98e0
00609E67  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00609E6A  6A 00                     PUSH 0x0
00609E6C  6A 00                     PUSH 0x0
00609E6E  51                        PUSH ECX
00609E6F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00609E75  E8 F6 03 0E 00            CALL 0x006ea270
00609E7A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00609E7D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00609E83  6A 00                     PUSH 0x0
00609E85  6A 00                     PUSH 0x0
00609E87  52                        PUSH EDX
00609E88  E8 53 07 0E 00            CALL 0x006ea5e0
00609E8D  DB 47 14                  FILD dword ptr [EDI + 0x14]
00609E90  51                        PUSH ECX
00609E91  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00609E94  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00609E9A  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00609EA0  D8 05 FC 04 79 00         FADD float ptr [0x007904fc]
00609EA6  D9 1C 24                  FSTP float ptr [ESP]
00609EA9  DB 47 10                  FILD dword ptr [EDI + 0x10]
00609EAC  51                        PUSH ECX
00609EAD  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00609EB3  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00609EB9  D9 1C 24                  FSTP float ptr [ESP]
00609EBC  DB 47 0C                  FILD dword ptr [EDI + 0xc]
00609EBF  51                        PUSH ECX
00609EC0  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00609EC6  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00609ECC  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00609ED2  D9 1C 24                  FSTP float ptr [ESP]
00609ED5  50                        PUSH EAX
00609ED6  E8 85 0A 0E 00            CALL 0x006ea960
00609EDB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00609EDE  6A 00                     PUSH 0x0
00609EE0  51                        PUSH ECX
00609EE1  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00609EE7  E8 B4 0B 0E 00            CALL 0x006eaaa0
00609EEC  C7 47 04 01 00 00 00      MOV dword ptr [EDI + 0x4],0x1
00609EF3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00609EF6  89 57 3C                  MOV dword ptr [EDI + 0x3c],EDX
00609EF9  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00609EFC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
LAB_00609f01:
00609F01  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00609F04  5F                        POP EDI
00609F05  5E                        POP ESI
00609F06  8B E5                     MOV ESP,EBP
00609F08  5D                        POP EBP
00609F09  C2 04 00                  RET 0x4
LAB_00609f0c:
00609F0C  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00609F0F  68 98 F8 7C 00            PUSH 0x7cf898
00609F14  68 CC 4C 7A 00            PUSH 0x7a4ccc
00609F19  56                        PUSH ESI
00609F1A  6A 00                     PUSH 0x0
00609F1C  68 48 02 00 00            PUSH 0x248
00609F21  68 50 F8 7C 00            PUSH 0x7cf850
00609F26  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00609F2C  E8 9F 35 0A 00            CALL 0x006ad4d0
00609F31  83 C4 18                  ADD ESP,0x18
00609F34  85 C0                     TEST EAX,EAX
00609F36  74 01                     JZ 0x00609f39
00609F38  CC                        INT3
LAB_00609f39:
00609F39  68 4A 02 00 00            PUSH 0x24a
00609F3E  68 50 F8 7C 00            PUSH 0x7cf850
00609F43  6A 00                     PUSH 0x0
00609F45  56                        PUSH ESI
00609F46  E8 F5 BE 09 00            CALL 0x006a5e40
00609F4B  B8 FF FF 00 00            MOV EAX,0xffff
00609F50  5F                        POP EDI
00609F51  5E                        POP ESI
00609F52  8B E5                     MOV ESP,EBP
00609F54  5D                        POP EBP
00609F55  C2 04 00                  RET 0x4
LAB_00609f58:
00609F58  5F                        POP EDI
00609F59  33 C0                     XOR EAX,EAX
00609F5B  5E                        POP ESI
00609F5C  8B E5                     MOV ESP,EBP
00609F5E  5D                        POP EBP
00609F5F  C2 04 00                  RET 0x4
