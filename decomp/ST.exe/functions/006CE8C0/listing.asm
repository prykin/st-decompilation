FUN_006ce8c0:
006CE8C0  55                        PUSH EBP
006CE8C1  8B EC                     MOV EBP,ESP
006CE8C3  53                        PUSH EBX
006CE8C4  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006CE8C7  56                        PUSH ESI
006CE8C8  57                        PUSH EDI
006CE8C9  85 DB                     TEST EBX,EBX
006CE8CB  0F 84 B7 00 00 00         JZ 0x006ce988
006CE8D1  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006CE8D4  8B 87 7C 04 00 00         MOV EAX,dword ptr [EDI + 0x47c]
006CE8DA  85 C0                     TEST EAX,EAX
006CE8DC  0F 84 A6 00 00 00         JZ 0x006ce988
006CE8E2  8B 87 B8 04 00 00         MOV EAX,dword ptr [EDI + 0x4b8]
006CE8E8  6A 01                     PUSH 0x1
006CE8EA  50                        PUSH EAX
006CE8EB  53                        PUSH EBX
006CE8EC  FF 15 94 BA 85 00         CALL dword ptr [0x0085ba94]
006CE8F2  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
LAB_006ce8f9:
006CE8F9  8B 87 80 04 00 00         MOV EAX,dword ptr [EDI + 0x480]
006CE8FF  53                        PUSH EBX
006CE900  50                        PUSH EAX
006CE901  8B 08                     MOV ECX,dword ptr [EAX]
006CE903  FF 51 68                  CALL dword ptr [ECX + 0x68]
006CE906  8B F0                     MOV ESI,EAX
006CE908  85 F6                     TEST ESI,ESI
006CE90A  74 26                     JZ 0x006ce932
006CE90C  81 FE C2 01 76 88         CMP ESI,0x887601c2
006CE912  75 08                     JNZ 0x006ce91c
006CE914  57                        PUSH EDI
006CE915  E8 26 03 00 00            CALL 0x006cec40
006CE91A  EB 08                     JMP 0x006ce924
LAB_006ce91c:
006CE91C  81 FE 1C 02 76 88         CMP ESI,0x8876021c
006CE922  75 0E                     JNZ 0x006ce932
LAB_006ce924:
006CE924  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CE927  40                        INC EAX
006CE928  3D 40 9C 00 00            CMP EAX,0x9c40
006CE92D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006CE930  72 C7                     JC 0x006ce8f9
LAB_006ce932:
006CE932  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006CE935  8B 1D 90 BB 85 00         MOV EBX,dword ptr [0x0085bb90]
006CE93B  A9 00 00 00 04            TEST EAX,0x4000000
006CE940  C7 87 7C 04 00 00 00 00 00 00  MOV dword ptr [EDI + 0x47c],0x0
006CE94A  74 09                     JZ 0x006ce955
006CE94C  8D 97 F0 04 00 00         LEA EDX,[EDI + 0x4f0]
006CE952  52                        PUSH EDX
006CE953  FF D3                     CALL EBX
LAB_006ce955:
006CE955  8B 87 08 05 00 00         MOV EAX,dword ptr [EDI + 0x508]
006CE95B  85 C0                     TEST EAX,EAX
006CE95D  74 09                     JZ 0x006ce968
006CE95F  81 C7 F0 04 00 00         ADD EDI,0x4f0
006CE965  57                        PUSH EDI
006CE966  FF D3                     CALL EBX
LAB_006ce968:
006CE968  85 F6                     TEST ESI,ESI
006CE96A  74 1C                     JZ 0x006ce988
006CE96C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006CE971  6A 4B                     PUSH 0x4b
006CE973  68 8C E1 7E 00            PUSH 0x7ee18c
006CE978  50                        PUSH EAX
006CE979  56                        PUSH ESI
006CE97A  E8 C1 74 FD FF            CALL 0x006a5e40
006CE97F  8B C6                     MOV EAX,ESI
006CE981  5F                        POP EDI
006CE982  5E                        POP ESI
006CE983  5B                        POP EBX
006CE984  5D                        POP EBP
006CE985  C2 08 00                  RET 0x8
LAB_006ce988:
006CE988  5F                        POP EDI
006CE989  5E                        POP ESI
006CE98A  33 C0                     XOR EAX,EAX
006CE98C  5B                        POP EBX
006CE98D  5D                        POP EBP
006CE98E  C2 08 00                  RET 0x8
