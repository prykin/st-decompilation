FUN_006b4640:
006B4640  55                        PUSH EBP
006B4641  8B EC                     MOV EBP,ESP
006B4643  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B4646  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006B4649  99                        CDQ
006B464A  33 C2                     XOR EAX,EDX
006B464C  2B C2                     SUB EAX,EDX
006B464E  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B4651  50                        PUSH EAX
006B4652  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
006B4655  50                        PUSH EAX
006B4656  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B4659  6A 00                     PUSH 0x0
006B465B  6A 00                     PUSH 0x0
006B465D  52                        PUSH EDX
006B465E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B4661  51                        PUSH ECX
006B4662  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B4665  50                        PUSH EAX
006B4666  51                        PUSH ECX
006B4667  52                        PUSH EDX
006B4668  E8 63 FC FF FF            CALL 0x006b42d0
006B466D  5D                        POP EBP
006B466E  C2 14 00                  RET 0x14
