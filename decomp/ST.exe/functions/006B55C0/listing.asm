FUN_006b55c0:
006B55C0  55                        PUSH EBP
006B55C1  8B EC                     MOV EBP,ESP
006B55C3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B55C6  83 C0 07                  ADD EAX,0x7
006B55C9  33 C9                     XOR ECX,ECX
006B55CB  24 F8                     AND AL,0xf8
006B55CD  F7 65 14                  MUL dword ptr [EBP + 0x14]
006B55D0  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006B55D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B55D6  34 07                     XOR AL,0x7
006B55D8  0F A3 02                  BT [EDX],EAX
006B55DB  D0 D1                     RCL CL,0x1
006B55DD  8B C1                     MOV EAX,ECX
006B55DF  5D                        POP EBP
006B55E0  C2 10 00                  RET 0x10
