FUN_0072a550:
0072A550  55                        PUSH EBP
0072A551  8B EC                     MOV EBP,ESP
0072A553  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072A556  53                        PUSH EBX
0072A557  56                        PUSH ESI
0072A558  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0072A55B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072A55E  57                        PUSH EDI
0072A55F  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0072A562  3B F9                     CMP EDI,ECX
0072A564  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0072A567  7D 64                     JGE 0x0072a5cd
LAB_0072a569:
0072A569  8B 10                     MOV EDX,dword ptr [EAX]
0072A56B  4A                        DEC EDX
0072A56C  89 10                     MOV dword ptr [EAX],EDX
0072A56E  78 5D                     JS 0x0072a5cd
0072A570  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0072A573  46                        INC ESI
0072A574  83 C1 02                  ADD ECX,0x2
0072A577  D1 EA                     SHR EDX,0x1
0072A579  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
0072A57C  75 07                     JNZ 0x0072a585
0072A57E  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a585:
0072A585  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0072A588  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072A58B  03 DA                     ADD EBX,EDX
0072A58D  89 58 10                  MOV dword ptr [EAX + 0x10],EBX
0072A590  8B D3                     MOV EDX,EBX
0072A592  C1 EB 10                  SHR EBX,0x10
0072A595  74 21                     JZ 0x0072a5b8
0072A597  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0072A59A  81 E2 FF FF 00 00         AND EDX,0xffff
0072A5A0  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
0072A5A3  03 F3                     ADD ESI,EBX
0072A5A5  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0072A5A8  8D 57 01                  LEA EDX,[EDI + 0x1]
0072A5AB  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072A5AE  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0072A5B1  3B D7                     CMP EDX,EDI
0072A5B3  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
0072A5B6  7D 15                     JGE 0x0072a5cd
LAB_0072a5b8:
0072A5B8  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0072A5BB  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
0072A5BE  03 FA                     ADD EDI,EDX
0072A5C0  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0072A5C3  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
0072A5C6  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
0072A5C9  3B FA                     CMP EDI,EDX
0072A5CB  7C 9C                     JL 0x0072a569
LAB_0072a5cd:
0072A5CD  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0072A5D0  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072A5D3  3B D7                     CMP EDX,EDI
0072A5D5  0F 8D 80 00 00 00         JGE 0x0072a65b
0072A5DB  8B 10                     MOV EDX,dword ptr [EAX]
0072A5DD  4A                        DEC EDX
0072A5DE  89 10                     MOV dword ptr [EAX],EDX
0072A5E0  78 79                     JS 0x0072a65b
0072A5E2  8A 5D 1C                  MOV BL,byte ptr [EBP + 0x1c]
LAB_0072a5e5:
0072A5E5  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0072A5E8  8B 78 24                  MOV EDI,dword ptr [EAX + 0x24]
0072A5EB  85 D7                     TEST EDI,EDX
0072A5ED  74 11                     JZ 0x0072a600
0072A5EF  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
0072A5F2  33 FF                     XOR EDI,EDI
0072A5F4  66 8B 39                  MOV DI,word ptr [ECX]
0072A5F7  C1 FA 10                  SAR EDX,0x10
0072A5FA  3B D7                     CMP EDX,EDI
0072A5FC  7D 02                     JGE 0x0072a600
0072A5FE  88 1E                     MOV byte ptr [ESI],BL
LAB_0072a600:
0072A600  8B 50 20                  MOV EDX,dword ptr [EAX + 0x20]
0072A603  D1 EA                     SHR EDX,0x1
0072A605  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
0072A608  75 07                     JNZ 0x0072a611
0072A60A  C7 40 20 00 00 00 80      MOV dword ptr [EAX + 0x20],0x80000000
LAB_0072a611:
0072A611  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0072A614  8B 78 10                  MOV EDI,dword ptr [EAX + 0x10]
0072A617  03 FA                     ADD EDI,EDX
0072A619  46                        INC ESI
0072A61A  83 C1 02                  ADD ECX,0x2
0072A61D  89 78 10                  MOV dword ptr [EAX + 0x10],EDI
0072A620  8B D7                     MOV EDX,EDI
0072A622  C1 EF 10                  SHR EDI,0x10
0072A625  74 22                     JZ 0x0072a649
0072A627  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0072A62A  81 E2 FF FF 00 00         AND EDX,0xffff
0072A630  03 F7                     ADD ESI,EDI
0072A632  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0072A635  89 50 10                  MOV dword ptr [EAX + 0x10],EDX
0072A638  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0072A63B  8D 0C 79                  LEA ECX,[ECX + EDI*0x2]
0072A63E  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0072A641  42                        INC EDX
0072A642  3B D7                     CMP EDX,EDI
0072A644  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0072A647  7D 12                     JGE 0x0072a65b
LAB_0072a649:
0072A649  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0072A64C  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
0072A64F  03 FA                     ADD EDI,EDX
0072A651  8B 10                     MOV EDX,dword ptr [EAX]
0072A653  4A                        DEC EDX
0072A654  89 78 18                  MOV dword ptr [EAX + 0x18],EDI
0072A657  89 10                     MOV dword ptr [EAX],EDX
0072A659  79 8A                     JNS 0x0072a5e5
LAB_0072a65b:
0072A65B  5F                        POP EDI
0072A65C  5E                        POP ESI
0072A65D  5B                        POP EBX
0072A65E  5D                        POP EBP
0072A65F  C3                        RET
