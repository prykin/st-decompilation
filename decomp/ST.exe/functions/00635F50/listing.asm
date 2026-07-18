FUN_00635f50:
00635F50  55                        PUSH EBP
00635F51  8B EC                     MOV EBP,ESP
00635F53  51                        PUSH ECX
00635F54  8B 01                     MOV EAX,dword ptr [ECX]
00635F56  53                        PUSH EBX
00635F57  85 C0                     TEST EAX,EAX
00635F59  57                        PUSH EDI
00635F5A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00635F5D  74 43                     JZ 0x00635fa2
00635F5F  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
00635F62  33 FF                     XOR EDI,EDI
00635F64  85 DB                     TEST EBX,EBX
00635F66  7E 3A                     JLE 0x00635fa2
00635F68  56                        PUSH ESI
LAB_00635f69:
00635F69  8B 01                     MOV EAX,dword ptr [ECX]
00635F6B  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00635F6E  73 2C                     JNC 0x00635f9c
00635F70  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00635F73  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00635F76  0F AF F7                  IMUL ESI,EDI
00635F79  03 F2                     ADD ESI,EDX
00635F7B  85 F6                     TEST ESI,ESI
00635F7D  74 1D                     JZ 0x00635f9c
00635F7F  8A 46 0C                  MOV AL,byte ptr [ESI + 0xc]
00635F82  84 C0                     TEST AL,AL
00635F84  74 16                     JZ 0x00635f9c
00635F86  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00635F89  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00635F8F  50                        PUSH EAX
00635F90  E8 CB 4B 0B 00            CALL 0x006eab60
00635F95  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00635F98  C6 46 0C 00               MOV byte ptr [ESI + 0xc],0x0
LAB_00635f9c:
00635F9C  47                        INC EDI
00635F9D  3B FB                     CMP EDI,EBX
00635F9F  7C C8                     JL 0x00635f69
00635FA1  5E                        POP ESI
LAB_00635fa2:
00635FA2  5F                        POP EDI
00635FA3  5B                        POP EBX
00635FA4  8B E5                     MOV ESP,EBP
00635FA6  5D                        POP EBP
00635FA7  C3                        RET
