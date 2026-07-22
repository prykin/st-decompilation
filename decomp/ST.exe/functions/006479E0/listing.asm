STVolcanoC::sub_006479E0:
006479E0  56                        PUSH ESI
006479E1  8B F1                     MOV ESI,ECX
006479E3  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
006479E6  85 C0                     TEST EAX,EAX
006479E8  7C 13                     JL 0x006479fd
006479EA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006479F0  50                        PUSH EAX
006479F1  E8 AA 11 0A 00            CALL 0x006e8ba0
006479F6  C7 46 5D FF FF FF FF      MOV dword ptr [ESI + 0x5d],0xffffffff
LAB_006479fd:
006479FD  8B 46 7A                  MOV EAX,dword ptr [ESI + 0x7a]
00647A00  85 C0                     TEST EAX,EAX
00647A02  7C 13                     JL 0x00647a17
00647A04  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647A0A  50                        PUSH EAX
00647A0B  E8 90 11 0A 00            CALL 0x006e8ba0
00647A10  C7 46 7A FF FF FF FF      MOV dword ptr [ESI + 0x7a],0xffffffff
LAB_00647a17:
00647A17  8B 86 86 00 00 00         MOV EAX,dword ptr [ESI + 0x86]
00647A1D  85 C0                     TEST EAX,EAX
00647A1F  7C 16                     JL 0x00647a37
00647A21  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647A27  50                        PUSH EAX
00647A28  E8 73 11 0A 00            CALL 0x006e8ba0
00647A2D  C7 86 86 00 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x86],0xffffffff
LAB_00647a37:
00647A37  5E                        POP ESI
00647A38  C3                        RET
