FUN_005fb600:
005FB600  8B 91 A0 02 00 00         MOV EDX,dword ptr [ECX + 0x2a0]
005FB606  33 C0                     XOR EAX,EAX
005FB608  83 FA 02                  CMP EDX,0x2
005FB60B  56                        PUSH ESI
005FB60C  7F 13                     JG 0x005fb621
005FB60E  BE 01 00 00 00            MOV ESI,0x1
005FB613  56                        PUSH ESI
005FB614  E8 30 84 E0 FF            CALL 0x00403a49
005FB619  85 C0                     TEST EAX,EAX
005FB61B  75 02                     JNZ 0x005fb61f
005FB61D  5E                        POP ESI
005FB61E  C3                        RET
LAB_005fb61f:
005FB61F  8B C6                     MOV EAX,ESI
LAB_005fb621:
005FB621  5E                        POP ESI
005FB622  C3                        RET
