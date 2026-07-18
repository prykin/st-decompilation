FUN_004ddc30:
004DDC30  55                        PUSH EBP
004DDC31  8B EC                     MOV EBP,ESP
004DDC33  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DDC39  8D 91 D0 04 00 00         LEA EDX,[ECX + 0x4d0]
004DDC3F  56                        PUSH ESI
004DDC40  33 F6                     XOR ESI,ESI
004DDC42  85 C0                     TEST EAX,EAX
004DDC44  57                        PUSH EDI
004DDC45  7C 3F                     JL 0x004ddc86
004DDC47  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_004ddc4a:
004DDC4A  3B C7                     CMP EAX,EDI
004DDC4C  74 18                     JZ 0x004ddc66
004DDC4E  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
004DDC51  83 C2 14                  ADD EDX,0x14
004DDC54  46                        INC ESI
004DDC55  85 C0                     TEST EAX,EAX
004DDC57  7D F1                     JGE 0x004ddc4a
004DDC59  E8 EB 62 F2 FF            CALL 0x00403f49
004DDC5E  5F                        POP EDI
004DDC5F  33 C0                     XOR EAX,EAX
004DDC61  5E                        POP ESI
004DDC62  5D                        POP EBP
004DDC63  C2 08 00                  RET 0x8
LAB_004ddc66:
004DDC66  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004DDC69  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004DDC6C  8B B4 81 D4 04 00 00      MOV ESI,dword ptr [ECX + EAX*0x4 + 0x4d4]
004DDC73  8D 84 81 D4 04 00 00      LEA EAX,[ECX + EAX*0x4 + 0x4d4]
004DDC7A  2B F2                     SUB ESI,EDX
004DDC7C  89 30                     MOV dword ptr [EAX],ESI
004DDC7E  79 06                     JNS 0x004ddc86
004DDC80  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_004ddc86:
004DDC86  E8 BE 62 F2 FF            CALL 0x00403f49
004DDC8B  5F                        POP EDI
004DDC8C  33 C0                     XOR EAX,EAX
004DDC8E  5E                        POP ESI
004DDC8F  5D                        POP EBP
004DDC90  C2 08 00                  RET 0x8
