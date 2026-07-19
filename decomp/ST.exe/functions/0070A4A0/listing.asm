mfRLoadRefresh:
0070A4A0  55                        PUSH EBP
0070A4A1  8B EC                     MOV EBP,ESP
0070A4A3  83 EC 74                  SUB ESP,0x74
0070A4A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A4AB  53                        PUSH EBX
0070A4AC  56                        PUSH ESI
0070A4AD  57                        PUSH EDI
0070A4AE  8D 55 90                  LEA EDX,[EBP + -0x70]
0070A4B1  8D 4D 8C                  LEA ECX,[EBP + -0x74]
0070A4B4  6A 00                     PUSH 0x0
0070A4B6  52                        PUSH EDX
0070A4B7  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
0070A4BA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A4C0  E8 2B 33 02 00            CALL 0x0072d7f0
0070A4C5  8B F0                     MOV ESI,EAX
0070A4C7  83 C4 08                  ADD ESP,0x8
0070A4CA  85 F6                     TEST ESI,ESI
0070A4CC  0F 85 82 00 00 00         JNZ 0x0070a554
0070A4D2  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0070A4D5  85 FF                     TEST EDI,EDI
0070A4D7  74 67                     JZ 0x0070a540
0070A4D9  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0070A4DC  85 C9                     TEST ECX,ECX
0070A4DE  74 60                     JZ 0x0070a540
0070A4E0  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0070A4E3  85 C0                     TEST EAX,EAX
0070A4E5  76 59                     JBE 0x0070a540
0070A4E7  8A 5D 0C                  MOV BL,byte ptr [EBP + 0xc]
LAB_0070a4ea:
0070A4EA  8D 45 D0                  LEA EAX,[EBP + -0x30]
0070A4ED  8B D6                     MOV EDX,ESI
0070A4EF  50                        PUSH EAX
0070A4F0  E8 7B 27 FA FF            CALL 0x006acc70
0070A4F5  3A 5D D0                  CMP BL,byte ptr [EBP + -0x30]
0070A4F8  74 05                     JZ 0x0070a4ff
0070A4FA  80 FB FF                  CMP BL,0xff
0070A4FD  75 38                     JNZ 0x0070a537
LAB_0070a4ff:
0070A4FF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070A502  8D 55 D1                  LEA EDX,[EBP + -0x2f]
0070A505  51                        PUSH ECX
0070A506  52                        PUSH EDX
0070A507  E8 54 FF FF FF            CALL 0x0070a460
0070A50C  83 C4 08                  ADD ESP,0x8
0070A50F  85 C0                     TEST EAX,EAX
0070A511  74 24                     JZ 0x0070a537
0070A513  8B 45 F9                  MOV EAX,dword ptr [EBP + -0x7]
0070A516  85 C0                     TEST EAX,EAX
0070A518  74 11                     JZ 0x0070a52b
0070A51A  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0070A51D  8D 45 F9                  LEA EAX,[EBP + -0x7]
0070A520  50                        PUSH EAX
0070A521  51                        PUSH ECX
0070A522  57                        PUSH EDI
0070A523  E8 E8 F4 FF FF            CALL 0x00709a10
0070A528  83 C4 0C                  ADD ESP,0xc
LAB_0070a52b:
0070A52B  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
0070A52E  56                        PUSH ESI
0070A52F  52                        PUSH EDX
0070A530  E8 3B 67 FA FF            CALL 0x006b0c70
0070A535  EB 01                     JMP 0x0070a538
LAB_0070a537:
0070A537  46                        INC ESI
LAB_0070a538:
0070A538  8B 4F 04                  MOV ECX,dword ptr [EDI + 0x4]
0070A53B  3B 71 0C                  CMP ESI,dword ptr [ECX + 0xc]
0070A53E  72 AA                     JC 0x0070a4ea
LAB_0070a540:
0070A540  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0070A543  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A548  B8 01 00 00 00            MOV EAX,0x1
0070A54D  5F                        POP EDI
0070A54E  5E                        POP ESI
0070A54F  5B                        POP EBX
0070A550  8B E5                     MOV ESP,EBP
0070A552  5D                        POP EBP
0070A553  C3                        RET
LAB_0070a554:
0070A554  8B 4D 8C                  MOV ECX,dword ptr [EBP + -0x74]
0070A557  68 D0 FF 7E 00            PUSH 0x7effd0
0070A55C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A561  56                        PUSH ESI
0070A562  6A 00                     PUSH 0x0
0070A564  68 C1 01 00 00            PUSH 0x1c1
0070A569  68 5C FF 7E 00            PUSH 0x7eff5c
0070A56E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A574  E8 57 2F FA FF            CALL 0x006ad4d0
0070A579  83 C4 18                  ADD ESP,0x18
0070A57C  85 C0                     TEST EAX,EAX
0070A57E  74 01                     JZ 0x0070a581
0070A580  CC                        INT3
LAB_0070a581:
0070A581  68 C3 01 00 00            PUSH 0x1c3
0070A586  68 5C FF 7E 00            PUSH 0x7eff5c
0070A58B  6A 00                     PUSH 0x0
0070A58D  56                        PUSH ESI
0070A58E  E8 AD B8 F9 FF            CALL 0x006a5e40
0070A593  5F                        POP EDI
0070A594  5E                        POP ESI
0070A595  33 C0                     XOR EAX,EAX
0070A597  5B                        POP EBX
0070A598  8B E5                     MOV ESP,EBP
0070A59A  5D                        POP EBP
0070A59B  C3                        RET
