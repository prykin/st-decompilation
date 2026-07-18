FUN_005aa6a0:
005AA6A0  55                        PUSH EBP
005AA6A1  8B EC                     MOV EBP,ESP
005AA6A3  83 EC 4C                  SUB ESP,0x4c
005AA6A6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005AA6A9  53                        PUSH EBX
005AA6AA  56                        PUSH ESI
005AA6AB  57                        PUSH EDI
005AA6AC  85 C0                     TEST EAX,EAX
005AA6AE  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005AA6B1  0F 84 47 01 00 00         JZ 0x005aa7fe
005AA6B7  8B 48 07                  MOV ECX,dword ptr [EAX + 0x7]
005AA6BA  85 C9                     TEST ECX,ECX
005AA6BC  0F 84 3C 01 00 00         JZ 0x005aa7fe
005AA6C2  8B 48 0B                  MOV ECX,dword ptr [EAX + 0xb]
005AA6C5  85 C9                     TEST ECX,ECX
005AA6C7  0F 84 31 01 00 00         JZ 0x005aa7fe
005AA6CD  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005AA6D2  8D 55 B8                  LEA EDX,[EBP + -0x48]
005AA6D5  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005AA6D8  6A 00                     PUSH 0x0
005AA6DA  52                        PUSH EDX
005AA6DB  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005AA6DE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AA6E4  E8 07 31 18 00            CALL 0x0072d7f0
005AA6E9  8B F0                     MOV ESI,EAX
005AA6EB  83 C4 08                  ADD ESP,0x8
005AA6EE  85 F6                     TEST ESI,ESI
005AA6F0  0F 85 CF 00 00 00         JNZ 0x005aa7c5
005AA6F6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005AA6F9  33 FF                     XOR EDI,EDI
005AA6FB  8B 46 0F                  MOV EAX,dword ptr [ESI + 0xf]
005AA6FE  85 C0                     TEST EAX,EAX
005AA700  0F 86 AD 00 00 00         JBE 0x005aa7b3
LAB_005aa706:
005AA706  8B 46 13                  MOV EAX,dword ptr [ESI + 0x13]
005AA709  8B 4E 17                  MOV ECX,dword ptr [ESI + 0x17]
005AA70C  0F AF C7                  IMUL EAX,EDI
005AA70F  03 C1                     ADD EAX,ECX
005AA711  8B 4E 0B                  MOV ECX,dword ptr [ESI + 0xb]
005AA714  8B 1C 81                  MOV EBX,dword ptr [ECX + EAX*0x4]
005AA717  8B 46 1F                  MOV EAX,dword ptr [ESI + 0x1f]
005AA71A  3B D8                     CMP EBX,EAX
005AA71C  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005AA71F  0F 8D 82 00 00 00         JGE 0x005aa7a7
005AA725  8A 46 01                  MOV AL,byte ptr [ESI + 0x1]
005AA728  8B D0                     MOV EDX,EAX
005AA72A  81 E2 FF 00 00 00         AND EDX,0xff
005AA730  8D 4A FF                  LEA ECX,[EDX + -0x1]
005AA733  83 F9 03                  CMP ECX,0x3
005AA736  77 6F                     JA 0x005aa7a7
switchD_005aa738::switchD:
005AA738  FF 24 8D 08 A8 5A 00      JMP dword ptr [ECX*0x4 + 0x5aa808]
switchD_005aa738::caseD_1:
005AA73F  8B 56 1B                  MOV EDX,dword ptr [ESI + 0x1b]
005AA742  8B 5E 2F                  MOV EBX,dword ptr [ESI + 0x2f]
005AA745  8B CA                     MOV ECX,EDX
005AA747  53                        PUSH EBX
005AA748  0F AF CF                  IMUL ECX,EDI
005AA74B  FE C8                     DEC AL
005AA74D  52                        PUSH EDX
005AA74E  F6 D8                     NEG AL
005AA750  1B C0                     SBB EAX,EAX
005AA752  8B 56 07                  MOV EDX,dword ptr [ESI + 0x7]
005AA755  24 FE                     AND AL,0xfe
005AA757  6A 00                     PUSH 0x0
005AA759  40                        INC EAX
005AA75A  51                        PUSH ECX
005AA75B  0F AF 45 F8               IMUL EAX,dword ptr [EBP + -0x8]
005AA75F  6A 00                     PUSH 0x0
005AA761  52                        PUSH EDX
005AA762  03 46 27                  ADD EAX,dword ptr [ESI + 0x27]
005AA765  50                        PUSH EAX
005AA766  8B 46 23                  MOV EAX,dword ptr [ESI + 0x23]
005AA769  03 C1                     ADD EAX,ECX
005AA76B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005AA76E  50                        PUSH EAX
005AA76F  51                        PUSH ECX
005AA770  EB 30                     JMP 0x005aa7a2
switchD_005aa738::caseD_2:
005AA772  8B 56 1B                  MOV EDX,dword ptr [ESI + 0x1b]
005AA775  2C 02                     SUB AL,0x2
005AA777  8B CA                     MOV ECX,EDX
005AA779  52                        PUSH EDX
005AA77A  0F AF CF                  IMUL ECX,EDI
005AA77D  8B 56 2B                  MOV EDX,dword ptr [ESI + 0x2b]
005AA780  52                        PUSH EDX
005AA781  8B 56 07                  MOV EDX,dword ptr [ESI + 0x7]
005AA784  51                        PUSH ECX
005AA785  6A 00                     PUSH 0x0
005AA787  6A 00                     PUSH 0x0
005AA789  52                        PUSH EDX
005AA78A  8B 56 27                  MOV EDX,dword ptr [ESI + 0x27]
005AA78D  03 D1                     ADD EDX,ECX
005AA78F  F6 D8                     NEG AL
005AA791  1B C0                     SBB EAX,EAX
005AA793  52                        PUSH EDX
005AA794  24 FE                     AND AL,0xfe
005AA796  40                        INC EAX
005AA797  0F AF C3                  IMUL EAX,EBX
005AA79A  03 46 23                  ADD EAX,dword ptr [ESI + 0x23]
005AA79D  50                        PUSH EAX
005AA79E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005AA7A1  50                        PUSH EAX
LAB_005aa7a2:
005AA7A2  E8 29 9B 10 00            CALL 0x006b42d0
switchD_005aa738::default:
005AA7A7  8B 46 0F                  MOV EAX,dword ptr [ESI + 0xf]
005AA7AA  47                        INC EDI
005AA7AB  3B F8                     CMP EDI,EAX
005AA7AD  0F 82 53 FF FF FF         JC 0x005aa706
LAB_005aa7b3:
005AA7B3  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005AA7B6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005AA7BC  5F                        POP EDI
005AA7BD  5E                        POP ESI
005AA7BE  5B                        POP EBX
005AA7BF  8B E5                     MOV ESP,EBP
005AA7C1  5D                        POP EBP
005AA7C2  C2 20 00                  RET 0x20
LAB_005aa7c5:
005AA7C5  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
005AA7C8  68 9C C6 7C 00            PUSH 0x7cc69c
005AA7CD  68 CC 4C 7A 00            PUSH 0x7a4ccc
005AA7D2  56                        PUSH ESI
005AA7D3  6A 00                     PUSH 0x0
005AA7D5  6A 1E                     PUSH 0x1e
005AA7D7  68 74 C6 7C 00            PUSH 0x7cc674
005AA7DC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005AA7E2  E8 E9 2C 10 00            CALL 0x006ad4d0
005AA7E7  83 C4 18                  ADD ESP,0x18
005AA7EA  85 C0                     TEST EAX,EAX
005AA7EC  74 01                     JZ 0x005aa7ef
005AA7EE  CC                        INT3
LAB_005aa7ef:
005AA7EF  6A 1E                     PUSH 0x1e
005AA7F1  68 74 C6 7C 00            PUSH 0x7cc674
005AA7F6  6A 00                     PUSH 0x0
005AA7F8  56                        PUSH ESI
005AA7F9  E8 42 B6 0F 00            CALL 0x006a5e40
LAB_005aa7fe:
005AA7FE  5F                        POP EDI
005AA7FF  5E                        POP ESI
005AA800  5B                        POP EBX
005AA801  8B E5                     MOV ESP,EBP
005AA803  5D                        POP EBP
005AA804  C2 20 00                  RET 0x20
