FUN_006e9490:
006E9490  55                        PUSH EBP
006E9491  8B EC                     MOV EBP,ESP
006E9493  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9496  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E949C  3B D0                     CMP EDX,EAX
006E949E  73 65                     JNC 0x006e9505
006E94A0  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E94A6  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E94A9  C1 E0 03                  SHL EAX,0x3
006E94AC  2B C2                     SUB EAX,EDX
006E94AE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E94B1  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E94B4  8B 08                     MOV ECX,dword ptr [EAX]
006E94B6  F6 C5 80                  TEST CH,0x80
006E94B9  74 4A                     JZ 0x006e9505
006E94BB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E94BE  8B 90 94 00 00 00         MOV EDX,dword ptr [EAX + 0x94]
006E94C4  3B CA                     CMP ECX,EDX
006E94C6  7D 2F                     JGE 0x006e94f7
006E94C8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006E94CB  85 D2                     TEST EDX,EDX
006E94CD  74 15                     JZ 0x006e94e4
006E94CF  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006E94D5  66 81 64 8A 02 F7 FF      AND word ptr [EDX + ECX*0x4 + 0x2],0xfff7
006E94DC  8D 44 8A 02               LEA EAX,[EDX + ECX*0x4 + 0x2]
006E94E0  5D                        POP EBP
006E94E1  C2 0C 00                  RET 0xc
LAB_006e94e4:
006E94E4  8B 80 A4 00 00 00         MOV EAX,dword ptr [EAX + 0xa4]
006E94EA  80 4C 88 02 08            OR byte ptr [EAX + ECX*0x4 + 0x2],0x8
006E94EF  8D 44 88 02               LEA EAX,[EAX + ECX*0x4 + 0x2]
006E94F3  5D                        POP EBP
006E94F4  C2 0C 00                  RET 0xc
LAB_006e94f7:
006E94F7  68 38 ED 7E 00            PUSH 0x7eed38
006E94FC  E8 9F FC FF FF            CALL 0x006e91a0
006E9501  5D                        POP EBP
006E9502  C2 0C 00                  RET 0xc
LAB_006e9505:
006E9505  83 FA FF                  CMP EDX,-0x1
006E9508  74 0A                     JZ 0x006e9514
006E950A  68 38 ED 7E 00            PUSH 0x7eed38
006E950F  E8 3C F7 FF FF            CALL 0x006e8c50
LAB_006e9514:
006E9514  5D                        POP EBP
006E9515  C2 0C 00                  RET 0xc
