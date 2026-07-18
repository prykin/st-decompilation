FUN_0059c520:
0059C520  55                        PUSH EBP
0059C521  8B EC                     MOV EBP,ESP
0059C523  83 EC 48                  SUB ESP,0x48
0059C526  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059C52B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059C52E  56                        PUSH ESI
0059C52F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059C532  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059C535  6A 00                     PUSH 0x0
0059C537  52                        PUSH EDX
0059C538  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059C53B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059C541  E8 AA 12 19 00            CALL 0x0072d7f0
0059C546  8B F0                     MOV ESI,EAX
0059C548  83 C4 08                  ADD ESP,0x8
0059C54B  85 F6                     TEST ESI,ESI
0059C54D  0F 85 D7 00 00 00         JNZ 0x0059c62a
0059C553  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0059C556  8A 86 5F 1A 00 00         MOV AL,byte ptr [ESI + 0x1a5f]
0059C55C  83 C0 FE                  ADD EAX,-0x2
0059C55F  83 F8 08                  CMP EAX,0x8
0059C562  0F 87 B5 00 00 00         JA 0x0059c61d
switchD_0059c568::switchD:
0059C568  FF 24 85 70 C6 59 00      JMP dword ptr [EAX*0x4 + 0x59c670]
switchD_0059c568::caseD_2:
0059C56F  8B CE                     MOV ECX,ESI
0059C571  E8 1C 5E E6 FF            CALL 0x00402392
0059C576  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C579  C6 86 62 1A 00 00 01      MOV byte ptr [ESI + 0x1a62],0x1
0059C580  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C585  5E                        POP ESI
0059C586  8B E5                     MOV ESP,EBP
0059C588  5D                        POP EBP
0059C589  C3                        RET
switchD_0059c568::caseD_4:
0059C58A  8B CE                     MOV ECX,ESI
0059C58C  E8 91 5A E6 FF            CALL 0x00402022
0059C591  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C594  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C599  5E                        POP ESI
0059C59A  8B E5                     MOV ESP,EBP
0059C59C  5D                        POP EBP
0059C59D  C3                        RET
switchD_0059c568::caseD_5:
0059C59E  8B CE                     MOV ECX,ESI
0059C5A0  E8 2E 6D E6 FF            CALL 0x004032d3
0059C5A5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C5A8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C5AD  5E                        POP ESI
0059C5AE  8B E5                     MOV ESP,EBP
0059C5B0  5D                        POP EBP
0059C5B1  C3                        RET
switchD_0059c568::caseD_3:
0059C5B2  8B CE                     MOV ECX,ESI
0059C5B4  E8 BC 57 E6 FF            CALL 0x00401d75
0059C5B9  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C5BC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C5C1  5E                        POP ESI
0059C5C2  8B E5                     MOV ESP,EBP
0059C5C4  5D                        POP EBP
0059C5C5  C3                        RET
switchD_0059c568::caseD_6:
0059C5C6  8B CE                     MOV ECX,ESI
0059C5C8  E8 A3 7F E6 FF            CALL 0x00404570
0059C5CD  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C5D0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C5D5  5E                        POP ESI
0059C5D6  8B E5                     MOV ESP,EBP
0059C5D8  5D                        POP EBP
0059C5D9  C3                        RET
switchD_0059c568::caseD_7:
0059C5DA  8B CE                     MOV ECX,ESI
0059C5DC  E8 CC 79 E6 FF            CALL 0x00403fad
0059C5E1  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C5E4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C5E9  5E                        POP ESI
0059C5EA  8B E5                     MOV ESP,EBP
0059C5EC  5D                        POP EBP
0059C5ED  C3                        RET
switchD_0059c568::caseD_8:
0059C5EE  8B CE                     MOV ECX,ESI
0059C5F0  E8 75 53 E6 FF            CALL 0x0040196a
0059C5F5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C5F8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C5FD  5E                        POP ESI
0059C5FE  8B E5                     MOV ESP,EBP
0059C600  5D                        POP EBP
0059C601  C3                        RET
switchD_0059c568::caseD_a:
0059C602  8B CE                     MOV ECX,ESI
0059C604  E8 1D 60 E6 FF            CALL 0x00402626
0059C609  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C60C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C611  5E                        POP ESI
0059C612  8B E5                     MOV ESP,EBP
0059C614  5D                        POP EBP
0059C615  C3                        RET
switchD_0059c568::caseD_9:
0059C616  8B CE                     MOV ECX,ESI
0059C618  E8 04 7E E6 FF            CALL 0x00404421
switchD_0059c568::default:
0059C61D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059C620  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059C625  5E                        POP ESI
0059C626  8B E5                     MOV ESP,EBP
0059C628  5D                        POP EBP
0059C629  C3                        RET
LAB_0059c62a:
0059C62A  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0059C62D  68 CC C2 7C 00            PUSH 0x7cc2cc
0059C632  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059C637  56                        PUSH ESI
0059C638  6A 00                     PUSH 0x0
0059C63A  68 82 05 00 00            PUSH 0x582
0059C63F  68 70 BF 7C 00            PUSH 0x7cbf70
0059C644  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059C64A  E8 81 0E 11 00            CALL 0x006ad4d0
0059C64F  83 C4 18                  ADD ESP,0x18
0059C652  85 C0                     TEST EAX,EAX
0059C654  74 01                     JZ 0x0059c657
0059C656  CC                        INT3
LAB_0059c657:
0059C657  68 82 05 00 00            PUSH 0x582
0059C65C  68 70 BF 7C 00            PUSH 0x7cbf70
0059C661  6A 00                     PUSH 0x0
0059C663  56                        PUSH ESI
0059C664  E8 D7 97 10 00            CALL 0x006a5e40
0059C669  5E                        POP ESI
0059C66A  8B E5                     MOV ESP,EBP
0059C66C  5D                        POP EBP
0059C66D  C3                        RET
