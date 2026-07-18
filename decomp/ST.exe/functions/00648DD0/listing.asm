FUN_00648dd0:
00648DD0  55                        PUSH EBP
00648DD1  8B EC                     MOV EBP,ESP
00648DD3  83 EC 20                  SUB ESP,0x20
00648DD6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00648DDC  56                        PUSH ESI
00648DDD  85 C9                     TEST ECX,ECX
00648DDF  74 5C                     JZ 0x00648e3d
00648DE1  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00648DE6  85 C0                     TEST EAX,EAX
00648DE8  74 53                     JZ 0x00648e3d
00648DEA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00648DED  83 F8 08                  CMP EAX,0x8
00648DF0  73 4B                     JNC 0x00648e3d
00648DF2  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00648DF5  53                        PUSH EBX
00648DF6  8A 9C D2 E9 87 80 00      MOV BL,byte ptr [EDX + EDX*0x8 + 0x8087e9]
00648DFD  80 FB 08                  CMP BL,0x8
00648E00  5B                        POP EBX
00648E01  73 3A                     JNC 0x00648e3d
00648E03  50                        PUSH EAX
00648E04  E8 BC 8F DB FF            CALL 0x00401dc5
00648E09  8B F0                     MOV ESI,EAX
00648E0B  85 F6                     TEST ESI,ESI
00648E0D  74 2E                     JZ 0x00648e3d
00648E0F  57                        PUSH EDI
00648E10  B9 08 00 00 00            MOV ECX,0x8
00648E15  33 C0                     XOR EAX,EAX
00648E17  8D 7D E0                  LEA EDI,[EBP + -0x20]
00648E1A  F3 AB                     STOSD.REP ES:EDI
00648E1C  8B 06                     MOV EAX,dword ptr [ESI]
00648E1E  8D 4D E0                  LEA ECX,[EBP + -0x20]
00648E21  51                        PUSH ECX
00648E22  8B CE                     MOV ECX,ESI
00648E24  C7 45 F0 97 5D 00 00      MOV dword ptr [EBP + -0x10],0x5d97
00648E2B  FF 10                     CALL dword ptr [EAX]
00648E2D  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
00648E30  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00648E36  52                        PUSH EDX
00648E37  E8 F0 B4 DB FF            CALL 0x0040432c
00648E3C  5F                        POP EDI
LAB_00648e3d:
00648E3D  5E                        POP ESI
00648E3E  8B E5                     MOV ESP,EBP
00648E40  5D                        POP EBP
00648E41  C3                        RET
