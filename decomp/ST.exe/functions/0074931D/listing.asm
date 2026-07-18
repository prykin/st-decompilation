FUN_0074931d:
0074931D  56                        PUSH ESI
0074931E  8B F1                     MOV ESI,ECX
00749320  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00749323  85 C0                     TEST EAX,EAX
00749325  74 10                     JZ 0x00749337
00749327  6A 00                     PUSH 0x0
00749329  50                        PUSH EAX
0074932A  FF 76 30                  PUSH dword ptr [ESI + 0x30]
0074932D  FF 15 94 BC 85 00         CALL dword ptr [0x0085bc94]
00749333  83 66 34 00               AND dword ptr [ESI + 0x34],0x0
LAB_00749337:
00749337  5E                        POP ESI
00749338  C3                        RET
