RaiseInternalException:
006A5E40  55                        PUSH EBP
006A5E41  8B EC                     MOV EBP,ESP
006A5E43  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A5E46  85 C0                     TEST EAX,EAX
006A5E48  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A5E4B  75 0A                     JNZ 0x006a5e57
006A5E4D  8B 0D D0 8D 85 00         MOV ECX,dword ptr [0x00858dd0]
006A5E53  85 C9                     TEST ECX,ECX
006A5E55  75 17                     JNZ 0x006a5e6e
LAB_006a5e57:
006A5E57  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A5E5A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A5E5D  89 0D D0 8D 85 00         MOV dword ptr [0x00858dd0],ECX
006A5E63  89 15 D8 8D 85 00         MOV dword ptr [0x00858dd8],EDX
006A5E69  A3 D4 8D 85 00            MOV [0x00858dd4],EAX
LAB_006a5e6e:
006A5E6E  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
006A5E74  85 C9                     TEST ECX,ECX
006A5E76  74 0A                     JZ 0x006a5e82
006A5E78  83 C1 04                  ADD ECX,0x4
006A5E7B  50                        PUSH EAX
006A5E7C  51                        PUSH ECX
006A5E7D  E8 2A DA 08 00            CALL 0x007338ac
LAB_006a5e82:
006A5E82  5D                        POP EBP
006A5E83  C2 10 00                  RET 0x10
