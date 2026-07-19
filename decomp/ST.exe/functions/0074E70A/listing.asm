FUN_0074e70a:
0074E70A  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E70E  8B 44 24 08               MOV EAX,dword ptr [ESP + 0x8]
0074E712  83 C0 10                  ADD EAX,0x10
0074E715  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E719  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074E71D  68 10 12 7A 00            PUSH 0x7a1210
0074E722  50                        PUSH EAX
0074E723  E8 0F FC FF FF            CALL 0x0074e337
0074E728  C2 10 00                  RET 0x10
