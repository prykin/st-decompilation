FUN_0074e337:
0074E337  55                        PUSH EBP
0074E338  8B EC                     MOV EBP,ESP
0074E33A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0074E33D  53                        PUSH EBX
0074E33E  56                        PUSH ESI
0074E33F  33 F6                     XOR ESI,ESI
0074E341  3B C6                     CMP EAX,ESI
0074E343  57                        PUSH EDI
0074E344  75 0A                     JNZ 0x0074e350
0074E346  B8 03 40 00 80            MOV EAX,0x80004003
0074E34B  E9 B7 00 00 00            JMP 0x0074e407
LAB_0074e350:
0074E350  39 75 10                  CMP dword ptr [EBP + 0x10],ESI
0074E353  89 30                     MOV dword ptr [EAX],ESI
0074E355  74 0A                     JZ 0x0074e361
0074E357  B8 2B 80 02 80            MOV EAX,0x8002802b
0074E35C  E9 A6 00 00 00            JMP 0x0074e407
LAB_0074e361:
0074E361  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0074E364  39 37                     CMP dword ptr [EDI],ESI
0074E366  0F 85 8D 00 00 00         JNZ 0x0074e3f9
0074E36C  E8 2D D4 FF FF            CALL 0x0074b79e
0074E371  8B D8                     MOV EBX,EAX
0074E373  3B DE                     CMP EBX,ESI
0074E375  74 34                     JZ 0x0074e3ab
0074E377  8B 35 BC BC 85 00         MOV ESI,dword ptr [0x0085bcbc]
0074E37D  68 D0 1B 7A 00            PUSH 0x7a1bd0
0074E382  53                        PUSH EBX
0074E383  FF D6                     CALL ESI
0074E385  85 C0                     TEST EAX,EAX
0074E387  74 22                     JZ 0x0074e3ab
0074E389  8D 4D 10                  LEA ECX,[EBP + 0x10]
0074E38C  51                        PUSH ECX
0074E38D  FF 75 14                  PUSH dword ptr [EBP + 0x14]
0074E390  6A 00                     PUSH 0x0
0074E392  6A 01                     PUSH 0x1
0074E394  68 B8 1D 7A 00            PUSH 0x7a1db8
0074E399  FF D0                     CALL EAX
0074E39B  85 C0                     TEST EAX,EAX
0074E39D  7D 37                     JGE 0x0074e3d6
0074E39F  68 C0 1B 7A 00            PUSH 0x7a1bc0
0074E3A4  53                        PUSH EBX
0074E3A5  FF D6                     CALL ESI
0074E3A7  85 C0                     TEST EAX,EAX
0074E3A9  75 1C                     JNZ 0x0074e3c7
LAB_0074e3ab:
0074E3AB  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0074E3B1  8B C8                     MOV ECX,EAX
0074E3B3  81 E1 FF FF 00 00         AND ECX,0xffff
0074E3B9  81 C9 00 00 07 80         OR ECX,0x80070000
0074E3BF  F7 D8                     NEG EAX
0074E3C1  1B C0                     SBB EAX,EAX
0074E3C3  23 C1                     AND EAX,ECX
0074E3C5  EB 40                     JMP 0x0074e407
LAB_0074e3c7:
0074E3C7  8D 4D 10                  LEA ECX,[EBP + 0x10]
0074E3CA  51                        PUSH ECX
0074E3CB  68 E0 1B 7A 00            PUSH 0x7a1be0
0074E3D0  FF D0                     CALL EAX
0074E3D2  85 C0                     TEST EAX,EAX
0074E3D4  7C 31                     JL 0x0074e407
LAB_0074e3d6:
0074E3D6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E3D9  57                        PUSH EDI
0074E3DA  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E3DD  8B 08                     MOV ECX,dword ptr [EAX]
0074E3DF  50                        PUSH EAX
0074E3E0  FF 51 18                  CALL dword ptr [ECX + 0x18]
0074E3E3  8B F0                     MOV ESI,EAX
0074E3E5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0074E3E8  50                        PUSH EAX
0074E3E9  8B 08                     MOV ECX,dword ptr [EAX]
0074E3EB  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074E3EE  85 F6                     TEST ESI,ESI
0074E3F0  7D 04                     JGE 0x0074e3f6
0074E3F2  8B C6                     MOV EAX,ESI
0074E3F4  EB 11                     JMP 0x0074e407
LAB_0074e3f6:
0074E3F6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
LAB_0074e3f9:
0074E3F9  8B 0F                     MOV ECX,dword ptr [EDI]
0074E3FB  89 08                     MOV dword ptr [EAX],ECX
0074E3FD  8B 07                     MOV EAX,dword ptr [EDI]
0074E3FF  50                        PUSH EAX
0074E400  8B 08                     MOV ECX,dword ptr [EAX]
0074E402  FF 51 04                  CALL dword ptr [ECX + 0x4]
0074E405  33 C0                     XOR EAX,EAX
LAB_0074e407:
0074E407  5F                        POP EDI
0074E408  5E                        POP ESI
0074E409  5B                        POP EBX
0074E40A  5D                        POP EBP
0074E40B  C2 14 00                  RET 0x14
