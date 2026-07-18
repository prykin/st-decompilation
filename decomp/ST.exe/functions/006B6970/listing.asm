FUN_006b6970:
006B6970  55                        PUSH EBP
006B6971  8B EC                     MOV EBP,ESP
006B6973  56                        PUSH ESI
006B6974  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B6977  56                        PUSH ESI
006B6978  E8 23 FD FF FF            CALL 0x006b66a0
006B697D  85 C0                     TEST EAX,EAX
006B697F  75 1C                     JNZ 0x006b699d
006B6981  56                        PUSH ESI
006B6982  E8 39 FF FF FF            CALL 0x006b68c0
006B6987  8B 06                     MOV EAX,dword ptr [ESI]
006B6989  6A 00                     PUSH 0x0
006B698B  6A 00                     PUSH 0x0
006B698D  6A 00                     PUSH 0x0
006B698F  8B 08                     MOV ECX,dword ptr [EAX]
006B6991  6A 00                     PUSH 0x0
006B6993  83 C6 38                  ADD ESI,0x38
006B6996  6A 00                     PUSH 0x0
006B6998  56                        PUSH ESI
006B6999  50                        PUSH EAX
006B699A  FF 51 18                  CALL dword ptr [ECX + 0x18]
LAB_006b699d:
006B699D  5E                        POP ESI
006B699E  5D                        POP EBP
006B699F  C2 04 00                  RET 0x4
