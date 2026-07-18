FUN_005dcc10:
005DCC10  55                        PUSH EBP
005DCC11  8B EC                     MOV EBP,ESP
005DCC13  81 EC 8C 00 00 00         SUB ESP,0x8c
005DCC19  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DCC1E  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005DCC21  56                        PUSH ESI
005DCC22  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DCC25  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DCC28  6A 00                     PUSH 0x0
005DCC2A  52                        PUSH EDX
005DCC2B  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DCC2E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DCC34  E8 B7 0B 15 00            CALL 0x0072d7f0
005DCC39  8B F0                     MOV ESI,EAX
005DCC3B  83 C4 08                  ADD ESP,0x8
005DCC3E  85 F6                     TEST ESI,ESI
005DCC40  0F 85 AA 00 00 00         JNZ 0x005dccf0
005DCC46  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DCC49  8B CE                     MOV ECX,ESI
005DCC4B  E8 A0 85 10 00            CALL 0x006e51f0
005DCC50  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
005DCC53  85 C0                     TEST EAX,EAX
005DCC55  74 7B                     JZ 0x005dccd2
005DCC57  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DCC5C  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
005DCC62  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
005DCC68  6A 00                     PUSH 0x0
005DCC6A  52                        PUSH EDX
005DCC6B  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
005DCC71  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DCC77  E8 74 0B 15 00            CALL 0x0072d7f0
005DCC7C  83 C4 08                  ADD ESP,0x8
005DCC7F  85 C0                     TEST EAX,EAX
005DCC81  75 39                     JNZ 0x005dccbc
005DCC83  50                        PUSH EAX
005DCC84  6A 02                     PUSH 0x2
005DCC86  68 38 C9 7C 00            PUSH 0x7cc938
005DCC8B  E8 70 5F 11 00            CALL 0x006f2c00
005DCC90  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005DCC96  83 C4 0C                  ADD ESP,0xc
005DCC99  50                        PUSH EAX
005DCC9A  6A 00                     PUSH 0x0
005DCC9C  E8 1F 55 11 00            CALL 0x006f21c0
005DCCA1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DCCA4  85 C0                     TEST EAX,EAX
005DCCA6  74 07                     JZ 0x005dccaf
005DCCA8  C7 46 28 00 00 00 00      MOV dword ptr [ESI + 0x28],0x0
LAB_005dccaf:
005DCCAF  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
005DCCB5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DCCBA  EB 16                     JMP 0x005dccd2
LAB_005dccbc:
005DCCBC  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
005DCCC2  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005DCCC5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DCCCB  C7 46 28 00 00 00 00      MOV dword ptr [ESI + 0x28],0x0
LAB_005dccd2:
005DCCD2  8B CE                     MOV ECX,ESI
005DCCD4  E8 A4 89 E2 FF            CALL 0x0040567d
005DCCD9  8B CE                     MOV ECX,ESI
005DCCDB  E8 26 5B E2 FF            CALL 0x00402806
005DCCE0  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005DCCE3  33 C0                     XOR EAX,EAX
005DCCE5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DCCEB  5E                        POP ESI
005DCCEC  8B E5                     MOV ESP,EBP
005DCCEE  5D                        POP EBP
005DCCEF  C3                        RET
LAB_005dccf0:
005DCCF0  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005DCCF3  68 2C D8 7C 00            PUSH 0x7cd82c
005DCCF8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DCCFD  56                        PUSH ESI
005DCCFE  6A 00                     PUSH 0x0
005DCD00  68 83 02 00 00            PUSH 0x283
005DCD05  68 18 D7 7C 00            PUSH 0x7cd718
005DCD0A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DCD0F  E8 BC 07 0D 00            CALL 0x006ad4d0
005DCD14  83 C4 18                  ADD ESP,0x18
005DCD17  85 C0                     TEST EAX,EAX
005DCD19  74 01                     JZ 0x005dcd1c
005DCD1B  CC                        INT3
LAB_005dcd1c:
005DCD1C  68 83 02 00 00            PUSH 0x283
005DCD21  68 18 D7 7C 00            PUSH 0x7cd718
005DCD26  6A 00                     PUSH 0x0
005DCD28  56                        PUSH ESI
005DCD29  E8 12 91 0C 00            CALL 0x006a5e40
005DCD2E  B8 FC FF FF FF            MOV EAX,0xfffffffc
005DCD33  5E                        POP ESI
005DCD34  8B E5                     MOV ESP,EBP
005DCD36  5D                        POP EBP
005DCD37  C3                        RET
