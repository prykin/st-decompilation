FUN_00747d92:
00747D92  55                        PUSH EBP
00747D93  8B EC                     MOV EBP,ESP
00747D95  51                        PUSH ECX
00747D96  51                        PUSH ECX
00747D97  53                        PUSH EBX
00747D98  56                        PUSH ESI
00747D99  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00747D9C  57                        PUSH EDI
00747D9D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00747DA0  56                        PUSH ESI
00747DA1  8B 06                     MOV EAX,dword ptr [ESI]
00747DA3  FF 50 14                  CALL dword ptr [EAX + 0x14]
00747DA6  33 DB                     XOR EBX,EBX
00747DA8  3B C3                     CMP EAX,EBX
00747DAA  0F 8C 97 00 00 00         JL 0x00747e47
00747DB0  8B 06                     MOV EAX,dword ptr [ESI]
00747DB2  8D 4D FC                  LEA ECX,[EBP + -0x4]
00747DB5  51                        PUSH ECX
00747DB6  8D 4D 10                  LEA ECX,[EBP + 0x10]
00747DB9  51                        PUSH ECX
00747DBA  6A 01                     PUSH 0x1
00747DBC  56                        PUSH ESI
00747DBD  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
00747DC0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00747DC3  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00747DC6  3B C3                     CMP EAX,EBX
00747DC8  75 6E                     JNZ 0x00747e38
LAB_00747dca:
00747DCA  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
00747DCE  74 16                     JZ 0x00747de6
00747DD0  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00747DD3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00747DD6  E8 EB 3D 00 00            CALL 0x0074bbc6
00747DDB  85 C0                     TEST EAX,EAX
00747DDD  75 07                     JNZ 0x00747de6
00747DDF  BF 07 02 04 80            MOV EDI,0x80040207
00747DE4  EB 32                     JMP 0x00747e18
LAB_00747de6:
00747DE6  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00747DE9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00747DEC  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00747DEF  E8 F1 FE FF FF            CALL 0x00747ce5
00747DF4  8B F8                     MOV EDI,EAX
00747DF6  85 FF                     TEST EDI,EDI
00747DF8  7D 1E                     JGE 0x00747e18
00747DFA  85 DB                     TEST EBX,EBX
00747DFC  7C 1A                     JL 0x00747e18
00747DFE  81 FF 05 40 00 80         CMP EDI,0x80004005
00747E04  74 12                     JZ 0x00747e18
00747E06  81 FF 57 00 07 80         CMP EDI,0x80070057
00747E0C  74 0A                     JZ 0x00747e18
00747E0E  81 FF 2A 02 04 80         CMP EDI,0x8004022a
00747E14  74 02                     JZ 0x00747e18
00747E16  8B DF                     MOV EBX,EDI
LAB_00747e18:
00747E18  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00747E1B  E8 30 3E 00 00            CALL 0x0074bc50
00747E20  85 FF                     TEST EDI,EDI
00747E22  74 21                     JZ 0x00747e45
00747E24  8B 06                     MOV EAX,dword ptr [ESI]
00747E26  8D 4D FC                  LEA ECX,[EBP + -0x4]
00747E29  51                        PUSH ECX
00747E2A  8D 4D 10                  LEA ECX,[EBP + 0x10]
00747E2D  51                        PUSH ECX
00747E2E  6A 01                     PUSH 0x1
00747E30  56                        PUSH ESI
00747E31  FF 50 0C                  CALL dword ptr [EAX + 0xc]
00747E34  85 C0                     TEST EAX,EAX
00747E36  74 92                     JZ 0x00747dca
LAB_00747e38:
00747E38  85 DB                     TEST EBX,EBX
00747E3A  75 05                     JNZ 0x00747e41
00747E3C  BB 07 02 04 80            MOV EBX,0x80040207
LAB_00747e41:
00747E41  8B C3                     MOV EAX,EBX
00747E43  EB 02                     JMP 0x00747e47
LAB_00747e45:
00747E45  33 C0                     XOR EAX,EAX
LAB_00747e47:
00747E47  5F                        POP EDI
00747E48  5E                        POP ESI
00747E49  5B                        POP EBX
00747E4A  C9                        LEAVE
00747E4B  C2 0C 00                  RET 0xc
