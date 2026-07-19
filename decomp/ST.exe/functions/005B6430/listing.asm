MMObjTy::GetMessage:
005B6430  55                        PUSH EBP
005B6431  8B EC                     MOV EBP,ESP
005B6433  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B6436  50                        PUSH EAX
005B6437  E8 94 FB 12 00            CALL 0x006e5fd0
005B643C  5D                        POP EBP
005B643D  C2 04 00                  RET 0x4
