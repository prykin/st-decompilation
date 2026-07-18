FUN_006319e0:
006319E0  55                        PUSH EBP
006319E1  8B EC                     MOV EBP,ESP
006319E3  53                        PUSH EBX
006319E4  8B D9                     MOV EBX,ECX
006319E6  33 C0                     XOR EAX,EAX
006319E8  56                        PUSH ESI
006319E9  8B 4B 69                  MOV ECX,dword ptr [EBX + 0x69]
006319EC  57                        PUSH EDI
006319ED  85 C9                     TEST ECX,ECX
006319EF  74 6E                     JZ 0x00631a5f
006319F1  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
006319F4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006319F7  3B F2                     CMP ESI,EDX
006319F9  73 28                     JNC 0x00631a23
006319FB  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
006319FE  0F AF FE                  IMUL EDI,ESI
00631A01  03 79 1C                  ADD EDI,dword ptr [ECX + 0x1c]
00631A04  85 FF                     TEST EDI,EDI
00631A06  74 1B                     JZ 0x00631a23
00631A08  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00631A0B  39 77 08                  CMP dword ptr [EDI + 0x8],ESI
00631A0E  75 13                     JNZ 0x00631a23
00631A10  B9 09 00 00 00            MOV ECX,0x9
00631A15  F3 AB                     STOSD.REP ES:EDI
00631A17  5F                        POP EDI
00631A18  5E                        POP ESI
00631A19  B8 01 00 00 00            MOV EAX,0x1
00631A1E  5B                        POP EBX
00631A1F  5D                        POP EBP
00631A20  C2 08 00                  RET 0x8
LAB_00631a23:
00631A23  33 F6                     XOR ESI,ESI
00631A25  85 D2                     TEST EDX,EDX
00631A27  7E 36                     JLE 0x00631a5f
00631A29  3B F2                     CMP ESI,EDX
LAB_00631a2b:
00631A2B  73 27                     JNC 0x00631a54
00631A2D  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00631A30  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00631A33  0F AF FE                  IMUL EDI,ESI
00631A36  03 FA                     ADD EDI,EDX
00631A38  85 FF                     TEST EDI,EDI
00631A3A  74 18                     JZ 0x00631a54
00631A3C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00631A3F  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
00631A42  3B D1                     CMP EDX,ECX
00631A44  75 0E                     JNZ 0x00631a54
00631A46  B9 09 00 00 00            MOV ECX,0x9
00631A4B  33 C0                     XOR EAX,EAX
00631A4D  F3 AB                     STOSD.REP ES:EDI
00631A4F  B8 01 00 00 00            MOV EAX,0x1
LAB_00631a54:
00631A54  8B 4B 69                  MOV ECX,dword ptr [EBX + 0x69]
00631A57  46                        INC ESI
00631A58  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00631A5B  3B F2                     CMP ESI,EDX
00631A5D  7C CC                     JL 0x00631a2b
LAB_00631a5f:
00631A5F  5F                        POP EDI
00631A60  5E                        POP ESI
00631A61  5B                        POP EBX
00631A62  5D                        POP EBP
00631A63  C2 08 00                  RET 0x8
