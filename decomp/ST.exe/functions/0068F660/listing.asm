FUN_0068f660:
0068F660  55                        PUSH EBP
0068F661  8B EC                     MOV EBP,ESP
0068F663  83 EC 48                  SUB ESP,0x48
0068F666  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068F66B  53                        PUSH EBX
0068F66C  56                        PUSH ESI
0068F66D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068F670  57                        PUSH EDI
0068F671  8D 55 BC                  LEA EDX,[EBP + -0x44]
0068F674  8D 4D B8                  LEA ECX,[EBP + -0x48]
0068F677  6A 00                     PUSH 0x0
0068F679  52                        PUSH EDX
0068F67A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0068F67D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068F683  E8 68 E1 09 00            CALL 0x0072d7f0
0068F688  8B F0                     MOV ESI,EAX
0068F68A  83 C4 08                  ADD ESP,0x8
0068F68D  85 F6                     TEST ESI,ESI
0068F68F  0F 85 B3 00 00 00         JNZ 0x0068f748
0068F695  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068F698  85 FF                     TEST EDI,EDI
0068F69A  0F 84 96 00 00 00         JZ 0x0068f736
0068F6A0  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0068F6A3  85 C0                     TEST EAX,EAX
0068F6A5  0F 86 8B 00 00 00         JBE 0x0068f736
0068F6AB  8D 58 FF                  LEA EBX,[EAX + -0x1]
0068F6AE  85 DB                     TEST EBX,EBX
0068F6B0  0F 8C 80 00 00 00         JL 0x0068f736
LAB_0068f6b6:
0068F6B6  3B 5F 0C                  CMP EBX,dword ptr [EDI + 0xc]
0068F6B9  73 0D                     JNC 0x0068f6c8
0068F6BB  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0068F6BE  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0068F6C1  0F AF C3                  IMUL EAX,EBX
0068F6C4  03 C1                     ADD EAX,ECX
0068F6C6  EB 02                     JMP 0x0068f6ca
LAB_0068f6c8:
0068F6C8  33 C0                     XOR EAX,EAX
LAB_0068f6ca:
0068F6CA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0068F6D0  66 8B 00                  MOV AX,word ptr [EAX]
0068F6D3  85 C9                     TEST ECX,ECX
0068F6D5  74 13                     JZ 0x0068f6ea
0068F6D7  6A 01                     PUSH 0x1
0068F6D9  50                        PUSH EAX
0068F6DA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068F6DD  8A 50 24                  MOV DL,byte ptr [EAX + 0x24]
0068F6E0  52                        PUSH EDX
0068F6E1  E8 D4 31 D7 FF            CALL 0x004028ba
0068F6E6  8B F0                     MOV ESI,EAX
0068F6E8  EB 02                     JMP 0x0068f6ec
LAB_0068f6ea:
0068F6EA  33 F6                     XOR ESI,ESI
LAB_0068f6ec:
0068F6EC  85 F6                     TEST ESI,ESI
0068F6EE  74 43                     JZ 0x0068f733
0068F6F0  8B 06                     MOV EAX,dword ptr [ESI]
0068F6F2  8B CE                     MOV ECX,ESI
0068F6F4  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0068F6F7  83 F8 01                  CMP EAX,0x1
0068F6FA  7C 0C                     JL 0x0068f708
0068F6FC  83 F8 29                  CMP EAX,0x29
0068F6FF  7D 07                     JGE 0x0068f708
0068F701  B8 01 00 00 00            MOV EAX,0x1
0068F706  EB 02                     JMP 0x0068f70a
LAB_0068f708:
0068F708  33 C0                     XOR EAX,EAX
LAB_0068f70a:
0068F70A  85 C0                     TEST EAX,EAX
0068F70C  74 25                     JZ 0x0068f733
0068F70E  66 8B 86 1C 08 00 00      MOV AX,word ptr [ESI + 0x81c]
0068F715  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068F718  50                        PUSH EAX
0068F719  E8 05 64 D7 FF            CALL 0x00405b23
0068F71E  85 C0                     TEST EAX,EAX
0068F720  74 11                     JZ 0x0068f733
0068F722  6A 00                     PUSH 0x0
0068F724  56                        PUSH ESI
0068F725  8B C8                     MOV ECX,EAX
0068F727  E8 D4 4A D7 FF            CALL 0x00404200
0068F72C  53                        PUSH EBX
0068F72D  57                        PUSH EDI
0068F72E  E8 3D 15 02 00            CALL 0x006b0c70
LAB_0068f733:
0068F733  4B                        DEC EBX
0068F734  79 80                     JNS 0x0068f6b6
LAB_0068f736:
0068F736  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0068F739  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068F73F  5F                        POP EDI
0068F740  5E                        POP ESI
0068F741  5B                        POP EBX
0068F742  8B E5                     MOV ESP,EBP
0068F744  5D                        POP EBP
0068F745  C2 04 00                  RET 0x4
LAB_0068f748:
0068F748  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0068F74B  68 04 58 7D 00            PUSH 0x7d5804
0068F750  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068F755  56                        PUSH ESI
0068F756  6A 00                     PUSH 0x0
0068F758  68 92 02 00 00            PUSH 0x292
0068F75D  68 E0 56 7D 00            PUSH 0x7d56e0
0068F762  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068F768  E8 63 DD 01 00            CALL 0x006ad4d0
0068F76D  83 C4 18                  ADD ESP,0x18
0068F770  85 C0                     TEST EAX,EAX
0068F772  74 01                     JZ 0x0068f775
0068F774  CC                        INT3
LAB_0068f775:
0068F775  68 93 02 00 00            PUSH 0x293
0068F77A  68 E0 56 7D 00            PUSH 0x7d56e0
0068F77F  6A 00                     PUSH 0x0
0068F781  56                        PUSH ESI
0068F782  E8 B9 66 01 00            CALL 0x006a5e40
0068F787  5F                        POP EDI
0068F788  5E                        POP ESI
0068F789  5B                        POP EBX
0068F78A  8B E5                     MOV ESP,EBP
0068F78C  5D                        POP EBP
0068F78D  C2 04 00                  RET 0x4
