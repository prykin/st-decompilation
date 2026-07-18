FUN_00748339:
00748339  8B 01                     MOV EAX,dword ptr [ECX]
0074833B  8D 91 98 00 00 00         LEA EDX,[ECX + 0x98]
00748341  52                        PUSH EDX
00748342  FF B1 9C 00 00 00         PUSH dword ptr [ECX + 0x9c]
00748348  FF 50 38                  CALL dword ptr [EAX + 0x38]
0074834B  C2 04 00                  RET 0x4
