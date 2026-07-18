FUN_006ea340:
006EA340  55                        PUSH EBP
006EA341  8B EC                     MOV EBP,ESP
006EA343  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA346  53                        PUSH EBX
006EA347  8B 99 10 03 00 00         MOV EBX,dword ptr [ECX + 0x310]
006EA34D  56                        PUSH ESI
006EA34E  3B D3                     CMP EDX,EBX
006EA350  57                        PUSH EDI
006EA351  73 72                     JNC 0x006ea3c5
006EA353  8B B9 1C 03 00 00         MOV EDI,dword ptr [ECX + 0x31c]
006EA359  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA35C  C1 E0 03                  SHL EAX,0x3
006EA35F  2B C2                     SUB EAX,EDX
006EA361  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA364  8D 34 87                  LEA ESI,[EDI + EAX*0x4]
006EA367  8B 04 87                  MOV EAX,dword ptr [EDI + EAX*0x4]
006EA36A  F6 C4 80                  TEST AH,0x80
006EA36D  74 56                     JZ 0x006ea3c5
006EA36F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EA372  85 C9                     TEST ECX,ECX
006EA374  7C 54                     JL 0x006ea3ca
006EA376  3B CB                     CMP ECX,EBX
006EA378  7D 50                     JGE 0x006ea3ca
006EA37A  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EA37D  C1 E0 03                  SHL EAX,0x3
006EA380  2B C1                     SUB EAX,ECX
006EA382  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006EA385  8D 04 97                  LEA EAX,[EDI + EDX*0x4]
006EA388  8B 14 97                  MOV EDX,dword ptr [EDI + EDX*0x4]
006EA38B  F6 C6 80                  TEST DH,0x80
006EA38E  74 3A                     JZ 0x006ea3ca
006EA390  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006EA393  8B B8 94 00 00 00         MOV EDI,dword ptr [EAX + 0x94]
006EA399  3B D7                     CMP EDX,EDI
006EA39B  73 17                     JNC 0x006ea3b4
006EA39D  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006EA3A0  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
006EA3A3  24 CF                     AND AL,0xcf
006EA3A5  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
006EA3A8  0C 40                     OR AL,0x40
006EA3AA  5F                        POP EDI
006EA3AB  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006EA3AE  5E                        POP ESI
006EA3AF  5B                        POP EBX
006EA3B0  5D                        POP EBP
006EA3B1  C2 0C 00                  RET 0xc
LAB_006ea3b4:
006EA3B4  68 50 EE 7E 00            PUSH 0x7eee50
006EA3B9  E8 E2 ED FF FF            CALL 0x006e91a0
006EA3BE  5F                        POP EDI
006EA3BF  5E                        POP ESI
006EA3C0  5B                        POP EBX
006EA3C1  5D                        POP EBP
006EA3C2  C2 0C 00                  RET 0xc
LAB_006ea3c5:
006EA3C5  83 FA FF                  CMP EDX,-0x1
006EA3C8  74 0A                     JZ 0x006ea3d4
LAB_006ea3ca:
006EA3CA  68 50 EE 7E 00            PUSH 0x7eee50
006EA3CF  E8 7C E8 FF FF            CALL 0x006e8c50
LAB_006ea3d4:
006EA3D4  5F                        POP EDI
006EA3D5  5E                        POP ESI
006EA3D6  5B                        POP EBX
006EA3D7  5D                        POP EBP
006EA3D8  C2 0C 00                  RET 0xc
