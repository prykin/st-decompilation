ViewerClassTy::_Draw:
0071E730  55                        PUSH EBP
0071E731  8B EC                     MOV EBP,ESP
0071E733  83 EC 48                  SUB ESP,0x48
0071E736  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071E73B  53                        PUSH EBX
0071E73C  56                        PUSH ESI
0071E73D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0071E740  57                        PUSH EDI
0071E741  8D 55 BC                  LEA EDX,[EBP + -0x44]
0071E744  8D 4D B8                  LEA ECX,[EBP + -0x48]
0071E747  6A 00                     PUSH 0x0
0071E749  52                        PUSH EDX
0071E74A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0071E74D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071E753  E8 98 F0 00 00            CALL 0x0072d7f0
0071E758  8B F0                     MOV ESI,EAX
0071E75A  83 C4 08                  ADD ESP,0x8
0071E75D  85 F6                     TEST ESI,ESI
0071E75F  0F 85 AF 00 00 00         JNZ 0x0071e814
0071E765  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0071E768  F6 46 20 02               TEST byte ptr [ESI + 0x20],0x2
0071E76C  74 2A                     JZ 0x0071e798
0071E76E  8B 8E F0 01 00 00         MOV ECX,dword ptr [ESI + 0x1f0]
0071E774  8B 96 EC 01 00 00         MOV EDX,dword ptr [ESI + 0x1ec]
0071E77A  8B 06                     MOV EAX,dword ptr [ESI]
0071E77C  6A 00                     PUSH 0x0
0071E77E  6A 00                     PUSH 0x0
0071E780  51                        PUSH ECX
0071E781  52                        PUSH EDX
0071E782  8B CE                     MOV ECX,ESI
0071E784  FF 50 08                  CALL dword ptr [EAX + 0x8]
0071E787  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0071E78A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071E78F  33 C0                     XOR EAX,EAX
0071E791  5F                        POP EDI
0071E792  5E                        POP ESI
0071E793  5B                        POP EBX
0071E794  8B E5                     MOV ESP,EBP
0071E796  5D                        POP EBP
0071E797  C3                        RET
LAB_0071e798:
0071E798  8B 86 E0 01 00 00         MOV EAX,dword ptr [ESI + 0x1e0]
0071E79E  33 DB                     XOR EBX,EBX
0071E7A0  85 C0                     TEST EAX,EAX
0071E7A2  7E 5F                     JLE 0x0071e803
LAB_0071e7a4:
0071E7A4  8B 86 DC 01 00 00         MOV EAX,dword ptr [ESI + 0x1dc]
0071E7AA  33 FF                     XOR EDI,EDI
0071E7AC  85 C0                     TEST EAX,EAX
0071E7AE  7E 48                     JLE 0x0071e7f8
LAB_0071e7b0:
0071E7B0  8B 8E D8 01 00 00         MOV ECX,dword ptr [ESI + 0x1d8]
0071E7B6  8B 96 E8 01 00 00         MOV EDX,dword ptr [ESI + 0x1e8]
0071E7BC  03 CA                     ADD ECX,EDX
0071E7BE  8B 96 D4 01 00 00         MOV EDX,dword ptr [ESI + 0x1d4]
0071E7C4  0F AF CB                  IMUL ECX,EBX
0071E7C7  51                        PUSH ECX
0071E7C8  8B 8E E4 01 00 00         MOV ECX,dword ptr [ESI + 0x1e4]
0071E7CE  03 D1                     ADD EDX,ECX
0071E7D0  8B 8E F0 01 00 00         MOV ECX,dword ptr [ESI + 0x1f0]
0071E7D6  0F AF D7                  IMUL EDX,EDI
0071E7D9  8B 06                     MOV EAX,dword ptr [ESI]
0071E7DB  52                        PUSH EDX
0071E7DC  8B 96 EC 01 00 00         MOV EDX,dword ptr [ESI + 0x1ec]
0071E7E2  03 CB                     ADD ECX,EBX
0071E7E4  03 D7                     ADD EDX,EDI
0071E7E6  51                        PUSH ECX
0071E7E7  52                        PUSH EDX
0071E7E8  8B CE                     MOV ECX,ESI
0071E7EA  FF 50 08                  CALL dword ptr [EAX + 0x8]
0071E7ED  8B 86 DC 01 00 00         MOV EAX,dword ptr [ESI + 0x1dc]
0071E7F3  47                        INC EDI
0071E7F4  3B F8                     CMP EDI,EAX
0071E7F6  7C B8                     JL 0x0071e7b0
LAB_0071e7f8:
0071E7F8  8B 86 E0 01 00 00         MOV EAX,dword ptr [ESI + 0x1e0]
0071E7FE  43                        INC EBX
0071E7FF  3B D8                     CMP EBX,EAX
0071E801  7C A1                     JL 0x0071e7a4
LAB_0071e803:
0071E803  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0071E806  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071E80B  33 C0                     XOR EAX,EAX
0071E80D  5F                        POP EDI
0071E80E  5E                        POP ESI
0071E80F  5B                        POP EBX
0071E810  8B E5                     MOV ESP,EBP
0071E812  5D                        POP EBP
0071E813  C3                        RET
LAB_0071e814:
0071E814  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0071E817  68 80 0A 7F 00            PUSH 0x7f0a80
0071E81C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071E821  56                        PUSH ESI
0071E822  6A 00                     PUSH 0x0
0071E824  6A 16                     PUSH 0x16
0071E826  68 68 0A 7F 00            PUSH 0x7f0a68
0071E82B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071E831  E8 9A EC F8 FF            CALL 0x006ad4d0
0071E836  83 C4 18                  ADD ESP,0x18
0071E839  85 C0                     TEST EAX,EAX
0071E83B  74 01                     JZ 0x0071e83e
0071E83D  CC                        INT3
LAB_0071e83e:
0071E83E  6A 17                     PUSH 0x17
0071E840  68 68 0A 7F 00            PUSH 0x7f0a68
0071E845  6A 00                     PUSH 0x0
0071E847  56                        PUSH ESI
0071E848  E8 F3 75 F8 FF            CALL 0x006a5e40
0071E84D  8B C6                     MOV EAX,ESI
0071E84F  5F                        POP EDI
0071E850  5E                        POP ESI
0071E851  5B                        POP EBX
0071E852  8B E5                     MOV ESP,EBP
0071E854  5D                        POP EBP
0071E855  C3                        RET
