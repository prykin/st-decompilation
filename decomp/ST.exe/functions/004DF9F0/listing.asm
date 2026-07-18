FUN_004df9f0:
004DF9F0  55                        PUSH EBP
004DF9F1  8B EC                     MOV EBP,ESP
004DF9F3  51                        PUSH ECX
004DF9F4  56                        PUSH ESI
004DF9F5  8B F1                     MOV ESI,ECX
004DF9F7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF9FA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DF9FD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DFA00  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DFA03  C1 E1 04                  SHL ECX,0x4
004DFA06  03 C8                     ADD ECX,EAX
004DFA08  8B 0C 4D F2 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57f2]
004DFA0F  85 C9                     TEST ECX,ECX
004DFA11  0F 84 9B 00 00 00         JZ 0x004dfab2
004DFA17  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DFA1A  57                        PUSH EDI
004DFA1B  33 FF                     XOR EDI,EDI
004DFA1D  85 C0                     TEST EAX,EAX
004DFA1F  7E 4F                     JLE 0x004dfa70
LAB_004dfa21:
004DFA21  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DFA24  52                        PUSH EDX
004DFA25  8B D7                     MOV EDX,EDI
004DFA27  E8 44 D2 1C 00            CALL 0x006acc70
004DFA2C  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004DFA2F  74 20                     JZ 0x004dfa51
004DFA31  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DFA34  47                        INC EDI
004DFA35  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DFA38  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DFA3B  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DFA3E  C1 E1 04                  SHL ECX,0x4
004DFA41  03 C8                     ADD ECX,EAX
004DFA43  8B 0C 4D F2 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57f2]
004DFA4A  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004DFA4D  7C D2                     JL 0x004dfa21
004DFA4F  EB 1F                     JMP 0x004dfa70
LAB_004dfa51:
004DFA51  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DFA54  57                        PUSH EDI
004DFA55  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004DFA58  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004DFA5B  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004DFA5E  C1 E2 04                  SHL EDX,0x4
004DFA61  03 D0                     ADD EDX,EAX
004DFA63  8B 04 55 F2 57 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f57f2]
004DFA6A  50                        PUSH EAX
004DFA6B  E8 00 12 1D 00            CALL 0x006b0c70
LAB_004dfa70:
004DFA70  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DFA73  5F                        POP EDI
004DFA74  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DFA77  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DFA7A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DFA7D  C1 E1 04                  SHL ECX,0x4
004DFA80  03 C8                     ADD ECX,EAX
004DFA82  8B 04 4D F2 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57f2]
004DFA89  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004DFA8C  85 C9                     TEST ECX,ECX
004DFA8E  75 22                     JNZ 0x004dfab2
004DFA90  50                        PUSH EAX
004DFA91  E8 7A E6 1C 00            CALL 0x006ae110
004DFA96  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DFA99  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004DFA9C  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004DFA9F  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004DFAA2  C1 E1 04                  SHL ECX,0x4
004DFAA5  03 CE                     ADD ECX,ESI
004DFAA7  C7 04 4D F2 57 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f57f2],0x0
LAB_004dfab2:
004DFAB2  33 C0                     XOR EAX,EAX
004DFAB4  5E                        POP ESI
004DFAB5  8B E5                     MOV ESP,EBP
004DFAB7  5D                        POP EBP
004DFAB8  C3                        RET
