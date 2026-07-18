FUN_006bb780:
006BB780  55                        PUSH EBP
006BB781  8B EC                     MOV EBP,ESP
006BB783  81 EC 84 00 00 00         SUB ESP,0x84
006BB789  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006BB78C  56                        PUSH ESI
006BB78D  57                        PUSH EDI
006BB78E  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006BB791  85 C0                     TEST EAX,EAX
006BB793  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
006BB799  C7 85 7C FF FF FF 7C 00 00 00  MOV dword ptr [EBP + 0xffffff7c],0x7c
006BB7A3  C7 45 80 07 00 00 00      MOV dword ptr [EBP + -0x80],0x7
006BB7AA  C7 45 C4 20 00 00 00      MOV dword ptr [EBP + -0x3c],0x20
006BB7B1  75 6B                     JNZ 0x006bb81e
006BB7B3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006BB7B6  85 C0                     TEST EAX,EAX
006BB7B8  0F 84 8B 00 00 00         JZ 0x006bb849
006BB7BE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006BB7C1  C7 45 80 07 10 00 00      MOV dword ptr [EBP + -0x80],0x1007
006BB7C8  85 C9                     TEST ECX,ECX
006BB7CA  C7 45 C8 40 00 00 00      MOV dword ptr [EBP + -0x38],0x40
006BB7D1  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006BB7D4  74 13                     JZ 0x006bb7e9
006BB7D6  8B 01                     MOV EAX,dword ptr [ECX]
006BB7D8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006BB7DB  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006BB7DE  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006BB7E1  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006BB7E4  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006BB7E7  EB 60                     JMP 0x006bb849
LAB_006bb7e9:
006BB7E9  83 F8 10                  CMP EAX,0x10
006BB7EC  75 17                     JNZ 0x006bb805
006BB7EE  C7 45 D4 00 7C 00 00      MOV dword ptr [EBP + -0x2c],0x7c00
006BB7F5  C7 45 D8 E0 03 00 00      MOV dword ptr [EBP + -0x28],0x3e0
006BB7FC  C7 45 DC 1F 00 00 00      MOV dword ptr [EBP + -0x24],0x1f
006BB803  EB 44                     JMP 0x006bb849
LAB_006bb805:
006BB805  7E 42                     JLE 0x006bb849
006BB807  C7 45 D4 00 00 FF 00      MOV dword ptr [EBP + -0x2c],0xff0000
006BB80E  C7 45 D8 00 FF 00 00      MOV dword ptr [EBP + -0x28],0xff00
006BB815  C7 45 DC FF 00 00 00      MOV dword ptr [EBP + -0x24],0xff
006BB81C  EB 2B                     JMP 0x006bb849
LAB_006bb81e:
006BB81E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006BB821  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006BB824  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006BB827  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006BB82A  C7 45 80 07 10 00 00      MOV dword ptr [EBP + -0x80],0x1007
006BB831  C7 45 C8 00 02 00 00      MOV dword ptr [EBP + -0x38],0x200
006BB838  8B 10                     MOV EDX,dword ptr [EAX]
006BB83A  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006BB83D  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006BB840  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006BB843  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006BB846  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
LAB_006bb849:
006BB849  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006BB84C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006BB84F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006BB852  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
006BB855  8B 42 30                  MOV EAX,dword ptr [EDX + 0x30]
006BB858  6A 00                     PUSH 0x0
006BB85A  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
006BB860  C7 45 E4 80 40 00 00      MOV dword ptr [EBP + -0x1c],0x4080
006BB867  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
006BB86A  8B 08                     MOV ECX,dword ptr [EAX]
006BB86C  57                        PUSH EDI
006BB86D  52                        PUSH EDX
006BB86E  50                        PUSH EAX
006BB86F  FF 51 18                  CALL dword ptr [ECX + 0x18]
006BB872  85 C0                     TEST EAX,EAX
006BB874  75 32                     JNZ 0x006bb8a8
006BB876  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006BB879  83 F9 FF                  CMP ECX,-0x1
006BB87C  74 2A                     JZ 0x006bb8a8
006BB87E  8B 07                     MOV EAX,dword ptr [EDI]
006BB880  8D 55 F8                  LEA EDX,[EBP + -0x8]
006BB883  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006BB886  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006BB889  8B 08                     MOV ECX,dword ptr [EAX]
006BB88B  52                        PUSH EDX
006BB88C  6A 10                     PUSH 0x10
006BB88E  50                        PUSH EAX
006BB88F  FF 51 74                  CALL dword ptr [ECX + 0x74]
006BB892  8B F0                     MOV ESI,EAX
006BB894  85 F6                     TEST ESI,ESI
006BB896  74 0E                     JZ 0x006bb8a6
006BB898  8B 07                     MOV EAX,dword ptr [EDI]
006BB89A  50                        PUSH EAX
006BB89B  8B 08                     MOV ECX,dword ptr [EAX]
006BB89D  FF 51 08                  CALL dword ptr [ECX + 0x8]
006BB8A0  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
LAB_006bb8a6:
006BB8A6  8B C6                     MOV EAX,ESI
LAB_006bb8a8:
006BB8A8  5F                        POP EDI
006BB8A9  5E                        POP ESI
006BB8AA  8B E5                     MOV ESP,EBP
006BB8AC  5D                        POP EBP
006BB8AD  C2 20 00                  RET 0x20
