STOctopusC::Bad:
0058A8D0  53                        PUSH EBX
0058A8D1  56                        PUSH ESI
0058A8D2  0F BF 1D 42 B2 7F 00      MOVSX EBX,word ptr [0x007fb242]
0058A8D9  57                        PUSH EDI
0058A8DA  8B F1                     MOV ESI,ECX
0058A8DC  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0058A8E3  8B 86 A9 02 00 00         MOV EAX,dword ptr [ESI + 0x2a9]
0058A8E9  4F                        DEC EDI
0058A8EA  4B                        DEC EBX
0058A8EB  83 F8 08                  CMP EAX,0x8
0058A8EE  7C 2F                     JL 0x0058a91f
0058A8F0  68 88 BA 7C 00            PUSH 0x7cba88
0058A8F5  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058A8FA  6A 00                     PUSH 0x0
0058A8FC  6A 00                     PUSH 0x0
0058A8FE  68 1A 02 00 00            PUSH 0x21a
0058A903  68 18 BA 7C 00            PUSH 0x7cba18
0058A908  E8 C3 2B 12 00            CALL 0x006ad4d0
0058A90D  83 C4 18                  ADD ESP,0x18
0058A910  85 C0                     TEST EAX,EAX
0058A912  74 01                     JZ 0x0058a915
0058A914  CC                        INT3
LAB_0058a915:
0058A915  C7 86 A9 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2a9],0x0
LAB_0058a91f:
0058A91F  8B 86 99 02 00 00         MOV EAX,dword ptr [ESI + 0x299]
0058A925  3B C7                     CMP EAX,EDI
0058A927  7F 12                     JG 0x0058a93b
0058A929  85 C0                     TEST EAX,EAX
0058A92B  7C 0E                     JL 0x0058a93b
0058A92D  8B 86 9D 02 00 00         MOV EAX,dword ptr [ESI + 0x29d]
0058A933  3B C3                     CMP EAX,EBX
0058A935  7F 04                     JG 0x0058a93b
0058A937  85 C0                     TEST EAX,EAX
0058A939  7D 10                     JGE 0x0058a94b
LAB_0058a93b:
0058A93B  D1 FF                     SAR EDI,0x1
0058A93D  D1 FB                     SAR EBX,0x1
0058A93F  89 BE 99 02 00 00         MOV dword ptr [ESI + 0x299],EDI
0058A945  89 9E 9D 02 00 00         MOV dword ptr [ESI + 0x29d],EBX
LAB_0058a94b:
0058A94B  5F                        POP EDI
0058A94C  5E                        POP ESI
0058A94D  5B                        POP EBX
0058A94E  C3                        RET
