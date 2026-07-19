StartSystemTy::CreateSystemObjects:
005DCD90  8B 01                     MOV EAX,dword ptr [ECX]
005DCD92  6A 00                     PUSH 0x0
005DCD94  68 03 03 00 00            PUSH 0x303
005DCD99  FF 50 10                  CALL dword ptr [EAX + 0x10]
005DCD9C  33 C0                     XOR EAX,EAX
005DCD9E  C3                        RET
