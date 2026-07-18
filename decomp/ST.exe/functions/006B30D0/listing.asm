FUN_006b30d0:
006B30D0  55                        PUSH EBP
006B30D1  8B EC                     MOV EBP,ESP
006B30D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B30D6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B30D9  56                        PUSH ESI
006B30DA  83 C8 FF                  OR EAX,0xffffffff
006B30DD  3B 8A A0 01 00 00         CMP ECX,dword ptr [EDX + 0x1a0]
006B30E3  73 30                     JNC 0x006b3115
006B30E5  8B B2 B0 01 00 00         MOV ESI,dword ptr [EDX + 0x1b0]
006B30EB  8B 0C 8E                  MOV ECX,dword ptr [ESI + ECX*0x4]
006B30EE  8B 31                     MOV ESI,dword ptr [ECX]
006B30F0  81 E6 00 80 00 04         AND ESI,0x4008000
006B30F6  81 FE 00 80 00 04         CMP ESI,0x4008000
006B30FC  75 17                     JNZ 0x006b3115
006B30FE  8B 89 D0 00 00 00         MOV ECX,dword ptr [ECX + 0xd0]
006B3104  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006B3107  8B 0C B1                  MOV ECX,dword ptr [ECX + ESI*0x4]
006B310A  85 C9                     TEST ECX,ECX
006B310C  7C 07                     JL 0x006b3115
006B310E  51                        PUSH ECX
006B310F  52                        PUSH EDX
006B3110  E8 2B FF FF FF            CALL 0x006b3040
LAB_006b3115:
006B3115  5E                        POP ESI
006B3116  5D                        POP EBP
006B3117  C2 0C 00                  RET 0xc
