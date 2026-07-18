FUN_0043f200:
0043F200  55                        PUSH EBP
0043F201  8B EC                     MOV EBP,ESP
0043F203  83 EC 60                  SUB ESP,0x60
0043F206  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0043F20A  53                        PUSH EBX
0043F20B  56                        PUSH ESI
0043F20C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043F20F  57                        PUSH EDI
0043F210  6A 00                     PUSH 0x0
0043F212  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043F215  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043F218  C1 E1 04                  SHL ECX,0x4
0043F21B  03 C8                     ADD ECX,EAX
0043F21D  8B 04 4D 29 4E 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f4e29]
0043F224  8D 4D A0                  LEA ECX,[EBP + -0x60]
0043F227  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0043F22A  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0043F22D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0043F232  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0043F235  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0043F238  52                        PUSH EDX
0043F239  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0043F23C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043F242  E8 A9 E5 2E 00            CALL 0x0072d7f0
0043F247  8B F0                     MOV ESI,EAX
0043F249  83 C4 08                  ADD ESP,0x8
0043F24C  85 F6                     TEST ESI,ESI
0043F24E  0F 85 8C 00 00 00         JNZ 0x0043f2e0
0043F254  6A 01                     PUSH 0x1
0043F256  6A 02                     PUSH 0x2
0043F258  50                        PUSH EAX
0043F259  50                        PUSH EAX
0043F25A  E8 31 F0 26 00            CALL 0x006ae290
0043F25F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0043F262  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043F265  33 DB                     XOR EBX,EBX
0043F267  85 C0                     TEST EAX,EAX
0043F269  7E 60                     JLE 0x0043f2cb
LAB_0043f26b:
0043F26B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0043F26E  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0043F271  8B 3C 99                  MOV EDI,dword ptr [ECX + EBX*0x4]
0043F274  85 FF                     TEST EDI,EDI
0043F276  74 4B                     JZ 0x0043f2c3
0043F278  8B 17                     MOV EDX,dword ptr [EDI]
0043F27A  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0043F27D  50                        PUSH EAX
0043F27E  8B CF                     MOV ECX,EDI
0043F280  FF 52 74                  CALL dword ptr [EDX + 0x74]
0043F283  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0043F286  8D 75 E4                  LEA ESI,[EBP + -0x1c]
LAB_0043f289:
0043F289  8A 10                     MOV DL,byte ptr [EAX]
0043F28B  8A CA                     MOV CL,DL
0043F28D  3A 16                     CMP DL,byte ptr [ESI]
0043F28F  75 1C                     JNZ 0x0043f2ad
0043F291  84 C9                     TEST CL,CL
0043F293  74 14                     JZ 0x0043f2a9
0043F295  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
0043F298  8A CA                     MOV CL,DL
0043F29A  3A 56 01                  CMP DL,byte ptr [ESI + 0x1]
0043F29D  75 0E                     JNZ 0x0043f2ad
0043F29F  83 C0 02                  ADD EAX,0x2
0043F2A2  83 C6 02                  ADD ESI,0x2
0043F2A5  84 C9                     TEST CL,CL
0043F2A7  75 E0                     JNZ 0x0043f289
LAB_0043f2a9:
0043F2A9  33 C0                     XOR EAX,EAX
0043F2AB  EB 05                     JMP 0x0043f2b2
LAB_0043f2ad:
0043F2AD  1B C0                     SBB EAX,EAX
0043F2AF  83 D8 FF                  SBB EAX,-0x1
LAB_0043f2b2:
0043F2B2  85 C0                     TEST EAX,EAX
0043F2B4  75 0D                     JNZ 0x0043f2c3
0043F2B6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043F2B9  83 C7 32                  ADD EDI,0x32
0043F2BC  57                        PUSH EDI
0043F2BD  50                        PUSH EAX
0043F2BE  E8 FD EE 26 00            CALL 0x006ae1c0
LAB_0043f2c3:
0043F2C3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0043F2C6  43                        INC EBX
0043F2C7  3B D8                     CMP EBX,EAX
0043F2C9  7C A0                     JL 0x0043f26b
LAB_0043f2cb:
0043F2CB  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0043F2CE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0043F2D1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0043F2D7  5F                        POP EDI
0043F2D8  5E                        POP ESI
0043F2D9  5B                        POP EBX
0043F2DA  8B E5                     MOV ESP,EBP
0043F2DC  5D                        POP EBP
0043F2DD  C2 08 00                  RET 0x8
LAB_0043f2e0:
0043F2E0  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0043F2E3  68 94 7F 7A 00            PUSH 0x7a7f94
0043F2E8  68 CC 4C 7A 00            PUSH 0x7a4ccc
0043F2ED  56                        PUSH ESI
0043F2EE  6A 00                     PUSH 0x0
0043F2F0  68 75 20 00 00            PUSH 0x2075
0043F2F5  68 04 60 7A 00            PUSH 0x7a6004
0043F2FA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0043F300  E8 CB E1 26 00            CALL 0x006ad4d0
0043F305  83 C4 18                  ADD ESP,0x18
0043F308  85 C0                     TEST EAX,EAX
0043F30A  74 01                     JZ 0x0043f30d
0043F30C  CC                        INT3
LAB_0043f30d:
0043F30D  68 76 20 00 00            PUSH 0x2076
0043F312  68 04 60 7A 00            PUSH 0x7a6004
0043F317  6A 00                     PUSH 0x0
0043F319  56                        PUSH ESI
0043F31A  E8 21 6B 26 00            CALL 0x006a5e40
0043F31F  5F                        POP EDI
0043F320  5E                        POP ESI
0043F321  33 C0                     XOR EAX,EAX
0043F323  5B                        POP EBX
0043F324  8B E5                     MOV ESP,EBP
0043F326  5D                        POP EBP
0043F327  C2 08 00                  RET 0x8
