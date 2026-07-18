FUN_004dd460:
004DD460  8B D1                     MOV EDX,ECX
004DD462  57                        PUSH EDI
004DD463  B9 28 00 00 00            MOV ECX,0x28
004DD468  33 C0                     XOR EAX,EAX
004DD46A  8D BA E0 04 00 00         LEA EDI,[EDX + 0x4e0]
004DD470  C7 82 D0 04 00 00 00 00 00 00  MOV dword ptr [EDX + 0x4d0],0x0
004DD47A  C7 82 D4 04 00 00 00 00 00 00  MOV dword ptr [EDX + 0x4d4],0x0
004DD484  C7 82 D8 04 00 00 00 00 00 00  MOV dword ptr [EDX + 0x4d8],0x0
004DD48E  F3 AB                     STOSD.REP ES:EDI
004DD490  8B 82 31 02 00 00         MOV EAX,dword ptr [EDX + 0x231]
004DD496  5F                        POP EDI
004DD497  85 C0                     TEST EAX,EAX
004DD499  74 33                     JZ 0x004dd4ce
004DD49B  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
004DD4A1  85 C9                     TEST ECX,ECX
004DD4A3  74 29                     JZ 0x004dd4ce
004DD4A5  66 8B 42 32               MOV AX,word ptr [EDX + 0x32]
004DD4A9  6A 01                     PUSH 0x1
004DD4AB  50                        PUSH EAX
004DD4AC  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
004DD4AF  50                        PUSH EAX
004DD4B0  8B 82 B8 05 00 00         MOV EAX,dword ptr [EDX + 0x5b8]
004DD4B6  50                        PUSH EAX
004DD4B7  8B 82 B4 05 00 00         MOV EAX,dword ptr [EDX + 0x5b4]
004DD4BD  50                        PUSH EAX
004DD4BE  8B 82 B0 05 00 00         MOV EAX,dword ptr [EDX + 0x5b0]
004DD4C4  8B 52 24                  MOV EDX,dword ptr [EDX + 0x24]
004DD4C7  50                        PUSH EAX
004DD4C8  52                        PUSH EDX
004DD4C9  E8 5D 5B F2 FF            CALL 0x0040302b
LAB_004dd4ce:
004DD4CE  33 C0                     XOR EAX,EAX
004DD4D0  C3                        RET
