FUN_004dd500:
004DD500  8B C1                     MOV EAX,ECX
004DD502  8B 88 31 02 00 00         MOV ECX,dword ptr [EAX + 0x231]
004DD508  85 C9                     TEST ECX,ECX
004DD50A  75 33                     JNZ 0x004dd53f
004DD50C  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
004DD512  85 C9                     TEST ECX,ECX
004DD514  74 29                     JZ 0x004dd53f
004DD516  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
004DD51A  6A 01                     PUSH 0x1
004DD51C  52                        PUSH EDX
004DD51D  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
004DD520  52                        PUSH EDX
004DD521  8B 90 B8 05 00 00         MOV EDX,dword ptr [EAX + 0x5b8]
004DD527  52                        PUSH EDX
004DD528  8B 90 B4 05 00 00         MOV EDX,dword ptr [EAX + 0x5b4]
004DD52E  52                        PUSH EDX
004DD52F  8B 90 B0 05 00 00         MOV EDX,dword ptr [EAX + 0x5b0]
004DD535  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
004DD538  52                        PUSH EDX
004DD539  50                        PUSH EAX
004DD53A  E8 EC 5A F2 FF            CALL 0x0040302b
LAB_004dd53f:
004DD53F  33 C0                     XOR EAX,EAX
004DD541  C3                        RET
