FUN_0064e260:
0064E260  55                        PUSH EBP
0064E261  8B EC                     MOV EBP,ESP
0064E263  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0064E266  33 C0                     XOR EAX,EAX
0064E268  8B 11                     MOV EDX,dword ptr [ECX]
0064E26A  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064E26D  83 FA 05                  CMP EDX,0x5
0064E270  0F 94 C0                  SETZ AL
0064E273  50                        PUSH EAX
0064E274  E8 B7 57 DB FF            CALL 0x00403a30
0064E279  33 C0                     XOR EAX,EAX
0064E27B  5D                        POP EBP
0064E27C  C3                        RET
