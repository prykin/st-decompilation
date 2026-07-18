FUN_00553a70:
00553A70  55                        PUSH EBP
00553A71  8B EC                     MOV EBP,ESP
00553A73  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00553A76  53                        PUSH EBX
00553A77  85 D2                     TEST EDX,EDX
00553A79  57                        PUSH EDI
00553A7A  74 5E                     JZ 0x00553ada
00553A7C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00553A7F  85 C0                     TEST EAX,EAX
00553A81  7C 57                     JL 0x00553ada
00553A83  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00553A86  3B C1                     CMP EAX,ECX
00553A88  7D 50                     JGE 0x00553ada
00553A8A  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00553A8D  85 FF                     TEST EDI,EDI
00553A8F  7C 49                     JL 0x00553ada
00553A91  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00553A94  3B FB                     CMP EDI,EBX
00553A96  7D 42                     JGE 0x00553ada
00553A98  56                        PUSH ESI
00553A99  6A 00                     PUSH 0x0
00553A9B  53                        PUSH EBX
00553A9C  51                        PUSH ECX
00553A9D  52                        PUSH EDX
00553A9E  57                        PUSH EDI
00553A9F  50                        PUSH EAX
00553AA0  E8 62 E2 EA FF            CALL 0x00401d07
00553AA5  83 C4 18                  ADD ESP,0x18
00553AA8  BE D4 88 7C 00            MOV ESI,0x7c88d4
LAB_00553aad:
00553AAD  0F BF 56 02               MOVSX EDX,word ptr [ESI + 0x2]
00553AB1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00553AB4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00553AB7  53                        PUSH EBX
00553AB8  50                        PUSH EAX
00553AB9  0F BF 06                  MOVSX EAX,word ptr [ESI]
00553ABC  03 D7                     ADD EDX,EDI
00553ABE  51                        PUSH ECX
00553ABF  52                        PUSH EDX
00553AC0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00553AC3  03 C2                     ADD EAX,EDX
00553AC5  50                        PUSH EAX
00553AC6  E8 98 03 EB FF            CALL 0x00403e63
00553ACB  83 C6 04                  ADD ESI,0x4
00553ACE  83 C4 14                  ADD ESP,0x14
00553AD1  81 FE F4 88 7C 00         CMP ESI,0x7c88f4
00553AD7  7C D4                     JL 0x00553aad
00553AD9  5E                        POP ESI
LAB_00553ada:
00553ADA  5F                        POP EDI
00553ADB  5B                        POP EBX
00553ADC  5D                        POP EBP
00553ADD  C3                        RET
