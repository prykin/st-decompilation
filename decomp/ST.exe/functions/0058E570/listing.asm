STSharkC::LifeShark:
0058E570  55                        PUSH EBP
0058E571  8B EC                     MOV EBP,ESP
0058E573  83 EC 2C                  SUB ESP,0x2c
0058E576  53                        PUSH EBX
0058E577  56                        PUSH ESI
0058E578  57                        PUSH EDI
0058E579  8B F1                     MOV ESI,ECX
0058E57B  E8 BC 34 E7 FF            CALL 0x00401a3c
0058E580  85 C0                     TEST EAX,EAX
0058E582  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
0058E588  74 2E                     JZ 0x0058e5b8
0058E58A  6A 01                     PUSH 0x1
0058E58C  8B CB                     MOV ECX,EBX
0058E58E  E8 39 6D E7 FF            CALL 0x004052cc
0058E593  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058E599  50                        PUSH EAX
0058E59A  E8 51 C6 15 00            CALL 0x006eabf0
0058E59F  6A 01                     PUSH 0x1
0058E5A1  8B CB                     MOV ECX,EBX
0058E5A3  E8 24 6D E7 FF            CALL 0x004052cc
0058E5A8  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058E5AE  50                        PUSH EAX
0058E5AF  E8 BC 82 15 00            CALL 0x006e6870
0058E5B4  33 FF                     XOR EDI,EDI
0058E5B6  EB 39                     JMP 0x0058e5f1
LAB_0058e5b8:
0058E5B8  33 FF                     XOR EDI,EDI
0058E5BA  8B CB                     MOV ECX,EBX
0058E5BC  57                        PUSH EDI
0058E5BD  E8 0A 6D E7 FF            CALL 0x004052cc
0058E5C2  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058E5C8  50                        PUSH EAX
0058E5C9  E8 22 C6 15 00            CALL 0x006eabf0
0058E5CE  8B CE                     MOV ECX,ESI
0058E5D0  E8 03 6B E7 FF            CALL 0x004050d8
0058E5D5  83 F8 01                  CMP EAX,0x1
0058E5D8  75 03                     JNZ 0x0058e5dd
0058E5DA  50                        PUSH EAX
0058E5DB  EB 01                     JMP 0x0058e5de
LAB_0058e5dd:
0058E5DD  57                        PUSH EDI
LAB_0058e5de:
0058E5DE  8B CB                     MOV ECX,EBX
0058E5E0  E8 E7 6C E7 FF            CALL 0x004052cc
0058E5E5  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
0058E5EB  50                        PUSH EAX
0058E5EC  E8 7F 82 15 00            CALL 0x006e6870
LAB_0058e5f1:
0058E5F1  8B 86 41 02 00 00         MOV EAX,dword ptr [ESI + 0x241]
0058E5F7  3B C7                     CMP EAX,EDI
0058E5F9  7E 59                     JLE 0x0058e654
0058E5FB  8B 0D 24 67 80 00         MOV ECX,dword ptr [0x00806724]
0058E601  0F BF 51 2C               MOVSX EDX,word ptr [ECX + 0x2c]
0058E605  8B 44 81 2C               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x2c]
0058E609  52                        PUSH EDX
0058E60A  50                        PUSH EAX
0058E60B  8B CB                     MOV ECX,EBX
0058E60D  E8 5B 2B E7 FF            CALL 0x0040116d
0058E612  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058E618  33 D2                     XOR EDX,EDX
0058E61A  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
0058E620  B9 03 00 00 00            MOV ECX,0x3
0058E625  F7 F1                     DIV ECX
0058E627  85 D2                     TEST EDX,EDX
0058E629  0F 85 F6 02 00 00         JNZ 0x0058e925
0058E62F  8B 8E 41 02 00 00         MOV ECX,dword ptr [ESI + 0x241]
0058E635  49                        DEC ECX
0058E636  8B C1                     MOV EAX,ECX
0058E638  89 8E 41 02 00 00         MOV dword ptr [ESI + 0x241],ECX
0058E63E  3B C7                     CMP EAX,EDI
0058E640  0F 8F DF 02 00 00         JG 0x0058e925
0058E646  6A 0E                     PUSH 0xe
0058E648  8B CB                     MOV ECX,EBX
0058E64A  E8 8B 59 E7 FF            CALL 0x00403fda
0058E64F  E9 D1 02 00 00            JMP 0x0058e925
LAB_0058e654:
0058E654  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0058E65A  8B 8E 4F 02 00 00         MOV ECX,dword ptr [ESI + 0x24f]
0058E660  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0058E666  3B C1                     CMP EAX,ECX
0058E668  0F 86 B7 02 00 00         JBE 0x0058e925
0058E66E  8B 86 57 02 00 00         MOV EAX,dword ptr [ESI + 0x257]
0058E674  83 F8 06                  CMP EAX,0x6
0058E677  0F 87 75 03 00 00         JA 0x0058e9f2
switchD_0058e67d::switchD:
0058E67D  FF 24 85 B4 EC 58 00      JMP dword ptr [EAX*0x4 + 0x58ecb4]
switchD_0058e67d::caseD_4:
0058E684  6A 08                     PUSH 0x8
0058E686  8B CB                     MOV ECX,EBX
0058E688  E8 1F 3C E7 FF            CALL 0x004022ac
0058E68D  8B F8                     MOV EDI,EAX
0058E68F  6A 08                     PUSH 0x8
0058E691  8B CB                     MOV ECX,EBX
0058E693  4F                        DEC EDI
0058E694  E8 16 5C E7 FF            CALL 0x004042af
0058E699  3B C7                     CMP EAX,EDI
0058E69B  0F 85 84 02 00 00         JNZ 0x0058e925
0058E6A1  6A 08                     PUSH 0x8
0058E6A3  8B CB                     MOV ECX,EBX
0058E6A5  C7 86 57 02 00 00 07 00 00 00  MOV dword ptr [ESI + 0x257],0x7
0058E6AF  E8 B0 5B E7 FF            CALL 0x00404264
0058E6B4  8B CE                     MOV ECX,ESI
0058E6B6  E8 BF 3B E7 FF            CALL 0x0040227a
0058E6BB  E9 65 02 00 00            JMP 0x0058e925
switchD_0058e67d::caseD_5:
0058E6C0  8B 16                     MOV EDX,dword ptr [ESI]
0058E6C2  8B CE                     MOV ECX,ESI
0058E6C4  FF 52 20                  CALL dword ptr [EDX + 0x20]
0058E6C7  83 F8 FF                  CMP EAX,-0x1
0058E6CA  74 49                     JZ 0x0058e715
0058E6CC  83 F8 01                  CMP EAX,0x1
0058E6CF  0F 85 50 02 00 00         JNZ 0x0058e925
0058E6D5  6A 0A                     PUSH 0xa
0058E6D7  8B CE                     MOV ECX,ESI
0058E6D9  E8 B2 75 E7 FF            CALL 0x00405c90
0058E6DE  6A 08                     PUSH 0x8
0058E6E0  8B CE                     MOV ECX,ESI
0058E6E2  E8 1E 6A E7 FF            CALL 0x00405105
0058E6E7  66 8B 86 35 02 00 00      MOV AX,word ptr [ESI + 0x235]
0058E6EE  66 8B 8E 33 02 00 00      MOV CX,word ptr [ESI + 0x233]
0058E6F5  66 8B 96 31 02 00 00      MOV DX,word ptr [ESI + 0x231]
0058E6FC  50                        PUSH EAX
0058E6FD  51                        PUSH ECX
0058E6FE  52                        PUSH EDX
0058E6FF  8B CE                     MOV ECX,ESI
0058E701  E8 12 5C E7 FF            CALL 0x00404318
0058E706  C7 86 57 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x257],0x2
0058E710  E9 10 02 00 00            JMP 0x0058e925
LAB_0058e715:
0058E715  68 A0 D3 7A 00            PUSH 0x7ad3a0
0058E71A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058E71F  57                        PUSH EDI
0058E720  57                        PUSH EDI
0058E721  68 65 02 00 00            PUSH 0x265
0058E726  68 7C BB 7C 00            PUSH 0x7cbb7c
0058E72B  E8 A0 ED 11 00            CALL 0x006ad4d0
0058E730  83 C4 18                  ADD ESP,0x18
0058E733  85 C0                     TEST EAX,EAX
0058E735  0F 84 EA 01 00 00         JZ 0x0058e925
0058E73B  CC                        INT3
switchD_0058e67d::caseD_1:
0058E741  8B 06                     MOV EAX,dword ptr [ESI]
0058E743  8B CE                     MOV ECX,ESI
0058E745  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0058E748  8B C8                     MOV ECX,EAX
0058E74A  2B CF                     SUB ECX,EDI
0058E74C  0F 84 16 03 00 00         JZ 0x0058ea68
0058E752  49                        DEC ECX
0058E753  74 35                     JZ 0x0058e78a
0058E755  49                        DEC ECX
0058E756  0F 84 0C 03 00 00         JZ 0x0058ea68
0058E75C  68 CC BB 7C 00            PUSH 0x7cbbcc
0058E761  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058E766  57                        PUSH EDI
0058E767  57                        PUSH EDI
0058E768  68 D3 02 00 00            PUSH 0x2d3
0058E76D  68 7C BB 7C 00            PUSH 0x7cbb7c
0058E772  E8 59 ED 11 00            CALL 0x006ad4d0
0058E777  83 C4 18                  ADD ESP,0x18
0058E77A  85 C0                     TEST EAX,EAX
0058E77C  0F 84 70 02 00 00         JZ 0x0058e9f2
0058E782  CC                        INT3
LAB_0058e78a:
0058E78A  83 BE 57 02 00 00 04      CMP dword ptr [ESI + 0x257],0x4
0058E791  0F 84 8E 01 00 00         JZ 0x0058e925
0058E797  8B CE                     MOV ECX,ESI
0058E799  E8 FC 3D E7 FF            CALL 0x0040259a
0058E79E  39 BE 3D 02 00 00         CMP dword ptr [ESI + 0x23d],EDI
0058E7A4  0F 84 A6 02 00 00         JZ 0x0058ea50
0058E7AA  66 8B 96 35 02 00 00      MOV DX,word ptr [ESI + 0x235]
0058E7B1  66 8B 8E 33 02 00 00      MOV CX,word ptr [ESI + 0x233]
0058E7B8  89 86 57 02 00 00         MOV dword ptr [ESI + 0x257],EAX
0058E7BE  66 8B 86 31 02 00 00      MOV AX,word ptr [ESI + 0x231]
0058E7C5  66 3B C7                  CMP AX,DI
0058E7C8  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0058E7CB  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0058E7CE  7C 5A                     JL 0x0058e82a
0058E7D0  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0058E7D7  7D 51                     JGE 0x0058e82a
0058E7D9  66 3B CF                  CMP CX,DI
0058E7DC  7C 4C                     JL 0x0058e82a
0058E7DE  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0058E7E5  7D 43                     JGE 0x0058e82a
0058E7E7  66 3B D7                  CMP DX,DI
0058E7EA  7C 3E                     JL 0x0058e82a
0058E7EC  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0058E7F3  7D 35                     JGE 0x0058e82a
0058E7F5  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0058E7FC  0F BF D2                  MOVSX EDX,DX
0058E7FF  0F AF FA                  IMUL EDI,EDX
0058E802  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0058E809  0F BF C9                  MOVSX ECX,CX
0058E80C  0F AF D1                  IMUL EDX,ECX
0058E80F  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0058E815  03 FA                     ADD EDI,EDX
0058E817  0F BF D0                  MOVSX EDX,AX
0058E81A  03 FA                     ADD EDI,EDX
0058E81C  8B 14 F9                  MOV EDX,dword ptr [ECX + EDI*0x8]
0058E81F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0058E822  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0058E825  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0058E828  EB 03                     JMP 0x0058e82d
LAB_0058e82a:
0058E82A  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0058e82d:
0058E82D  66 39 46 47               CMP word ptr [ESI + 0x47],AX
0058E831  0F 85 C2 01 00 00         JNZ 0x0058e9f9
0058E837  66 39 4E 49               CMP word ptr [ESI + 0x49],CX
0058E83B  0F 85 B8 01 00 00         JNZ 0x0058e9f9
0058E841  66 39 56 4B               CMP word ptr [ESI + 0x4b],DX
0058E845  0F 85 AE 01 00 00         JNZ 0x0058e9f9
0058E84B  66 8B 86 4D 02 00 00      MOV AX,word ptr [ESI + 0x24d]
0058E852  8A 8E 49 02 00 00         MOV CL,byte ptr [ESI + 0x249]
0058E858  6A 01                     PUSH 0x1
0058E85A  50                        PUSH EAX
0058E85B  51                        PUSH ECX
0058E85C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0058E862  E8 53 40 E7 FF            CALL 0x004028ba
0058E867  39 45 FC                  CMP dword ptr [EBP + -0x4],EAX
0058E86A  0F 85 89 01 00 00         JNZ 0x0058e9f9
0058E870  B9 07 00 00 00            MOV ECX,0x7
0058E875  33 C0                     XOR EAX,EAX
0058E877  BF 28 17 81 00            MOV EDI,0x811728
0058E87C  F3 AB                     STOSD.REP ES:EDI
LAB_0058e87e:
0058E87E  B9 08 00 00 00            MOV ECX,0x8
0058E883  33 C0                     XOR EAX,EAX
0058E885  8D 7D D4                  LEA EDI,[EBP + -0x2c]
0058E888  C7 05 28 17 81 00 E8 03 00 00  MOV dword ptr [0x00811728],0x3e8
0058E892  F3 AB                     STOSD.REP ES:EDI
0058E894  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0058E897  C7 05 30 17 81 00 FF 00 00 00  MOV dword ptr [0x00811730],0xff
0058E8A1  66 C7 05 34 17 81 00 FF FF  MOV word ptr [0x00811734],0xffff
0058E8AA  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0058E8AD  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
0058E8B4  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0058E8B7  C7 45 E4 10 01 00 00      MOV dword ptr [EBP + -0x1c],0x110
0058E8BE  C7 45 E8 28 17 81 00      MOV dword ptr [EBP + -0x18],0x811728
0058E8C5  8B 01                     MOV EAX,dword ptr [ECX]
0058E8C7  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0058E8CA  52                        PUSH EDX
0058E8CB  FF 10                     CALL dword ptr [EAX]
0058E8CD  C7 86 3D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23d],0x0
0058E8D7  A1 64 67 80 00            MOV EAX,[0x00806764]
0058E8DC  6A 1D                     PUSH 0x1d
0058E8DE  68 28 BB 7C 00            PUSH 0x7cbb28
0058E8E3  50                        PUSH EAX
0058E8E4  6A 08                     PUSH 0x8
0058E8E6  8B CB                     MOV ECX,EBX
0058E8E8  E8 96 58 E7 FF            CALL 0x00404183
0058E8ED  85 C0                     TEST EAX,EAX
0058E8EF  0F 85 FD 00 00 00         JNZ 0x0058e9f2
0058E8F5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0058E8FB  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0058E901  8B CB                     MOV ECX,EBX
0058E903  52                        PUSH EDX
0058E904  6A 08                     PUSH 0x8
0058E906  E8 35 69 E7 FF            CALL 0x00405240
0058E90B  6A 0E                     PUSH 0xe
0058E90D  8B CB                     MOV ECX,EBX
0058E90F  C7 86 57 02 00 00 04 00 00 00  MOV dword ptr [ESI + 0x257],0x4
0058E919  E8 46 59 E7 FF            CALL 0x00404264
0058E91E  8B CB                     MOV ECX,EBX
0058E920  E8 6B 41 E7 FF            CALL 0x00402a90
STSharkC::LifeShark::cf_common_exit_0058E925:
0058E925  8B 86 57 02 00 00         MOV EAX,dword ptr [ESI + 0x257]
0058E92B  83 F8 04                  CMP EAX,0x4
0058E92E  0F 84 B4 00 00 00         JZ 0x0058e9e8
0058E934  83 F8 07                  CMP EAX,0x7
0058E937  0F 84 AB 00 00 00         JZ 0x0058e9e8
0058E93D  0F BF 4E 6C               MOVSX ECX,word ptr [ESI + 0x6c]
0058E941  B8 89 88 88 88            MOV EAX,0x88888889
0058E946  BF 1E 00 00 00            MOV EDI,0x1e
0058E94B  F7 E9                     IMUL ECX
0058E94D  03 D1                     ADD EDX,ECX
0058E94F  B8 18 00 00 00            MOV EAX,0x18
0058E954  C1 FA 03                  SAR EDX,0x3
0058E957  8B CA                     MOV ECX,EDX
0058E959  C1 E9 1F                  SHR ECX,0x1f
0058E95C  03 D1                     ADD EDX,ECX
0058E95E  B9 18 00 00 00            MOV ECX,0x18
0058E963  2B C2                     SUB EAX,EDX
0058E965  99                        CDQ
0058E966  F7 F9                     IDIV ECX
0058E968  8B CA                     MOV ECX,EDX
0058E96A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0058E970  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0058E976  33 D2                     XOR EDX,EDX
0058E978  F7 F7                     DIV EDI
0058E97A  B8 56 55 55 55            MOV EAX,0x55555556
0058E97F  8B FA                     MOV EDI,EDX
0058E981  F7 E9                     IMUL ECX
0058E983  8B C2                     MOV EAX,EDX
0058E985  C1 E8 1F                  SHR EAX,0x1f
0058E988  03 D0                     ADD EDX,EAX
0058E98A  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
0058E98D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0058E990  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
0058E993  8B 15 FC 73 80 00         MOV EDX,dword ptr [0x008073fc]
0058E999  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058E99C  B8 04 00 00 00            MOV EAX,0x4
0058E9A1  2B C2                     SUB EAX,EDX
0058E9A3  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0058E9A6  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0058E9A9  B9 18 00 00 00            MOV ECX,0x18
0058E9AE  99                        CDQ
0058E9AF  F7 F9                     IDIV ECX
0058E9B1  B8 56 55 55 55            MOV EAX,0x55555556
0058E9B6  F7 EA                     IMUL EDX
0058E9B8  8B C2                     MOV EAX,EDX
0058E9BA  C1 E8 1F                  SHR EAX,0x1f
0058E9BD  03 D0                     ADD EDX,EAX
0058E9BF  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
0058E9C2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0058E9C5  8D 14 4F                  LEA EDX,[EDI + ECX*0x2]
0058E9C8  8B CB                     MOV ECX,EBX
0058E9CA  52                        PUSH EDX
0058E9CB  6A 0E                     PUSH 0xe
0058E9CD  E8 92 26 E7 FF            CALL 0x00401064
0058E9D2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0058E9D5  8B CB                     MOV ECX,EBX
0058E9D7  50                        PUSH EAX
0058E9D8  6A 0E                     PUSH 0xe
0058E9DA  E8 1F 69 E7 FF            CALL 0x004052fe
0058E9DF  6A 0E                     PUSH 0xe
0058E9E1  8B CB                     MOV ECX,EBX
0058E9E3  E8 D4 46 E7 FF            CALL 0x004030bc
LAB_0058e9e8:
0058E9E8  8B 16                     MOV EDX,dword ptr [ESI]
0058E9EA  8B CE                     MOV ECX,ESI
0058E9EC  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
switchD_0058e67d::default:
0058E9F2  5F                        POP EDI
0058E9F3  5E                        POP ESI
0058E9F4  5B                        POP EBX
0058E9F5  8B E5                     MOV ESP,EBP
0058E9F7  5D                        POP EBP
0058E9F8  C3                        RET
LAB_0058e9f9:
0058E9F9  66 8B 86 35 02 00 00      MOV AX,word ptr [ESI + 0x235]
0058EA00  66 8B 8E 33 02 00 00      MOV CX,word ptr [ESI + 0x233]
0058EA07  66 8B 96 31 02 00 00      MOV DX,word ptr [ESI + 0x231]
0058EA0E  50                        PUSH EAX
0058EA0F  51                        PUSH ECX
0058EA10  52                        PUSH EDX
0058EA11  8B CE                     MOV ECX,ESI
0058EA13  E8 00 59 E7 FF            CALL 0x00404318
0058EA18  6A 08                     PUSH 0x8
0058EA1A  8B CE                     MOV ECX,ESI
0058EA1C  8B F8                     MOV EDI,EAX
0058EA1E  E8 6D 72 E7 FF            CALL 0x00405c90
0058EA23  6A 06                     PUSH 0x6
0058EA25  8B CE                     MOV ECX,ESI
0058EA27  E8 D9 66 E7 FF            CALL 0x00405105
0058EA2C  85 FF                     TEST EDI,EDI
0058EA2E  0F 84 F1 FE FF FF         JZ 0x0058e925
0058EA34  8B CE                     MOV ECX,ESI
0058EA36  E8 BF 6C E7 FF            CALL 0x004056fa
0058EA3B  89 86 4F 02 00 00         MOV dword ptr [ESI + 0x24f],EAX
0058EA41  C7 86 57 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x257],0x0
0058EA4B  E9 D5 FE FF FF            JMP 0x0058e925
LAB_0058ea50:
0058EA50  8B CE                     MOV ECX,ESI
0058EA52  E8 A3 6C E7 FF            CALL 0x004056fa
0058EA57  89 86 4F 02 00 00         MOV dword ptr [ESI + 0x24f],EAX
0058EA5D  89 BE 57 02 00 00         MOV dword ptr [ESI + 0x257],EDI
0058EA63  E9 BD FE FF FF            JMP 0x0058e925
LAB_0058ea68:
0058EA68  39 BE 3D 02 00 00         CMP dword ptr [ESI + 0x23d],EDI
0058EA6E  0F 84 04 01 00 00         JZ 0x0058eb78
0058EA74  66 8B 86 31 02 00 00      MOV AX,word ptr [ESI + 0x231]
0058EA7B  66 8B 8E 35 02 00 00      MOV CX,word ptr [ESI + 0x235]
0058EA82  66 8B 96 33 02 00 00      MOV DX,word ptr [ESI + 0x233]
0058EA89  66 3B C7                  CMP AX,DI
0058EA8C  0F 8C 93 FE FF FF         JL 0x0058e925
0058EA92  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0058EA99  0F 8D 86 FE FF FF         JGE 0x0058e925
0058EA9F  66 85 D2                  TEST DX,DX
0058EAA2  0F 8C 7D FE FF FF         JL 0x0058e925
0058EAA8  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0058EAAF  0F 8D 70 FE FF FF         JGE 0x0058e925
0058EAB5  66 85 C9                  TEST CX,CX
0058EAB8  0F 8C 67 FE FF FF         JL 0x0058e925
0058EABE  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0058EAC5  0F 8D 5A FE FF FF         JGE 0x0058e925
0058EACB  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
0058EAD2  0F BF C9                  MOVSX ECX,CX
0058EAD5  0F AF F9                  IMUL EDI,ECX
0058EAD8  0F BF 0D 40 B2 7F 00      MOVSX ECX,word ptr [0x007fb240]
0058EADF  0F BF D2                  MOVSX EDX,DX
0058EAE2  0F AF CA                  IMUL ECX,EDX
0058EAE5  0F BF C0                  MOVSX EAX,AX
0058EAE8  03 F9                     ADD EDI,ECX
0058EAEA  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
0058EAF0  03 F8                     ADD EDI,EAX
0058EAF2  8B 3C F9                  MOV EDI,dword ptr [ECX + EDI*0x8]
0058EAF5  85 FF                     TEST EDI,EDI
0058EAF7  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0058EAFA  0F 84 25 FE FF FF         JZ 0x0058e925
0058EB00  8D 86 35 02 00 00         LEA EAX,[ESI + 0x235]
0058EB06  8B CF                     MOV ECX,EDI
0058EB08  50                        PUSH EAX
0058EB09  8D 86 33 02 00 00         LEA EAX,[ESI + 0x233]
0058EB0F  50                        PUSH EAX
0058EB10  8D 86 31 02 00 00         LEA EAX,[ESI + 0x231]
0058EB16  50                        PUSH EAX
0058EB17  E8 A9 2D E7 FF            CALL 0x004018c5
0058EB1C  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
0058EB20  66 3B 96 31 02 00 00      CMP DX,word ptr [ESI + 0x231]
0058EB27  0F 85 F8 FD FF FF         JNZ 0x0058e925
0058EB2D  66 8B 46 49               MOV AX,word ptr [ESI + 0x49]
0058EB31  66 3B 86 33 02 00 00      CMP AX,word ptr [ESI + 0x233]
0058EB38  0F 85 E7 FD FF FF         JNZ 0x0058e925
0058EB3E  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0058EB42  66 3B 8E 35 02 00 00      CMP CX,word ptr [ESI + 0x235]
0058EB49  0F 85 D6 FD FF FF         JNZ 0x0058e925
0058EB4F  66 8B 96 4D 02 00 00      MOV DX,word ptr [ESI + 0x24d]
0058EB56  8A 86 49 02 00 00         MOV AL,byte ptr [ESI + 0x249]
0058EB5C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0058EB62  6A 01                     PUSH 0x1
0058EB64  52                        PUSH EDX
0058EB65  50                        PUSH EAX
0058EB66  E8 4F 3D E7 FF            CALL 0x004028ba
0058EB6B  3B F8                     CMP EDI,EAX
0058EB6D  0F 85 B2 FD FF FF         JNZ 0x0058e925
0058EB73  E9 06 FD FF FF            JMP 0x0058e87e
LAB_0058eb78:
0058EB78  8B 8E 53 02 00 00         MOV ECX,dword ptr [ESI + 0x253]
0058EB7E  83 F9 1E                  CMP ECX,0x1e
0058EB81  7E 29                     JLE 0x0058ebac
0058EB83  8B 06                     MOV EAX,dword ptr [ESI]
0058EB85  8B CE                     MOV ECX,ESI
0058EB87  FF 50 20                  CALL dword ptr [EAX + 0x20]
0058EB8A  83 F8 01                  CMP EAX,0x1
0058EB8D  0F 85 92 FD FF FF         JNZ 0x0058e925
0058EB93  50                        PUSH EAX
0058EB94  8B CE                     MOV ECX,ESI
0058EB96  89 BE 53 02 00 00         MOV dword ptr [ESI + 0x253],EDI
0058EB9C  E8 AC 5E E7 FF            CALL 0x00404a4d
0058EBA1  89 86 57 02 00 00         MOV dword ptr [ESI + 0x257],EAX
0058EBA7  E9 79 FD FF FF            JMP 0x0058e925
LAB_0058ebac:
0058EBAC  83 F8 02                  CMP EAX,0x2
0058EBAF  0F 85 70 FD FF FF         JNZ 0x0058e925
0058EBB5  41                        INC ECX
0058EBB6  89 8E 53 02 00 00         MOV dword ptr [ESI + 0x253],ECX
0058EBBC  E9 64 FD FF FF            JMP 0x0058e925
switchD_0058e67d::caseD_0:
0058EBC1  8B 16                     MOV EDX,dword ptr [ESI]
0058EBC3  8B CE                     MOV ECX,ESI
0058EBC5  FF 52 20                  CALL dword ptr [EDX + 0x20]
0058EBC8  83 F8 FF                  CMP EAX,-0x1
0058EBCB  74 36                     JZ 0x0058ec03
0058EBCD  83 F8 01                  CMP EAX,0x1
0058EBD0  0F 85 4F FD FF FF         JNZ 0x0058e925
0058EBD6  83 BE 53 02 00 00 1E      CMP dword ptr [ESI + 0x253],0x1e
0058EBDD  7C 04                     JL 0x0058ebe3
0058EBDF  6A 01                     PUSH 0x1
0058EBE1  EB 01                     JMP 0x0058ebe4
LAB_0058ebe3:
0058EBE3  57                        PUSH EDI
LAB_0058ebe4:
0058EBE4  8B CE                     MOV ECX,ESI
0058EBE6  E8 62 5E E7 FF            CALL 0x00404a4d
0058EBEB  89 86 57 02 00 00         MOV dword ptr [ESI + 0x257],EAX
0058EBF1  8B 86 53 02 00 00         MOV EAX,dword ptr [ESI + 0x253]
0058EBF7  40                        INC EAX
0058EBF8  89 86 53 02 00 00         MOV dword ptr [ESI + 0x253],EAX
0058EBFE  E9 22 FD FF FF            JMP 0x0058e925
LAB_0058ec03:
0058EC03  68 A0 D3 7A 00            PUSH 0x7ad3a0
0058EC08  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058EC0D  6A FB                     PUSH -0x5
0058EC0F  57                        PUSH EDI
0058EC10  68 DC 02 00 00            PUSH 0x2dc
0058EC15  68 7C BB 7C 00            PUSH 0x7cbb7c
0058EC1A  E8 B1 E8 11 00            CALL 0x006ad4d0
0058EC1F  83 C4 18                  ADD ESP,0x18
0058EC22  85 C0                     TEST EAX,EAX
0058EC24  74 01                     JZ 0x0058ec27
0058EC26  CC                        INT3
LAB_0058ec27:
0058EC27  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0058EC2C  68 DD 02 00 00            PUSH 0x2dd
0058EC31  68 7C BB 7C 00            PUSH 0x7cbb7c
0058EC36  50                        PUSH EAX
0058EC37  68 FF FF 00 00            PUSH 0xffff
0058EC3C  E8 FF 71 11 00            CALL 0x006a5e40
0058EC41  E9 DF FC FF FF            JMP 0x0058e925
switchD_0058e67d::caseD_6:
0058EC46  8B CE                     MOV ECX,ESI
0058EC48  E8 00 45 E7 FF            CALL 0x0040314d
0058EC4D  3B C7                     CMP EAX,EDI
0058EC4F  74 3C                     JZ 0x0058ec8d
0058EC51  83 F8 01                  CMP EAX,0x1
0058EC54  7E 09                     JLE 0x0058ec5f
0058EC56  83 F8 03                  CMP EAX,0x3
0058EC59  0F 8E 93 FD FF FF         JLE 0x0058e9f2
LAB_0058ec5f:
0058EC5F  68 CC BB 7C 00            PUSH 0x7cbbcc
0058EC64  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058EC69  57                        PUSH EDI
0058EC6A  57                        PUSH EDI
0058EC6B  68 F8 02 00 00            PUSH 0x2f8
0058EC70  68 7C BB 7C 00            PUSH 0x7cbb7c
0058EC75  E8 56 E8 11 00            CALL 0x006ad4d0
0058EC7A  83 C4 18                  ADD ESP,0x18
0058EC7D  85 C0                     TEST EAX,EAX
0058EC7F  0F 84 6D FD FF FF         JZ 0x0058e9f2
0058EC85  CC                        INT3
LAB_0058ec8d:
0058EC8D  8B CE                     MOV ECX,ESI
0058EC8F  E8 66 6A E7 FF            CALL 0x004056fa
0058EC94  89 BE 57 02 00 00         MOV dword ptr [ESI + 0x257],EDI
0058EC9A  89 86 4F 02 00 00         MOV dword ptr [ESI + 0x24f],EAX
0058ECA0  C7 86 53 02 00 00 0F 00 00 00  MOV dword ptr [ESI + 0x253],0xf
0058ECAA  5F                        POP EDI
0058ECAB  5E                        POP ESI
0058ECAC  5B                        POP EBX
0058ECAD  8B E5                     MOV ESP,EBP
0058ECAF  5D                        POP EBP
0058ECB0  C3                        RET
