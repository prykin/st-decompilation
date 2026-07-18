FUN_00604a00:
00604A00  55                        PUSH EBP
00604A01  8B EC                     MOV EBP,ESP
00604A03  83 EC 20                  SUB ESP,0x20
00604A06  53                        PUSH EBX
00604A07  8B D9                     MOV EBX,ECX
00604A09  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00604A0C  33 C0                     XOR EAX,EAX
00604A0E  85 C9                     TEST ECX,ECX
00604A10  56                        PUSH ESI
00604A11  7C 4D                     JL 0x00604a60
00604A13  3B 8B 69 02 00 00         CMP ECX,dword ptr [EBX + 0x269]
00604A19  7F 45                     JG 0x00604a60
00604A1B  8B B4 8B 19 02 00 00      MOV ESI,dword ptr [EBX + ECX*0x4 + 0x219]
00604A22  85 F6                     TEST ESI,ESI
00604A24  74 3A                     JZ 0x00604a60
00604A26  57                        PUSH EDI
00604A27  B9 08 00 00 00            MOV ECX,0x8
00604A2C  8D 7D E0                  LEA EDI,[EBP + -0x20]
00604A2F  F3 AB                     STOSD.REP ES:EDI
00604A31  8D 45 E0                  LEA EAX,[EBP + -0x20]
00604A34  8B CE                     MOV ECX,ESI
00604A36  50                        PUSH EAX
00604A37  C7 45 F0 03 00 00 00      MOV dword ptr [EBP + -0x10],0x3
00604A3E  E8 57 12 E0 FF            CALL 0x00405c9a
00604A43  56                        PUSH ESI
00604A44  E8 67 98 12 00            CALL 0x0072e2b0
00604A49  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00604A4C  83 C4 04                  ADD ESP,0x4
00604A4F  B8 01 00 00 00            MOV EAX,0x1
00604A54  C7 84 8B 19 02 00 00 00 00 00 00  MOV dword ptr [EBX + ECX*0x4 + 0x219],0x0
00604A5F  5F                        POP EDI
LAB_00604a60:
00604A60  5E                        POP ESI
00604A61  5B                        POP EBX
00604A62  8B E5                     MOV ESP,EBP
00604A64  5D                        POP EBP
00604A65  C2 04 00                  RET 0x4
