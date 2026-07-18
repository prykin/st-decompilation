FUN_004e75f0:
004E75F0  55                        PUSH EBP
004E75F1  8B EC                     MOV EBP,ESP
004E75F3  53                        PUSH EBX
004E75F4  56                        PUSH ESI
004E75F5  57                        PUSH EDI
004E75F6  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004E75F9  85 FF                     TEST EDI,EDI
004E75FB  8B D9                     MOV EBX,ECX
004E75FD  0F 8C 9A 00 00 00         JL 0x004e769d
004E7603  83 FF 08                  CMP EDI,0x8
004E7606  0F 8D 91 00 00 00         JGE 0x004e769d
004E760C  57                        PUSH EDI
004E760D  E8 A5 D3 F1 FF            CALL 0x004049b7
004E7612  25 FF 00 00 00            AND EAX,0xff
004E7617  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
004E761E  48                        DEC EAX
004E761F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004E7622  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004E7625  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
004E7628  8B 94 C9 BC 95 79 00      MOV EDX,dword ptr [ECX + ECX*0x8 + 0x7995bc]
004E762F  85 D2                     TEST EDX,EDX
004E7631  7E 6A                     JLE 0x004e769d
004E7633  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004E7636  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E7639  8D 34 C0                  LEA ESI,[EAX + EAX*0x8]
004E763C  8D B4 F6 BC 95 79 00      LEA ESI,[ESI + ESI*0x8 + 0x7995bc]
LAB_004e7643:
004E7643  83 7D 08 51               CMP dword ptr [EBP + 0x8],0x51
004E7647  7D 54                     JGE 0x004e769d
004E7649  8B 06                     MOV EAX,dword ptr [ESI]
004E764B  8B CB                     MOV ECX,EBX
004E764D  50                        PUSH EAX
004E764E  57                        PUSH EDI
004E764F  E8 17 A2 F1 FF            CALL 0x0040186b
004E7654  33 C9                     XOR ECX,ECX
004E7656  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
004E7659  3B C1                     CMP EAX,ECX
004E765B  7D 2F                     JGE 0x004e768c
004E765D  8B 16                     MOV EDX,dword ptr [ESI]
004E765F  8B CB                     MOV ECX,EBX
004E7661  52                        PUSH EDX
004E7662  57                        PUSH EDI
004E7663  E8 E7 DB F1 FF            CALL 0x0040524f
004E7668  85 C0                     TEST EAX,EAX
004E766A  74 20                     JZ 0x004e768c
004E766C  8B 06                     MOV EAX,dword ptr [ESI]
004E766E  8B CB                     MOV ECX,EBX
004E7670  50                        PUSH EAX
004E7671  57                        PUSH EDI
004E7672  E8 A8 A7 F1 FF            CALL 0x00401e1f
004E7677  85 C0                     TEST EAX,EAX
004E7679  75 11                     JNZ 0x004e768c
004E767B  8B 16                     MOV EDX,dword ptr [ESI]
004E767D  33 C9                     XOR ECX,ECX
004E767F  8A 4E 04                  MOV CL,byte ptr [ESI + 0x4]
004E7682  51                        PUSH ECX
004E7683  52                        PUSH EDX
004E7684  57                        PUSH EDI
004E7685  8B CB                     MOV ECX,EBX
004E7687  E8 A4 AA F1 FF            CALL 0x00402130
LAB_004e768c:
004E768C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004E768F  8B 46 05                  MOV EAX,dword ptr [ESI + 0x5]
004E7692  83 C6 05                  ADD ESI,0x5
004E7695  42                        INC EDX
004E7696  85 C0                     TEST EAX,EAX
004E7698  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E769B  7F A6                     JG 0x004e7643
LAB_004e769d:
004E769D  5F                        POP EDI
004E769E  5E                        POP ESI
004E769F  5B                        POP EBX
004E76A0  5D                        POP EBP
004E76A1  C2 04 00                  RET 0x4
