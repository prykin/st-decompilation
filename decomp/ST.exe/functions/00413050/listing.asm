FUN_00413050:
00413050  55                        PUSH EBP
00413051  8B EC                     MOV EBP,ESP
00413053  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
00413058  56                        PUSH ESI
00413059  3D C8 00 00 00            CMP EAX,0xc8
0041305E  57                        PUSH EDI
0041305F  0F 8F B4 00 00 00         JG 0x00413119
00413065  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00413068  85 F6                     TEST ESI,ESI
0041306A  0F 8C A9 00 00 00         JL 0x00413119
00413070  3B 35 2C 4D 7F 00         CMP ESI,dword ptr [0x007f4d2c]
00413076  0F 8D 9D 00 00 00         JGE 0x00413119
0041307C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0041307F  85 D2                     TEST EDX,EDX
00413081  0F 8C 92 00 00 00         JL 0x00413119
00413087  3B 15 30 4D 7F 00         CMP EDX,dword ptr [0x007f4d30]
0041308D  0F 8D 86 00 00 00         JGE 0x00413119
00413093  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00413096  85 C9                     TEST ECX,ECX
00413098  7C 7F                     JL 0x00413119
0041309A  3B 0D 34 4D 7F 00         CMP ECX,dword ptr [0x007f4d34]
004130A0  7D 77                     JGE 0x00413119
004130A2  83 F8 09                  CMP EAX,0x9
004130A5  7E 10                     JLE 0x004130b7
004130A7  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
004130AA  85 C0                     TEST EAX,EAX
004130AC  7E 09                     JLE 0x004130b7
004130AE  8B 04 85 F8 4B 7A 00      MOV EAX,dword ptr [EAX*0x4 + 0x7a4bf8]
004130B5  EB 02                     JMP 0x004130b9
LAB_004130b7:
004130B7  33 C0                     XOR EAX,EAX
LAB_004130b9:
004130B9  8B 3D 54 4D 7F 00         MOV EDI,dword ptr [0x007f4d54]
004130BF  F6 05 08 4D 7F 00 01      TEST byte ptr [0x007f4d08],0x1
004130C6  75 06                     JNZ 0x004130ce
004130C8  8B 3D 50 4D 7F 00         MOV EDI,dword ptr [0x007f4d50]
LAB_004130ce:
004130CE  50                        PUSH EAX
004130CF  8D 45 08                  LEA EAX,[EBP + 0x8]
004130D2  50                        PUSH EAX
004130D3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004130D6  50                        PUSH EAX
004130D7  51                        PUSH ECX
004130D8  52                        PUSH EDX
004130D9  56                        PUSH ESI
004130DA  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
004130DD  E8 8E 00 00 00            CALL 0x00413170
004130E2  8B F0                     MOV ESI,EAX
004130E4  85 F6                     TEST ESI,ESI
004130E6  75 0D                     JNZ 0x004130f5
004130E8  E8 A3 BA FF FF            CALL 0x0040eb90
004130ED  5F                        POP EDI
004130EE  33 C0                     XOR EAX,EAX
004130F0  5E                        POP ESI
004130F1  5D                        POP EBP
004130F2  C2 14 00                  RET 0x14
LAB_004130f5:
004130F5  83 FE FC                  CMP ESI,-0x4
004130F8  74 1F                     JZ 0x00413119
004130FA  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00413100  68 A9 0C 00 00            PUSH 0xca9
00413105  68 A8 4C 7A 00            PUSH 0x7a4ca8
0041310A  51                        PUSH ECX
0041310B  56                        PUSH ESI
0041310C  E8 2F 2D 29 00            CALL 0x006a5e40
00413111  8B C6                     MOV EAX,ESI
00413113  5F                        POP EDI
00413114  5E                        POP ESI
00413115  5D                        POP EBP
00413116  C2 14 00                  RET 0x14
LAB_00413119:
00413119  5F                        POP EDI
0041311A  B8 FC FF FF FF            MOV EAX,0xfffffffc
0041311F  5E                        POP ESI
00413120  5D                        POP EBP
00413121  C2 14 00                  RET 0x14
