FUN_0067a390:
0067A390  55                        PUSH EBP
0067A391  8B EC                     MOV EBP,ESP
0067A393  83 EC 70                  SUB ESP,0x70
0067A396  53                        PUSH EBX
0067A397  56                        PUSH ESI
0067A398  8B F1                     MOV ESI,ECX
0067A39A  57                        PUSH EDI
0067A39B  8B 86 50 06 00 00         MOV EAX,dword ptr [ESI + 0x650]
0067A3A1  85 C0                     TEST EAX,EAX
0067A3A3  74 16                     JZ 0x0067a3bb
0067A3A5  8B 8E 54 06 00 00         MOV ECX,dword ptr [ESI + 0x654]
0067A3AB  03 C8                     ADD ECX,EAX
0067A3AD  8B 86 FE 06 00 00         MOV EAX,dword ptr [ESI + 0x6fe]
0067A3B3  3B C1                     CMP EAX,ECX
0067A3B5  0F 82 C9 0A 00 00         JC 0x0067ae84
LAB_0067a3bb:
0067A3BB  8B 96 FE 06 00 00         MOV EDX,dword ptr [ESI + 0x6fe]
0067A3C1  8B CE                     MOV ECX,ESI
0067A3C3  89 96 54 06 00 00         MOV dword ptr [ESI + 0x654],EDX
0067A3C9  E8 E8 79 D8 FF            CALL 0x00401db6
0067A3CE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A3D4  85 C9                     TEST ECX,ECX
0067A3D6  0F 84 A8 0A 00 00         JZ 0x0067ae84
0067A3DC  66 83 BE EC 05 00 00 03   CMP word ptr [ESI + 0x5ec],0x3
0067A3E4  0F 84 3A 04 00 00         JZ 0x0067a824
0067A3EA  8A 86 D7 05 00 00         MOV AL,byte ptr [ESI + 0x5d7]
0067A3F0  50                        PUSH EAX
0067A3F1  E8 28 85 D8 FF            CALL 0x0040291e
0067A3F6  8A 8E D7 05 00 00         MOV CL,byte ptr [ESI + 0x5d7]
0067A3FC  8B F8                     MOV EDI,EAX
0067A3FE  51                        PUSH ECX
0067A3FF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A405  E8 D5 96 D8 FF            CALL 0x00403adf
0067A40A  8B D8                     MOV EBX,EAX
0067A40C  3B DF                     CMP EBX,EDI
0067A40E  0F 8C 1A 01 00 00         JL 0x0067a52e
0067A414  85 DB                     TEST EBX,EBX
0067A416  0F 8E 12 01 00 00         JLE 0x0067a52e
0067A41C  8B 96 FE 06 00 00         MOV EDX,dword ptr [ESI + 0x6fe]
0067A422  B9 0D 00 00 00            MOV ECX,0xd
0067A427  33 C0                     XOR EAX,EAX
0067A429  8D 7D 90                  LEA EDI,[EBP + -0x70]
0067A42C  F3 AB                     STOSD.REP ES:EDI
0067A42E  8D 45 90                  LEA EAX,[EBP + -0x70]
0067A431  6A FF                     PUSH -0x1
0067A433  50                        PUSH EAX
0067A434  8B CE                     MOV ECX,ESI
0067A436  C7 45 90 6F 00 00 00      MOV dword ptr [EBP + -0x70],0x6f
0067A43D  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
0067A440  C7 45 9C 50 00 00 00      MOV dword ptr [EBP + -0x64],0x50
0067A447  E8 7A B9 D8 FF            CALL 0x00405dc6
0067A44C  8B 8E D7 05 00 00         MOV ECX,dword ptr [ESI + 0x5d7]
0067A452  6A 50                     PUSH 0x50
0067A454  51                        PUSH ECX
0067A455  E8 7E 9D D8 FF            CALL 0x004041d8
0067A45A  8B C8                     MOV ECX,EAX
0067A45C  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0067A45F  03 C8                     ADD ECX,EAX
0067A461  B8 67 66 66 66            MOV EAX,0x66666667
0067A466  F7 EB                     IMUL EBX
0067A468  C1 FA 04                  SAR EDX,0x4
0067A46B  8B C2                     MOV EAX,EDX
0067A46D  83 C4 08                  ADD ESP,0x8
0067A470  C1 E8 1F                  SHR EAX,0x1f
0067A473  8D 54 02 01               LEA EDX,[EDX + EAX*0x1 + 0x1]
0067A477  3B D1                     CMP EDX,ECX
0067A479  0F 8E AF 00 00 00         JLE 0x0067a52e
0067A47F  B9 0B 00 00 00            MOV ECX,0xb
0067A484  33 C0                     XOR EAX,EAX
0067A486  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0067A489  F3 AB                     STOSD.REP ES:EDI
0067A48B  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0067A48E  83 C8 FF                  OR EAX,0xffffffff
0067A491  66 89 45 D6               MOV word ptr [EBP + -0x2a],AX
0067A495  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
0067A499  66 89 45 D2               MOV word ptr [EBP + -0x2e],AX
0067A49D  B9 0D 00 00 00            MOV ECX,0xd
0067A4A2  33 C0                     XOR EAX,EAX
0067A4A4  8D 7D 90                  LEA EDI,[EBP + -0x70]
0067A4A7  F3 AB                     STOSD.REP ES:EDI
0067A4A9  8B 86 FE 06 00 00         MOV EAX,dword ptr [ESI + 0x6fe]
0067A4AF  8D 4D C4                  LEA ECX,[EBP + -0x3c]
0067A4B2  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0067A4B5  8B 86 95 06 00 00         MOV EAX,dword ptr [ESI + 0x695]
0067A4BB  C7 45 C4 50 00 00 00      MOV dword ptr [EBP + -0x3c],0x50
0067A4C2  66 C7 45 D0 31 00         MOV word ptr [EBP + -0x30],0x31
0067A4C8  C6 45 D8 FF               MOV byte ptr [EBP + -0x28],0xff
0067A4CC  C7 45 90 70 00 00 00      MOV dword ptr [EBP + -0x70],0x70
0067A4D3  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0067A4D6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067A4D9  33 FF                     XOR EDI,EDI
0067A4DB  85 C9                     TEST ECX,ECX
0067A4DD  7E 4F                     JLE 0x0067a52e
LAB_0067a4df:
0067A4DF  85 C0                     TEST EAX,EAX
0067A4E1  74 36                     JZ 0x0067a519
0067A4E3  85 FF                     TEST EDI,EDI
0067A4E5  7C 32                     JL 0x0067a519
0067A4E7  3B F9                     CMP EDI,ECX
0067A4E9  7D 2E                     JGE 0x0067a519
0067A4EB  73 0D                     JNC 0x0067a4fa
0067A4ED  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0067A4F0  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0067A4F3  0F AF CF                  IMUL ECX,EDI
0067A4F6  03 CA                     ADD ECX,EDX
0067A4F8  EB 02                     JMP 0x0067a4fc
LAB_0067a4fa:
0067A4FA  33 C9                     XOR ECX,ECX
LAB_0067a4fc:
0067A4FC  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0067A4FF  85 C0                     TEST EAX,EAX
0067A501  74 16                     JZ 0x0067a519
0067A503  8B 09                     MOV ECX,dword ptr [ECX]
0067A505  85 C9                     TEST ECX,ECX
0067A507  74 10                     JZ 0x0067a519
0067A509  8D 55 90                  LEA EDX,[EBP + -0x70]
0067A50C  85 D2                     TEST EDX,EDX
0067A50E  74 09                     JZ 0x0067a519
0067A510  8D 45 90                  LEA EAX,[EBP + -0x70]
0067A513  50                        PUSH EAX
0067A514  E8 C8 6B D8 FF            CALL 0x004010e1
LAB_0067a519:
0067A519  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0067A51C  85 C0                     TEST EAX,EAX
0067A51E  7F 0E                     JG 0x0067a52e
0067A520  8B 86 95 06 00 00         MOV EAX,dword ptr [ESI + 0x695]
0067A526  47                        INC EDI
0067A527  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067A52A  3B F9                     CMP EDI,ECX
0067A52C  7C B1                     JL 0x0067a4df
LAB_0067a52e:
0067A52E  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
0067A534  33 D2                     XOR EDX,EDX
0067A536  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0067A53C  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0067A542  B9 DD 05 00 00            MOV ECX,0x5dd
0067A547  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
0067A54D  C1 E8 10                  SHR EAX,0x10
0067A550  F7 F1                     DIV ECX
0067A552  8B 86 FE 06 00 00         MOV EAX,dword ptr [ESI + 0x6fe]
0067A558  81 C2 4C 1D 00 00         ADD EDX,0x1d4c
0067A55E  3B C2                     CMP EAX,EDX
0067A560  0F 86 40 01 00 00         JBE 0x0067a6a6
0067A566  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067A56C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A572  52                        PUSH EDX
0067A573  E8 B7 77 D8 FF            CALL 0x00401d2f
0067A578  85 C0                     TEST EAX,EAX
0067A57A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0067A57D  0F 8E 23 01 00 00         JLE 0x0067a6a6
0067A583  8A 86 D7 05 00 00         MOV AL,byte ptr [ESI + 0x5d7]
0067A589  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A58F  6A FF                     PUSH -0x1
0067A591  6A 00                     PUSH 0x0
0067A593  6A 34                     PUSH 0x34
0067A595  50                        PUSH EAX
0067A596  E8 88 6A D8 FF            CALL 0x00401023
0067A59B  66 8B D8                  MOV BX,AX
0067A59E  B9 0D 00 00 00            MOV ECX,0xd
0067A5A3  33 C0                     XOR EAX,EAX
0067A5A5  8D 7D 90                  LEA EDI,[EBP + -0x70]
0067A5A8  F3 AB                     STOSD.REP ES:EDI
0067A5AA  8B 8E FE 06 00 00         MOV ECX,dword ptr [ESI + 0x6fe]
0067A5B0  8D 55 90                  LEA EDX,[EBP + -0x70]
0067A5B3  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0067A5B6  6A FF                     PUSH -0x1
0067A5B8  52                        PUSH EDX
0067A5B9  8B CE                     MOV ECX,ESI
0067A5BB  81 E3 FF FF 00 00         AND EBX,0xffff
0067A5C1  C7 45 90 6F 00 00 00      MOV dword ptr [EBP + -0x70],0x6f
0067A5C8  C7 45 9C 34 00 00 00      MOV dword ptr [EBP + -0x64],0x34
0067A5CF  E8 F2 B7 D8 FF            CALL 0x00405dc6
0067A5D4  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
0067A5DA  6A 34                     PUSH 0x34
0067A5DC  50                        PUSH EAX
0067A5DD  E8 F6 9B D8 FF            CALL 0x004041d8
0067A5E2  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0067A5E5  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0067A5E8  03 C2                     ADD EAX,EDX
0067A5EA  03 D9                     ADD EBX,ECX
0067A5EC  83 C4 08                  ADD ESP,0x8
0067A5EF  3B D8                     CMP EBX,EAX
0067A5F1  0F 8E AF 00 00 00         JLE 0x0067a6a6
0067A5F7  B9 0B 00 00 00            MOV ECX,0xb
0067A5FC  33 C0                     XOR EAX,EAX
0067A5FE  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0067A601  8B 96 FE 06 00 00         MOV EDX,dword ptr [ESI + 0x6fe]
0067A607  F3 AB                     STOSD.REP ES:EDI
0067A609  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0067A60C  83 C8 FF                  OR EAX,0xffffffff
0067A60F  66 89 45 D6               MOV word ptr [EBP + -0x2a],AX
0067A613  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
0067A617  66 89 45 D2               MOV word ptr [EBP + -0x2e],AX
0067A61B  B9 0D 00 00 00            MOV ECX,0xd
0067A620  33 C0                     XOR EAX,EAX
0067A622  8D 7D 90                  LEA EDI,[EBP + -0x70]
0067A625  F3 AB                     STOSD.REP ES:EDI
0067A627  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0067A62A  C7 45 C4 34 00 00 00      MOV dword ptr [EBP + -0x3c],0x34
0067A631  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0067A634  8B 86 95 06 00 00         MOV EAX,dword ptr [ESI + 0x695]
0067A63A  66 C7 45 D0 19 00         MOV word ptr [EBP + -0x30],0x19
0067A640  C6 45 D8 FF               MOV byte ptr [EBP + -0x28],0xff
0067A644  C7 45 90 70 00 00 00      MOV dword ptr [EBP + -0x70],0x70
0067A64B  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
0067A64E  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067A651  33 FF                     XOR EDI,EDI
0067A653  85 C9                     TEST ECX,ECX
0067A655  7E 4F                     JLE 0x0067a6a6
LAB_0067a657:
0067A657  85 C0                     TEST EAX,EAX
0067A659  74 36                     JZ 0x0067a691
0067A65B  85 FF                     TEST EDI,EDI
0067A65D  7C 32                     JL 0x0067a691
0067A65F  3B F9                     CMP EDI,ECX
0067A661  7D 2E                     JGE 0x0067a691
0067A663  73 0D                     JNC 0x0067a672
0067A665  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0067A668  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0067A66B  0F AF CF                  IMUL ECX,EDI
0067A66E  03 CA                     ADD ECX,EDX
0067A670  EB 02                     JMP 0x0067a674
LAB_0067a672:
0067A672  33 C9                     XOR ECX,ECX
LAB_0067a674:
0067A674  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0067A677  85 C0                     TEST EAX,EAX
0067A679  74 16                     JZ 0x0067a691
0067A67B  8B 09                     MOV ECX,dword ptr [ECX]
0067A67D  85 C9                     TEST ECX,ECX
0067A67F  74 10                     JZ 0x0067a691
0067A681  8D 55 90                  LEA EDX,[EBP + -0x70]
0067A684  85 D2                     TEST EDX,EDX
0067A686  74 09                     JZ 0x0067a691
0067A688  8D 45 90                  LEA EAX,[EBP + -0x70]
0067A68B  50                        PUSH EAX
0067A68C  E8 50 6A D8 FF            CALL 0x004010e1
LAB_0067a691:
0067A691  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0067A694  85 C0                     TEST EAX,EAX
0067A696  7F 0E                     JG 0x0067a6a6
0067A698  8B 86 95 06 00 00         MOV EAX,dword ptr [ESI + 0x695]
0067A69E  47                        INC EDI
0067A69F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067A6A2  3B F9                     CMP EDI,ECX
0067A6A4  7C B1                     JL 0x0067a657
LAB_0067a6a6:
0067A6A6  8B 8E A4 00 00 00         MOV ECX,dword ptr [ESI + 0xa4]
0067A6AC  33 D2                     XOR EDX,EDX
0067A6AE  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0067A6B4  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0067A6BA  B9 DD 05 00 00            MOV ECX,0x5dd
0067A6BF  89 86 A4 00 00 00         MOV dword ptr [ESI + 0xa4],EAX
0067A6C5  C1 E8 10                  SHR EAX,0x10
0067A6C8  F7 F1                     DIV ECX
0067A6CA  8B 86 FE 06 00 00         MOV EAX,dword ptr [ESI + 0x6fe]
0067A6D0  81 C2 4C 1D 00 00         ADD EDX,0x1d4c
0067A6D6  3B C2                     CMP EAX,EDX
0067A6D8  0F 86 40 01 00 00         JBE 0x0067a81e
0067A6DE  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067A6E4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A6EA  52                        PUSH EDX
0067A6EB  E8 E1 6F D8 FF            CALL 0x004016d1
0067A6F0  85 C0                     TEST EAX,EAX
0067A6F2  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0067A6F5  0F 8E 23 01 00 00         JLE 0x0067a81e
0067A6FB  8A 86 D7 05 00 00         MOV AL,byte ptr [ESI + 0x5d7]
0067A701  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A707  6A FF                     PUSH -0x1
0067A709  6A 00                     PUSH 0x0
0067A70B  6A 48                     PUSH 0x48
0067A70D  50                        PUSH EAX
0067A70E  E8 10 69 D8 FF            CALL 0x00401023
0067A713  66 8B D8                  MOV BX,AX
0067A716  B9 0D 00 00 00            MOV ECX,0xd
0067A71B  33 C0                     XOR EAX,EAX
0067A71D  8D 7D 90                  LEA EDI,[EBP + -0x70]
0067A720  F3 AB                     STOSD.REP ES:EDI
0067A722  8B 8E FE 06 00 00         MOV ECX,dword ptr [ESI + 0x6fe]
0067A728  8D 55 90                  LEA EDX,[EBP + -0x70]
0067A72B  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
0067A72E  6A FF                     PUSH -0x1
0067A730  52                        PUSH EDX
0067A731  8B CE                     MOV ECX,ESI
0067A733  81 E3 FF FF 00 00         AND EBX,0xffff
0067A739  C7 45 90 6F 00 00 00      MOV dword ptr [EBP + -0x70],0x6f
0067A740  C7 45 9C 48 00 00 00      MOV dword ptr [EBP + -0x64],0x48
0067A747  E8 7A B6 D8 FF            CALL 0x00405dc6
0067A74C  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
0067A752  6A 48                     PUSH 0x48
0067A754  50                        PUSH EAX
0067A755  E8 7E 9A D8 FF            CALL 0x004041d8
0067A75A  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0067A75D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0067A760  03 C2                     ADD EAX,EDX
0067A762  03 D9                     ADD EBX,ECX
0067A764  83 C4 08                  ADD ESP,0x8
0067A767  3B D8                     CMP EBX,EAX
0067A769  0F 8E AF 00 00 00         JLE 0x0067a81e
0067A76F  B9 0B 00 00 00            MOV ECX,0xb
0067A774  33 C0                     XOR EAX,EAX
0067A776  8D 7D C4                  LEA EDI,[EBP + -0x3c]
0067A779  8B 96 FE 06 00 00         MOV EDX,dword ptr [ESI + 0x6fe]
0067A77F  F3 AB                     STOSD.REP ES:EDI
0067A781  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0067A784  83 C8 FF                  OR EAX,0xffffffff
0067A787  66 89 45 D6               MOV word ptr [EBP + -0x2a],AX
0067A78B  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
0067A78F  66 89 45 D2               MOV word ptr [EBP + -0x2e],AX
0067A793  B9 0D 00 00 00            MOV ECX,0xd
0067A798  33 C0                     XOR EAX,EAX
0067A79A  8D 7D 90                  LEA EDI,[EBP + -0x70]
0067A79D  F3 AB                     STOSD.REP ES:EDI
0067A79F  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0067A7A2  C7 45 C4 48 00 00 00      MOV dword ptr [EBP + -0x3c],0x48
0067A7A9  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
0067A7AC  8B 86 95 06 00 00         MOV EAX,dword ptr [ESI + 0x695]
0067A7B2  66 C7 45 D0 19 00         MOV word ptr [EBP + -0x30],0x19
0067A7B8  C6 45 D8 FF               MOV byte ptr [EBP + -0x28],0xff
0067A7BC  C7 45 90 70 00 00 00      MOV dword ptr [EBP + -0x70],0x70
0067A7C3  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
0067A7C6  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067A7C9  33 FF                     XOR EDI,EDI
0067A7CB  85 C9                     TEST ECX,ECX
0067A7CD  7E 4F                     JLE 0x0067a81e
LAB_0067a7cf:
0067A7CF  85 C0                     TEST EAX,EAX
0067A7D1  74 36                     JZ 0x0067a809
0067A7D3  85 FF                     TEST EDI,EDI
0067A7D5  7C 32                     JL 0x0067a809
0067A7D7  3B F9                     CMP EDI,ECX
0067A7D9  7D 2E                     JGE 0x0067a809
0067A7DB  73 0D                     JNC 0x0067a7ea
0067A7DD  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0067A7E0  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
0067A7E3  0F AF CF                  IMUL ECX,EDI
0067A7E6  03 CA                     ADD ECX,EDX
0067A7E8  EB 02                     JMP 0x0067a7ec
LAB_0067a7ea:
0067A7EA  33 C9                     XOR ECX,ECX
LAB_0067a7ec:
0067A7EC  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0067A7EF  85 C0                     TEST EAX,EAX
0067A7F1  74 16                     JZ 0x0067a809
0067A7F3  8B 09                     MOV ECX,dword ptr [ECX]
0067A7F5  85 C9                     TEST ECX,ECX
0067A7F7  74 10                     JZ 0x0067a809
0067A7F9  8D 55 90                  LEA EDX,[EBP + -0x70]
0067A7FC  85 D2                     TEST EDX,EDX
0067A7FE  74 09                     JZ 0x0067a809
0067A800  8D 45 90                  LEA EAX,[EBP + -0x70]
0067A803  50                        PUSH EAX
0067A804  E8 D8 68 D8 FF            CALL 0x004010e1
LAB_0067a809:
0067A809  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
0067A80C  85 C0                     TEST EAX,EAX
0067A80E  7F 0E                     JG 0x0067a81e
0067A810  8B 86 95 06 00 00         MOV EAX,dword ptr [ESI + 0x695]
0067A816  47                        INC EDI
0067A817  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0067A81A  3B F9                     CMP EDI,ECX
0067A81C  7C B1                     JL 0x0067a7cf
LAB_0067a81e:
0067A81E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
LAB_0067a824:
0067A824  85 C9                     TEST ECX,ECX
0067A826  0F 84 58 06 00 00         JZ 0x0067ae84
0067A82C  66 83 BE EC 05 00 00 03   CMP word ptr [ESI + 0x5ec],0x3
0067A834  0F 84 B7 03 00 00         JZ 0x0067abf1
0067A83A  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067A840  83 CF FF                  OR EDI,0xffffffff
0067A843  52                        PUSH EDX
0067A844  E8 33 87 D8 FF            CALL 0x00402f7c
0067A849  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A84F  8B D8                     MOV EBX,EAX
0067A851  8A 86 D7 05 00 00         MOV AL,byte ptr [ESI + 0x5d7]
0067A857  50                        PUSH EAX
0067A858  E8 83 6E D8 FF            CALL 0x004016e0
0067A85D  8A 8E D7 05 00 00         MOV CL,byte ptr [ESI + 0x5d7]
0067A863  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067A866  51                        PUSH ECX
0067A867  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A86D  E8 E2 90 D8 FF            CALL 0x00403954
0067A872  8A 96 D7 05 00 00         MOV DL,byte ptr [ESI + 0x5d7]
0067A878  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A87E  52                        PUSH EDX
0067A87F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0067A882  E8 FD 79 D8 FF            CALL 0x00402284
0067A887  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0067A88A  33 C0                     XOR EAX,EAX
0067A88C  83 FB 64                  CMP EBX,0x64
0067A88F  0F 9C C0                  SETL AL
0067A892  48                        DEC EAX
0067A893  33 C9                     XOR ECX,ECX
0067A895  24 CE                     AND AL,0xce
0067A897  83 C0 32                  ADD EAX,0x32
0067A89A  83 FB 64                  CMP EBX,0x64
0067A89D  0F 9C C1                  SETL CL
0067A8A0  49                        DEC ECX
0067A8A1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0067A8A4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067A8A7  81 E1 0C FE FF FF         AND ECX,0xfffffe0c
0067A8AD  81 C1 F4 01 00 00         ADD ECX,0x1f4
0067A8B3  83 F8 32                  CMP EAX,0x32
0067A8B6  8B D9                     MOV EBX,ECX
0067A8B8  0F 8D ED 00 00 00         JGE 0x0067a9ab
0067A8BE  39 5D FC                  CMP dword ptr [EBP + -0x4],EBX
0067A8C1  7E 6C                     JLE 0x0067a92f
0067A8C3  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067A8CA  85 C0                     TEST EAX,EAX
0067A8CC  7E 18                     JLE 0x0067a8e6
0067A8CE  83 F8 02                  CMP EAX,0x2
0067A8D1  7E 0C                     JLE 0x0067a8df
0067A8D3  83 F8 03                  CMP EAX,0x3
0067A8D6  75 0E                     JNZ 0x0067a8e6
0067A8D8  B8 5F 00 00 00            MOV EAX,0x5f
0067A8DD  EB 09                     JMP 0x0067a8e8
LAB_0067a8df:
0067A8DF  B8 52 00 00 00            MOV EAX,0x52
0067A8E4  EB 02                     JMP 0x0067a8e8
LAB_0067a8e6:
0067A8E6  33 C0                     XOR EAX,EAX
LAB_0067a8e8:
0067A8E8  8A 96 D7 05 00 00         MOV DL,byte ptr [ESI + 0x5d7]
0067A8EE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A8F4  6A FF                     PUSH -0x1
0067A8F6  6A 00                     PUSH 0x0
0067A8F8  50                        PUSH EAX
0067A8F9  52                        PUSH EDX
0067A8FA  E8 24 67 D8 FF            CALL 0x00401023
0067A8FF  66 8B F8                  MOV DI,AX
0067A902  81 E7 FF FF 00 00         AND EDI,0xffff
0067A908  0F 8E 9D 00 00 00         JLE 0x0067a9ab
0067A90E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067A911  83 F8 64                  CMP EAX,0x64
0067A914  7E 05                     JLE 0x0067a91b
0067A916  B8 64 00 00 00            MOV EAX,0x64
LAB_0067a91b:
0067A91B  50                        PUSH EAX
0067A91C  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
0067A922  68 DD 00 00 00            PUSH 0xdd
0067A927  68 DC 00 00 00            PUSH 0xdc
0067A92C  50                        PUSH EAX
0067A92D  EB 71                     JMP 0x0067a9a0
LAB_0067a92f:
0067A92F  81 7D F8 D0 07 00 00      CMP dword ptr [EBP + -0x8],0x7d0
0067A936  7E 73                     JLE 0x0067a9ab
0067A938  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067A93F  85 C0                     TEST EAX,EAX
0067A941  7E 18                     JLE 0x0067a95b
0067A943  83 F8 02                  CMP EAX,0x2
0067A946  7E 0C                     JLE 0x0067a954
0067A948  83 F8 03                  CMP EAX,0x3
0067A94B  75 0E                     JNZ 0x0067a95b
0067A94D  B8 5F 00 00 00            MOV EAX,0x5f
0067A952  EB 09                     JMP 0x0067a95d
LAB_0067a954:
0067A954  B8 52 00 00 00            MOV EAX,0x52
0067A959  EB 02                     JMP 0x0067a95d
LAB_0067a95b:
0067A95B  33 C0                     XOR EAX,EAX
LAB_0067a95d:
0067A95D  8A 8E D7 05 00 00         MOV CL,byte ptr [ESI + 0x5d7]
0067A963  6A FF                     PUSH -0x1
0067A965  6A 00                     PUSH 0x0
0067A967  50                        PUSH EAX
0067A968  51                        PUSH ECX
0067A969  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A96F  E8 AF 66 D8 FF            CALL 0x00401023
0067A974  66 8B F8                  MOV DI,AX
0067A977  81 E7 FF FF 00 00         AND EDI,0xffff
0067A97D  7E 2C                     JLE 0x0067a9ab
0067A97F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067A982  3D F4 01 00 00            CMP EAX,0x1f4
0067A987  7E 05                     JLE 0x0067a98e
0067A989  B8 F4 01 00 00            MOV EAX,0x1f4
LAB_0067a98e:
0067A98E  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067A994  50                        PUSH EAX
0067A995  68 DD 00 00 00            PUSH 0xdd
0067A99A  68 DE 00 00 00            PUSH 0xde
0067A99F  52                        PUSH EDX
LAB_0067a9a0:
0067A9A0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A9A6  E8 30 8B D8 FF            CALL 0x004034db
LAB_0067a9ab:
0067A9AB  83 7D F8 32               CMP dword ptr [EBP + -0x8],0x32
0067A9AF  0F 8D 82 00 00 00         JGE 0x0067aa37
0067A9B5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067A9B8  3B C3                     CMP EAX,EBX
0067A9BA  0F 8E C9 00 00 00         JLE 0x0067aa89
0067A9C0  85 FF                     TEST EDI,EDI
0067A9C2  7D 4A                     JGE 0x0067aa0e
0067A9C4  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067A9CB  85 C0                     TEST EAX,EAX
0067A9CD  7E 18                     JLE 0x0067a9e7
0067A9CF  83 F8 02                  CMP EAX,0x2
0067A9D2  7E 0C                     JLE 0x0067a9e0
0067A9D4  83 F8 03                  CMP EAX,0x3
0067A9D7  75 0E                     JNZ 0x0067a9e7
0067A9D9  B8 5F 00 00 00            MOV EAX,0x5f
0067A9DE  EB 09                     JMP 0x0067a9e9
LAB_0067a9e0:
0067A9E0  B8 52 00 00 00            MOV EAX,0x52
0067A9E5  EB 02                     JMP 0x0067a9e9
LAB_0067a9e7:
0067A9E7  33 C0                     XOR EAX,EAX
LAB_0067a9e9:
0067A9E9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067A9EF  6A FF                     PUSH -0x1
0067A9F1  6A 00                     PUSH 0x0
0067A9F3  50                        PUSH EAX
0067A9F4  8A 86 D7 05 00 00         MOV AL,byte ptr [ESI + 0x5d7]
0067A9FA  50                        PUSH EAX
0067A9FB  E8 23 66 D8 FF            CALL 0x00401023
0067AA00  66 8B F8                  MOV DI,AX
0067AA03  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067AA06  81 E7 FF FF 00 00         AND EDI,0xffff
0067AA0C  85 FF                     TEST EDI,EDI
LAB_0067aa0e:
0067AA0E  7E 27                     JLE 0x0067aa37
0067AA10  83 F8 64                  CMP EAX,0x64
0067AA13  7E 05                     JLE 0x0067aa1a
0067AA15  B8 64 00 00 00            MOV EAX,0x64
LAB_0067aa1a:
0067AA1A  8B 8E D7 05 00 00         MOV ECX,dword ptr [ESI + 0x5d7]
0067AA20  50                        PUSH EAX
0067AA21  68 DE 00 00 00            PUSH 0xde
0067AA26  68 DC 00 00 00            PUSH 0xdc
0067AA2B  51                        PUSH ECX
0067AA2C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AA32  E8 A4 8A D8 FF            CALL 0x004034db
LAB_0067aa37:
0067AA37  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
LAB_0067aa3a:
0067AA3A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067AA3D  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0067AA40  3B C8                     CMP ECX,EAX
0067AA42  0F 8D A3 01 00 00         JGE 0x0067abeb
0067AA48  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067AA4B  3D D0 07 00 00            CMP EAX,0x7d0
0067AA50  0F 8E 14 01 00 00         JLE 0x0067ab6a
0067AA56  85 FF                     TEST EDI,EDI
0067AA58  0F 8D E6 00 00 00         JGE 0x0067ab44
0067AA5E  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067AA65  85 C0                     TEST EAX,EAX
0067AA67  0F 8E B0 00 00 00         JLE 0x0067ab1d
0067AA6D  83 F8 02                  CMP EAX,0x2
0067AA70  0F 8E A0 00 00 00         JLE 0x0067ab16
0067AA76  83 F8 03                  CMP EAX,0x3
0067AA79  0F 85 9E 00 00 00         JNZ 0x0067ab1d
0067AA7F  B8 5F 00 00 00            MOV EAX,0x5f
0067AA84  E9 96 00 00 00            JMP 0x0067ab1f
LAB_0067aa89:
0067AA89  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0067AA8C  81 FB DC 05 00 00         CMP EBX,0x5dc
0067AA92  7E A6                     JLE 0x0067aa3a
0067AA94  85 FF                     TEST EDI,EDI
0067AA96  7D 47                     JGE 0x0067aadf
0067AA98  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067AA9F  85 C0                     TEST EAX,EAX
0067AAA1  7E 18                     JLE 0x0067aabb
0067AAA3  83 F8 02                  CMP EAX,0x2
0067AAA6  7E 0C                     JLE 0x0067aab4
0067AAA8  83 F8 03                  CMP EAX,0x3
0067AAAB  75 0E                     JNZ 0x0067aabb
0067AAAD  B8 5F 00 00 00            MOV EAX,0x5f
0067AAB2  EB 09                     JMP 0x0067aabd
LAB_0067aab4:
0067AAB4  B8 52 00 00 00            MOV EAX,0x52
0067AAB9  EB 02                     JMP 0x0067aabd
LAB_0067aabb:
0067AABB  33 C0                     XOR EAX,EAX
LAB_0067aabd:
0067AABD  8A 96 D7 05 00 00         MOV DL,byte ptr [ESI + 0x5d7]
0067AAC3  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AAC9  6A FF                     PUSH -0x1
0067AACB  6A 00                     PUSH 0x0
0067AACD  50                        PUSH EAX
0067AACE  52                        PUSH EDX
0067AACF  E8 4F 65 D8 FF            CALL 0x00401023
0067AAD4  66 8B F8                  MOV DI,AX
0067AAD7  81 E7 FF FF 00 00         AND EDI,0xffff
0067AADD  85 FF                     TEST EDI,EDI
LAB_0067aadf:
0067AADF  0F 8E 55 FF FF FF         JLE 0x0067aa3a
0067AAE5  81 FB F4 01 00 00         CMP EBX,0x1f4
0067AAEB  B8 F4 01 00 00            MOV EAX,0x1f4
0067AAF0  7F 02                     JG 0x0067aaf4
0067AAF2  8B C3                     MOV EAX,EBX
LAB_0067aaf4:
0067AAF4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AAFA  50                        PUSH EAX
0067AAFB  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
0067AB01  68 DE 00 00 00            PUSH 0xde
0067AB06  68 DD 00 00 00            PUSH 0xdd
0067AB0B  50                        PUSH EAX
0067AB0C  E8 CA 89 D8 FF            CALL 0x004034db
0067AB11  E9 24 FF FF FF            JMP 0x0067aa3a
LAB_0067ab16:
0067AB16  B8 52 00 00 00            MOV EAX,0x52
0067AB1B  EB 02                     JMP 0x0067ab1f
LAB_0067ab1d:
0067AB1D  33 C0                     XOR EAX,EAX
LAB_0067ab1f:
0067AB1F  8A 8E D7 05 00 00         MOV CL,byte ptr [ESI + 0x5d7]
0067AB25  6A FF                     PUSH -0x1
0067AB27  6A 00                     PUSH 0x0
0067AB29  50                        PUSH EAX
0067AB2A  51                        PUSH ECX
0067AB2B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AB31  E8 ED 64 D8 FF            CALL 0x00401023
0067AB36  66 8B F8                  MOV DI,AX
0067AB39  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067AB3C  81 E7 FF FF 00 00         AND EDI,0xffff
0067AB42  85 FF                     TEST EDI,EDI
LAB_0067ab44:
0067AB44  0F 8E A1 00 00 00         JLE 0x0067abeb
0067AB4A  3D F4 01 00 00            CMP EAX,0x1f4
0067AB4F  7E 05                     JLE 0x0067ab56
0067AB51  B8 F4 01 00 00            MOV EAX,0x1f4
LAB_0067ab56:
0067AB56  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067AB5C  50                        PUSH EAX
0067AB5D  68 DC 00 00 00            PUSH 0xdc
0067AB62  68 DE 00 00 00            PUSH 0xde
0067AB67  52                        PUSH EDX
0067AB68  EB 76                     JMP 0x0067abe0
LAB_0067ab6a:
0067AB6A  81 FB DC 05 00 00         CMP EBX,0x5dc
0067AB70  7E 79                     JLE 0x0067abeb
0067AB72  85 FF                     TEST EDI,EDI
0067AB74  7D 4A                     JGE 0x0067abc0
0067AB76  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067AB7D  85 C0                     TEST EAX,EAX
0067AB7F  7E 18                     JLE 0x0067ab99
0067AB81  83 F8 02                  CMP EAX,0x2
0067AB84  7E 0C                     JLE 0x0067ab92
0067AB86  83 F8 03                  CMP EAX,0x3
0067AB89  75 0E                     JNZ 0x0067ab99
0067AB8B  B8 5F 00 00 00            MOV EAX,0x5f
0067AB90  EB 09                     JMP 0x0067ab9b
LAB_0067ab92:
0067AB92  B8 52 00 00 00            MOV EAX,0x52
0067AB97  EB 02                     JMP 0x0067ab9b
LAB_0067ab99:
0067AB99  33 C0                     XOR EAX,EAX
LAB_0067ab9b:
0067AB9B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067ABA1  6A FF                     PUSH -0x1
0067ABA3  6A 00                     PUSH 0x0
0067ABA5  50                        PUSH EAX
0067ABA6  8A 86 D7 05 00 00         MOV AL,byte ptr [ESI + 0x5d7]
0067ABAC  50                        PUSH EAX
0067ABAD  E8 71 64 D8 FF            CALL 0x00401023
0067ABB2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067ABB5  66 8B F8                  MOV DI,AX
0067ABB8  81 E7 FF FF 00 00         AND EDI,0xffff
0067ABBE  85 FF                     TEST EDI,EDI
LAB_0067abc0:
0067ABC0  7E 29                     JLE 0x0067abeb
0067ABC2  83 F9 64                  CMP ECX,0x64
0067ABC5  B8 64 00 00 00            MOV EAX,0x64
0067ABCA  7F 02                     JG 0x0067abce
0067ABCC  8B C1                     MOV EAX,ECX
LAB_0067abce:
0067ABCE  8B 8E D7 05 00 00         MOV ECX,dword ptr [ESI + 0x5d7]
0067ABD4  50                        PUSH EAX
0067ABD5  68 DC 00 00 00            PUSH 0xdc
0067ABDA  68 DD 00 00 00            PUSH 0xdd
0067ABDF  51                        PUSH ECX
LAB_0067abe0:
0067ABE0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067ABE6  E8 F0 88 D8 FF            CALL 0x004034db
LAB_0067abeb:
0067ABEB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
LAB_0067abf1:
0067ABF1  85 C9                     TEST ECX,ECX
0067ABF3  0F 84 8B 02 00 00         JZ 0x0067ae84
0067ABF9  66 83 BE EC 05 00 00 03   CMP word ptr [ESI + 0x5ec],0x3
0067AC01  0F 85 7D 02 00 00         JNZ 0x0067ae84
0067AC07  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067AC0D  83 CF FF                  OR EDI,0xffffffff
0067AC10  52                        PUSH EDX
0067AC11  E8 66 83 D8 FF            CALL 0x00402f7c
0067AC16  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AC1C  8B D8                     MOV EBX,EAX
0067AC1E  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
0067AC24  50                        PUSH EAX
0067AC25  E8 7D 8A D8 FF            CALL 0x004036a7
0067AC2A  8A 8E D7 05 00 00         MOV CL,byte ptr [ESI + 0x5d7]
0067AC30  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0067AC33  51                        PUSH ECX
0067AC34  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AC3A  E8 15 8D D8 FF            CALL 0x00403954
0067AC3F  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067AC45  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AC4B  52                        PUSH EDX
0067AC4C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067AC4F  E8 16 72 D8 FF            CALL 0x00401e6a
0067AC54  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0067AC57  33 C0                     XOR EAX,EAX
0067AC59  83 FB 64                  CMP EBX,0x64
0067AC5C  0F 9C C0                  SETL AL
0067AC5F  48                        DEC EAX
0067AC60  25 18 FC FF FF            AND EAX,0xfffffc18
0067AC65  05 B8 0B 00 00            ADD EAX,0xbb8
0067AC6A  8B D8                     MOV EBX,EAX
0067AC6C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067AC6F  83 F8 32                  CMP EAX,0x32
0067AC72  0F 8D EF 00 00 00         JGE 0x0067ad67
0067AC78  39 5D F4                  CMP dword ptr [EBP + -0xc],EBX
0067AC7B  7E 6E                     JLE 0x0067aceb
0067AC7D  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067AC84  85 C0                     TEST EAX,EAX
0067AC86  7E 18                     JLE 0x0067aca0
0067AC88  83 F8 02                  CMP EAX,0x2
0067AC8B  7E 0C                     JLE 0x0067ac99
0067AC8D  83 F8 03                  CMP EAX,0x3
0067AC90  75 0E                     JNZ 0x0067aca0
0067AC92  B8 5F 00 00 00            MOV EAX,0x5f
0067AC97  EB 09                     JMP 0x0067aca2
LAB_0067ac99:
0067AC99  B8 52 00 00 00            MOV EAX,0x52
0067AC9E  EB 02                     JMP 0x0067aca2
LAB_0067aca0:
0067ACA0  33 C0                     XOR EAX,EAX
LAB_0067aca2:
0067ACA2  8A 8E D7 05 00 00         MOV CL,byte ptr [ESI + 0x5d7]
0067ACA8  6A FF                     PUSH -0x1
0067ACAA  6A 00                     PUSH 0x0
0067ACAC  50                        PUSH EAX
0067ACAD  51                        PUSH ECX
0067ACAE  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067ACB4  E8 6A 63 D8 FF            CALL 0x00401023
0067ACB9  66 8B F8                  MOV DI,AX
0067ACBC  81 E7 FF FF 00 00         AND EDI,0xffff
0067ACC2  0F 8E 9F 00 00 00         JLE 0x0067ad67
0067ACC8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067ACCB  3D E8 03 00 00            CMP EAX,0x3e8
0067ACD0  7E 05                     JLE 0x0067acd7
0067ACD2  B8 E8 03 00 00            MOV EAX,0x3e8
LAB_0067acd7:
0067ACD7  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067ACDD  50                        PUSH EAX
0067ACDE  68 DD 00 00 00            PUSH 0xdd
0067ACE3  68 E3 00 00 00            PUSH 0xe3
0067ACE8  52                        PUSH EDX
0067ACE9  EB 71                     JMP 0x0067ad5c
LAB_0067aceb:
0067ACEB  81 7D F8 C4 09 00 00      CMP dword ptr [EBP + -0x8],0x9c4
0067ACF2  7E 73                     JLE 0x0067ad67
0067ACF4  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067ACFB  85 C0                     TEST EAX,EAX
0067ACFD  7E 18                     JLE 0x0067ad17
0067ACFF  83 F8 02                  CMP EAX,0x2
0067AD02  7E 0C                     JLE 0x0067ad10
0067AD04  83 F8 03                  CMP EAX,0x3
0067AD07  75 0E                     JNZ 0x0067ad17
0067AD09  B8 5F 00 00 00            MOV EAX,0x5f
0067AD0E  EB 09                     JMP 0x0067ad19
LAB_0067ad10:
0067AD10  B8 52 00 00 00            MOV EAX,0x52
0067AD15  EB 02                     JMP 0x0067ad19
LAB_0067ad17:
0067AD17  33 C0                     XOR EAX,EAX
LAB_0067ad19:
0067AD19  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AD1F  6A FF                     PUSH -0x1
0067AD21  6A 00                     PUSH 0x0
0067AD23  50                        PUSH EAX
0067AD24  8A 86 D7 05 00 00         MOV AL,byte ptr [ESI + 0x5d7]
0067AD2A  50                        PUSH EAX
0067AD2B  E8 F3 62 D8 FF            CALL 0x00401023
0067AD30  66 8B F8                  MOV DI,AX
0067AD33  81 E7 FF FF 00 00         AND EDI,0xffff
0067AD39  7E 2C                     JLE 0x0067ad67
0067AD3B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0067AD3E  3D E8 03 00 00            CMP EAX,0x3e8
0067AD43  7E 05                     JLE 0x0067ad4a
0067AD45  B8 E8 03 00 00            MOV EAX,0x3e8
LAB_0067ad4a:
0067AD4A  8B 8E D7 05 00 00         MOV ECX,dword ptr [ESI + 0x5d7]
0067AD50  50                        PUSH EAX
0067AD51  68 DD 00 00 00            PUSH 0xdd
0067AD56  68 E2 00 00 00            PUSH 0xe2
0067AD5B  51                        PUSH ECX
LAB_0067ad5c:
0067AD5C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AD62  E8 74 87 D8 FF            CALL 0x004034db
LAB_0067ad67:
0067AD67  83 7D F8 32               CMP dword ptr [EBP + -0x8],0x32
0067AD6B  0F 8D 13 01 00 00         JGE 0x0067ae84
0067AD71  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067AD74  3B C3                     CMP EAX,EBX
0067AD76  0F 8E 84 00 00 00         JLE 0x0067ae00
0067AD7C  85 FF                     TEST EDI,EDI
0067AD7E  7D 4A                     JGE 0x0067adca
0067AD80  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067AD87  85 C0                     TEST EAX,EAX
0067AD89  7E 18                     JLE 0x0067ada3
0067AD8B  83 F8 02                  CMP EAX,0x2
0067AD8E  7E 0C                     JLE 0x0067ad9c
0067AD90  83 F8 03                  CMP EAX,0x3
0067AD93  75 0E                     JNZ 0x0067ada3
0067AD95  B8 5F 00 00 00            MOV EAX,0x5f
0067AD9A  EB 09                     JMP 0x0067ada5
LAB_0067ad9c:
0067AD9C  B8 52 00 00 00            MOV EAX,0x52
0067ADA1  EB 02                     JMP 0x0067ada5
LAB_0067ada3:
0067ADA3  33 C0                     XOR EAX,EAX
LAB_0067ada5:
0067ADA5  8A 96 D7 05 00 00         MOV DL,byte ptr [ESI + 0x5d7]
0067ADAB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067ADB1  6A FF                     PUSH -0x1
0067ADB3  6A 00                     PUSH 0x0
0067ADB5  50                        PUSH EAX
0067ADB6  52                        PUSH EDX
0067ADB7  E8 67 62 D8 FF            CALL 0x00401023
0067ADBC  66 8B F8                  MOV DI,AX
0067ADBF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0067ADC2  81 E7 FF FF 00 00         AND EDI,0xffff
0067ADC8  85 FF                     TEST EDI,EDI
LAB_0067adca:
0067ADCA  0F 8E B4 00 00 00         JLE 0x0067ae84
0067ADD0  3D E8 03 00 00            CMP EAX,0x3e8
0067ADD5  7E 05                     JLE 0x0067addc
0067ADD7  B8 E8 03 00 00            MOV EAX,0x3e8
LAB_0067addc:
0067ADDC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067ADE2  50                        PUSH EAX
0067ADE3  8B 86 D7 05 00 00         MOV EAX,dword ptr [ESI + 0x5d7]
0067ADE9  68 E2 00 00 00            PUSH 0xe2
0067ADEE  68 E3 00 00 00            PUSH 0xe3
0067ADF3  50                        PUSH EAX
0067ADF4  E8 E2 86 D8 FF            CALL 0x004034db
0067ADF9  5F                        POP EDI
0067ADFA  5E                        POP ESI
0067ADFB  5B                        POP EBX
0067ADFC  8B E5                     MOV ESP,EBP
0067ADFE  5D                        POP EBP
0067ADFF  C3                        RET
LAB_0067ae00:
0067AE00  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0067AE03  81 FB DC 05 00 00         CMP EBX,0x5dc
0067AE09  7E 79                     JLE 0x0067ae84
0067AE0B  85 FF                     TEST EDI,EDI
0067AE0D  7D 47                     JGE 0x0067ae56
0067AE0F  0F BF 86 EC 05 00 00      MOVSX EAX,word ptr [ESI + 0x5ec]
0067AE16  85 C0                     TEST EAX,EAX
0067AE18  7E 18                     JLE 0x0067ae32
0067AE1A  83 F8 02                  CMP EAX,0x2
0067AE1D  7E 0C                     JLE 0x0067ae2b
0067AE1F  83 F8 03                  CMP EAX,0x3
0067AE22  75 0E                     JNZ 0x0067ae32
0067AE24  B8 5F 00 00 00            MOV EAX,0x5f
0067AE29  EB 09                     JMP 0x0067ae34
LAB_0067ae2b:
0067AE2B  B8 52 00 00 00            MOV EAX,0x52
0067AE30  EB 02                     JMP 0x0067ae34
LAB_0067ae32:
0067AE32  33 C0                     XOR EAX,EAX
LAB_0067ae34:
0067AE34  8A 8E D7 05 00 00         MOV CL,byte ptr [ESI + 0x5d7]
0067AE3A  6A FF                     PUSH -0x1
0067AE3C  6A 00                     PUSH 0x0
0067AE3E  50                        PUSH EAX
0067AE3F  51                        PUSH ECX
0067AE40  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AE46  E8 D8 61 D8 FF            CALL 0x00401023
0067AE4B  66 8B F8                  MOV DI,AX
0067AE4E  81 E7 FF FF 00 00         AND EDI,0xffff
0067AE54  85 FF                     TEST EDI,EDI
LAB_0067ae56:
0067AE56  7E 2C                     JLE 0x0067ae84
0067AE58  81 FB BC 02 00 00         CMP EBX,0x2bc
0067AE5E  B8 BC 02 00 00            MOV EAX,0x2bc
0067AE63  7F 02                     JG 0x0067ae67
0067AE65  8B C3                     MOV EAX,EBX
LAB_0067ae67:
0067AE67  8B 96 D7 05 00 00         MOV EDX,dword ptr [ESI + 0x5d7]
0067AE6D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0067AE73  50                        PUSH EAX
0067AE74  68 E2 00 00 00            PUSH 0xe2
0067AE79  68 DD 00 00 00            PUSH 0xdd
0067AE7E  52                        PUSH EDX
0067AE7F  E8 57 86 D8 FF            CALL 0x004034db
LAB_0067ae84:
0067AE84  5F                        POP EDI
0067AE85  5E                        POP ESI
0067AE86  5B                        POP EBX
0067AE87  8B E5                     MOV ESP,EBP
0067AE89  5D                        POP EBP
0067AE8A  C3                        RET
