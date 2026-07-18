FUN_00749106:
00749106  55                        PUSH EBP
00749107  8B EC                     MOV EBP,ESP
00749109  53                        PUSH EBX
0074910A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0074910D  56                        PUSH ESI
0074910E  57                        PUSH EDI
0074910F  85 DB                     TEST EBX,EBX
00749111  74 07                     JZ 0x0074911a
00749113  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00749116  85 FF                     TEST EDI,EDI
00749118  75 0A                     JNZ 0x00749124
LAB_0074911a:
0074911A  B8 03 40 00 80            MOV EAX,0x80004003
0074911F  E9 98 00 00 00            JMP 0x007491bc
LAB_00749124:
00749124  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00749127  8D 46 F4                  LEA EAX,[ESI + -0xc]
0074912A  8D 4E 04                  LEA ECX,[ESI + 0x4]
0074912D  F7 D8                     NEG EAX
0074912F  1B C0                     SBB EAX,EAX
00749131  23 C1                     AND EAX,ECX
00749133  50                        PUSH EAX
00749134  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00749137  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074913D  33 C0                     XOR EAX,EAX
0074913F  6A 01                     PUSH 0x1
00749141  AB                        STOSD ES:EDI
00749142  AB                        STOSD ES:EDI
00749143  AB                        STOSD ES:EDI
00749144  5A                        POP EDX
00749145  AB                        STOSD ES:EDI
00749146  39 53 08                  CMP dword ptr [EBX + 0x8],EDX
00749149  74 10                     JZ 0x0074915b
0074914B  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074914E  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749154  B8 0E 02 04 80            MOV EAX,0x8004020e
00749159  EB 61                     JMP 0x007491bc
LAB_0074915b:
0074915B  83 7E 44 00               CMP dword ptr [ESI + 0x44],0x0
0074915F  74 10                     JZ 0x00749171
00749161  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00749164  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074916A  B8 0F 02 04 80            MOV EAX,0x8004020f
0074916F  EB 4B                     JMP 0x007491bc
LAB_00749171:
00749171  8B 46 30                  MOV EAX,dword ptr [ESI + 0x30]
00749174  3B 46 20                  CMP EAX,dword ptr [ESI + 0x20]
00749177  74 10                     JZ 0x00749189
00749179  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074917C  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
00749182  B8 10 02 04 80            MOV EAX,0x80040210
00749187  EB 33                     JMP 0x007491bc
LAB_00749189:
00749189  8B 4B 04                  MOV ECX,dword ptr [EBX + 0x4]
0074918C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074918F  89 4E 34                  MOV dword ptr [ESI + 0x34],ECX
00749192  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00749195  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
00749198  8B 0B                     MOV ECX,dword ptr [EBX]
0074919A  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
0074919D  89 08                     MOV dword ptr [EAX],ECX
0074919F  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
007491A2  89 4E 38                  MOV dword ptr [ESI + 0x38],ECX
007491A5  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
007491A8  8B 5B 0C                  MOV EBX,dword ptr [EBX + 0xc]
007491AB  89 5E 3C                  MOV dword ptr [ESI + 0x3c],EBX
007491AE  89 58 0C                  MOV dword ptr [EAX + 0xc],EBX
007491B1  89 56 40                  MOV dword ptr [ESI + 0x40],EDX
007491B4  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007491BA  33 C0                     XOR EAX,EAX
LAB_007491bc:
007491BC  5F                        POP EDI
007491BD  5E                        POP ESI
007491BE  5B                        POP EBX
007491BF  5D                        POP EBP
007491C0  C2 0C 00                  RET 0xc
