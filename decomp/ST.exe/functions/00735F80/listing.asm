FUN_00735f80:
00735F80  55                        PUSH EBP
00735F81  8B EC                     MOV EBP,ESP
00735F83  83 EC 0C                  SUB ESP,0xc
00735F86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735F89  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00735F8C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00735F8F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00735F92  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00735F95  81 C2 FE 03 00 00         ADD EDX,0x3fe
00735F9B  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00735F9E  8B 45 0E                  MOV EAX,dword ptr [EBP + 0xe]
00735FA1  25 FF FF 00 00            AND EAX,0xffff
00735FA6  25 0F 80 00 00            AND EAX,0x800f
00735FAB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00735FAE  C1 E1 04                  SHL ECX,0x4
00735FB1  0B C1                     OR EAX,ECX
00735FB3  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00735FB7  DD 45 F4                  FLD double ptr [EBP + -0xc]
00735FBA  8B E5                     MOV ESP,EBP
00735FBC  5D                        POP EBP
00735FBD  C3                        RET
