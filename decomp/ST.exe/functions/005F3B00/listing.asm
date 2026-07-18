FUN_005f3b00:
005F3B00  8B 81 8F 00 00 00         MOV EAX,dword ptr [ECX + 0x8f]
005F3B06  85 C0                     TEST EAX,EAX
005F3B08  74 0C                     JZ 0x005f3b16
005F3B0A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005F3B10  50                        PUSH EAX
005F3B11  E8 8A 50 0F 00            CALL 0x006e8ba0
LAB_005f3b16:
005F3B16  C3                        RET
