FUN_006b1ab0:
006B1AB0  55                        PUSH EBP
006B1AB1  8B EC                     MOV EBP,ESP
006B1AB3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B1AB6  85 C9                     TEST ECX,ECX
006B1AB8  7D 06                     JGE 0x006b1ac0
006B1ABA  33 C0                     XOR EAX,EAX
006B1ABC  5D                        POP EBP
006B1ABD  C2 0C 00                  RET 0xc
LAB_006b1ac0:
006B1AC0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B1AC3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B1AC6  53                        PUSH EBX
006B1AC7  8B 9C 88 F0 00 00 00      MOV EBX,dword ptr [EAX + ECX*0x4 + 0xf0]
006B1ACE  89 94 88 F0 00 00 00      MOV dword ptr [EAX + ECX*0x4 + 0xf0],EDX
006B1AD5  85 D2                     TEST EDX,EDX
006B1AD7  74 2B                     JZ 0x006b1b04
006B1AD9  8B D1                     MOV EDX,ECX
006B1ADB  83 C1 02                  ADD ECX,0x2
006B1ADE  C1 E2 04                  SHL EDX,0x4
006B1AE1  03 D0                     ADD EDX,EAX
006B1AE3  56                        PUSH ESI
006B1AE4  C1 E1 04                  SHL ECX,0x4
006B1AE7  8B 72 18                  MOV ESI,dword ptr [EDX + 0x18]
006B1AEA  57                        PUSH EDI
006B1AEB  8B 7A 14                  MOV EDI,dword ptr [EDX + 0x14]
006B1AEE  8B 0C 01                  MOV ECX,dword ptr [ECX + EAX*0x1]
006B1AF1  8B 52 1C                  MOV EDX,dword ptr [EDX + 0x1c]
006B1AF4  2B CE                     SUB ECX,ESI
006B1AF6  2B D7                     SUB EDX,EDI
006B1AF8  51                        PUSH ECX
006B1AF9  52                        PUSH EDX
006B1AFA  56                        PUSH ESI
006B1AFB  57                        PUSH EDI
006B1AFC  50                        PUSH EAX
006B1AFD  E8 7E 44 00 00            CALL 0x006b5f80
006B1B02  5F                        POP EDI
006B1B03  5E                        POP ESI
LAB_006b1b04:
006B1B04  8B C3                     MOV EAX,EBX
006B1B06  5B                        POP EBX
006B1B07  5D                        POP EBP
006B1B08  C2 0C 00                  RET 0xc
