FUN_004d7480:
004D7480  55                        PUSH EBP
004D7481  8B EC                     MOV EBP,ESP
004D7483  83 EC 14                  SUB ESP,0x14
004D7486  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004D7489  53                        PUSH EBX
004D748A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004D748D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004D7490  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004D7493  56                        PUSH ESI
004D7494  57                        PUSH EDI
004D7495  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004D7498  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004D749C  8B F9                     MOV EDI,ECX
004D749E  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
004D74A1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004D74A4  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004D74A7  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004D74AA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004D74AD  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004D74B0  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004D74B3  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004D74B6  C1 E1 04                  SHL ECX,0x4
004D74B9  03 C8                     ADD ECX,EAX
004D74BB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004D74BE  8B D0                     MOV EDX,EAX
004D74C0  C1 E2 04                  SHL EDX,0x4
004D74C3  03 D0                     ADD EDX,EAX
004D74C5  8D 45 EC                  LEA EAX,[EBP + -0x14]
004D74C8  C1 E2 02                  SHL EDX,0x2
004D74CB  50                        PUSH EAX
004D74CC  8D 34 4A                  LEA ESI,[EDX + ECX*0x2]
004D74CF  8D 8E 0E 56 7F 00         LEA ECX,[ESI + 0x7f560e]
004D74D5  51                        PUSH ECX
004D74D6  E8 E5 6C 1D 00            CALL 0x006ae1c0
004D74DB  8B 8E 2E 56 7F 00         MOV ECX,dword ptr [ESI + 0x7f562e]
004D74E1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004D74E4  03 CB                     ADD ECX,EBX
004D74E6  89 8E 2E 56 7F 00         MOV dword ptr [ESI + 0x7f562e],ECX
004D74EC  8B 86 32 56 7F 00         MOV EAX,dword ptr [ESI + 0x7f5632]
004D74F2  03 C2                     ADD EAX,EDX
004D74F4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
004D74F7  89 86 32 56 7F 00         MOV dword ptr [ESI + 0x7f5632],EAX
004D74FD  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004D7500  8B 9E 36 56 7F 00         MOV EBX,dword ptr [ESI + 0x7f5636]
004D7506  03 D8                     ADD EBX,EAX
004D7508  89 9E 36 56 7F 00         MOV dword ptr [ESI + 0x7f5636],EBX
004D750E  8B 96 3A 56 7F 00         MOV EDX,dword ptr [ESI + 0x7f563a]
004D7514  03 D1                     ADD EDX,ECX
004D7516  8B CF                     MOV ECX,EDI
004D7518  89 96 3A 56 7F 00         MOV dword ptr [ESI + 0x7f563a],EDX
004D751E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D7521  52                        PUSH EDX
004D7522  E8 CF B3 F2 FF            CALL 0x004028f6
004D7527  5F                        POP EDI
004D7528  5E                        POP ESI
004D7529  33 C0                     XOR EAX,EAX
004D752B  5B                        POP EBX
004D752C  8B E5                     MOV ESP,EBP
004D752E  5D                        POP EBP
004D752F  C2 1C 00                  RET 0x1c
