FUN_0068e610:
0068E610  55                        PUSH EBP
0068E611  8B EC                     MOV EBP,ESP
0068E613  53                        PUSH EBX
0068E614  56                        PUSH ESI
0068E615  57                        PUSH EDI
0068E616  8B F9                     MOV EDI,ECX
0068E618  33 DB                     XOR EBX,EBX
0068E61A  33 F6                     XOR ESI,ESI
0068E61C  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0068E622  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068E625  85 C0                     TEST EAX,EAX
0068E627  7E 37                     JLE 0x0068e660
0068E629  3B F0                     CMP ESI,EAX
LAB_0068e62b:
0068E62B  73 0D                     JNC 0x0068e63a
0068E62D  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068E630  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068E633  0F AF C6                  IMUL EAX,ESI
0068E636  03 C2                     ADD EAX,EDX
0068E638  EB 02                     JMP 0x0068e63c
LAB_0068e63a:
0068E63A  33 C0                     XOR EAX,EAX
LAB_0068e63c:
0068E63C  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068E63F  85 C0                     TEST EAX,EAX
0068E641  74 0F                     JZ 0x0068e652
0068E643  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068E646  6A FF                     PUSH -0x1
0068E648  51                        PUSH ECX
0068E649  8B C8                     MOV ECX,EAX
0068E64B  E8 D0 63 D7 FF            CALL 0x00404a20
0068E650  03 D8                     ADD EBX,EAX
LAB_0068e652:
0068E652  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0068E658  46                        INC ESI
0068E659  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068E65C  3B F0                     CMP ESI,EAX
0068E65E  7C CB                     JL 0x0068e62b
LAB_0068e660:
0068E660  5F                        POP EDI
0068E661  8B C3                     MOV EAX,EBX
0068E663  5E                        POP ESI
0068E664  5B                        POP EBX
0068E665  5D                        POP EBP
0068E666  C2 04 00                  RET 0x4
