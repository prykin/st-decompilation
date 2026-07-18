FUN_0075f740:
0075F740  55                        PUSH EBP
0075F741  8B EC                     MOV EBP,ESP
0075F743  56                        PUSH ESI
0075F744  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075F747  6A 58                     PUSH 0x58
0075F749  6A 01                     PUSH 0x1
0075F74B  8B 06                     MOV EAX,dword ptr [ESI]
0075F74D  56                        PUSH ESI
0075F74E  FF 10                     CALL dword ptr [EAX]
0075F750  33 C9                     XOR ECX,ECX
0075F752  89 86 BA 01 00 00         MOV dword ptr [ESI + 0x1ba],EAX
0075F758  C7 00 A0 FB 75 00         MOV dword ptr [EAX],0x75fba0
0075F75E  C7 40 08 B0 02 76 00      MOV dword ptr [EAX + 0x8],0x7602b0
0075F765  C7 40 0C C0 02 76 00      MOV dword ptr [EAX + 0xc],0x7602c0
0075F76C  89 48 44                  MOV dword ptr [EAX + 0x44],ECX
0075F76F  89 48 34                  MOV dword ptr [EAX + 0x34],ECX
0075F772  8B 46 70                  MOV EAX,dword ptr [ESI + 0x70]
0075F775  83 F8 04                  CMP EAX,0x4
0075F778  7E 18                     JLE 0x0075f792
0075F77A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0075F780  68 4A 03 00 00            PUSH 0x34a
0075F785  68 A0 2E 7F 00            PUSH 0x7f2ea0
0075F78A  51                        PUSH ECX
0075F78B  6A 36                     PUSH 0x36
0075F78D  E8 AE 66 F4 FF            CALL 0x006a5e40
LAB_0075f792:
0075F792  81 7E 58 00 01 00 00      CMP dword ptr [ESI + 0x58],0x100
0075F799  7E 18                     JLE 0x0075f7b3
0075F79B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075F7A1  68 4D 03 00 00            PUSH 0x34d
0075F7A6  68 A0 2E 7F 00            PUSH 0x7f2ea0
0075F7AB  52                        PUSH EDX
0075F7AC  6A 38                     PUSH 0x38
0075F7AE  E8 8D 66 F4 FF            CALL 0x006a5e40
LAB_0075f7b3:
0075F7B3  56                        PUSH ESI
0075F7B4  E8 17 00 00 00            CALL 0x0075f7d0
0075F7B9  56                        PUSH ESI
0075F7BA  E8 41 02 00 00            CALL 0x0075fa00
0075F7BF  83 7E 50 02               CMP dword ptr [ESI + 0x50],0x2
0075F7C3  75 06                     JNZ 0x0075f7cb
0075F7C5  56                        PUSH ESI
0075F7C6  E8 85 03 00 00            CALL 0x0075fb50
LAB_0075f7cb:
0075F7CB  5E                        POP ESI
0075F7CC  5D                        POP EBP
0075F7CD  C2 04 00                  RET 0x4
