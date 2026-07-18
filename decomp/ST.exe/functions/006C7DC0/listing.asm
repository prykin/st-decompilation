FUN_006c7dc0:
006C7DC0  55                        PUSH EBP
006C7DC1  8B EC                     MOV EBP,ESP
006C7DC3  56                        PUSH ESI
006C7DC4  57                        PUSH EDI
006C7DC5  6A 76                     PUSH 0x76
006C7DC7  E8 44 2E FE FF            CALL 0x006aac10
006C7DCC  8B F0                     MOV ESI,EAX
006C7DCE  85 F6                     TEST ESI,ESI
006C7DD0  75 06                     JNZ 0x006c7dd8
006C7DD2  5F                        POP EDI
006C7DD3  5E                        POP ESI
006C7DD4  5D                        POP EBP
006C7DD5  C2 04 00                  RET 0x4
LAB_006c7dd8:
006C7DD8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C7DDB  56                        PUSH ESI
006C7DDC  89 46 36                  MOV dword ptr [ESI + 0x36],EAX
006C7DDF  C7 46 42 30 7E 6C 00      MOV dword ptr [ESI + 0x42],0x6c7e30
006C7DE6  C7 46 4A 80 7E 6C 00      MOV dword ptr [ESI + 0x4a],0x6c7e80
006C7DED  C7 46 4E 90 7E 6C 00      MOV dword ptr [ESI + 0x4e],0x6c7e90
006C7DF4  E8 E7 EC FF FF            CALL 0x006c6ae0
006C7DF9  8B F8                     MOV EDI,EAX
006C7DFB  85 FF                     TEST EDI,EDI
006C7DFD  74 22                     JZ 0x006c7e21
006C7DFF  56                        PUSH ESI
006C7E00  E8 BB F1 FF FF            CALL 0x006c6fc0
006C7E05  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C7E0B  6A 41                     PUSH 0x41
006C7E0D  68 60 E0 7E 00            PUSH 0x7ee060
006C7E12  51                        PUSH ECX
006C7E13  57                        PUSH EDI
006C7E14  E8 27 E0 FD FF            CALL 0x006a5e40
006C7E19  5F                        POP EDI
006C7E1A  33 C0                     XOR EAX,EAX
006C7E1C  5E                        POP ESI
006C7E1D  5D                        POP EBP
006C7E1E  C2 04 00                  RET 0x4
LAB_006c7e21:
006C7E21  8B C6                     MOV EAX,ESI
006C7E23  5F                        POP EDI
006C7E24  5E                        POP ESI
006C7E25  5D                        POP EBP
006C7E26  C2 04 00                  RET 0x4
