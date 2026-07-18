FUN_0057cb30:
0057CB30  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
0057CB37  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0057CB3E  56                        PUSH ESI
0057CB3F  8B B1 57 02 00 00         MOV ESI,dword ptr [ECX + 0x257]
0057CB45  4A                        DEC EDX
0057CB46  48                        DEC EAX
0057CB47  3B F2                     CMP ESI,EDX
0057CB49  7F 12                     JG 0x0057cb5d
0057CB4B  85 F6                     TEST ESI,ESI
0057CB4D  7C 0E                     JL 0x0057cb5d
0057CB4F  8B B1 5B 02 00 00         MOV ESI,dword ptr [ECX + 0x25b]
0057CB55  3B F0                     CMP ESI,EAX
0057CB57  7F 04                     JG 0x0057cb5d
0057CB59  85 F6                     TEST ESI,ESI
0057CB5B  7D 10                     JGE 0x0057cb6d
LAB_0057cb5d:
0057CB5D  D1 FA                     SAR EDX,0x1
0057CB5F  D1 F8                     SAR EAX,0x1
0057CB61  89 91 57 02 00 00         MOV dword ptr [ECX + 0x257],EDX
0057CB67  89 81 5B 02 00 00         MOV dword ptr [ECX + 0x25b],EAX
LAB_0057cb6d:
0057CB6D  5E                        POP ESI
0057CB6E  C3                        RET
