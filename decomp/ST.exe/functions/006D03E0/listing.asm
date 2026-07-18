FUN_006d03e0:
006D03E0  55                        PUSH EBP
006D03E1  8B EC                     MOV EBP,ESP
006D03E3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006D03E6  56                        PUSH ESI
006D03E7  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006D03EA  85 C0                     TEST EAX,EAX
006D03EC  75 06                     JNZ 0x006d03f4
006D03EE  56                        PUSH ESI
006D03EF  E8 AC 4B FE FF            CALL 0x006b4fa0
LAB_006d03f4:
006D03F4  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006D03F7  6A 00                     PUSH 0x0
006D03F9  85 C9                     TEST ECX,ECX
006D03FB  56                        PUSH ESI
006D03FC  50                        PUSH EAX
006D03FD  7C 2E                     JL 0x006d042d
006D03FF  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006D0402  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006D0405  51                        PUSH ECX
006D0406  2B CE                     SUB ECX,ESI
006D0408  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006D040B  2B C8                     SUB ECX,EAX
006D040D  6A 00                     PUSH 0x0
006D040F  51                        PUSH ECX
006D0410  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D0413  51                        PUSH ECX
006D0414  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006D0417  50                        PUSH EAX
006D0418  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D041B  52                        PUSH EDX
006D041C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006D041F  50                        PUSH EAX
006D0420  51                        PUSH ECX
006D0421  52                        PUSH EDX
006D0422  FF 15 BC BA 85 00         CALL dword ptr [0x0085babc]
006D0428  5E                        POP ESI
006D0429  5D                        POP EBP
006D042A  C2 24 00                  RET 0x24
LAB_006d042d:
006D042D  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006D0430  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006D0433  F7 D9                     NEG ECX
006D0435  51                        PUSH ECX
006D0436  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006D0439  6A 00                     PUSH 0x0
006D043B  50                        PUSH EAX
006D043C  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006D043F  51                        PUSH ECX
006D0440  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D0443  52                        PUSH EDX
006D0444  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D0447  50                        PUSH EAX
006D0448  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D044B  51                        PUSH ECX
006D044C  52                        PUSH EDX
006D044D  50                        PUSH EAX
006D044E  FF 15 BC BA 85 00         CALL dword ptr [0x0085babc]
006D0454  5E                        POP ESI
006D0455  5D                        POP EBP
006D0456  C2 24 00                  RET 0x24
