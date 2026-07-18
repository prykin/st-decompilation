FUN_0071f230:
0071F230  55                        PUSH EBP
0071F231  8B EC                     MOV EBP,ESP
0071F233  83 EC 0C                  SUB ESP,0xc
0071F236  53                        PUSH EBX
0071F237  56                        PUSH ESI
0071F238  8B F1                     MOV ESI,ECX
0071F23A  57                        PUSH EDI
0071F23B  33 C0                     XOR EAX,EAX
0071F23D  33 DB                     XOR EBX,EBX
0071F23F  8B BE 3C 01 00 00         MOV EDI,dword ptr [ESI + 0x13c]
0071F245  8B 8E 04 02 00 00         MOV ECX,dword ptr [ESI + 0x204]
0071F24B  3B F9                     CMP EDI,ECX
0071F24D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071F250  7D 56                     JGE 0x0071f2a8
LAB_0071f252:
0071F252  8B 96 38 01 00 00         MOV EDX,dword ptr [ESI + 0x138]
0071F258  33 C0                     XOR EAX,EAX
0071F25A  3B FA                     CMP EDI,EDX
0071F25C  8B 16                     MOV EDX,dword ptr [ESI]
0071F25E  0F 94 C0                  SETZ AL
0071F261  50                        PUSH EAX
0071F262  57                        PUSH EDI
0071F263  8B CE                     MOV ECX,ESI
0071F265  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071F268  FF 52 08                  CALL dword ptr [EDX + 0x8]
0071F26B  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0071F26E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0071F271  03 C3                     ADD EAX,EBX
0071F273  3B C1                     CMP EAX,ECX
0071F275  7F 2E                     JG 0x0071f2a5
0071F277  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0071F27A  8B 06                     MOV EAX,dword ptr [ESI]
0071F27C  53                        PUSH EBX
0071F27D  6A 00                     PUSH 0x0
0071F27F  51                        PUSH ECX
0071F280  57                        PUSH EDI
0071F281  8B CE                     MOV ECX,ESI
0071F283  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0071F286  85 C0                     TEST EAX,EAX
0071F288  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0071F28B  75 1B                     JNZ 0x0071f2a8
0071F28D  8B 96 08 02 00 00         MOV EDX,dword ptr [ESI + 0x208]
0071F293  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0071F296  8B 86 04 02 00 00         MOV EAX,dword ptr [ESI + 0x204]
0071F29C  03 D1                     ADD EDX,ECX
0071F29E  03 DA                     ADD EBX,EDX
0071F2A0  47                        INC EDI
0071F2A1  3B F8                     CMP EDI,EAX
0071F2A3  7C AD                     JL 0x0071f252
LAB_0071f2a5:
0071F2A5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0071f2a8:
0071F2A8  5F                        POP EDI
0071F2A9  5E                        POP ESI
0071F2AA  5B                        POP EBX
0071F2AB  8B E5                     MOV ESP,EBP
0071F2AD  5D                        POP EBP
0071F2AE  C3                        RET
