MMsgTy::CloseSprBut:
005B9170  55                        PUSH EBP
005B9171  8B EC                     MOV EBP,ESP
005B9173  83 EC 50                  SUB ESP,0x50
005B9176  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B917B  53                        PUSH EBX
005B917C  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005B917F  33 DB                     XOR EBX,EBX
005B9181  56                        PUSH ESI
005B9182  8D 55 B4                  LEA EDX,[EBP + -0x4c]
005B9185  8D 4D B0                  LEA ECX,[EBP + -0x50]
005B9188  53                        PUSH EBX
005B9189  52                        PUSH EDX
005B918A  88 5D F8                  MOV byte ptr [EBP + -0x8],BL
005B918D  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
005B9190  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B9196  E8 55 46 17 00            CALL 0x0072d7f0
005B919B  8B F0                     MOV ESI,EAX
005B919D  83 C4 08                  ADD ESP,0x8
005B91A0  3B F3                     CMP ESI,EBX
005B91A2  0F 85 E1 00 00 00         JNZ 0x005b9289
005B91A8  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
005B91AB  8B CE                     MOV ECX,ESI
005B91AD  E8 A7 A2 E4 FF            CALL 0x00403459
005B91B2  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B91B8  32 D2                     XOR DL,DL
005B91BA  3A C3                     CMP AL,BL
005B91BC  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B91BF  76 59                     JBE 0x005b921a
LAB_005b91c1:
005B91C1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B91C4  25 FF 00 00 00            AND EAX,0xff
005B91C9  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B91D0  2B C8                     SUB ECX,EAX
005B91D2  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B91D5  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005B91D8  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
005B91DB  03 C8                     ADD ECX,EAX
005B91DD  8B 46 61                  MOV EAX,dword ptr [ESI + 0x61]
005B91E0  89 81 27 01 00 00         MOV dword ptr [ECX + 0x127],EAX
005B91E6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005B91E9  25 FF 00 00 00            AND EAX,0xff
005B91EE  40                        INC EAX
005B91EF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005B91F2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005B91F5  C1 E0 02                  SHL EAX,0x2
005B91F8  89 81 23 01 00 00         MOV dword ptr [ECX + 0x123],EAX
005B91FE  8B 81 BC 00 00 00         MOV EAX,dword ptr [ECX + 0xbc]
005B9204  3B C3                     CMP EAX,EBX
005B9206  74 03                     JZ 0x005b920b
005B9208  FE 45 F8                  INC byte ptr [EBP + -0x8]
LAB_005b920b:
005B920B  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B9211  FE C2                     INC DL
005B9213  3A D0                     CMP DL,AL
005B9215  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
005B9218  72 A7                     JC 0x005b91c1
LAB_005b921a:
005B921A  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B9220  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005B9223  3A C3                     CMP AL,BL
005B9225  76 46                     JBE 0x005b926d
LAB_005b9227:
005B9227  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005B922A  25 FF 00 00 00            AND EAX,0xff
005B922F  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
005B9236  2B C8                     SUB ECX,EAX
005B9238  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005B923B  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005B923E  8D 14 46                  LEA EDX,[ESI + EAX*0x2]
005B9241  8B 8C 10 78 01 00 00      MOV ECX,dword ptr [EAX + EDX*0x1 + 0x178]
005B9248  8D 84 10 74 01 00 00      LEA EAX,[EAX + EDX*0x1 + 0x174]
005B924F  83 F9 FF                  CMP ECX,-0x1
005B9252  74 0A                     JZ 0x005b925e
005B9254  8B 40 48                  MOV EAX,dword ptr [EAX + 0x48]
005B9257  51                        PUSH ECX
005B9258  50                        PUSH EAX
005B9259  E8 92 A8 0F 00            CALL 0x006b3af0
LAB_005b925e:
005B925E  8A 86 9A 00 00 00         MOV AL,byte ptr [ESI + 0x9a]
005B9264  FE C3                     INC BL
005B9266  3A D8                     CMP BL,AL
005B9268  88 5D FC                  MOV byte ptr [EBP + -0x4],BL
005B926B  72 BA                     JC 0x005b9227
LAB_005b926d:
005B926D  6A 01                     PUSH 0x1
005B926F  6A 01                     PUSH 0x1
005B9271  6A 01                     PUSH 0x1
005B9273  8B CE                     MOV ECX,ESI
005B9275  E8 2B 8D E4 FF            CALL 0x00401fa5
005B927A  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
005B927D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B9283  5E                        POP ESI
005B9284  5B                        POP EBX
005B9285  8B E5                     MOV ESP,EBP
005B9287  5D                        POP EBP
005B9288  C3                        RET
LAB_005b9289:
005B9289  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
005B928C  68 F8 CC 7C 00            PUSH 0x7cccf8
005B9291  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B9296  56                        PUSH ESI
005B9297  53                        PUSH EBX
005B9298  68 D3 01 00 00            PUSH 0x1d3
005B929D  68 74 CB 7C 00            PUSH 0x7ccb74
005B92A2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B92A8  E8 23 42 0F 00            CALL 0x006ad4d0
005B92AD  83 C4 18                  ADD ESP,0x18
005B92B0  85 C0                     TEST EAX,EAX
005B92B2  74 01                     JZ 0x005b92b5
005B92B4  CC                        INT3
LAB_005b92b5:
005B92B5  68 D3 01 00 00            PUSH 0x1d3
005B92BA  68 74 CB 7C 00            PUSH 0x7ccb74
005B92BF  53                        PUSH EBX
005B92C0  56                        PUSH ESI
005B92C1  E8 7A CB 0E 00            CALL 0x006a5e40
005B92C6  5E                        POP ESI
005B92C7  5B                        POP EBX
005B92C8  8B E5                     MOV ESP,EBP
005B92CA  5D                        POP EBP
005B92CB  C3                        RET
