FUN_00693910:
00693910  55                        PUSH EBP
00693911  8B EC                     MOV EBP,ESP
00693913  51                        PUSH ECX
00693914  53                        PUSH EBX
00693915  56                        PUSH ESI
00693916  8B D1                     MOV EDX,ECX
00693918  57                        PUSH EDI
00693919  B9 66 06 00 00            MOV ECX,0x666
0069391E  33 C0                     XOR EAX,EAX
00693920  8B FA                     MOV EDI,EDX
00693922  8D 5A 4A                  LEA EBX,[EDX + 0x4a]
00693925  F3 AB                     STOSD.REP ES:EDI
00693927  AA                        STOSB ES:EDI
00693928  B0 01                     MOV AL,0x1
0069392A  C7 42 04 05 02 00 8F      MOV dword ptr [EDX + 0x4],0x8f000205
00693931  88 82 DA 02 00 00         MOV byte ptr [EDX + 0x2da],AL
00693937  88 82 DB 02 00 00         MOV byte ptr [EDX + 0x2db],AL
0069393D  83 C8 FF                  OR EAX,0xffffffff
00693940  C6 82 DC 02 00 00 00      MOV byte ptr [EDX + 0x2dc],0x0
00693947  C6 82 DD 02 00 00 02      MOV byte ptr [EDX + 0x2dd],0x2
0069394E  89 82 E1 02 00 00         MOV dword ptr [EDX + 0x2e1],EAX
00693954  C7 45 FC 08 00 00 00      MOV dword ptr [EBP + -0x4],0x8
LAB_0069395b:
0069395B  8D 7B C7                  LEA EDI,[EBX + -0x39]
0069395E  B9 14 00 00 00            MOV ECX,0x14
00693963  BE 68 62 7D 00            MOV ESI,0x7d6268
00693968  F3 A5                     MOVSD.REP ES:EDI,ESI
0069396A  A4                        MOVSB ES:EDI,ESI
0069396B  B9 06 00 00 00            MOV ECX,0x6
00693970  8B FB                     MOV EDI,EBX
00693972  F3 AB                     STOSD.REP ES:EDI
00693974  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00693977  83 C3 51                  ADD EBX,0x51
0069397A  49                        DEC ECX
0069397B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0069397E  75 DB                     JNZ 0x0069395b
00693980  5F                        POP EDI
00693981  5E                        POP ESI
00693982  C7 82 99 19 00 00 00 00 00 00  MOV dword ptr [EDX + 0x1999],0x0
0069398C  8B C2                     MOV EAX,EDX
0069398E  5B                        POP EBX
0069398F  8B E5                     MOV ESP,EBP
00693991  5D                        POP EBP
00693992  C3                        RET
