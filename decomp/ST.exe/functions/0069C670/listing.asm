FUN_0069c670:
0069C670  55                        PUSH EBP
0069C671  8B EC                     MOV EBP,ESP
0069C673  53                        PUSH EBX
0069C674  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069C677  57                        PUSH EDI
0069C678  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0069C67B  57                        PUSH EDI
0069C67C  53                        PUSH EBX
0069C67D  E8 EE 45 01 00            CALL 0x006b0c70
0069C682  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0069C685  3B F8                     CMP EDI,EAX
0069C687  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0069C68A  7D 59                     JGE 0x0069c6e5
0069C68C  56                        PUSH ESI
LAB_0069c68d:
0069C68D  3B 7B 0C                  CMP EDI,dword ptr [EBX + 0xc]
0069C690  73 4D                     JNC 0x0069c6df
0069C692  8B 73 08                  MOV ESI,dword ptr [EBX + 0x8]
0069C695  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
0069C698  0F AF F7                  IMUL ESI,EDI
0069C69B  03 F2                     ADD ESI,EDX
0069C69D  85 F6                     TEST ESI,ESI
0069C69F  74 3E                     JZ 0x0069c6df
0069C6A1  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0069C6A4  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
0069C6A7  33 C9                     XOR ECX,ECX
0069C6A9  85 DB                     TEST EBX,EBX
0069C6AB  7E 3E                     JLE 0x0069c6eb
LAB_0069c6ad:
0069C6AD  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
0069C6B0  3B 4A 0C                  CMP ECX,dword ptr [EDX + 0xc]
0069C6B3  73 0B                     JNC 0x0069c6c0
0069C6B5  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0069C6B8  0F AF C1                  IMUL EAX,ECX
0069C6BB  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
0069C6BE  EB 02                     JMP 0x0069c6c2
LAB_0069c6c0:
0069C6C0  33 C0                     XOR EAX,EAX
LAB_0069c6c2:
0069C6C2  8B 00                     MOV EAX,dword ptr [EAX]
0069C6C4  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
0069C6CB  2B D0                     SUB EDX,EAX
0069C6CD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0069C6D0  41                        INC ECX
0069C6D1  3B CB                     CMP ECX,EBX
0069C6D3  89 7C 50 0A               MOV dword ptr [EAX + EDX*0x2 + 0xa],EDI
0069C6D7  7C D4                     JL 0x0069c6ad
0069C6D9  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069C6DC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
LAB_0069c6df:
0069C6DF  47                        INC EDI
0069C6E0  3B F8                     CMP EDI,EAX
0069C6E2  7C A9                     JL 0x0069c68d
0069C6E4  5E                        POP ESI
LAB_0069c6e5:
0069C6E5  5F                        POP EDI
0069C6E6  5B                        POP EBX
0069C6E7  5D                        POP EBP
0069C6E8  C2 0C 00                  RET 0xc
LAB_0069c6eb:
0069C6EB  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0069C6EE  EB EF                     JMP 0x0069c6df
