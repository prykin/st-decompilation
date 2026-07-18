FUN_0075d370:
0075D370  55                        PUSH EBP
0075D371  8B EC                     MOV EBP,ESP
0075D373  83 EC 08                  SUB ESP,0x8
0075D376  53                        PUSH EBX
0075D377  56                        PUSH ESI
0075D378  57                        PUSH EDI
0075D379  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075D37C  8B 9F B2 01 00 00         MOV EBX,dword ptr [EDI + 0x1b2]
0075D382  8B 8F 26 01 00 00         MOV ECX,dword ptr [EDI + 0x126]
0075D388  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
0075D38B  3B C1                     CMP EAX,ECX
0075D38D  7C 65                     JL 0x0075d3f4
0075D38F  8B 47 1C                  MOV EAX,dword ptr [EDI + 0x1c]
0075D392  8B 8F D0 00 00 00         MOV ECX,dword ptr [EDI + 0xd0]
0075D398  85 C0                     TEST EAX,EAX
0075D39A  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0075D3A1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075D3A4  7E 47                     JLE 0x0075d3ed
0075D3A6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075D3A9  8D 73 0C                  LEA ESI,[EBX + 0xc]
0075D3AC  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
LAB_0075d3af:
0075D3AF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0075D3B2  8B 46 58                  MOV EAX,dword ptr [ESI + 0x58]
0075D3B5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075D3B8  56                        PUSH ESI
0075D3B9  0F AF 01                  IMUL EAX,dword ptr [ECX]
0075D3BC  8B 0A                     MOV ECX,dword ptr [EDX]
0075D3BE  8D 14 81                  LEA EDX,[ECX + EAX*0x4]
0075D3C1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075D3C4  52                        PUSH EDX
0075D3C5  50                        PUSH EAX
0075D3C6  57                        PUSH EDI
0075D3C7  FF 56 28                  CALL dword ptr [ESI + 0x28]
0075D3CA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075D3CD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0075D3D0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075D3D3  83 C1 04                  ADD ECX,0x4
0075D3D6  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0075D3D9  8B 4F 1C                  MOV ECX,dword ptr [EDI + 0x1c]
0075D3DC  40                        INC EAX
0075D3DD  83 C6 04                  ADD ESI,0x4
0075D3E0  83 C2 54                  ADD EDX,0x54
0075D3E3  3B C1                     CMP EAX,ECX
0075D3E5  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0075D3E8  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075D3EB  7C C2                     JL 0x0075d3af
LAB_0075d3ed:
0075D3ED  C7 43 5C 00 00 00 00      MOV dword ptr [EBX + 0x5c],0x0
LAB_0075d3f4:
0075D3F4  8B B7 26 01 00 00         MOV ESI,dword ptr [EDI + 0x126]
0075D3FA  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
0075D3FD  8B 43 60                  MOV EAX,dword ptr [EBX + 0x60]
0075D400  2B F2                     SUB ESI,EDX
0075D402  3B F0                     CMP ESI,EAX
0075D404  76 02                     JBE 0x0075d408
0075D406  8B F0                     MOV ESI,EAX
LAB_0075d408:
0075D408  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0075D40B  8B 01                     MOV EAX,dword ptr [ECX]
0075D40D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0075D410  2B C8                     SUB ECX,EAX
0075D412  3B F1                     CMP ESI,ECX
0075D414  76 02                     JBE 0x0075d418
0075D416  8B F1                     MOV ESI,ECX
LAB_0075d418:
0075D418  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0075D41B  8B 97 B6 01 00 00         MOV EDX,dword ptr [EDI + 0x1b6]
0075D421  56                        PUSH ESI
0075D422  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
0075D425  8B 4B 5C                  MOV ECX,dword ptr [EBX + 0x5c]
0075D428  50                        PUSH EAX
0075D429  8D 43 0C                  LEA EAX,[EBX + 0xc]
0075D42C  51                        PUSH ECX
0075D42D  50                        PUSH EAX
0075D42E  57                        PUSH EDI
0075D42F  FF 52 04                  CALL dword ptr [EDX + 0x4]
0075D432  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0075D435  8B 08                     MOV ECX,dword ptr [EAX]
0075D437  03 CE                     ADD ECX,ESI
0075D439  89 08                     MOV dword ptr [EAX],ECX
0075D43B  8B 53 60                  MOV EDX,dword ptr [EBX + 0x60]
0075D43E  8B 4B 5C                  MOV ECX,dword ptr [EBX + 0x5c]
0075D441  2B D6                     SUB EDX,ESI
0075D443  03 CE                     ADD ECX,ESI
0075D445  89 53 60                  MOV dword ptr [EBX + 0x60],EDX
0075D448  89 4B 5C                  MOV dword ptr [EBX + 0x5c],ECX
0075D44B  8B 87 26 01 00 00         MOV EAX,dword ptr [EDI + 0x126]
0075D451  8B D9                     MOV EBX,ECX
0075D453  5F                        POP EDI
0075D454  5E                        POP ESI
0075D455  3B D8                     CMP EBX,EAX
0075D457  5B                        POP EBX
0075D458  7C 05                     JL 0x0075d45f
0075D45A  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075D45D  FF 00                     INC dword ptr [EAX]
LAB_0075d45f:
0075D45F  8B E5                     MOV ESP,EBP
0075D461  5D                        POP EBP
0075D462  C2 1C 00                  RET 0x1c
