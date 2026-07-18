FUN_00629f20:
00629F20  55                        PUSH EBP
00629F21  8B EC                     MOV EBP,ESP
00629F23  51                        PUSH ECX
00629F24  56                        PUSH ESI
00629F25  8B F1                     MOV ESI,ECX
00629F27  8D 45 FC                  LEA EAX,[EBP + -0x4]
00629F2A  8B 8E E7 00 00 00         MOV ECX,dword ptr [ESI + 0xe7]
00629F30  50                        PUSH EAX
00629F31  51                        PUSH ECX
00629F32  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00629F38  E8 93 C3 0B 00            CALL 0x006e62d0
00629F3D  83 F8 FC                  CMP EAX,-0x4
00629F40  74 0E                     JZ 0x00629f50
00629F42  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00629F45  89 96 EB 00 00 00         MOV dword ptr [ESI + 0xeb],EDX
00629F4B  5E                        POP ESI
00629F4C  8B E5                     MOV ESP,EBP
00629F4E  5D                        POP EBP
00629F4F  C3                        RET
LAB_00629f50:
00629F50  57                        PUSH EDI
00629F51  B9 0B 00 00 00            MOV ECX,0xb
00629F56  33 C0                     XOR EAX,EAX
00629F58  8D BE D7 00 00 00         LEA EDI,[ESI + 0xd7]
00629F5E  F3 AB                     STOSD.REP ES:EDI
00629F60  AA                        STOSB ES:EDI
00629F61  5F                        POP EDI
00629F62  5E                        POP ESI
00629F63  8B E5                     MOV ESP,EBP
00629F65  5D                        POP EBP
00629F66  C3                        RET
