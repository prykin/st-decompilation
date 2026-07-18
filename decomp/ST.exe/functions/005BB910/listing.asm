FUN_005bb910:
005BB910  55                        PUSH EBP
005BB911  8B EC                     MOV EBP,ESP
005BB913  83 EC 48                  SUB ESP,0x48
005BB916  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005BB91B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005BB91E  56                        PUSH ESI
005BB91F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005BB922  8D 4D B8                  LEA ECX,[EBP + -0x48]
005BB925  6A 00                     PUSH 0x0
005BB927  52                        PUSH EDX
005BB928  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005BB92B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BB931  E8 BA 1E 17 00            CALL 0x0072d7f0
005BB936  8B F0                     MOV ESI,EAX
005BB938  83 C4 08                  ADD ESP,0x8
005BB93B  85 F6                     TEST ESI,ESI
005BB93D  75 36                     JNZ 0x005bb975
005BB93F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005BB942  8B CE                     MOV ECX,ESI
005BB944  E8 10 7B E4 FF            CALL 0x00403459
005BB949  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005BB94C  8B CE                     MOV ECX,ESI
005BB94E  50                        PUSH EAX
005BB94F  E8 A3 78 E4 FF            CALL 0x004031f7
005BB954  6A FF                     PUSH -0x1
005BB956  6A 01                     PUSH 0x1
005BB958  6A 0C                     PUSH 0xc
005BB95A  8B CE                     MOV ECX,ESI
005BB95C  C6 46 65 04               MOV byte ptr [ESI + 0x65],0x4
005BB960  E8 8C 92 E4 FF            CALL 0x00404bf1
005BB965  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005BB968  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005BB96E  5E                        POP ESI
005BB96F  8B E5                     MOV ESP,EBP
005BB971  5D                        POP EBP
005BB972  C2 04 00                  RET 0x4
LAB_005bb975:
005BB975  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005BB978  68 4C CE 7C 00            PUSH 0x7cce4c
005BB97D  68 CC 4C 7A 00            PUSH 0x7a4ccc
005BB982  56                        PUSH ESI
005BB983  6A 00                     PUSH 0x0
005BB985  68 C7 01 00 00            PUSH 0x1c7
005BB98A  68 28 CD 7C 00            PUSH 0x7ccd28
005BB98F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005BB995  E8 36 1B 0F 00            CALL 0x006ad4d0
005BB99A  83 C4 18                  ADD ESP,0x18
005BB99D  85 C0                     TEST EAX,EAX
005BB99F  74 01                     JZ 0x005bb9a2
005BB9A1  CC                        INT3
LAB_005bb9a2:
005BB9A2  68 C7 01 00 00            PUSH 0x1c7
005BB9A7  68 28 CD 7C 00            PUSH 0x7ccd28
005BB9AC  6A 00                     PUSH 0x0
005BB9AE  56                        PUSH ESI
005BB9AF  E8 8C A4 0E 00            CALL 0x006a5e40
005BB9B4  5E                        POP ESI
005BB9B5  8B E5                     MOV ESP,EBP
005BB9B7  5D                        POP EBP
005BB9B8  C2 04 00                  RET 0x4
