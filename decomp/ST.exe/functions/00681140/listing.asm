FUN_00681140:
00681140  8B 0D B0 88 84 00         MOV ECX,dword ptr [0x008488b0]
00681146  56                        PUSH ESI
00681147  8B C1                     MOV EAX,ECX
00681149  C1 E0 04                  SHL EAX,0x4
0068114C  03 C1                     ADD EAX,ECX
0068114E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00681151  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00681154  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
00681157  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
0068115A  C1 E6 02                  SHL ESI,0x2
0068115D  8B 86 7C 1C 81 00         MOV EAX,dword ptr [ESI + 0x811c7c]
00681163  83 F8 01                  CMP EAX,0x1
00681166  7D 04                     JGE 0x0068116c
00681168  33 C0                     XOR EAX,EAX
0068116A  5E                        POP ESI
0068116B  C3                        RET
LAB_0068116c:
0068116C  83 F8 02                  CMP EAX,0x2
0068116F  BA FF 00 00 00            MOV EDX,0xff
00681174  7D 06                     JGE 0x0068117c
00681176  89 96 84 1C 81 00         MOV dword ptr [ESI + 0x811c84],EDX
LAB_0068117c:
0068117C  83 BE 7C 1C 81 00 03      CMP dword ptr [ESI + 0x811c7c],0x3
00681183  7D 06                     JGE 0x0068118b
00681185  89 96 88 1C 81 00         MOV dword ptr [ESI + 0x811c88],EDX
LAB_0068118b:
0068118B  83 BE 7C 1C 81 00 04      CMP dword ptr [ESI + 0x811c7c],0x4
00681192  7D 0A                     JGE 0x0068119e
00681194  C7 86 8C 1C 81 00 19 00 00 00  MOV dword ptr [ESI + 0x811c8c],0x19
LAB_0068119e:
0068119E  8B 96 7C 1C 81 00         MOV EDX,dword ptr [ESI + 0x811c7c]
006811A4  83 C8 FF                  OR EAX,0xffffffff
006811A7  83 FA 05                  CMP EDX,0x5
006811AA  7D 06                     JGE 0x006811b2
006811AC  89 86 90 1C 81 00         MOV dword ptr [ESI + 0x811c90],EAX
LAB_006811b2:
006811B2  83 BE 7C 1C 81 00 06      CMP dword ptr [ESI + 0x811c7c],0x6
006811B9  7D 06                     JGE 0x006811c1
006811BB  89 86 94 1C 81 00         MOV dword ptr [ESI + 0x811c94],EAX
LAB_006811c1:
006811C1  83 BE 7C 1C 81 00 07      CMP dword ptr [ESI + 0x811c7c],0x7
006811C8  7D 06                     JGE 0x006811d0
006811CA  89 86 98 1C 81 00         MOV dword ptr [ESI + 0x811c98],EAX
LAB_006811d0:
006811D0  83 BE 7C 1C 81 00 08      CMP dword ptr [ESI + 0x811c7c],0x8
006811D7  7D 06                     JGE 0x006811df
006811D9  89 86 9C 1C 81 00         MOV dword ptr [ESI + 0x811c9c],EAX
LAB_006811df:
006811DF  83 BE E8 1A 81 00 01      CMP dword ptr [ESI + 0x811ae8],0x1
006811E6  7D 27                     JGE 0x0068120f
006811E8  8B C1                     MOV EAX,ECX
006811EA  C1 E0 04                  SHL EAX,0x4
006811ED  03 C1                     ADD EAX,ECX
006811EF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006811F2  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
006811F5  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
006811F8  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
006811FB  A1 34 D7 79 00            MOV EAX,[0x0079d734]
00681200  50                        PUSH EAX
00681201  C1 E6 02                  SHL ESI,0x2
00681204  E8 2D 2C D8 FF            CALL 0x00403e36
00681209  89 86 EC 1A 81 00         MOV dword ptr [ESI + 0x811aec],EAX
LAB_0068120f:
0068120F  8B 86 8C 1C 81 00         MOV EAX,dword ptr [ESI + 0x811c8c]
00681215  85 C0                     TEST EAX,EAX
00681217  7D 0A                     JGE 0x00681223
00681219  C7 86 8C 1C 81 00 00 00 00 00  MOV dword ptr [ESI + 0x811c8c],0x0
LAB_00681223:
00681223  8B 8E 8C 1C 81 00         MOV ECX,dword ptr [ESI + 0x811c8c]
00681229  B8 32 00 00 00            MOV EAX,0x32
0068122E  3B C8                     CMP ECX,EAX
00681230  7C 06                     JL 0x00681238
00681232  89 86 8C 1C 81 00         MOV dword ptr [ESI + 0x811c8c],EAX
LAB_00681238:
00681238  B8 01 00 00 00            MOV EAX,0x1
0068123D  5E                        POP ESI
0068123E  C3                        RET
