FUN_004faff0:
004FAFF0  A1 84 87 80 00            MOV EAX,[0x00808784]
004FAFF5  85 C0                     TEST EAX,EAX
004FAFF7  75 44                     JNZ 0x004fb03d
004FAFF9  A1 88 87 80 00            MOV EAX,[0x00808788]
004FAFFE  85 C0                     TEST EAX,EAX
004FB000  75 3B                     JNZ 0x004fb03d
004FB002  A1 8C 87 80 00            MOV EAX,[0x0080878c]
004FB007  85 C0                     TEST EAX,EAX
004FB009  75 32                     JNZ 0x004fb03d
004FB00B  A1 90 87 80 00            MOV EAX,[0x00808790]
004FB010  85 C0                     TEST EAX,EAX
004FB012  75 29                     JNZ 0x004fb03d
004FB014  8B 91 37 02 00 00         MOV EDX,dword ptr [ECX + 0x237]
004FB01A  85 D2                     TEST EDX,EDX
004FB01C  7C 1F                     JL 0x004fb03d
004FB01E  8B 81 3B 02 00 00         MOV EAX,dword ptr [ECX + 0x23b]
004FB024  85 C0                     TEST EAX,EAX
004FB026  7C 15                     JL 0x004fb03d
004FB028  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
004FB02E  50                        PUSH EAX
004FB02F  33 C0                     XOR EAX,EAX
004FB031  52                        PUSH EDX
004FB032  A0 49 73 80 00            MOV AL,[0x00807349]
004FB037  50                        PUSH EAX
004FB038  E8 DC 64 F0 FF            CALL 0x00401519
LAB_004fb03d:
004FB03D  C3                        RET
