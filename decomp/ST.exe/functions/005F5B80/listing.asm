FUN_005f5b80:
005F5B80  55                        PUSH EBP
005F5B81  8B EC                     MOV EBP,ESP
005F5B83  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005F5B86  53                        PUSH EBX
005F5B87  8B D9                     MOV EBX,ECX
005F5B89  56                        PUSH ESI
005F5B8A  57                        PUSH EDI
005F5B8B  B9 4A 00 00 00            MOV ECX,0x4a
005F5B90  8B F2                     MOV ESI,EDX
005F5B92  8D 7B 4D                  LEA EDI,[EBX + 0x4d]
005F5B95  F3 A5                     MOVSD.REP ES:EDI,ESI
005F5B97  8B 8B 69 01 00 00         MOV ECX,dword ptr [EBX + 0x169]
005F5B9D  B8 28 01 00 00            MOV EAX,0x128
005F5BA2  85 C9                     TEST ECX,ECX
005F5BA4  74 22                     JZ 0x005f5bc8
005F5BA6  81 C2 2C 01 00 00         ADD EDX,0x12c
005F5BAC  52                        PUSH EDX
005F5BAD  6A 00                     PUSH 0x0
005F5BAF  E8 AC A4 0B 00            CALL 0x006b0060
005F5BB4  89 83 69 01 00 00         MOV dword ptr [EBX + 0x169],EAX
005F5BBA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F5BBD  8B 80 28 01 00 00         MOV EAX,dword ptr [EAX + 0x128]
005F5BC3  05 2C 01 00 00            ADD EAX,0x12c
LAB_005f5bc8:
005F5BC8  8B 8B 69 01 00 00         MOV ECX,dword ptr [EBX + 0x169]
005F5BCE  C7 83 8F 00 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x8f],0xffffffff
005F5BD8  85 C9                     TEST ECX,ECX
005F5BDA  74 2D                     JZ 0x005f5c09
005F5BDC  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
005F5BDF  33 F6                     XOR ESI,ESI
005F5BE1  85 FF                     TEST EDI,EDI
005F5BE3  7E 24                     JLE 0x005f5c09
LAB_005f5be5:
005F5BE5  8B 93 69 01 00 00         MOV EDX,dword ptr [EBX + 0x169]
005F5BEB  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
005F5BEE  73 14                     JNC 0x005f5c04
005F5BF0  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
005F5BF3  0F AF CE                  IMUL ECX,ESI
005F5BF6  03 4A 1C                  ADD ECX,dword ptr [EDX + 0x1c]
005F5BF9  85 C9                     TEST ECX,ECX
005F5BFB  74 07                     JZ 0x005f5c04
005F5BFD  C7 41 1F FF FF FF FF      MOV dword ptr [ECX + 0x1f],0xffffffff
LAB_005f5c04:
005F5C04  46                        INC ESI
005F5C05  3B F7                     CMP ESI,EDI
005F5C07  7C DC                     JL 0x005f5be5
LAB_005f5c09:
005F5C09  5F                        POP EDI
005F5C0A  5E                        POP ESI
005F5C0B  5B                        POP EBX
005F5C0C  5D                        POP EBP
005F5C0D  C2 04 00                  RET 0x4
