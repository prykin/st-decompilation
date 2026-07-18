FUN_0075cb40:
0075CB40  55                        PUSH EBP
0075CB41  8B EC                     MOV EBP,ESP
0075CB43  51                        PUSH ECX
0075CB44  53                        PUSH EBX
0075CB45  56                        PUSH ESI
0075CB46  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075CB49  6A 54                     PUSH 0x54
0075CB4B  6A 01                     PUSH 0x1
0075CB4D  56                        PUSH ESI
0075CB4E  8B 06                     MOV EAX,dword ptr [ESI]
0075CB50  FF 10                     CALL dword ptr [EAX]
0075CB52  89 86 AE 01 00 00         MOV dword ptr [ESI + 0x1ae],EAX
0075CB58  C7 00 C0 CB 75 00         MOV dword ptr [EAX],0x75cbc0
0075CB5E  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0075CB61  8B 8E D0 00 00 00         MOV ECX,dword ptr [ESI + 0xd0]
0075CB67  33 DB                     XOR EBX,EBX
0075CB69  85 D2                     TEST EDX,EDX
0075CB6B  7E 47                     JLE 0x0075cbb4
0075CB6D  83 C1 50                  ADD ECX,0x50
0075CB70  83 C0 2C                  ADD EAX,0x2c
0075CB73  57                        PUSH EDI
0075CB74  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0075CB77  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0075cb7a:
0075CB7A  8B 0E                     MOV ECX,dword ptr [ESI]
0075CB7C  68 00 01 00 00            PUSH 0x100
0075CB81  6A 01                     PUSH 0x1
0075CB83  56                        PUSH ESI
0075CB84  FF 11                     CALL dword ptr [ECX]
0075CB86  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0075CB89  8B F8                     MOV EDI,EAX
0075CB8B  B9 40 00 00 00            MOV ECX,0x40
0075CB90  33 C0                     XOR EAX,EAX
0075CB92  89 3A                     MOV dword ptr [EDX],EDI
0075CB94  43                        INC EBX
0075CB95  F3 AB                     STOSD.REP ES:EDI
0075CB97  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0075CB9A  83 C2 54                  ADD EDX,0x54
0075CB9D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075CBA0  C7 00 FF FF FF FF         MOV dword ptr [EAX],0xffffffff
0075CBA6  83 C0 04                  ADD EAX,0x4
0075CBA9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0075CBAC  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0075CBAF  3B D8                     CMP EBX,EAX
0075CBB1  7C C7                     JL 0x0075cb7a
0075CBB3  5F                        POP EDI
LAB_0075cbb4:
0075CBB4  5E                        POP ESI
0075CBB5  5B                        POP EBX
0075CBB6  8B E5                     MOV ESP,EBP
0075CBB8  5D                        POP EBP
0075CBB9  C2 04 00                  RET 0x4
