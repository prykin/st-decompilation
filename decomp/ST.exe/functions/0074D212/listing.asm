FUN_0074d212:
0074D212  55                        PUSH EBP
0074D213  8B EC                     MOV EBP,ESP
0074D215  83 EC 28                  SUB ESP,0x28
0074D218  53                        PUSH EBX
0074D219  8B 1D DC BE 85 00         MOV EBX,dword ptr [0x0085bedc]
0074D21F  56                        PUSH ESI
0074D220  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074D223  83 FE FF                  CMP ESI,-0x1
0074D226  57                        PUSH EDI
0074D227  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0074D22A  74 05                     JZ 0x0074d231
0074D22C  FF D3                     CALL EBX
0074D22E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0074d231:
0074D231  33 FF                     XOR EDI,EDI
LAB_0074d233:
0074D233  6A 40                     PUSH 0x40
0074D235  56                        PUSH ESI
0074D236  57                        PUSH EDI
0074D237  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074D23A  6A 01                     PUSH 0x1
0074D23C  FF 15 D8 BD 85 00         CALL dword ptr [0x0085bdd8]
0074D242  83 F8 01                  CMP EAX,0x1
0074D245  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074D248  75 24                     JNZ 0x0074d26e
0074D24A  57                        PUSH EDI
0074D24B  57                        PUSH EDI
0074D24C  57                        PUSH EDI
0074D24D  8D 45 D8                  LEA EAX,[EBP + -0x28]
0074D250  57                        PUSH EDI
0074D251  50                        PUSH EAX
0074D252  FF 15 FC BD 85 00         CALL dword ptr [0x0085bdfc]
0074D258  83 FE FF                  CMP ESI,-0x1
0074D25B  74 11                     JZ 0x0074d26e
0074D25D  FF D3                     CALL EBX
0074D25F  2B 45 F4                  SUB EAX,dword ptr [EBP + -0xc]
0074D262  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074D265  2B C8                     SUB ECX,EAX
0074D267  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
0074D26A  1B F6                     SBB ESI,ESI
0074D26C  23 F1                     AND ESI,ECX
LAB_0074d26e:
0074D26E  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
0074D272  74 BF                     JZ 0x0074d233
0074D274  33 C0                     XOR EAX,EAX
0074D276  39 7D FC                  CMP dword ptr [EBP + -0x4],EDI
0074D279  5F                        POP EDI
0074D27A  5E                        POP ESI
0074D27B  0F 94 C0                  SETZ AL
0074D27E  5B                        POP EBX
0074D27F  C9                        LEAVE
0074D280  C2 04 00                  RET 0x4
