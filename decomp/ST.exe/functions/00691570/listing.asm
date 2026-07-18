FUN_00691570:
00691570  55                        PUSH EBP
00691571  8B EC                     MOV EBP,ESP
00691573  51                        PUSH ECX
00691574  53                        PUSH EBX
00691575  56                        PUSH ESI
00691576  8B D9                     MOV EBX,ECX
00691578  57                        PUSH EDI
00691579  B9 38 04 00 00            MOV ECX,0x438
0069157E  33 C0                     XOR EAX,EAX
00691580  8B FB                     MOV EDI,EBX
00691582  8D B3 50 19 00 00         LEA ESI,[EBX + 0x1950]
00691588  F3 AB                     STOSD.REP ES:EDI
0069158A  B9 68 01 00 00            MOV ECX,0x168
0069158F  8D BB E0 10 00 00         LEA EDI,[EBX + 0x10e0]
00691595  F3 AB                     STOSD.REP ES:EDI
00691597  B9 B4 00 00 00            MOV ECX,0xb4
0069159C  8D BB 80 16 00 00         LEA EDI,[EBX + 0x1680]
006915A2  F3 AB                     STOSD.REP ES:EDI
006915A4  8D 96 B8 01 00 00         LEA EDX,[ESI + 0x1b8]
006915AA  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
LAB_006915b1:
006915B1  B9 24 00 00 00            MOV ECX,0x24
006915B6  33 C0                     XOR EAX,EAX
006915B8  8B FA                     MOV EDI,EDX
006915BA  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
006915C0  C7 42 FC 00 00 00 00      MOV dword ptr [EDX + -0x4],0x0
006915C7  81 C6 48 02 00 00         ADD ESI,0x248
006915CD  F3 AB                     STOSD.REP ES:EDI
006915CF  B9 48 00 00 00            MOV ECX,0x48
006915D4  8D BA 4C FE FF FF         LEA EDI,[EDX + 0xfffffe4c]
006915DA  F3 AB                     STOSD.REP ES:EDI
006915DC  B9 24 00 00 00            MOV ECX,0x24
006915E1  8D BA 6C FF FF FF         LEA EDI,[EDX + 0xffffff6c]
006915E7  F3 AB                     STOSD.REP ES:EDI
006915E9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006915EC  81 C2 48 02 00 00         ADD EDX,0x248
006915F2  48                        DEC EAX
006915F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006915F6  75 B9                     JNZ 0x006915b1
006915F8  8D 93 28 20 00 00         LEA EDX,[EBX + 0x2028]
006915FE  B9 D0 02 00 00            MOV ECX,0x2d0
00691603  33 C0                     XOR EAX,EAX
00691605  8B FA                     MOV EDI,EDX
00691607  F3 AB                     STOSD.REP ES:EDI
00691609  B9 D0 02 00 00            MOV ECX,0x2d0
0069160E  8D BA 40 0B 00 00         LEA EDI,[EDX + 0xb40]
00691614  F3 AB                     STOSD.REP ES:EDI
00691616  5F                        POP EDI
00691617  8B C3                     MOV EAX,EBX
00691619  5E                        POP ESI
0069161A  5B                        POP EBX
0069161B  8B E5                     MOV ESP,EBP
0069161D  5D                        POP EBP
0069161E  C3                        RET
