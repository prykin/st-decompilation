FUN_0074728a:
0074728A  55                        PUSH EBP
0074728B  8B EC                     MOV EBP,ESP
0074728D  51                        PUSH ECX
0074728E  83 7D 10 00               CMP dword ptr [EBP + 0x10],0x0
00747292  53                        PUSH EBX
00747293  56                        PUSH ESI
00747294  57                        PUSH EDI
00747295  75 07                     JNZ 0x0074729e
00747297  B8 03 40 00 80            MOV EAX,0x80004003
0074729C  EB 5B                     JMP 0x007472f9
LAB_0074729e:
0074729E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007472A1  8B 5E 2C                  MOV EBX,dword ptr [ESI + 0x2c]
007472A4  53                        PUSH EBX
007472A5  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007472AB  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
007472AE  8D 7E F4                  LEA EDI,[ESI + -0xc]
007472B1  8B CF                     MOV ECX,EDI
007472B3  FF 50 18                  CALL dword ptr [EAX + 0x18]
007472B6  83 65 08 00               AND dword ptr [EBP + 0x8],0x0
007472BA  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007472BD  85 C0                     TEST EAX,EAX
007472BF  7E 26                     JLE 0x007472e7
LAB_007472c1:
007472C1  8B 07                     MOV EAX,dword ptr [EDI]
007472C3  FF 75 08                  PUSH dword ptr [EBP + 0x8]
007472C6  8B CF                     MOV ECX,EDI
007472C8  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
007472CB  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
007472CE  8B F0                     MOV ESI,EAX
007472D0  FF 76 14                  PUSH dword ptr [ESI + 0x14]
007472D3  E8 FB 62 00 00            CALL 0x0074d5d3
007472D8  85 C0                     TEST EAX,EAX
007472DA  74 24                     JZ 0x00747300
007472DC  FF 45 08                  INC dword ptr [EBP + 0x8]
007472DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007472E2  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
007472E5  7C DA                     JL 0x007472c1
LAB_007472e7:
007472E7  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007472EA  53                        PUSH EBX
007472EB  83 20 00                  AND dword ptr [EAX],0x0
007472EE  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007472F4  B8 16 02 04 80            MOV EAX,0x80040216
LAB_007472f9:
007472F9  5F                        POP EDI
007472FA  5E                        POP ESI
007472FB  5B                        POP EBX
007472FC  C9                        LEAVE
007472FD  C2 0C 00                  RET 0xc
LAB_00747300:
00747300  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00747303  8D 46 0C                  LEA EAX,[ESI + 0xc]
00747306  F7 DE                     NEG ESI
00747308  1B F6                     SBB ESI,ESI
0074730A  50                        PUSH EAX
0074730B  23 F0                     AND ESI,EAX
0074730D  89 31                     MOV dword ptr [ECX],ESI
0074730F  8B 08                     MOV ECX,dword ptr [EAX]
00747311  FF 51 04                  CALL dword ptr [ECX + 0x4]
00747314  53                        PUSH EBX
00747315  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074731B  33 C0                     XOR EAX,EAX
0074731D  EB DA                     JMP 0x007472f9
