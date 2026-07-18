FUN_00731ae0:
00731AE0  55                        PUSH EBP
00731AE1  8B EC                     MOV EBP,ESP
00731AE3  83 EC 0C                  SUB ESP,0xc
00731AE6  A1 BC A5 85 00            MOV EAX,[0x0085a5bc]
00731AEB  6B C0 14                  IMUL EAX,EAX,0x14
00731AEE  8B 0D C0 A5 85 00         MOV ECX,dword ptr [0x0085a5c0]
00731AF4  03 C8                     ADD ECX,EAX
00731AF6  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00731AF9  8B 15 C0 A5 85 00         MOV EDX,dword ptr [0x0085a5c0]
00731AFF  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_00731b02:
00731B02  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00731B05  3B 45 F4                  CMP EAX,dword ptr [EBP + -0xc]
00731B08  73 25                     JNC 0x00731b2f
00731B0A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00731B0D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00731B10  2B 51 0C                  SUB EDX,dword ptr [ECX + 0xc]
00731B13  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00731B16  81 7D FC 00 00 10 00      CMP dword ptr [EBP + -0x4],0x100000
00731B1D  73 05                     JNC 0x00731b24
00731B1F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00731B22  EB 0D                     JMP 0x00731b31
LAB_00731b24:
00731B24  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00731B27  83 C0 14                  ADD EAX,0x14
00731B2A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00731B2D  EB D3                     JMP 0x00731b02
LAB_00731b2f:
00731B2F  33 C0                     XOR EAX,EAX
LAB_00731b31:
00731B31  8B E5                     MOV ESP,EBP
00731B33  5D                        POP EBP
00731B34  C3                        RET
