FUN_004dd800:
004DD800  55                        PUSH EBP
004DD801  8B EC                     MOV EBP,ESP
004DD803  56                        PUSH ESI
004DD804  8B F1                     MOV ESI,ECX
004DD806  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004DD809  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004DD80F  3B C1                     CMP EAX,ECX
004DD811  75 24                     JNZ 0x004dd837
004DD813  6A 00                     PUSH 0x0
004DD815  8B CE                     MOV ECX,ESI
004DD817  C7 86 D0 04 00 00 03 00 00 00  MOV dword ptr [ESI + 0x4d0],0x3
004DD821  E8 D1 54 F2 FF            CALL 0x00402cf7
004DD826  8B 16                     MOV EDX,dword ptr [ESI]
004DD828  68 16 04 00 00            PUSH 0x416
004DD82D  6A 03                     PUSH 0x3
004DD82F  8B CE                     MOV ECX,ESI
004DD831  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004dd837:
004DD837  33 C0                     XOR EAX,EAX
004DD839  5E                        POP ESI
004DD83A  5D                        POP EBP
004DD83B  C2 04 00                  RET 0x4
