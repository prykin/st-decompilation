FUN_0071a530:
0071A530  55                        PUSH EBP
0071A531  8B EC                     MOV EBP,ESP
0071A533  81 EC 04 02 00 00         SUB ESP,0x204
0071A539  53                        PUSH EBX
0071A53A  56                        PUSH ESI
0071A53B  57                        PUSH EDI
0071A53C  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071A53F  85 FF                     TEST EDI,EDI
0071A541  74 6A                     JZ 0x0071a5ad
0071A543  8B 47 05                  MOV EAX,dword ptr [EDI + 0x5]
0071A546  85 C0                     TEST EAX,EAX
0071A548  74 63                     JZ 0x0071a5ad
0071A54A  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
0071A551  8B 4F 05                  MOV ECX,dword ptr [EDI + 0x5]
0071A554  8D 95 FC FD FF FF         LEA EDX,[EBP + 0xfffffdfc]
0071A55A  E8 31 6C F9 FF            CALL 0x006b1190
0071A55F  85 C0                     TEST EAX,EAX
0071A561  7C 4A                     JL 0x0071a5ad
0071A563  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0071a566:
0071A566  8B F3                     MOV ESI,EBX
0071A568  8D 85 FC FD FF FF         LEA EAX,[EBP + 0xfffffdfc]
LAB_0071a56e:
0071A56E  8A 10                     MOV DL,byte ptr [EAX]
0071A570  8A CA                     MOV CL,DL
0071A572  3A 16                     CMP DL,byte ptr [ESI]
0071A574  75 1C                     JNZ 0x0071a592
0071A576  84 C9                     TEST CL,CL
0071A578  74 14                     JZ 0x0071a58e
0071A57A  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0071A57D  8A CA                     MOV CL,DL
0071A57F  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
0071A582  75 0E                     JNZ 0x0071a592
0071A584  83 C0 02                  ADD EAX,0x2
0071A587  83 C6 02                  ADD ESI,0x2
0071A58A  84 C9                     TEST CL,CL
0071A58C  75 E0                     JNZ 0x0071a56e
LAB_0071a58e:
0071A58E  33 C0                     XOR EAX,EAX
0071A590  EB 05                     JMP 0x0071a597
LAB_0071a592:
0071A592  1B C0                     SBB EAX,EAX
0071A594  83 D8 FF                  SBB EAX,-0x1
LAB_0071a597:
0071A597  85 C0                     TEST EAX,EAX
0071A599  74 39                     JZ 0x0071a5d4
0071A59B  8B 4F 05                  MOV ECX,dword ptr [EDI + 0x5]
0071A59E  8D 95 FC FD FF FF         LEA EDX,[EBP + 0xfffffdfc]
0071A5A4  E8 E7 6B F9 FF            CALL 0x006b1190
0071A5A9  85 C0                     TEST EAX,EAX
0071A5AB  7D B9                     JGE 0x0071a566
LAB_0071a5ad:
0071A5AD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0071A5B0  85 C0                     TEST EAX,EAX
0071A5B2  74 17                     JZ 0x0071a5cb
0071A5B4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071A5B9  68 31 01 00 00            PUSH 0x131
0071A5BE  68 00 08 7F 00            PUSH 0x7f0800
0071A5C3  50                        PUSH EAX
0071A5C4  6A FC                     PUSH -0x4
0071A5C6  E8 75 B8 F8 FF            CALL 0x006a5e40
LAB_0071a5cb:
0071A5CB  5F                        POP EDI
0071A5CC  5E                        POP ESI
0071A5CD  33 C0                     XOR EAX,EAX
0071A5CF  5B                        POP EBX
0071A5D0  8B E5                     MOV ESP,EBP
0071A5D2  5D                        POP EBP
0071A5D3  C3                        RET
LAB_0071a5d4:
0071A5D4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071A5D7  5F                        POP EDI
0071A5D8  5E                        POP ESI
0071A5D9  5B                        POP EBX
0071A5DA  8B E5                     MOV ESP,EBP
0071A5DC  5D                        POP EBP
0071A5DD  C3                        RET
