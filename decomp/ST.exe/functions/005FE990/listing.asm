FUN_005fe990:
005FE990  55                        PUSH EBP
005FE991  8B EC                     MOV EBP,ESP
005FE993  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005FE996  33 C9                     XOR ECX,ECX
005FE998  81 FA C8 00 00 00         CMP EDX,0xc8
005FE99E  7E 69                     JLE 0x005fea09
005FE9A0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005FE9A5  F7 EA                     IMUL EDX
005FE9A7  C1 FA 06                  SAR EDX,0x6
005FE9AA  8B C2                     MOV EAX,EDX
005FE9AC  C1 E8 1F                  SHR EAX,0x1f
005FE9AF  8D 44 02 FF               LEA EAX,[EDX + EAX*0x1 + -0x1]
005FE9B3  83 F8 03                  CMP EAX,0x3
005FE9B6  77 51                     JA 0x005fea09
switchD_005fe9b8::switchD:
005FE9B8  FF 24 85 10 EA 5F 00      JMP dword ptr [EAX*0x4 + 0x5fea10]
switchD_005fe9b8::caseD_4:
005FE9BF  81 7D 0C 88 03 00 00      CMP dword ptr [EBP + 0xc],0x388
005FE9C6  7D 41                     JGE 0x005fea09
005FE9C8  B9 01 00 00 00            MOV ECX,0x1
005FE9CD  8B C1                     MOV EAX,ECX
005FE9CF  5D                        POP EBP
005FE9D0  C2 08 00                  RET 0x8
switchD_005fe9b8::caseD_3:
005FE9D3  81 7D 0C BF 02 00 00      CMP dword ptr [EBP + 0xc],0x2bf
005FE9DA  7D 2D                     JGE 0x005fea09
005FE9DC  B9 01 00 00 00            MOV ECX,0x1
005FE9E1  8B C1                     MOV EAX,ECX
005FE9E3  5D                        POP EBP
005FE9E4  C2 08 00                  RET 0x8
switchD_005fe9b8::caseD_2:
005FE9E7  81 7D 0C F6 01 00 00      CMP dword ptr [EBP + 0xc],0x1f6
005FE9EE  7D 19                     JGE 0x005fea09
005FE9F0  B9 01 00 00 00            MOV ECX,0x1
005FE9F5  8B C1                     MOV EAX,ECX
005FE9F7  5D                        POP EBP
005FE9F8  C2 08 00                  RET 0x8
switchD_005fe9b8::caseD_1:
005FE9FB  81 7D 0C 2D 01 00 00      CMP dword ptr [EBP + 0xc],0x12d
005FEA02  7D 05                     JGE 0x005fea09
005FEA04  B9 01 00 00 00            MOV ECX,0x1
switchD_005fe9b8::default:
005FEA09  8B C1                     MOV EAX,ECX
005FEA0B  5D                        POP EBP
005FEA0C  C2 08 00                  RET 0x8
