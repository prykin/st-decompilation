FUN_00735ff0:
00735FF0  55                        PUSH EBP
00735FF1  8B EC                     MOV EBP,ESP
00735FF3  8B 45 0E                  MOV EAX,dword ptr [EBP + 0xe]
00735FF6  25 FF FF 00 00            AND EAX,0xffff
00735FFB  25 F0 7F 00 00            AND EAX,0x7ff0
00736000  C1 F8 04                  SAR EAX,0x4
00736003  0F BF C8                  MOVSX ECX,AX
00736006  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00736009  8D 84 11 02 FC FF FF      LEA EAX,[ECX + EDX*0x1 + 0xfffffc02]
00736010  50                        PUSH EAX
00736011  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00736014  51                        PUSH ECX
00736015  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00736018  52                        PUSH EDX
00736019  E8 62 FF FF FF            CALL 0x00735f80
0073601E  83 C4 0C                  ADD ESP,0xc
00736021  5D                        POP EBP
00736022  C3                        RET
