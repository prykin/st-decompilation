FUN_004dd690:
004DD690  8B C1                     MOV EAX,ECX
004DD692  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
004DD698  85 C9                     TEST ECX,ECX
004DD69A  74 0D                     JZ 0x004dd6a9
004DD69C  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
004DD69F  8B 40 24                  MOV EAX,dword ptr [EAX + 0x24]
004DD6A2  52                        PUSH EDX
004DD6A3  50                        PUSH EAX
004DD6A4  E8 85 47 F2 FF            CALL 0x00401e2e
LAB_004dd6a9:
004DD6A9  33 C0                     XOR EAX,EAX
004DD6AB  C3                        RET
