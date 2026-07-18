FUN_005f9f70:
005F9F70  56                        PUSH ESI
005F9F71  8B F1                     MOV ESI,ECX
005F9F73  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9F79  85 C0                     TEST EAX,EAX
005F9F7B  74 4E                     JZ 0x005f9fcb
005F9F7D  8B 08                     MOV ECX,dword ptr [EAX]
005F9F7F  85 C9                     TEST ECX,ECX
005F9F81  74 22                     JZ 0x005f9fa5
005F9F83  E8 4D 82 E0 FF            CALL 0x004021d5
005F9F88  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9F8E  8B 08                     MOV ECX,dword ptr [EAX]
005F9F90  51                        PUSH ECX
005F9F91  E8 1A 43 13 00            CALL 0x0072e2b0
005F9F96  8B 96 E6 02 00 00         MOV EDX,dword ptr [ESI + 0x2e6]
005F9F9C  83 C4 04                  ADD ESP,0x4
005F9F9F  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
LAB_005f9fa5:
005F9FA5  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9FAB  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
005F9FAE  85 C0                     TEST EAX,EAX
005F9FB0  7C 19                     JL 0x005f9fcb
005F9FB2  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005F9FB8  50                        PUSH EAX
005F9FB9  E8 E2 EB 0E 00            CALL 0x006e8ba0
005F9FBE  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005F9FC4  C7 41 04 FF FF FF FF      MOV dword ptr [ECX + 0x4],0xffffffff
LAB_005f9fcb:
005F9FCB  5E                        POP ESI
005F9FCC  C3                        RET
