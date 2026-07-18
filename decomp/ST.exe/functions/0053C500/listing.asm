ResearchPanelTy::Update:
0053C500  55                        PUSH EBP
0053C501  8B EC                     MOV EBP,ESP
0053C503  83 EC 48                  SUB ESP,0x48
0053C506  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053C50B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053C50E  56                        PUSH ESI
0053C50F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053C512  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053C515  6A 00                     PUSH 0x0
0053C517  52                        PUSH EDX
0053C518  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053C51B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053C521  E8 CA 12 1F 00            CALL 0x0072d7f0
0053C526  8B F0                     MOV ESI,EAX
0053C528  83 C4 08                  ADD ESP,0x8
0053C52B  85 F6                     TEST ESI,ESI
0053C52D  75 68                     JNZ 0x0053c597
0053C52F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0053C532  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0053C538  8D 86 7A 02 00 00         LEA EAX,[ESI + 0x27a]
0053C53E  50                        PUSH EAX
0053C53F  6A 06                     PUSH 0x6
0053C541  E8 76 70 EC FF            CALL 0x004035bc
0053C546  33 C9                     XOR ECX,ECX
0053C548  8A 8E 79 02 00 00         MOV CL,byte ptr [ESI + 0x279]
0053C54E  8B 84 8E 7A 02 00 00      MOV EAX,dword ptr [ESI + ECX*0x4 + 0x27a]
0053C555  85 C0                     TEST EAX,EAX
0053C557  74 05                     JZ 0x0053c55e
0053C559  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0053C55C  EB 02                     JMP 0x0053c560
LAB_0053c55e:
0053C55E  33 C9                     XOR ECX,ECX
LAB_0053c560:
0053C560  33 D2                     XOR EDX,EDX
0053C562  8A 96 78 02 00 00         MOV DL,byte ptr [ESI + 0x278]
0053C568  8B 84 96 7A 02 00 00      MOV EAX,dword ptr [ESI + EDX*0x4 + 0x27a]
0053C56F  85 C0                     TEST EAX,EAX
0053C571  74 05                     JZ 0x0053c578
0053C573  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0053C576  EB 02                     JMP 0x0053c57a
LAB_0053c578:
0053C578  33 C0                     XOR EAX,EAX
LAB_0053c57a:
0053C57A  51                        PUSH ECX
0053C57B  50                        PUSH EAX
0053C57C  8B CE                     MOV ECX,ESI
0053C57E  E8 90 64 EC FF            CALL 0x00402a13
0053C583  8B CE                     MOV ECX,ESI
0053C585  E8 DA 90 EC FF            CALL 0x00405664
0053C58A  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053C58D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053C592  5E                        POP ESI
0053C593  8B E5                     MOV ESP,EBP
0053C595  5D                        POP EBP
0053C596  C3                        RET
LAB_0053c597:
0053C597  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053C59A  68 34 77 7C 00            PUSH 0x7c7734
0053C59F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053C5A4  56                        PUSH ESI
0053C5A5  6A 00                     PUSH 0x0
0053C5A7  6A 52                     PUSH 0x52
0053C5A9  68 C8 76 7C 00            PUSH 0x7c76c8
0053C5AE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053C5B4  E8 17 0F 17 00            CALL 0x006ad4d0
0053C5B9  83 C4 18                  ADD ESP,0x18
0053C5BC  85 C0                     TEST EAX,EAX
0053C5BE  74 01                     JZ 0x0053c5c1
0053C5C0  CC                        INT3
LAB_0053c5c1:
0053C5C1  6A 52                     PUSH 0x52
0053C5C3  68 C8 76 7C 00            PUSH 0x7c76c8
0053C5C8  6A 00                     PUSH 0x0
0053C5CA  56                        PUSH ESI
0053C5CB  E8 70 98 16 00            CALL 0x006a5e40
0053C5D0  5E                        POP ESI
0053C5D1  8B E5                     MOV ESP,EBP
0053C5D3  5D                        POP EBP
0053C5D4  C3                        RET
