FUN_00747e65:
00747E65  55                        PUSH EBP
00747E66  8B EC                     MOV EBP,ESP
00747E68  51                        PUSH ECX
00747E69  51                        PUSH ECX
00747E6A  83 65 FC 00               AND dword ptr [EBP + -0x4],0x0
00747E6E  53                        PUSH EBX
00747E6F  56                        PUSH ESI
00747E70  57                        PUSH EDI
00747E71  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00747E74  8B D9                     MOV EBX,ECX
00747E76  85 FF                     TEST EDI,EDI
00747E78  74 1B                     JZ 0x00747e95
00747E7A  8B CF                     MOV ECX,EDI
00747E7C  E8 19 3D 00 00            CALL 0x0074bb9a
00747E81  85 C0                     TEST EAX,EAX
00747E83  75 10                     JNZ 0x00747e95
00747E85  57                        PUSH EDI
00747E86  8B CB                     MOV ECX,EBX
00747E88  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00747E8B  E8 55 FE FF FF            CALL 0x00747ce5
00747E90  E9 9F 00 00 00            JMP 0x00747f34
LAB_00747e95:
00747E95  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00747E98  8D 4D FC                  LEA ECX,[EBP + -0x4]
00747E9B  51                        PUSH ECX
00747E9C  56                        PUSH ESI
00747E9D  8B 06                     MOV EAX,dword ptr [ESI]
00747E9F  C7 45 F8 07 02 04 80      MOV dword ptr [EBP + -0x8],0x80040207
00747EA6  FF 50 30                  CALL dword ptr [EAX + 0x30]
00747EA9  85 C0                     TEST EAX,EAX
00747EAB  7C 36                     JL 0x00747ee3
00747EAD  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
00747EB0  8B CB                     MOV ECX,EBX
00747EB2  57                        PUSH EDI
00747EB3  56                        PUSH ESI
00747EB4  E8 D9 FE FF FF            CALL 0x00747d92
00747EB9  8B F8                     MOV EDI,EAX
00747EBB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00747EBE  50                        PUSH EAX
00747EBF  8B 08                     MOV ECX,dword ptr [EAX]
00747EC1  FF 51 08                  CALL dword ptr [ECX + 0x8]
00747EC4  85 FF                     TEST EDI,EDI
00747EC6  7D 4A                     JGE 0x00747f12
00747EC8  81 FF 05 40 00 80         CMP EDI,0x80004005
00747ECE  74 13                     JZ 0x00747ee3
00747ED0  81 FF 57 00 07 80         CMP EDI,0x80070057
00747ED6  74 0B                     JZ 0x00747ee3
00747ED8  81 FF 2A 02 04 80         CMP EDI,0x8004022a
00747EDE  74 03                     JZ 0x00747ee3
00747EE0  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_00747ee3:
00747EE3  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00747EE6  8D 43 0C                  LEA EAX,[EBX + 0xc]
00747EE9  8D 55 FC                  LEA EDX,[EBP + -0x4]
00747EEC  52                        PUSH EDX
00747EED  50                        PUSH EAX
00747EEE  FF 51 30                  CALL dword ptr [ECX + 0x30]
00747EF1  85 C0                     TEST EAX,EAX
00747EF3  7C 3C                     JL 0x00747f31
00747EF5  FF 75 FC                  PUSH dword ptr [EBP + -0x4]
00747EF8  8B CB                     MOV ECX,EBX
00747EFA  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00747EFD  56                        PUSH ESI
00747EFE  E8 8F FE FF FF            CALL 0x00747d92
00747F03  8B F0                     MOV ESI,EAX
00747F05  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00747F08  50                        PUSH EAX
00747F09  8B 08                     MOV ECX,dword ptr [EAX]
00747F0B  FF 51 08                  CALL dword ptr [ECX + 0x8]
00747F0E  85 F6                     TEST ESI,ESI
00747F10  7C 04                     JL 0x00747f16
LAB_00747f12:
00747F12  33 C0                     XOR EAX,EAX
00747F14  EB 1E                     JMP 0x00747f34
LAB_00747f16:
00747F16  81 FE 05 40 00 80         CMP ESI,0x80004005
00747F1C  74 13                     JZ 0x00747f31
00747F1E  81 FE 57 00 07 80         CMP ESI,0x80070057
00747F24  74 0B                     JZ 0x00747f31
00747F26  81 FE 2A 02 04 80         CMP ESI,0x8004022a
00747F2C  74 03                     JZ 0x00747f31
00747F2E  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_00747f31:
00747F31  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00747f34:
00747F34  5F                        POP EDI
00747F35  5E                        POP ESI
00747F36  5B                        POP EBX
00747F37  C9                        LEAVE
00747F38  C2 08 00                  RET 0x8
