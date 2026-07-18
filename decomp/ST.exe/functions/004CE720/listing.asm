FUN_004ce720:
004CE720  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004CE726  85 C0                     TEST EAX,EAX
004CE728  74 2A                     JZ 0x004ce754
004CE72A  8B 81 DC 04 00 00         MOV EAX,dword ptr [ECX + 0x4dc]
004CE730  85 C0                     TEST EAX,EAX
004CE732  74 20                     JZ 0x004ce754
004CE734  8B 81 E8 04 00 00         MOV EAX,dword ptr [ECX + 0x4e8]
004CE73A  8B 91 E4 04 00 00         MOV EDX,dword ptr [ECX + 0x4e4]
004CE740  50                        PUSH EAX
004CE741  8B 81 E0 04 00 00         MOV EAX,dword ptr [ECX + 0x4e0]
004CE747  8B 0D CC 0B 80 00         MOV ECX,dword ptr [0x00800bcc]
004CE74D  52                        PUSH EDX
004CE74E  50                        PUSH EAX
004CE74F  E8 80 36 F3 FF            CALL 0x00401dd4
LAB_004ce754:
004CE754  C3                        RET
