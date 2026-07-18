FUN_006b7650:
006B7650  55                        PUSH EBP
006B7651  8B EC                     MOV EBP,ESP
006B7653  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B7656  56                        PUSH ESI
006B7657  57                        PUSH EDI
006B7658  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006B765B  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006B765E  F6 C2 01                  TEST DL,0x1
006B7661  74 05                     JZ 0x006b7668
006B7663  83 FF 01                  CMP EDI,0x1
006B7666  74 55                     JZ 0x006b76bd
LAB_006b7668:
006B7668  8B 70 38                  MOV ESI,dword ptr [EAX + 0x38]
006B766B  33 C9                     XOR ECX,ECX
006B766D  F6 C2 02                  TEST DL,0x2
006B7670  74 12                     JZ 0x006b7684
006B7672  8B 50 28                  MOV EDX,dword ptr [EAX + 0x28]
006B7675  83 FA 01                  CMP EDX,0x1
006B7678  74 0A                     JZ 0x006b7684
006B767A  83 FA 03                  CMP EDX,0x3
006B767D  74 05                     JZ 0x006b7684
006B767F  B9 01 00 00 00            MOV ECX,0x1
LAB_006b7684:
006B7684  8B 00                     MOV EAX,dword ptr [EAX]
006B7686  53                        PUSH EBX
006B7687  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006B768A  8B 10                     MOV EDX,dword ptr [EAX]
006B768C  53                        PUSH EBX
006B768D  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
006B7690  53                        PUSH EBX
006B7691  51                        PUSH ECX
006B7692  57                        PUSH EDI
006B7693  56                        PUSH ESI
006B7694  50                        PUSH EAX
006B7695  FF 52 68                  CALL dword ptr [EDX + 0x68]
006B7698  8B F0                     MOV ESI,EAX
006B769A  5B                        POP EBX
006B769B  85 F6                     TEST ESI,ESI
006B769D  74 1E                     JZ 0x006b76bd
006B769F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B76A4  68 99 04 00 00            PUSH 0x499
006B76A9  68 C4 DB 7E 00            PUSH 0x7edbc4
006B76AE  50                        PUSH EAX
006B76AF  56                        PUSH ESI
006B76B0  E8 8B E7 FE FF            CALL 0x006a5e40
006B76B5  8B C6                     MOV EAX,ESI
006B76B7  5F                        POP EDI
006B76B8  5E                        POP ESI
006B76B9  5D                        POP EBP
006B76BA  C2 10 00                  RET 0x10
LAB_006b76bd:
006B76BD  5F                        POP EDI
006B76BE  33 C0                     XOR EAX,EAX
006B76C0  5E                        POP ESI
006B76C1  5D                        POP EBP
006B76C2  C2 10 00                  RET 0x10
