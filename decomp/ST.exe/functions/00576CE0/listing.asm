DestroyBaseSystem:
00576CE0  55                        PUSH EBP
00576CE1  8B EC                     MOV EBP,ESP
00576CE3  83 EC 44                  SUB ESP,0x44
00576CE6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00576CEB  56                        PUSH ESI
00576CEC  8D 55 C0                  LEA EDX,[EBP + -0x40]
00576CEF  8D 4D BC                  LEA ECX,[EBP + -0x44]
00576CF2  6A 00                     PUSH 0x0
00576CF4  52                        PUSH EDX
00576CF5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00576CF8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00576CFE  E8 ED 6A 1B 00            CALL 0x0072d7f0
00576D03  8B F0                     MOV ESI,EAX
00576D05  83 C4 08                  ADD ESP,0x8
00576D08  85 F6                     TEST ESI,ESI
00576D0A  75 4D                     JNZ 0x00576d59
00576D0C  8B 0D 38 16 81 00         MOV ECX,dword ptr [0x00811638]
00576D12  85 C9                     TEST ECX,ECX
00576D14  74 35                     JZ 0x00576d4b
00576D16  83 79 20 01               CMP dword ptr [ECX + 0x20],0x1
00576D1A  75 11                     JNZ 0x00576d2d
00576D1C  51                        PUSH ECX
00576D1D  B9 20 76 80 00            MOV ECX,0x807620
00576D22  E8 59 DE 16 00            CALL 0x006e4b80
00576D27  8B 0D 38 16 81 00         MOV ECX,dword ptr [0x00811638]
LAB_00576d2d:
00576D2D  8B 01                     MOV EAX,dword ptr [ECX]
00576D2F  FF 50 04                  CALL dword ptr [EAX + 0x4]
00576D32  8B 0D 38 16 81 00         MOV ECX,dword ptr [0x00811638]
00576D38  51                        PUSH ECX
00576D39  E8 72 75 1B 00            CALL 0x0072e2b0
00576D3E  83 C4 04                  ADD ESP,0x4
00576D41  C7 05 38 16 81 00 00 00 00 00  MOV dword ptr [0x00811638],0x0
LAB_00576d4b:
00576D4B  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00576D4E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00576D54  5E                        POP ESI
00576D55  8B E5                     MOV ESP,EBP
00576D57  5D                        POP EBP
00576D58  C3                        RET
LAB_00576d59:
00576D59  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00576D5C  68 B4 AB 7C 00            PUSH 0x7cabb4
00576D61  68 CC 4C 7A 00            PUSH 0x7a4ccc
00576D66  56                        PUSH ESI
00576D67  6A 00                     PUSH 0x0
00576D69  6A 4F                     PUSH 0x4f
00576D6B  68 5C AB 7C 00            PUSH 0x7cab5c
00576D70  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00576D75  E8 56 67 13 00            CALL 0x006ad4d0
00576D7A  83 C4 18                  ADD ESP,0x18
00576D7D  85 C0                     TEST EAX,EAX
00576D7F  74 01                     JZ 0x00576d82
00576D81  CC                        INT3
LAB_00576d82:
00576D82  6A 50                     PUSH 0x50
00576D84  68 5C AB 7C 00            PUSH 0x7cab5c
00576D89  6A 00                     PUSH 0x0
00576D8B  56                        PUSH ESI
00576D8C  E8 AF F0 12 00            CALL 0x006a5e40
00576D91  5E                        POP ESI
00576D92  8B E5                     MOV ESP,EBP
00576D94  5D                        POP EBP
00576D95  C3                        RET
