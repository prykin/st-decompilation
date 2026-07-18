FUN_006b7170:
006B7170  55                        PUSH EBP
006B7171  8B EC                     MOV EBP,ESP
006B7173  83 7D 0C 01               CMP dword ptr [EBP + 0xc],0x1
006B7177  75 05                     JNZ 0x006b717e
006B7179  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B717C  FF 00                     INC dword ptr [EAX]
LAB_006b717e:
006B717E  B8 01 00 00 00            MOV EAX,0x1
006B7183  5D                        POP EBP
006B7184  C2 14 00                  RET 0x14
