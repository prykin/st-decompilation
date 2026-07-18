FUN_006d7cf0:
006D7CF0  55                        PUSH EBP
006D7CF1  8B EC                     MOV EBP,ESP
006D7CF3  53                        PUSH EBX
006D7CF4  56                        PUSH ESI
006D7CF5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006D7CF8  57                        PUSH EDI
006D7CF9  6A 00                     PUSH 0x0
006D7CFB  66 C7 06 00 03            MOV word ptr [ESI],0x300
006D7D00  66 C7 46 02 00 01         MOV word ptr [ESI + 0x2],0x100
006D7D06  FF 15 4C BE 85 00         CALL dword ptr [0x0085be4c]
006D7D0C  8B 1D 80 BA 85 00         MOV EBX,dword ptr [0x0085ba80]
006D7D12  8B F8                     MOV EDI,EAX
006D7D14  8D 46 04                  LEA EAX,[ESI + 0x4]
006D7D17  50                        PUSH EAX
006D7D18  6A 0A                     PUSH 0xa
006D7D1A  6A 00                     PUSH 0x0
006D7D1C  57                        PUSH EDI
006D7D1D  FF D3                     CALL EBX
006D7D1F  8D 8E DC 03 00 00         LEA ECX,[ESI + 0x3dc]
006D7D25  51                        PUSH ECX
006D7D26  6A 0A                     PUSH 0xa
006D7D28  68 F6 00 00 00            PUSH 0xf6
006D7D2D  57                        PUSH EDI
006D7D2E  FF D3                     CALL EBX
006D7D30  57                        PUSH EDI
006D7D31  6A 00                     PUSH 0x0
006D7D33  FF 15 48 BE 85 00         CALL dword ptr [0x0085be48]
006D7D39  8D 46 2F                  LEA EAX,[ESI + 0x2f]
006D7D3C  B9 EC 00 00 00            MOV ECX,0xec
LAB_006d7d41:
006D7D41  C6 00 04                  MOV byte ptr [EAX],0x4
006D7D44  83 C0 04                  ADD EAX,0x4
006D7D47  49                        DEC ECX
006D7D48  75 F7                     JNZ 0x006d7d41
006D7D4A  56                        PUSH ESI
006D7D4B  FF 15 7C BA 85 00         CALL dword ptr [0x0085ba7c]
006D7D51  8B F0                     MOV ESI,EAX
006D7D53  85 F6                     TEST ESI,ESI
006D7D55  75 2B                     JNZ 0x006d7d82
006D7D57  8B 3D CC BB 85 00         MOV EDI,dword ptr [0x0085bbcc]
006D7D5D  FF D7                     CALL EDI
006D7D5F  85 C0                     TEST EAX,EAX
006D7D61  74 1F                     JZ 0x006d7d82
006D7D63  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006D7D69  6A 19                     PUSH 0x19
006D7D6B  68 B8 E2 7E 00            PUSH 0x7ee2b8
006D7D70  52                        PUSH EDX
006D7D71  FF D7                     CALL EDI
006D7D73  50                        PUSH EAX
006D7D74  E8 C7 E0 FC FF            CALL 0x006a5e40
006D7D79  5F                        POP EDI
006D7D7A  5E                        POP ESI
006D7D7B  33 C0                     XOR EAX,EAX
006D7D7D  5B                        POP EBX
006D7D7E  5D                        POP EBP
006D7D7F  C2 04 00                  RET 0x4
LAB_006d7d82:
006D7D82  8B C6                     MOV EAX,ESI
006D7D84  5F                        POP EDI
006D7D85  5E                        POP ESI
006D7D86  5B                        POP EBX
006D7D87  5D                        POP EBP
006D7D88  C2 04 00                  RET 0x4
