FUN_006c4a20:
006C4A20  55                        PUSH EBP
006C4A21  8B EC                     MOV EBP,ESP
006C4A23  56                        PUSH ESI
006C4A24  57                        PUSH EDI
006C4A25  6A 3C                     PUSH 0x3c
006C4A27  E8 E4 61 FE FF            CALL 0x006aac10
006C4A2C  8B F0                     MOV ESI,EAX
006C4A2E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C4A31  56                        PUSH ESI
006C4A32  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
006C4A35  E8 36 2D 01 00            CALL 0x006d7770
006C4A3A  8B F8                     MOV EDI,EAX
006C4A3C  85 FF                     TEST EDI,EDI
006C4A3E  74 22                     JZ 0x006c4a62
006C4A40  56                        PUSH ESI
006C4A41  E8 4A 14 FE FF            CALL 0x006a5e90
006C4A46  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C4A4C  6A 10                     PUSH 0x10
006C4A4E  68 24 DF 7E 00            PUSH 0x7edf24
006C4A53  51                        PUSH ECX
006C4A54  57                        PUSH EDI
006C4A55  E8 E6 13 FE FF            CALL 0x006a5e40
006C4A5A  5F                        POP EDI
006C4A5B  33 C0                     XOR EAX,EAX
006C4A5D  5E                        POP ESI
006C4A5E  5D                        POP EBP
006C4A5F  C2 04 00                  RET 0x4
LAB_006c4a62:
006C4A62  8B C6                     MOV EAX,ESI
006C4A64  5F                        POP EDI
006C4A65  5E                        POP ESI
006C4A66  5D                        POP EBP
006C4A67  C2 04 00                  RET 0x4
