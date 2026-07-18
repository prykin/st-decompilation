FUN_006bbf50:
006BBF50  55                        PUSH EBP
006BBF51  8B EC                     MOV EBP,ESP
006BBF53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BBF56  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BBF59  F6 C5 04                  TEST CH,0x4
006BBF5C  74 35                     JZ 0x006bbf93
006BBF5E  8B 40 34                  MOV EAX,dword ptr [EAX + 0x34]
006BBF61  8D 55 08                  LEA EDX,[EBP + 0x8]
006BBF64  52                        PUSH EDX
006BBF65  68 78 FC 79 00            PUSH 0x79fc78
006BBF6A  8B 08                     MOV ECX,dword ptr [EAX]
006BBF6C  50                        PUSH EAX
006BBF6D  FF 11                     CALL dword ptr [ECX]
006BBF6F  85 C0                     TEST EAX,EAX
006BBF71  75 20                     JNZ 0x006bbf93
006BBF73  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BBF76  85 C0                     TEST EAX,EAX
006BBF78  74 19                     JZ 0x006bbf93
006BBF7A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006BBF7D  8B 08                     MOV ECX,dword ptr [EAX]
006BBF7F  52                        PUSH EDX
006BBF80  6A 01                     PUSH 0x1
006BBF82  50                        PUSH EAX
006BBF83  FF 51 10                  CALL dword ptr [ECX + 0x10]
006BBF86  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BBF89  85 C0                     TEST EAX,EAX
006BBF8B  74 06                     JZ 0x006bbf93
006BBF8D  8B 08                     MOV ECX,dword ptr [EAX]
006BBF8F  50                        PUSH EAX
006BBF90  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_006bbf93:
006BBF93  5D                        POP EBP
006BBF94  C2 08 00                  RET 0x8
