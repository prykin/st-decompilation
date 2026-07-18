FUN_0041dc40:
0041DC40  55                        PUSH EBP
0041DC41  8B EC                     MOV EBP,ESP
0041DC43  83 EC 08                  SUB ESP,0x8
0041DC46  53                        PUSH EBX
0041DC47  56                        PUSH ESI
0041DC48  0F BF 75 14               MOVSX ESI,word ptr [EBP + 0x14]
0041DC4C  0F BF 5D 0C               MOVSX EBX,word ptr [EBP + 0xc]
0041DC50  57                        PUSH EDI
0041DC51  56                        PUSH ESI
0041DC52  0F BF 7D 0E               MOVSX EDI,word ptr [EBP + 0xe]
0041DC56  E8 F5 22 29 00            CALL 0x006aff50
0041DC5B  8B D0                     MOV EDX,EAX
0041DC5D  56                        PUSH ESI
0041DC5E  0F AF D3                  IMUL EDX,EBX
0041DC61  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
0041DC64  E8 F2 22 29 00            CALL 0x006aff5b
0041DC69  0F AF C7                  IMUL EAX,EDI
0041DC6C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0041DC6F  56                        PUSH ESI
0041DC70  2B C8                     SUB ECX,EAX
0041DC72  8B C1                     MOV EAX,ECX
0041DC74  99                        CDQ
0041DC75  F7 3D 8C DA 7E 00         IDIV dword ptr [0x007eda8c]
0041DC7B  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
0041DC7F  E8 D7 22 29 00            CALL 0x006aff5b
0041DC84  8B D8                     MOV EBX,EAX
0041DC86  56                        PUSH ESI
0041DC87  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
0041DC8B  0F AF D8                  IMUL EBX,EAX
0041DC8E  E8 BD 22 29 00            CALL 0x006aff50
0041DC93  0F AF C7                  IMUL EAX,EDI
0041DC96  03 C3                     ADD EAX,EBX
0041DC98  83 C4 10                  ADD ESP,0x10
0041DC9B  99                        CDQ
0041DC9C  F7 3D 8C DA 7E 00         IDIV dword ptr [0x007eda8c]
0041DCA2  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0041DCA6  5F                        POP EDI
0041DCA7  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
0041DCAB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0041DCAE  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0041DCB1  8B D0                     MOV EDX,EAX
0041DCB3  89 32                     MOV dword ptr [EDX],ESI
0041DCB5  5E                        POP ESI
0041DCB6  5B                        POP EBX
0041DCB7  66 89 4A 04               MOV word ptr [EDX + 0x4],CX
0041DCBB  8B E5                     MOV ESP,EBP
0041DCBD  5D                        POP EBP
0041DCBE  C2 10 00                  RET 0x10
