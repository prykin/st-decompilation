FUN_004e7f20:
004E7F20  55                        PUSH EBP
004E7F21  8B EC                     MOV EBP,ESP
004E7F23  53                        PUSH EBX
004E7F24  8B D9                     MOV EBX,ECX
004E7F26  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E7F29  33 C0                     XOR EAX,EAX
004E7F2B  56                        PUSH ESI
004E7F2C  57                        PUSH EDI
004E7F2D  8A 91 BC 53 7E 00         MOV DL,byte ptr [ECX + 0x7e53bc]
004E7F33  84 D2                     TEST DL,DL
004E7F35  74 57                     JZ 0x004e7f8e
004E7F37  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004E7F3A  33 FF                     XOR EDI,EDI
LAB_004e7f3c:
004E7F3C  3B FE                     CMP EDI,ESI
004E7F3E  74 3A                     JZ 0x004e7f7a
004E7F40  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004E7F43  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004E7F46  8D 14 BD 00 00 00 00      LEA EDX,[EDI*0x4 + 0x0]
004E7F4D  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004E7F50  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004E7F55  C1 E1 04                  SHL ECX,0x4
004E7F58  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004E7F5E  03 CE                     ADD ECX,ESI
004E7F60  3B 84 4A 42 58 7F 00      CMP EAX,dword ptr [EDX + ECX*0x2 + 0x7f5842]
004E7F67  77 11                     JA 0x004e7f7a
004E7F69  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E7F6C  51                        PUSH ECX
004E7F6D  57                        PUSH EDI
004E7F6E  8B CB                     MOV ECX,EBX
004E7F70  E8 F6 98 F1 FF            CALL 0x0040186b
004E7F75  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
004E7F78  7D 0F                     JGE 0x004e7f89
LAB_004e7f7a:
004E7F7A  47                        INC EDI
004E7F7B  83 FF 08                  CMP EDI,0x8
004E7F7E  7C BC                     JL 0x004e7f3c
004E7F80  5F                        POP EDI
004E7F81  5E                        POP ESI
004E7F82  33 C0                     XOR EAX,EAX
004E7F84  5B                        POP EBX
004E7F85  5D                        POP EBP
004E7F86  C2 0C 00                  RET 0xc
LAB_004e7f89:
004E7F89  B8 01 00 00 00            MOV EAX,0x1
LAB_004e7f8e:
004E7F8E  5F                        POP EDI
004E7F8F  5E                        POP ESI
004E7F90  5B                        POP EBX
004E7F91  5D                        POP EBP
004E7F92  C2 0C 00                  RET 0xc
