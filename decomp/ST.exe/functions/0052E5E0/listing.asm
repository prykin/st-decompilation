OptPanelTy::InitOptPanel:
0052E5E0  55                        PUSH EBP
0052E5E1  8B EC                     MOV EBP,ESP
0052E5E3  83 EC 48                  SUB ESP,0x48
0052E5E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0052E5EB  56                        PUSH ESI
0052E5EC  57                        PUSH EDI
0052E5ED  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0052E5F0  33 FF                     XOR EDI,EDI
0052E5F2  8D 55 BC                  LEA EDX,[EBP + -0x44]
0052E5F5  8D 4D B8                  LEA ECX,[EBP + -0x48]
0052E5F8  57                        PUSH EDI
0052E5F9  52                        PUSH EDX
0052E5FA  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0052E5FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052E603  E8 E8 F1 1F 00            CALL 0x0072d7f0
0052E608  8B F0                     MOV ESI,EAX
0052E60A  83 C4 08                  ADD ESP,0x8
0052E60D  3B F7                     CMP ESI,EDI
0052E60F  0F 85 FE 01 00 00         JNZ 0x0052e813
0052E615  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0052E618  A1 28 2A 80 00            MOV EAX,[0x00802a28]
0052E61D  89 35 DC 16 80 00         MOV dword ptr [0x008016dc],ESI
0052E623  8B 48 28                  MOV ECX,dword ptr [EAX + 0x28]
0052E626  51                        PUSH ECX
0052E627  68 9D 01 00 00            PUSH 0x19d
0052E62C  E8 CF F8 1D 00            CALL 0x0070df00
0052E631  89 86 7C 01 00 00         MOV dword ptr [ESI + 0x17c],EAX
0052E637  89 78 58                  MOV dword ptr [EAX + 0x58],EDI
0052E63A  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
0052E63D  8B 15 28 2A 80 00         MOV EDX,dword ptr [0x00802a28]
0052E643  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
0052E646  50                        PUSH EAX
0052E647  68 9D 01 00 00            PUSH 0x19d
0052E64C  E8 AF F8 1D 00            CALL 0x0070df00
0052E651  83 C4 10                  ADD ESP,0x10
0052E654  89 86 80 01 00 00         MOV dword ptr [ESI + 0x180],EAX
0052E65A  C7 40 58 01 00 00 00      MOV dword ptr [EAX + 0x58],0x1
0052E661  89 78 5C                  MOV dword ptr [EAX + 0x5c],EDI
0052E664  6A 01                     PUSH 0x1
0052E666  57                        PUSH EDI
0052E667  57                        PUSH EDI
0052E668  68 3C 71 7C 00            PUSH 0x7c713c
0052E66D  E8 0A 71 ED FF            CALL 0x0040577c
0052E672  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052E678  83 C4 08                  ADD ESP,0x8
0052E67B  50                        PUSH EAX
0052E67C  6A 01                     PUSH 0x1
0052E67E  E8 5D 36 1C 00            CALL 0x006f1ce0
0052E683  6A 01                     PUSH 0x1
0052E685  57                        PUSH EDI
0052E686  57                        PUSH EDI
0052E687  68 2C 71 7C 00            PUSH 0x7c712c
0052E68C  89 86 84 01 00 00         MOV dword ptr [ESI + 0x184],EAX
0052E692  89 BE 88 01 00 00         MOV dword ptr [ESI + 0x188],EDI
0052E698  E8 DF 70 ED FF            CALL 0x0040577c
0052E69D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052E6A3  83 C4 08                  ADD ESP,0x8
0052E6A6  50                        PUSH EAX
0052E6A7  6A 01                     PUSH 0x1
0052E6A9  E8 32 36 1C 00            CALL 0x006f1ce0
0052E6AE  6A 01                     PUSH 0x1
0052E6B0  57                        PUSH EDI
0052E6B1  57                        PUSH EDI
0052E6B2  68 1C 71 7C 00            PUSH 0x7c711c
0052E6B7  89 86 8C 01 00 00         MOV dword ptr [ESI + 0x18c],EAX
0052E6BD  E8 BA 70 ED FF            CALL 0x0040577c
0052E6C2  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052E6C8  83 C4 08                  ADD ESP,0x8
0052E6CB  50                        PUSH EAX
0052E6CC  6A 01                     PUSH 0x1
0052E6CE  E8 0D 36 1C 00            CALL 0x006f1ce0
0052E6D3  6A 01                     PUSH 0x1
0052E6D5  57                        PUSH EDI
0052E6D6  57                        PUSH EDI
0052E6D7  68 0C 71 7C 00            PUSH 0x7c710c
0052E6DC  89 86 90 01 00 00         MOV dword ptr [ESI + 0x190],EAX
0052E6E2  E8 95 70 ED FF            CALL 0x0040577c
0052E6E7  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0052E6ED  83 C4 08                  ADD ESP,0x8
0052E6F0  50                        PUSH EAX
0052E6F1  6A 01                     PUSH 0x1
0052E6F3  E8 E8 35 1C 00            CALL 0x006f1ce0
0052E6F8  57                        PUSH EDI
0052E6F9  57                        PUSH EDI
0052E6FA  6A 01                     PUSH 0x1
0052E6FC  57                        PUSH EDI
0052E6FD  6A FF                     PUSH -0x1
0052E6FF  57                        PUSH EDI
0052E700  68 78 20 7C 00            PUSH 0x7c2078
0052E705  89 86 94 01 00 00         MOV dword ptr [ESI + 0x194],EAX
0052E70B  E8 6C 70 ED FF            CALL 0x0040577c
0052E710  8B 0D 94 67 80 00         MOV ECX,dword ptr [0x00806794]
0052E716  83 C4 08                  ADD ESP,0x8
0052E719  50                        PUSH EAX
0052E71A  6A 0B                     PUSH 0xb
0052E71C  51                        PUSH ECX
0052E71D  E8 CE B3 1D 00            CALL 0x00709af0
0052E722  89 86 98 01 00 00         MOV dword ptr [ESI + 0x198],EAX
0052E728  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
0052E72E  83 C4 20                  ADD ESP,0x20
0052E731  8D 50 28                  LEA EDX,[EAX + 0x28]
0052E734  6A 01                     PUSH 0x1
0052E736  52                        PUSH EDX
0052E737  50                        PUSH EAX
0052E738  E8 A3 68 18 00            CALL 0x006b4fe0
0052E73D  50                        PUSH EAX
0052E73E  8B 86 84 01 00 00         MOV EAX,dword ptr [ESI + 0x184]
0052E744  33 C9                     XOR ECX,ECX
0052E746  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
0052E74A  51                        PUSH ECX
0052E74B  6A 0B                     PUSH 0xb
0052E74D  68 DE 00 00 00            PUSH 0xde
0052E752  E8 69 69 18 00            CALL 0x006b50c0
0052E757  6A 01                     PUSH 0x1
0052E759  6A 01                     PUSH 0x1
0052E75B  57                        PUSH EDI
0052E75C  89 86 E5 01 00 00         MOV dword ptr [ESI + 0x1e5],EAX
0052E762  E8 89 6D 18 00            CALL 0x006b54f0
0052E767  68 A0 16 80 00            PUSH 0x8016a0
0052E76C  57                        PUSH EDI
0052E76D  50                        PUSH EAX
0052E76E  89 86 F1 01 00 00         MOV dword ptr [ESI + 0x1f1],EAX
0052E774  E8 A7 78 18 00            CALL 0x006b6020
0052E779  8B CE                     MOV ECX,ESI
0052E77B  E8 BA 5C ED FF            CALL 0x0040443a
0052E780  8B CE                     MOV ECX,ESI
0052E782  E8 CA 40 ED FF            CALL 0x00402851
0052E787  57                        PUSH EDI
0052E788  57                        PUSH EDI
0052E789  57                        PUSH EDI
0052E78A  57                        PUSH EDI
0052E78B  57                        PUSH EDI
0052E78C  57                        PUSH EDI
0052E78D  68 02 C0 00 00            PUSH 0xc002
0052E792  68 01 C0 00 00            PUSH 0xc001
0052E797  57                        PUSH EDI
0052E798  68 94 38 7C 00            PUSH 0x7c3894
0052E79D  E8 DA 6F ED FF            CALL 0x0040577c
0052E7A2  83 C4 08                  ADD ESP,0x8
0052E7A5  8B CE                     MOV ECX,ESI
0052E7A7  50                        PUSH EAX
0052E7A8  6A 01                     PUSH 0x1
0052E7AA  68 9F 00 00 00            PUSH 0x9f
0052E7AF  68 C9 00 00 00            PUSH 0xc9
0052E7B4  6A 01                     PUSH 0x1
0052E7B6  57                        PUSH EDI
0052E7B7  E8 CF 51 ED FF            CALL 0x0040398b
0052E7BC  57                        PUSH EDI
0052E7BD  57                        PUSH EDI
0052E7BE  57                        PUSH EDI
0052E7BF  57                        PUSH EDI
0052E7C0  57                        PUSH EDI
0052E7C1  57                        PUSH EDI
0052E7C2  68 04 C0 00 00            PUSH 0xc004
0052E7C7  68 03 C0 00 00            PUSH 0xc003
0052E7CC  57                        PUSH EDI
0052E7CD  68 94 38 7C 00            PUSH 0x7c3894
0052E7D2  89 86 AD 01 00 00         MOV dword ptr [ESI + 0x1ad],EAX
0052E7D8  E8 9F 6F ED FF            CALL 0x0040577c
0052E7DD  83 C4 08                  ADD ESP,0x8
0052E7E0  8B CE                     MOV ECX,ESI
0052E7E2  50                        PUSH EAX
0052E7E3  6A 01                     PUSH 0x1
0052E7E5  68 9F 00 00 00            PUSH 0x9f
0052E7EA  68 93 00 00 00            PUSH 0x93
0052E7EF  57                        PUSH EDI
0052E7F0  57                        PUSH EDI
0052E7F1  E8 95 51 ED FF            CALL 0x0040398b
0052E7F6  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
0052E7F9  89 86 B1 01 00 00         MOV dword ptr [ESI + 0x1b1],EAX
0052E7FF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0052E802  89 96 01 03 00 00         MOV dword ptr [ESI + 0x301],EDX
0052E808  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0052E80D  5F                        POP EDI
0052E80E  5E                        POP ESI
0052E80F  8B E5                     MOV ESP,EBP
0052E811  5D                        POP EBP
0052E812  C3                        RET
LAB_0052e813:
0052E813  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0052E816  68 EC 70 7C 00            PUSH 0x7c70ec
0052E81B  68 CC 4C 7A 00            PUSH 0x7a4ccc
0052E820  56                        PUSH ESI
0052E821  57                        PUSH EDI
0052E822  6A 5B                     PUSH 0x5b
0052E824  68 A0 70 7C 00            PUSH 0x7c70a0
0052E829  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0052E82F  E8 9C EC 17 00            CALL 0x006ad4d0
0052E834  83 C4 18                  ADD ESP,0x18
0052E837  85 C0                     TEST EAX,EAX
0052E839  74 01                     JZ 0x0052e83c
0052E83B  CC                        INT3
LAB_0052e83c:
0052E83C  6A 5B                     PUSH 0x5b
0052E83E  68 A0 70 7C 00            PUSH 0x7c70a0
0052E843  57                        PUSH EDI
0052E844  56                        PUSH ESI
0052E845  E8 F6 75 17 00            CALL 0x006a5e40
0052E84A  5F                        POP EDI
0052E84B  5E                        POP ESI
0052E84C  8B E5                     MOV ESP,EBP
0052E84E  5D                        POP EBP
0052E84F  C3                        RET
