STAllPlayersC::DelObjsFromTmp:
0042C4B0  55                        PUSH EBP
0042C4B1  8B EC                     MOV EBP,ESP
0042C4B3  83 EC 50                  SUB ESP,0x50
0042C4B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042C4BB  53                        PUSH EBX
0042C4BC  56                        PUSH ESI
0042C4BD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0042C4C0  57                        PUSH EDI
0042C4C1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0042C4C4  8D 4D B0                  LEA ECX,[EBP + -0x50]
0042C4C7  6A 00                     PUSH 0x0
0042C4C9  52                        PUSH EDX
0042C4CA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0042C4CD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042C4D3  E8 18 13 30 00            CALL 0x0072d7f0
0042C4D8  8B F0                     MOV ESI,EAX
0042C4DA  83 C4 08                  ADD ESP,0x8
0042C4DD  85 F6                     TEST ESI,ESI
0042C4DF  75 75                     JNZ 0x0042c556
0042C4E1  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0042C4E4  85 DB                     TEST EBX,EBX
0042C4E6  75 1A                     JNZ 0x0042c502
0042C4E8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042C4ED  68 B4 02 00 00            PUSH 0x2b4
0042C4F2  68 04 60 7A 00            PUSH 0x7a6004
0042C4F7  50                        PUSH EAX
0042C4F8  68 09 00 FE AF            PUSH 0xaffe0009
0042C4FD  E8 3E 99 27 00            CALL 0x006a5e40
LAB_0042c502:
0042C502  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0042C505  33 FF                     XOR EDI,EDI
0042C507  85 C0                     TEST EAX,EAX
0042C509  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042C50C  7E 34                     JLE 0x0042c542
0042C50E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0042c511:
0042C511  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042C514  8B D7                     MOV EDX,EDI
0042C516  51                        PUSH ECX
0042C517  8B CB                     MOV ECX,EBX
0042C519  E8 52 07 28 00            CALL 0x006acc70
0042C51E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042C521  66 3D FF FF               CMP AX,0xffff
0042C525  74 13                     JZ 0x0042c53a
0042C527  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0042C52A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042C52D  50                        PUSH EAX
0042C52E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042C531  56                        PUSH ESI
0042C532  52                        PUSH EDX
0042C533  50                        PUSH EAX
0042C534  56                        PUSH ESI
0042C535  E8 A7 5F FD FF            CALL 0x004024e1
LAB_0042c53a:
0042C53A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042C53D  47                        INC EDI
0042C53E  3B F8                     CMP EDI,EAX
0042C540  7C CF                     JL 0x0042c511
LAB_0042c542:
0042C542  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0042C545  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_0042c54b:
0042C54B  33 C0                     XOR EAX,EAX
0042C54D  5F                        POP EDI
0042C54E  5E                        POP ESI
0042C54F  5B                        POP EBX
0042C550  8B E5                     MOV ESP,EBP
0042C552  5D                        POP EBP
0042C553  C2 10 00                  RET 0x10
LAB_0042c556:
0042C556  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0042C559  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0042C55F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042C565  74 E4                     JZ 0x0042c54b
0042C567  68 AC 62 7A 00            PUSH 0x7a62ac
0042C56C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042C571  56                        PUSH ESI
0042C572  6A 00                     PUSH 0x0
0042C574  68 BC 02 00 00            PUSH 0x2bc
0042C579  68 04 60 7A 00            PUSH 0x7a6004
0042C57E  E8 4D 0F 28 00            CALL 0x006ad4d0
0042C583  83 C4 18                  ADD ESP,0x18
0042C586  85 C0                     TEST EAX,EAX
0042C588  74 01                     JZ 0x0042c58b
0042C58A  CC                        INT3
LAB_0042c58b:
0042C58B  68 BD 02 00 00            PUSH 0x2bd
0042C590  68 04 60 7A 00            PUSH 0x7a6004
0042C595  6A 00                     PUSH 0x0
0042C597  56                        PUSH ESI
0042C598  E8 A3 98 27 00            CALL 0x006a5e40
0042C59D  5F                        POP EDI
0042C59E  5E                        POP ESI
0042C59F  83 C8 FF                  OR EAX,0xffffffff
0042C5A2  5B                        POP EBX
0042C5A3  8B E5                     MOV ESP,EBP
0042C5A5  5D                        POP EBP
0042C5A6  C2 10 00                  RET 0x10
