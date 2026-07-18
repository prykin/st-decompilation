FUN_0073c780:
0073C780  55                        PUSH EBP
0073C781  8B EC                     MOV EBP,ESP
0073C783  83 EC 24                  SUB ESP,0x24
0073C786  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0073C78D  6A 00                     PUSH 0x0
0073C78F  6A 00                     PUSH 0x0
0073C791  6A 00                     PUSH 0x0
0073C793  6A 00                     PUSH 0x0
0073C795  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073C798  50                        PUSH EAX
0073C799  8D 4D EC                  LEA ECX,[EBP + -0x14]
0073C79C  51                        PUSH ECX
0073C79D  8D 55 F0                  LEA EDX,[EBP + -0x10]
0073C7A0  52                        PUSH EDX
0073C7A1  E8 2A 6D 00 00            CALL 0x007434d0
0073C7A6  83 C4 1C                  ADD ESP,0x1c
0073C7A9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073C7AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073C7AF  83 E0 04                  AND EAX,0x4
0073C7B2  85 C0                     TEST EAX,EAX
0073C7B4  74 19                     JZ 0x0073c7cf
0073C7B6  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073C7B9  80 CD 02                  OR CH,0x2
0073C7BC  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0073C7BF  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
0073C7C6  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0073C7CD  EB 45                     JMP 0x0073c814
LAB_0073c7cf:
0073C7CF  8D 55 E4                  LEA EDX,[EBP + -0x1c]
0073C7D2  52                        PUSH EDX
0073C7D3  8D 45 F0                  LEA EAX,[EBP + -0x10]
0073C7D6  50                        PUSH EAX
0073C7D7  E8 04 3C 00 00            CALL 0x007403e0
0073C7DC  83 C4 08                  ADD ESP,0x8
0073C7DF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0073C7E2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073C7E5  83 E1 02                  AND ECX,0x2
0073C7E8  85 C9                     TEST ECX,ECX
0073C7EA  75 06                     JNZ 0x0073c7f2
0073C7EC  83 7D DC 01               CMP dword ptr [EBP + -0x24],0x1
0073C7F0  75 09                     JNZ 0x0073c7fb
LAB_0073c7f2:
0073C7F2  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0073C7F5  80 CA 80                  OR DL,0x80
0073C7F8  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0073c7fb:
0073C7FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0073C7FE  83 E0 01                  AND EAX,0x1
0073C801  85 C0                     TEST EAX,EAX
0073C803  75 06                     JNZ 0x0073c80b
0073C805  83 7D DC 02               CMP dword ptr [EBP + -0x24],0x2
0073C809  75 09                     JNZ 0x0073c814
LAB_0073c80b:
0073C80B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0073C80E  80 CD 01                  OR CH,0x1
0073C811  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
LAB_0073c814:
0073C814  8B 15 68 1F 7F 00         MOV EDX,dword ptr [0x007f1f68]
0073C81A  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0073C81D  89 02                     MOV dword ptr [EDX],EAX
0073C81F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0073C822  2B 4D 08                  SUB ECX,dword ptr [EBP + 0x8]
0073C825  8B 15 68 1F 7F 00         MOV EDX,dword ptr [0x007f1f68]
0073C82B  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
0073C82E  A1 68 1F 7F 00            MOV EAX,[0x007f1f68]
0073C833  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0073C836  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
0073C839  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0073C83C  89 50 14                  MOV dword ptr [EAX + 0x14],EDX
0073C83F  A1 68 1F 7F 00            MOV EAX,[0x007f1f68]
0073C844  8B E5                     MOV ESP,EBP
0073C846  5D                        POP EBP
0073C847  C3                        RET
