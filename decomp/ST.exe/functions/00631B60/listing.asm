FUN_00631b60:
00631B60  55                        PUSH EBP
00631B61  8B EC                     MOV EBP,ESP
00631B63  53                        PUSH EBX
00631B64  8B D9                     MOV EBX,ECX
00631B66  33 C0                     XOR EAX,EAX
00631B68  56                        PUSH ESI
00631B69  8B 4B 6D                  MOV ECX,dword ptr [EBX + 0x6d]
00631B6C  57                        PUSH EDI
00631B6D  85 C9                     TEST ECX,ECX
00631B6F  74 70                     JZ 0x00631be1
00631B71  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00631B74  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00631B77  3B F2                     CMP ESI,EDX
00631B79  73 29                     JNC 0x00631ba4
00631B7B  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00631B7E  0F AF FE                  IMUL EDI,ESI
00631B81  03 79 1C                  ADD EDI,dword ptr [ECX + 0x1c]
00631B84  85 FF                     TEST EDI,EDI
00631B86  74 1C                     JZ 0x00631ba4
00631B88  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00631B8B  39 77 04                  CMP dword ptr [EDI + 0x4],ESI
00631B8E  75 14                     JNZ 0x00631ba4
00631B90  B9 0A 00 00 00            MOV ECX,0xa
00631B95  F3 AB                     STOSD.REP ES:EDI
00631B97  AA                        STOSB ES:EDI
00631B98  5F                        POP EDI
00631B99  5E                        POP ESI
00631B9A  B8 01 00 00 00            MOV EAX,0x1
00631B9F  5B                        POP EBX
00631BA0  5D                        POP EBP
00631BA1  C2 08 00                  RET 0x8
LAB_00631ba4:
00631BA4  33 F6                     XOR ESI,ESI
00631BA6  85 D2                     TEST EDX,EDX
00631BA8  7E 37                     JLE 0x00631be1
00631BAA  3B F2                     CMP ESI,EDX
LAB_00631bac:
00631BAC  73 28                     JNC 0x00631bd6
00631BAE  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00631BB1  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00631BB4  0F AF FE                  IMUL EDI,ESI
00631BB7  03 FA                     ADD EDI,EDX
00631BB9  85 FF                     TEST EDI,EDI
00631BBB  74 19                     JZ 0x00631bd6
00631BBD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00631BC0  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
00631BC3  3B D1                     CMP EDX,ECX
00631BC5  75 0F                     JNZ 0x00631bd6
00631BC7  B9 0A 00 00 00            MOV ECX,0xa
00631BCC  33 C0                     XOR EAX,EAX
00631BCE  F3 AB                     STOSD.REP ES:EDI
00631BD0  AA                        STOSB ES:EDI
00631BD1  B8 01 00 00 00            MOV EAX,0x1
LAB_00631bd6:
00631BD6  8B 4B 6D                  MOV ECX,dword ptr [EBX + 0x6d]
00631BD9  46                        INC ESI
00631BDA  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00631BDD  3B F2                     CMP ESI,EDX
00631BDF  7C CB                     JL 0x00631bac
LAB_00631be1:
00631BE1  5F                        POP EDI
00631BE2  5E                        POP ESI
00631BE3  5B                        POP EBX
00631BE4  5D                        POP EBP
00631BE5  C2 08 00                  RET 0x8
