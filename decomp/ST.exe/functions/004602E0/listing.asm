FUN_004602e0:
004602E0  55                        PUSH EBP
004602E1  8B EC                     MOV EBP,ESP
004602E3  53                        PUSH EBX
004602E4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004602E7  56                        PUSH ESI
004602E8  8B F1                     MOV ESI,ECX
004602EA  85 DB                     TEST EBX,EBX
004602EC  74 05                     JZ 0x004602f3
004602EE  83 FB 01                  CMP EBX,0x1
004602F1  75 3E                     JNZ 0x00460331
LAB_004602f3:
004602F3  57                        PUSH EDI
004602F4  B9 17 00 00 00            MOV ECX,0x17
004602F9  33 C0                     XOR EAX,EAX
004602FB  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
00460301  F3 AB                     STOSD.REP ES:EDI
00460303  89 86 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EAX
00460309  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0046030C  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00460312  05 39 30 00 00            ADD EAX,0x3039
00460317  33 D2                     XOR EDX,EDX
00460319  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0046031C  B9 1F 00 00 00            MOV ECX,0x1f
00460321  C1 E8 10                  SHR EAX,0x10
00460324  F7 F1                     DIV ECX
00460326  5F                        POP EDI
00460327  83 C2 1E                  ADD EDX,0x1e
0046032A  66 89 96 F8 00 00 00      MOV word ptr [ESI + 0xf8],DX
LAB_00460331:
00460331  53                        PUSH EBX
00460332  8B CE                     MOV ECX,ESI
00460334  E8 FB 37 FA FF            CALL 0x00403b34
00460339  5E                        POP ESI
0046033A  5B                        POP EBX
0046033B  5D                        POP EBP
0046033C  C2 04 00                  RET 0x4
