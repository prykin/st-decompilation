FUN_004ea870:
004EA870  55                        PUSH EBP
004EA871  8B EC                     MOV EBP,ESP
004EA873  51                        PUSH ECX
004EA874  56                        PUSH ESI
004EA875  8B F1                     MOV ESI,ECX
004EA877  57                        PUSH EDI
004EA878  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004EA87E  85 C0                     TEST EAX,EAX
004EA880  0F 85 2E 01 00 00         JNZ 0x004ea9b4
004EA886  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004EA88B  8B 8E EC 04 00 00         MOV ECX,dword ptr [ESI + 0x4ec]
004EA891  83 C1 19                  ADD ECX,0x19
004EA894  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004EA89A  3B C1                     CMP EAX,ECX
004EA89C  0F 82 12 01 00 00         JC 0x004ea9b4
004EA8A2  6A 01                     PUSH 0x1
004EA8A4  6A 01                     PUSH 0x1
004EA8A6  6A 01                     PUSH 0x1
004EA8A8  6A 00                     PUSH 0x0
004EA8AA  6A 03                     PUSH 0x3
004EA8AC  8B CE                     MOV ECX,ESI
004EA8AE  89 86 EC 04 00 00         MOV dword ptr [ESI + 0x4ec],EAX
004EA8B4  E8 15 B2 F1 FF            CALL 0x00405ace
004EA8B9  85 C0                     TEST EAX,EAX
004EA8BB  0F 84 F3 00 00 00         JZ 0x004ea9b4
004EA8C1  6A 01                     PUSH 0x1
004EA8C3  6A 00                     PUSH 0x0
004EA8C5  6A 03                     PUSH 0x3
004EA8C7  8B CE                     MOV ECX,ESI
004EA8C9  E8 6F 7F F1 FF            CALL 0x0040283d
004EA8CE  85 C0                     TEST EAX,EAX
004EA8D0  0F 84 DE 00 00 00         JZ 0x004ea9b4
004EA8D6  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004EA8D9  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
004EA8DC  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
004EA8DF  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
004EA8E2  C1 E0 04                  SHL EAX,0x4
004EA8E5  03 C1                     ADD EAX,ECX
004EA8E7  D1 E0                     SHL EAX,0x1
004EA8E9  8B 88 F6 55 7F 00         MOV ECX,dword ptr [EAX + 0x7f55f6]
004EA8EF  85 C9                     TEST ECX,ECX
004EA8F1  0F 84 BD 00 00 00         JZ 0x004ea9b4
004EA8F7  8B 88 29 4E 7F 00         MOV ECX,dword ptr [EAX + 0x7f4e29]
004EA8FD  33 FF                     XOR EDI,EDI
004EA8FF  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004EA902  85 C0                     TEST EAX,EAX
004EA904  0F 86 AA 00 00 00         JBE 0x004ea9b4
LAB_004ea90a:
004EA90A  8D 55 FC                  LEA EDX,[EBP + -0x4]
004EA90D  52                        PUSH EDX
004EA90E  8B D7                     MOV EDX,EDI
004EA910  E8 5B 23 1C 00            CALL 0x006acc70
004EA915  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004EA918  85 C9                     TEST ECX,ECX
004EA91A  74 17                     JZ 0x004ea933
004EA91C  8B 01                     MOV EAX,dword ptr [ECX]
004EA91E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004EA921  83 F8 44                  CMP EAX,0x44
004EA924  75 0D                     JNZ 0x004ea933
004EA926  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004EA929  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004EA92F  85 C0                     TEST EAX,EAX
004EA931  75 26                     JNZ 0x004ea959
LAB_004ea933:
004EA933  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004EA936  47                        INC EDI
004EA937  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004EA93A  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004EA93D  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004EA940  C1 E2 04                  SHL EDX,0x4
004EA943  03 D0                     ADD EDX,EAX
004EA945  8B 0C 55 29 4E 7F 00      MOV ECX,dword ptr [EDX*0x2 + 0x7f4e29]
004EA94C  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004EA94F  72 B9                     JC 0x004ea90a
004EA951  5F                        POP EDI
004EA952  33 C0                     XOR EAX,EAX
004EA954  5E                        POP ESI
004EA955  8B E5                     MOV ESP,EBP
004EA957  5D                        POP EBP
004EA958  C3                        RET
LAB_004ea959:
004EA959  6A 01                     PUSH 0x1
004EA95B  6A 01                     PUSH 0x1
004EA95D  6A 01                     PUSH 0x1
004EA95F  6A 00                     PUSH 0x0
004EA961  6A 03                     PUSH 0x3
004EA963  8B CE                     MOV ECX,ESI
004EA965  E8 64 B1 F1 FF            CALL 0x00405ace
004EA96A  85 C0                     TEST EAX,EAX
004EA96C  74 3E                     JZ 0x004ea9ac
004EA96E  6A 01                     PUSH 0x1
004EA970  6A 00                     PUSH 0x0
004EA972  6A 03                     PUSH 0x3
004EA974  8B CE                     MOV ECX,ESI
004EA976  E8 C2 7E F1 FF            CALL 0x0040283d
004EA97B  85 C0                     TEST EAX,EAX
004EA97D  74 2D                     JZ 0x004ea9ac
004EA97F  6A 00                     PUSH 0x0
004EA981  68 FF 00 00 00            PUSH 0xff
004EA986  6A 00                     PUSH 0x0
004EA988  6A FF                     PUSH -0x1
004EA98A  6A 00                     PUSH 0x0
004EA98C  6A 01                     PUSH 0x1
004EA98E  6A 00                     PUSH 0x0
004EA990  6A 03                     PUSH 0x3
004EA992  8B CE                     MOV ECX,ESI
004EA994  E8 C0 AD F1 FF            CALL 0x00405759
004EA999  6A 00                     PUSH 0x0
004EA99B  8B CE                     MOV ECX,ESI
004EA99D  C7 86 D0 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d0],0x2
004EA9A7  E8 4B 83 F1 FF            CALL 0x00402cf7
LAB_004ea9ac:
004EA9AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004EA9AF  E8 94 A0 F1 FF            CALL 0x00404a48
LAB_004ea9b4:
004EA9B4  5F                        POP EDI
004EA9B5  33 C0                     XOR EAX,EAX
004EA9B7  5E                        POP ESI
004EA9B8  8B E5                     MOV ESP,EBP
004EA9BA  5D                        POP EBP
004EA9BB  C3                        RET
