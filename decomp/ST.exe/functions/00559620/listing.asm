FUN_00559620:
00559620  55                        PUSH EBP
00559621  8B EC                     MOV EBP,ESP
00559623  51                        PUSH ECX
00559624  8B 81 14 01 00 00         MOV EAX,dword ptr [ECX + 0x114]
0055962A  53                        PUSH EBX
0055962B  56                        PUSH ESI
0055962C  57                        PUSH EDI
0055962D  85 C0                     TEST EAX,EAX
0055962F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00559632  0F 84 07 01 00 00         JZ 0x0055973f
00559638  8B 41 38                  MOV EAX,dword ptr [ECX + 0x38]
0055963B  85 C0                     TEST EAX,EAX
0055963D  0F 84 FC 00 00 00         JZ 0x0055973f
00559643  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
00559646  85 F6                     TEST ESI,ESI
00559648  0F 8C F1 00 00 00         JL 0x0055973f
0055964E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00559651  83 F8 08                  CMP EAX,0x8
00559654  0F 83 E5 00 00 00         JNC 0x0055973f
0055965A  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00559660  85 D2                     TEST EDX,EDX
00559662  74 11                     JZ 0x00559675
00559664  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
00559667  80 BC D2 E9 87 80 00 08   CMP byte ptr [EDX + EDX*0x8 + 0x8087e9],0x8
0055966F  0F 83 CA 00 00 00         JNC 0x0055973f
LAB_00559675:
00559675  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00559678  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0055967B  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0055967E  F6 C6 10                  TEST DH,0x10
00559681  74 19                     JZ 0x0055969c
00559683  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00559686  52                        PUSH EDX
00559687  56                        PUSH ESI
00559688  50                        PUSH EAX
00559689  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055968C  50                        PUSH EAX
0055968D  57                        PUSH EDI
0055968E  53                        PUSH EBX
0055968F  6A 01                     PUSH 0x1
00559691  E8 4F 85 EA FF            CALL 0x00401be5
00559696  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00559699  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
LAB_0055969c:
0055969C  8A 94 08 FC 00 00 00      MOV DL,byte ptr [EAX + ECX*0x1 + 0xfc]
005596A3  84 D2                     TEST DL,DL
005596A5  0F 84 94 00 00 00         JZ 0x0055973f
005596AB  F6 45 20 02               TEST byte ptr [EBP + 0x20],0x2
005596AF  0F 84 8A 00 00 00         JZ 0x0055973f
005596B5  8D 4C 36 01               LEA ECX,[ESI + ESI*0x1 + 0x1]
005596B9  2B DE                     SUB EBX,ESI
005596BB  56                        PUSH ESI
005596BC  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
005596BF  89 5D 0C                  MOV dword ptr [EBP + 0xc],EBX
005596C2  2B FE                     SUB EDI,ESI
005596C4  E8 F6 91 EA FF            CALL 0x004028bf
005596C9  8B C8                     MOV ECX,EAX
005596CB  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005596CE  83 C4 04                  ADD ESP,0x4
005596D1  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
005596D4  85 C0                     TEST EAX,EAX
005596D6  7E 67                     JLE 0x0055973f
005596D8  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
005596DB  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_005596de:
005596DE  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005596E1  33 C0                     XOR EAX,EAX
LAB_005596e3:
005596E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005596E6  85 C9                     TEST ECX,ECX
005596E8  74 09                     JZ 0x005596f3
005596EA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
005596ED  80 3C 02 00               CMP byte ptr [EDX + EAX*0x1],0x0
005596F1  74 31                     JZ 0x00559724
LAB_005596f3:
005596F3  85 F6                     TEST ESI,ESI
005596F5  7C 2D                     JL 0x00559724
005596F7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005596FA  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
005596FD  3B F1                     CMP ESI,ECX
005596FF  7D 23                     JGE 0x00559724
00559701  85 FF                     TEST EDI,EDI
00559703  7C 1F                     JL 0x00559724
00559705  3B 7A 24                  CMP EDI,dword ptr [EDX + 0x24]
00559708  7D 1A                     JGE 0x00559724
0055970A  8B DF                     MOV EBX,EDI
0055970C  0F AF D9                  IMUL EBX,ECX
0055970F  8B 4A 38                  MOV ECX,dword ptr [EDX + 0x38]
00559712  03 DE                     ADD EBX,ESI
00559714  8D 14 59                  LEA EDX,[ECX + EBX*0x2]
00559717  8A 4C 59 01               MOV CL,byte ptr [ECX + EBX*0x2 + 0x1]
0055971B  84 C9                     TEST CL,CL
0055971D  76 05                     JBE 0x00559724
0055971F  FE C9                     DEC CL
00559721  88 4A 01                  MOV byte ptr [EDX + 0x1],CL
LAB_00559724:
00559724  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00559727  40                        INC EAX
00559728  46                        INC ESI
00559729  3B C1                     CMP EAX,ECX
0055972B  7C B6                     JL 0x005596e3
0055972D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00559730  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00559733  03 D1                     ADD EDX,ECX
00559735  47                        INC EDI
00559736  48                        DEC EAX
00559737  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0055973A  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0055973D  75 9F                     JNZ 0x005596de
LAB_0055973f:
0055973F  5F                        POP EDI
00559740  5E                        POP ESI
00559741  5B                        POP EBX
00559742  8B E5                     MOV ESP,EBP
00559744  5D                        POP EBP
00559745  C2 1C 00                  RET 0x1c
