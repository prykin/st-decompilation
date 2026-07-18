FUN_004ea460:
004EA460  55                        PUSH EBP
004EA461  8B EC                     MOV EBP,ESP
004EA463  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004EA466  56                        PUSH ESI
004EA467  8B F1                     MOV ESI,ECX
004EA469  57                        PUSH EDI
004EA46A  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
004EA46D  83 BE 45 02 00 00 04      CMP dword ptr [ESI + 0x245],0x4
004EA474  75 7F                     JNZ 0x004ea4f5
004EA476  8B 8E 6C 04 00 00         MOV ECX,dword ptr [ESI + 0x46c]
004EA47C  85 C9                     TEST ECX,ECX
004EA47E  75 75                     JNZ 0x004ea4f5
004EA480  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004EA483  85 C0                     TEST EAX,EAX
004EA485  75 17                     JNZ 0x004ea49e
004EA487  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004EA48D  8D 45 0C                  LEA EAX,[EBP + 0xc]
004EA490  50                        PUSH EAX
004EA491  57                        PUSH EDI
004EA492  E8 39 BE 1F 00            CALL 0x006e62d0
004EA497  85 C0                     TEST EAX,EAX
004EA499  75 5A                     JNZ 0x004ea4f5
004EA49B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_004ea49e:
004EA49E  C7 86 6C 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x46c],0x1
004EA4A8  89 BE 70 04 00 00         MOV dword ptr [ESI + 0x470],EDI
004EA4AE  C7 86 8C 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x48c],0x0
004EA4B8  C7 86 94 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x494],0x0
004EA4C2  8B 88 B0 05 00 00         MOV ECX,dword ptr [EAX + 0x5b0]
004EA4C8  6A 00                     PUSH 0x0
004EA4CA  89 8E 74 04 00 00         MOV dword ptr [ESI + 0x474],ECX
004EA4D0  8B 90 B4 05 00 00         MOV EDX,dword ptr [EAX + 0x5b4]
004EA4D6  89 96 78 04 00 00         MOV dword ptr [ESI + 0x478],EDX
004EA4DC  8B 80 B8 05 00 00         MOV EAX,dword ptr [EAX + 0x5b8]
004EA4E2  89 86 7C 04 00 00         MOV dword ptr [ESI + 0x47c],EAX
004EA4E8  40                        INC EAX
004EA4E9  50                        PUSH EAX
004EA4EA  8B C2                     MOV EAX,EDX
004EA4EC  50                        PUSH EAX
004EA4ED  51                        PUSH ECX
004EA4EE  8B CE                     MOV ECX,ESI
004EA4F0  E8 35 AF F1 FF            CALL 0x0040542a
LAB_004ea4f5:
004EA4F5  5F                        POP EDI
004EA4F6  33 C0                     XOR EAX,EAX
004EA4F8  5E                        POP ESI
004EA4F9  5D                        POP EBP
004EA4FA  C2 08 00                  RET 0x8
