FUN_004eaf60:
004EAF60  8B 89 D0 04 00 00         MOV ECX,dword ptr [ECX + 0x4d0]
004EAF66  33 C0                     XOR EAX,EAX
004EAF68  85 C9                     TEST ECX,ECX
004EAF6A  7C 0F                     JL 0x004eaf7b
004EAF6C  83 F9 02                  CMP ECX,0x2
004EAF6F  7E 05                     JLE 0x004eaf76
004EAF71  83 F9 03                  CMP ECX,0x3
004EAF74  75 05                     JNZ 0x004eaf7b
LAB_004eaf76:
004EAF76  B8 01 00 00 00            MOV EAX,0x1
LAB_004eaf7b:
004EAF7B  C3                        RET
