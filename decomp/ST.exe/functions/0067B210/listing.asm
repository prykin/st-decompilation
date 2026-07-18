FUN_0067b210:
0067B210  55                        PUSH EBP
0067B211  8B EC                     MOV EBP,ESP
0067B213  56                        PUSH ESI
0067B214  57                        PUSH EDI
0067B215  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0067B218  8B F1                     MOV ESI,ECX
0067B21A  85 FF                     TEST EDI,EDI
0067B21C  7C 2B                     JL 0x0067b249
0067B21E  83 FF 03                  CMP EDI,0x3
0067B221  7D 26                     JGE 0x0067b249
0067B223  E8 9D 7A D8 FF            CALL 0x00402cc5
0067B228  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067B22B  C6 86 62 06 00 00 01      MOV byte ptr [ESI + 0x662],0x1
0067B232  85 C0                     TEST EAX,EAX
0067B234  66 89 BE 60 06 00 00      MOV word ptr [ESI + 0x660],DI
0067B23B  7F 05                     JG 0x0067b242
0067B23D  B8 01 00 00 00            MOV EAX,0x1
LAB_0067b242:
0067B242  66 89 86 63 06 00 00      MOV word ptr [ESI + 0x663],AX
LAB_0067b249:
0067B249  5F                        POP EDI
0067B24A  5E                        POP ESI
0067B24B  5D                        POP EBP
0067B24C  C2 08 00                  RET 0x8
