FUN_0073d530:
0073D530  55                        PUSH EBP
0073D531  8B EC                     MOV EBP,ESP
0073D533  83 EC 14                  SUB ESP,0x14
0073D536  83 3D EC A5 85 00 00      CMP dword ptr [0x0085a5ec],0x0
0073D53D  75 05                     JNZ 0x0073d544
0073D53F  E8 7C 95 FF FF            CALL 0x00736ac0
LAB_0073d544:
0073D544  68 04 01 00 00            PUSH 0x104
0073D549  68 F8 72 85 00            PUSH 0x8572f8
0073D54E  6A 00                     PUSH 0x0
0073D550  FF 15 94 BB 85 00         CALL dword ptr [0x0085bb94]
0073D556  C7 05 80 71 85 00 F8 72 85 00  MOV dword ptr [0x00857180],0x8572f8
0073D560  A1 94 A5 85 00            MOV EAX,[0x0085a594]
0073D565  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073D568  85 C9                     TEST ECX,ECX
0073D56A  75 0B                     JNZ 0x0073d577
0073D56C  8B 15 80 71 85 00         MOV EDX,dword ptr [0x00857180]
0073D572  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0073D575  EB 08                     JMP 0x0073d57f
LAB_0073d577:
0073D577  A1 94 A5 85 00            MOV EAX,[0x0085a594]
0073D57C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0073d57f:
0073D57F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0073D582  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0073D585  8D 55 FC                  LEA EDX,[EBP + -0x4]
0073D588  52                        PUSH EDX
0073D589  8D 45 F4                  LEA EAX,[EBP + -0xc]
0073D58C  50                        PUSH EAX
0073D58D  6A 00                     PUSH 0x0
0073D58F  6A 00                     PUSH 0x0
0073D591  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0073D594  51                        PUSH ECX
0073D595  E8 76 00 00 00            CALL 0x0073d610
0073D59A  83 C4 14                  ADD ESP,0x14
0073D59D  68 80 00 00 00            PUSH 0x80
0073D5A2  68 D0 0A 7A 00            PUSH 0x7a0ad0
0073D5A7  6A 02                     PUSH 0x2
0073D5A9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0073D5AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073D5AF  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
0073D5B2  51                        PUSH ECX
0073D5B3  E8 4C 3B CC FF            CALL 0x00401104
0073D5B8  83 C4 10                  ADD ESP,0x10
0073D5BB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0073D5BE  83 7D F8 00               CMP dword ptr [EBP + -0x8],0x0
0073D5C2  75 0A                     JNZ 0x0073d5ce
0073D5C4  6A 08                     PUSH 0x8
0073D5C6  E8 85 62 FF FF            CALL 0x00733850
0073D5CB  83 C4 04                  ADD ESP,0x4
LAB_0073d5ce:
0073D5CE  8D 55 FC                  LEA EDX,[EBP + -0x4]
0073D5D1  52                        PUSH EDX
0073D5D2  8D 45 F4                  LEA EAX,[EBP + -0xc]
0073D5D5  50                        PUSH EAX
0073D5D6  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0073D5D9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0073D5DC  8D 04 8A                  LEA EAX,[EDX + ECX*0x4]
0073D5DF  50                        PUSH EAX
0073D5E0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073D5E3  51                        PUSH ECX
0073D5E4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0073D5E7  52                        PUSH EDX
0073D5E8  E8 23 00 00 00            CALL 0x0073d610
0073D5ED  83 C4 14                  ADD ESP,0x14
0073D5F0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0073D5F3  83 E8 01                  SUB EAX,0x1
0073D5F6  A3 64 71 85 00            MOV [0x00857164],EAX
0073D5FB  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0073D5FE  89 0D 68 71 85 00         MOV dword ptr [0x00857168],ECX
0073D604  8B E5                     MOV ESP,EBP
0073D606  5D                        POP EBP
0073D607  C3                        RET
