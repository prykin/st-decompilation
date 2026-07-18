FUN_00553990:
00553990  55                        PUSH EBP
00553991  8B EC                     MOV EBP,ESP
00553993  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00553996  53                        PUSH EBX
00553997  85 D2                     TEST EDX,EDX
00553999  57                        PUSH EDI
0055399A  0F 84 97 00 00 00         JZ 0x00553a37
005539A0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005539A3  85 C0                     TEST EAX,EAX
005539A5  0F 8C 8C 00 00 00         JL 0x00553a37
005539AB  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005539AE  3B C1                     CMP EAX,ECX
005539B0  0F 8D 81 00 00 00         JGE 0x00553a37
005539B6  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
005539B9  85 FF                     TEST EDI,EDI
005539BB  7C 7A                     JL 0x00553a37
005539BD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
005539C0  3B FB                     CMP EDI,EBX
005539C2  7D 73                     JGE 0x00553a37
005539C4  56                        PUSH ESI
005539C5  6A 0F                     PUSH 0xf
005539C7  53                        PUSH EBX
005539C8  51                        PUSH ECX
005539C9  52                        PUSH EDX
005539CA  57                        PUSH EDI
005539CB  50                        PUSH EAX
005539CC  E8 36 E3 EA FF            CALL 0x00401d07
005539D1  83 C4 18                  ADD ESP,0x18
005539D4  BE D4 88 7C 00            MOV ESI,0x7c88d4
LAB_005539d9:
005539D9  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
005539DD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005539E0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005539E3  6A 0F                     PUSH 0xf
005539E5  53                        PUSH EBX
005539E6  50                        PUSH EAX
005539E7  03 D7                     ADD EDX,EDI
005539E9  0F BF 06                  MOVSX EAX,word ptr [ESI]
005539EC  51                        PUSH ECX
005539ED  52                        PUSH EDX
005539EE  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
005539F1  50                        PUSH EAX
005539F2  E8 10 E3 EA FF            CALL 0x00401d07
005539F7  83 C6 04                  ADD ESI,0x4
005539FA  83 C4 18                  ADD ESP,0x18
005539FD  81 FE F4 88 7C 00         CMP ESI,0x7c88f4
00553A03  7C D4                     JL 0x005539d9
00553A05  BE D4 88 7C 00            MOV ESI,0x7c88d4
LAB_00553a0a:
00553A0A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00553A0D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00553A10  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
00553A14  53                        PUSH EBX
00553A15  51                        PUSH ECX
00553A16  0F BF 0E                  MOVSX ECX,word ptr [ESI]
00553A19  52                        PUSH EDX
00553A1A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00553A1D  03 C7                     ADD EAX,EDI
00553A1F  03 CA                     ADD ECX,EDX
00553A21  50                        PUSH EAX
00553A22  51                        PUSH ECX
00553A23  E8 3B 04 EB FF            CALL 0x00403e63
00553A28  83 C6 04                  ADD ESI,0x4
00553A2B  83 C4 14                  ADD ESP,0x14
00553A2E  81 FE F4 88 7C 00         CMP ESI,0x7c88f4
00553A34  7C D4                     JL 0x00553a0a
00553A36  5E                        POP ESI
LAB_00553a37:
00553A37  5F                        POP EDI
00553A38  5B                        POP EBX
00553A39  5D                        POP EBP
00553A3A  C3                        RET
