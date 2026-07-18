FUN_00630260:
00630260  55                        PUSH EBP
00630261  8B EC                     MOV EBP,ESP
00630263  83 EC 20                  SUB ESP,0x20
00630266  A1 A4 17 81 00            MOV EAX,[0x008117a4]
0063026B  53                        PUSH EBX
0063026C  56                        PUSH ESI
0063026D  8B F1                     MOV ESI,ECX
0063026F  85 C0                     TEST EAX,EAX
00630271  0F 84 85 00 00 00         JZ 0x006302fc
00630277  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0063027A  8B 94 9E E5 01 00 00      MOV EDX,dword ptr [ESI + EBX*0x4 + 0x1e5]
00630281  85 D2                     TEST EDX,EDX
00630283  74 77                     JZ 0x006302fc
00630285  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00630288  83 F8 03                  CMP EAX,0x3
0063028B  74 05                     JZ 0x00630292
0063028D  83 F8 06                  CMP EAX,0x6
00630290  75 6A                     JNZ 0x006302fc
LAB_00630292:
00630292  57                        PUSH EDI
00630293  B9 08 00 00 00            MOV ECX,0x8
00630298  33 C0                     XOR EAX,EAX
0063029A  8D 7D E0                  LEA EDI,[EBP + -0x20]
0063029D  F3 AB                     STOSD.REP ES:EDI
0063029F  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
006302A2  8B 8E D5 01 00 00         MOV ECX,dword ptr [ESI + 0x1d5]
006302A8  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006302AB  8B 86 D9 01 00 00         MOV EAX,dword ptr [ESI + 0x1d9]
006302B1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006302B4  8B 8E DD 01 00 00         MOV ECX,dword ptr [ESI + 0x1dd]
006302BA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006302BD  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006302C0  8B 02                     MOV EAX,dword ptr [EDX]
006302C2  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006302C5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006302C8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006302CB  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
006302CE  5F                        POP EDI
006302CF  85 C0                     TEST EAX,EAX
006302D1  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006302D4  74 17                     JZ 0x006302ed
006302D6  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
006302DC  8D 55 E0                  LEA EDX,[EBP + -0x20]
006302DF  52                        PUSH EDX
006302E0  E8 0D 48 DD FF            CALL 0x00404af2
006302E5  5E                        POP ESI
006302E6  5B                        POP EBX
006302E7  8B E5                     MOV ESP,EBP
006302E9  5D                        POP EBP
006302EA  C2 08 00                  RET 0x8
LAB_006302ed:
006302ED  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
006302F3  8D 45 E0                  LEA EAX,[EBP + -0x20]
006302F6  50                        PUSH EAX
006302F7  E8 72 2B DD FF            CALL 0x00402e6e
LAB_006302fc:
006302FC  5E                        POP ESI
006302FD  5B                        POP EBX
006302FE  8B E5                     MOV ESP,EBP
00630300  5D                        POP EBP
00630301  C2 08 00                  RET 0x8
