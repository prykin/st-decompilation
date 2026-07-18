FUN_004f0af0:
004F0AF0  55                        PUSH EBP
004F0AF1  8B EC                     MOV EBP,ESP
004F0AF3  56                        PUSH ESI
004F0AF4  8B F1                     MOV ESI,ECX
004F0AF6  57                        PUSH EDI
004F0AF7  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004F0AFA  3B 7E 5C                  CMP EDI,dword ptr [ESI + 0x5c]
004F0AFD  74 35                     JZ 0x004f0b34
004F0AFF  57                        PUSH EDI
004F0B00  E8 35 20 F1 FF            CALL 0x00402b3a
004F0B05  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
004F0B0B  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
004F0B12  85 FF                     TEST EDI,EDI
004F0B14  74 02                     JZ 0x004f0b18
004F0B16  F7 D8                     NEG EAX
LAB_004f0b18:
004F0B18  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
004F0B1C  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
004F0B22  85 C0                     TEST EAX,EAX
004F0B24  74 0E                     JZ 0x004f0b34
004F0B26  8D 4E 18                  LEA ECX,[ESI + 0x18]
004F0B29  51                        PUSH ECX
004F0B2A  50                        PUSH EAX
004F0B2B  6A 02                     PUSH 0x2
004F0B2D  8B CE                     MOV ECX,ESI
004F0B2F  E8 4C 55 1F 00            CALL 0x006e6080
LAB_004f0b34:
004F0B34  5F                        POP EDI
004F0B35  5E                        POP ESI
004F0B36  5D                        POP EBP
004F0B37  C2 04 00                  RET 0x4
