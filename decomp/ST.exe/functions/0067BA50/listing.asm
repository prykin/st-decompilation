FUN_0067ba50:
0067BA50  55                        PUSH EBP
0067BA51  8B EC                     MOV EBP,ESP
0067BA53  83 EC 44                  SUB ESP,0x44
0067BA56  56                        PUSH ESI
0067BA57  57                        PUSH EDI
0067BA58  B9 0D 00 00 00            MOV ECX,0xd
0067BA5D  33 C0                     XOR EAX,EAX
0067BA5F  8D 7D BC                  LEA EDI,[EBP + -0x44]
0067BA62  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067BA65  F3 AB                     STOSD.REP ES:EDI
0067BA67  8D 45 BC                  LEA EAX,[EBP + -0x44]
0067BA6A  83 CF FF                  OR EDI,0xffffffff
0067BA6D  50                        PUSH EAX
0067BA6E  8B CE                     MOV ECX,ESI
0067BA70  C7 45 BC 66 00 00 00      MOV dword ptr [EBP + -0x44],0x66
0067BA77  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
0067BA7A  E8 D6 5A D8 FF            CALL 0x00401555
0067BA7F  8A 45 C4                  MOV AL,byte ptr [EBP + -0x3c]
0067BA82  84 C0                     TEST AL,AL
0067BA84  7E 3E                     JLE 0x0067bac4
0067BA86  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067BA89  85 C0                     TEST EAX,EAX
0067BA8B  74 37                     JZ 0x0067bac4
0067BA8D  66 8B 56 7D               MOV DX,word ptr [ESI + 0x7d]
0067BA91  33 C9                     XOR ECX,ECX
0067BA93  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0067BA96  66 89 55 F0               MOV word ptr [EBP + -0x10],DX
0067BA9A  8B 55 C7                  MOV EDX,dword ptr [EBP + -0x39]
0067BA9D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0067BAA0  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0067BAA3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0067BAA6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0067BAA9  66 8B 4D C5               MOV CX,word ptr [EBP + -0x3b]
0067BAAD  8D 55 F0                  LEA EDX,[EBP + -0x10]
0067BAB0  66 89 4D F2               MOV word ptr [EBP + -0xe],CX
0067BAB4  8B 4D CB                  MOV ECX,dword ptr [EBP + -0x35]
0067BAB7  52                        PUSH EDX
0067BAB8  50                        PUSH EAX
0067BAB9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0067BABC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0067BABF  E8 FC 26 03 00            CALL 0x006ae1c0
LAB_0067bac4:
0067BAC4  5F                        POP EDI
0067BAC5  33 C0                     XOR EAX,EAX
0067BAC7  5E                        POP ESI
0067BAC8  8B E5                     MOV ESP,EBP
0067BACA  5D                        POP EBP
0067BACB  C3                        RET
