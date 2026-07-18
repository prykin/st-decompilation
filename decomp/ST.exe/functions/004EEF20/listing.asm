FUN_004eef20:
004EEF20  56                        PUSH ESI
004EEF21  8B F1                     MOV ESI,ECX
004EEF23  57                        PUSH EDI
004EEF24  8B 86 8A 02 00 00         MOV EAX,dword ptr [ESI + 0x28a]
004EEF2A  85 C0                     TEST EAX,EAX
004EEF2C  74 13                     JZ 0x004eef41
004EEF2E  50                        PUSH EAX
004EEF2F  E8 2C 16 22 00            CALL 0x00710560
004EEF34  83 C4 04                  ADD ESP,0x4
004EEF37  C7 86 8A 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x28a],0x0
LAB_004eef41:
004EEF41  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
004EEF47  85 C0                     TEST EAX,EAX
004EEF49  74 09                     JZ 0x004eef54
004EEF4B  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004EEF4E  50                        PUSH EAX
004EEF4F  E8 5C 67 1F 00            CALL 0x006e56b0
LAB_004eef54:
004EEF54  C7 86 92 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x292],0x0
004EEF5E  81 C6 7A 02 00 00         ADD ESI,0x27a
004EEF64  BF 04 00 00 00            MOV EDI,0x4
LAB_004eef69:
004EEF69  8B 06                     MOV EAX,dword ptr [ESI]
004EEF6B  85 C0                     TEST EAX,EAX
004EEF6D  74 0C                     JZ 0x004eef7b
004EEF6F  50                        PUSH EAX
004EEF70  E8 9B F1 1B 00            CALL 0x006ae110
004EEF75  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_004eef7b:
004EEF7B  83 C6 04                  ADD ESI,0x4
004EEF7E  4F                        DEC EDI
004EEF7F  75 E8                     JNZ 0x004eef69
004EEF81  5F                        POP EDI
004EEF82  C7 05 7C 16 80 00 00 00 00 00  MOV dword ptr [0x0080167c],0x0
004EEF8C  5E                        POP ESI
004EEF8D  C3                        RET
