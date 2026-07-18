FUN_004e5910:
004E5910  55                        PUSH EBP
004E5911  8B EC                     MOV EBP,ESP
004E5913  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5916  85 C0                     TEST EAX,EAX
004E5918  7C 41                     JL 0x004e595b
004E591A  83 F8 08                  CMP EAX,0x8
004E591D  7D 3C                     JGE 0x004e595b
004E591F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5922  83 F9 01                  CMP ECX,0x1
004E5925  7C 34                     JL 0x004e595b
004E5927  81 F9 9B 00 00 00         CMP ECX,0x9b
004E592D  7D 2C                     JGE 0x004e595b
004E592F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5932  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5935  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5938  C1 E1 04                  SHL ECX,0x4
004E593B  03 C8                     ADD ECX,EAX
004E593D  8D 14 4D 0B 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f510b]
004E5944  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5947  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E594A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E594D  80 F2 07                  XOR DL,0x7
004E5950  33 C0                     XOR EAX,EAX
004E5952  0F A3 11                  BT [ECX],EDX
004E5955  D0 D0                     RCL AL,0x1
004E5957  5D                        POP EBP
004E5958  C2 08 00                  RET 0x8
LAB_004e595b:
004E595B  33 C0                     XOR EAX,EAX
004E595D  5D                        POP EBP
004E595E  C2 08 00                  RET 0x8
