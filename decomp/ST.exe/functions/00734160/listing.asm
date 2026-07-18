FUN_00734160:
00734160  55                        PUSH EBP
00734161  8B EC                     MOV EBP,ESP
00734163  83 EC 08                  SUB ESP,0x8
00734166  53                        PUSH EBX
00734167  56                        PUSH ESI
00734168  57                        PUSH EDI
LAB_00734169:
00734169  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0073416D  75 1E                     JNZ 0x0073418d
0073416F  68 5C FE 79 00            PUSH 0x79fe5c
00734174  6A 00                     PUSH 0x0
00734176  6A 29                     PUSH 0x29
00734178  68 78 01 7A 00            PUSH 0x7a0178
0073417D  6A 02                     PUSH 0x2
0073417F  E8 1C CE FF FF            CALL 0x00730fa0
00734184  83 C4 14                  ADD ESP,0x14
00734187  83 F8 01                  CMP EAX,0x1
0073418A  75 01                     JNZ 0x0073418d
0073418C  CC                        INT3
LAB_0073418d:
0073418D  33 C0                     XOR EAX,EAX
0073418F  85 C0                     TEST EAX,EAX
00734191  75 D6                     JNZ 0x00734169
00734193  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00734196  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00734199  83 EA 01                  SUB EDX,0x1
0073419C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073419F  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
007341A2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007341A5  83 79 04 00               CMP dword ptr [ECX + 0x4],0x0
007341A9  7C 20                     JL 0x007341cb
007341AB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007341AE  8B 02                     MOV EAX,dword ptr [EDX]
007341B0  0F BE 08                  MOVSX ECX,byte ptr [EAX]
007341B3  81 E1 FF 00 00 00         AND ECX,0xff
007341B9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007341BC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007341BF  8B 02                     MOV EAX,dword ptr [EDX]
007341C1  83 C0 01                  ADD EAX,0x1
007341C4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007341C7  89 01                     MOV dword ptr [ECX],EAX
007341C9  EB 0F                     JMP 0x007341da
LAB_007341cb:
007341CB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007341CE  52                        PUSH EDX
007341CF  E8 9C 8B 00 00            CALL 0x0073cd70
007341D4  83 C4 04                  ADD ESP,0x4
007341D7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_007341da:
007341DA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007341DD  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007341E0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007341E3  5F                        POP EDI
007341E4  5E                        POP ESI
007341E5  5B                        POP EBX
007341E6  8B E5                     MOV ESP,EBP
007341E8  5D                        POP EBP
007341E9  C3                        RET
