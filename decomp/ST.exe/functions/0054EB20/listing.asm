FUN_0054eb20:
0054EB20  55                        PUSH EBP
0054EB21  8B EC                     MOV EBP,ESP
0054EB23  51                        PUSH ECX
0054EB24  56                        PUSH ESI
0054EB25  57                        PUSH EDI
0054EB26  8B F9                     MOV EDI,ECX
0054EB28  33 F6                     XOR ESI,ESI
0054EB2A  8B 4F 65                  MOV ECX,dword ptr [EDI + 0x65]
0054EB2D  8D 47 65                  LEA EAX,[EDI + 0x65]
0054EB30  51                        PUSH ECX
0054EB31  50                        PUSH EAX
0054EB32  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054EB35  E8 86 AD 16 00            CALL 0x006b98c0
0054EB3A  85 C0                     TEST EAX,EAX
0054EB3C  74 03                     JZ 0x0054eb41
0054EB3E  FF 4F 69                  DEC dword ptr [EDI + 0x69]
LAB_0054eb41:
0054EB41  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0054EB44  85 D2                     TEST EDX,EDX
0054EB46  74 38                     JZ 0x0054eb80
0054EB48  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054EB4B  85 C0                     TEST EAX,EAX
0054EB4D  74 05                     JZ 0x0054eb54
0054EB4F  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0054EB52  89 08                     MOV dword ptr [EAX],ECX
LAB_0054eb54:
0054EB54  8B 08                     MOV ECX,dword ptr [EAX]
0054EB56  8B 7F 3D                  MOV EDI,dword ptr [EDI + 0x3d]
0054EB59  8D 72 08                  LEA ESI,[EDX + 0x8]
0054EB5C  8B D1                     MOV EDX,ECX
0054EB5E  C1 E9 02                  SHR ECX,0x2
0054EB61  F3 A5                     MOVSD.REP ES:EDI,ESI
0054EB63  8B CA                     MOV ECX,EDX
0054EB65  8D 45 FC                  LEA EAX,[EBP + -0x4]
0054EB68  83 E1 03                  AND ECX,0x3
0054EB6B  50                        PUSH EAX
0054EB6C  F3 A4                     MOVSB.REP ES:EDI,ESI
0054EB6E  E8 ED C4 15 00            CALL 0x006ab060
0054EB73  5F                        POP EDI
0054EB74  B8 01 00 00 00            MOV EAX,0x1
0054EB79  5E                        POP ESI
0054EB7A  8B E5                     MOV ESP,EBP
0054EB7C  5D                        POP EBP
0054EB7D  C2 04 00                  RET 0x4
LAB_0054eb80:
0054EB80  8B C6                     MOV EAX,ESI
0054EB82  5F                        POP EDI
0054EB83  5E                        POP ESI
0054EB84  8B E5                     MOV ESP,EBP
0054EB86  5D                        POP EBP
0054EB87  C2 04 00                  RET 0x4
