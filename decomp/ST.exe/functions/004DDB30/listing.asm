FUN_004ddb30:
004DDB30  55                        PUSH EBP
004DDB31  8B EC                     MOV EBP,ESP
004DDB33  8B 91 D0 04 00 00         MOV EDX,dword ptr [ECX + 0x4d0]
004DDB39  53                        PUSH EBX
004DDB3A  56                        PUSH ESI
004DDB3B  8D B1 D0 04 00 00         LEA ESI,[ECX + 0x4d0]
004DDB41  57                        PUSH EDI
004DDB42  33 C0                     XOR EAX,EAX
004DDB44  33 FF                     XOR EDI,EDI
004DDB46  85 D2                     TEST EDX,EDX
004DDB48  7C 23                     JL 0x004ddb6d
004DDB4A  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
LAB_004ddb4d:
004DDB4D  3B D3                     CMP EDX,EBX
004DDB4F  74 12                     JZ 0x004ddb63
004DDB51  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
004DDB54  83 C6 14                  ADD ESI,0x14
004DDB57  47                        INC EDI
004DDB58  85 D2                     TEST EDX,EDX
004DDB5A  7D F1                     JGE 0x004ddb4d
004DDB5C  5F                        POP EDI
004DDB5D  5E                        POP ESI
004DDB5E  5B                        POP EBX
004DDB5F  5D                        POP EBP
004DDB60  C2 04 00                  RET 0x4
LAB_004ddb63:
004DDB63  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
004DDB66  8B 84 81 D4 04 00 00      MOV EAX,dword ptr [ECX + EAX*0x4 + 0x4d4]
LAB_004ddb6d:
004DDB6D  5F                        POP EDI
004DDB6E  5E                        POP ESI
004DDB6F  5B                        POP EBX
004DDB70  5D                        POP EBP
004DDB71  C2 04 00                  RET 0x4
