FUN_006827a0:
006827A0  E8 DA F5 D7 FF            CALL 0x00401d7f
006827A5  85 C0                     TEST EAX,EAX
006827A7  7D 17                     JGE 0x006827c0
006827A9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006827AF  68 B5 01 00 00            PUSH 0x1b5
006827B4  68 04 56 7D 00            PUSH 0x7d5604
006827B9  51                        PUSH ECX
006827BA  50                        PUSH EAX
006827BB  E8 80 36 02 00            CALL 0x006a5e40
LAB_006827c0:
006827C0  83 3D 18 2D 7D 00 1C      CMP dword ptr [0x007d2d18],0x1c
006827C7  75 18                     JNZ 0x006827e1
006827C9  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006827CF  68 B6 01 00 00            PUSH 0x1b6
006827D4  68 04 56 7D 00            PUSH 0x7d5604
006827D9  52                        PUSH EDX
006827DA  6A 91                     PUSH -0x6f
006827DC  E8 5F 36 02 00            CALL 0x006a5e40
LAB_006827e1:
006827E1  83 3D 18 2D 7D 00 1D      CMP dword ptr [0x007d2d18],0x1d
006827E8  74 B6                     JZ 0x006827a0
006827EA  C3                        RET
