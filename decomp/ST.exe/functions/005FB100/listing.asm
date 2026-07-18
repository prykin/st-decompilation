FUN_005fb100:
005FB100  56                        PUSH ESI
005FB101  8B F1                     MOV ESI,ECX
005FB103  6A 00                     PUSH 0x0
005FB105  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
005FB109  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
005FB10D  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
005FB111  50                        PUSH EAX
005FB112  51                        PUSH ECX
005FB113  52                        PUSH EDX
005FB114  6A 00                     PUSH 0x0
005FB116  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005FB11C  E8 AB A1 E0 FF            CALL 0x004052cc
005FB121  50                        PUSH EAX
005FB122  E8 7E A0 E0 FF            CALL 0x004051a5
005FB127  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FB12C  83 C4 18                  ADD ESP,0x18
005FB12F  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005FB135  C7 86 DD 02 00 00 07 00 00 00  MOV dword ptr [ESI + 0x2dd],0x7
005FB13F  83 C1 15                  ADD ECX,0x15
005FB142  89 8E E1 02 00 00         MOV dword ptr [ESI + 0x2e1],ECX
005FB148  5E                        POP ESI
005FB149  C3                        RET
