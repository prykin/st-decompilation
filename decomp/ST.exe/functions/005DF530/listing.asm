FUN_005df530:
005DF530  55                        PUSH EBP
005DF531  8B EC                     MOV EBP,ESP
005DF533  83 EC 48                  SUB ESP,0x48
005DF536  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005DF539  56                        PUSH ESI
005DF53A  85 C0                     TEST EAX,EAX
005DF53C  0F 84 B5 00 00 00         JZ 0x005df5f7
005DF542  8B 08                     MOV ECX,dword ptr [EAX]
005DF544  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005DF547  85 C9                     TEST ECX,ECX
005DF549  0F 84 A8 00 00 00         JZ 0x005df5f7
005DF54F  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005DF552  85 C9                     TEST ECX,ECX
005DF554  0F 84 9D 00 00 00         JZ 0x005df5f7
005DF55A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005DF55F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005DF562  8D 4D B8                  LEA ECX,[EBP + -0x48]
005DF565  6A 00                     PUSH 0x0
005DF567  52                        PUSH EDX
005DF568  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005DF56B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005DF571  E8 7A E2 14 00            CALL 0x0072d7f0
005DF576  8B F0                     MOV ESI,EAX
005DF578  83 C4 08                  ADD ESP,0x8
005DF57B  85 F6                     TEST ESI,ESI
005DF57D  75 40                     JNZ 0x005df5bf
005DF57F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005DF582  68 FF 00 00 01            PUSH 0x10000ff
005DF587  68 00 00 00 01            PUSH 0x1000000
005DF58C  8B 01                     MOV EAX,dword ptr [ECX]
005DF58E  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
005DF591  51                        PUSH ECX
005DF592  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
005DF595  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005DF598  52                        PUSH EDX
005DF599  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005DF59C  51                        PUSH ECX
005DF59D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DF5A0  56                        PUSH ESI
005DF5A1  56                        PUSH ESI
005DF5A2  56                        PUSH ESI
005DF5A3  50                        PUSH EAX
005DF5A4  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005DF5A7  52                        PUSH EDX
005DF5A8  50                        PUSH EAX
005DF5A9  51                        PUSH ECX
005DF5AA  E8 31 53 0D 00            CALL 0x006b48e0
005DF5AF  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005DF5B2  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005DF5B8  5E                        POP ESI
005DF5B9  8B E5                     MOV ESP,EBP
005DF5BB  5D                        POP EBP
005DF5BC  C2 20 00                  RET 0x20
LAB_005df5bf:
005DF5BF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005DF5C2  68 BC D9 7C 00            PUSH 0x7cd9bc
005DF5C7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005DF5CC  56                        PUSH ESI
005DF5CD  6A 00                     PUSH 0x0
005DF5CF  6A 27                     PUSH 0x27
005DF5D1  68 94 D9 7C 00            PUSH 0x7cd994
005DF5D6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005DF5DB  E8 F0 DE 0C 00            CALL 0x006ad4d0
005DF5E0  83 C4 18                  ADD ESP,0x18
005DF5E3  85 C0                     TEST EAX,EAX
005DF5E5  74 01                     JZ 0x005df5e8
005DF5E7  CC                        INT3
LAB_005df5e8:
005DF5E8  6A 27                     PUSH 0x27
005DF5EA  68 94 D9 7C 00            PUSH 0x7cd994
005DF5EF  6A 00                     PUSH 0x0
005DF5F1  56                        PUSH ESI
005DF5F2  E8 49 68 0C 00            CALL 0x006a5e40
LAB_005df5f7:
005DF5F7  5E                        POP ESI
005DF5F8  8B E5                     MOV ESP,EBP
005DF5FA  5D                        POP EBP
005DF5FB  C2 20 00                  RET 0x20
