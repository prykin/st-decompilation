FUN_005efbd0:
005EFBD0  55                        PUSH EBP
005EFBD1  8B EC                     MOV EBP,ESP
005EFBD3  56                        PUSH ESI
005EFBD4  8B F1                     MOV ESI,ECX
005EFBD6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005EFBD9  8B 86 A7 02 00 00         MOV EAX,dword ptr [ESI + 0x2a7]
005EFBDF  3B C1                     CMP EAX,ECX
005EFBE1  75 29                     JNZ 0x005efc0c
005EFBE3  0F BF 4D 18               MOVSX ECX,word ptr [EBP + 0x18]
005EFBE7  0F BF 45 14               MOVSX EAX,word ptr [EBP + 0x14]
005EFBEB  0F BF 55 10               MOVSX EDX,word ptr [EBP + 0x10]
005EFBEF  51                        PUSH ECX
005EFBF0  50                        PUSH EAX
005EFBF1  0F BF 4D 0C               MOVSX ECX,word ptr [EBP + 0xc]
005EFBF5  52                        PUSH EDX
005EFBF6  51                        PUSH ECX
005EFBF7  50                        PUSH EAX
005EFBF8  8B CE                     MOV ECX,ESI
005EFBFA  E8 F3 35 E1 FF            CALL 0x004031f2
005EFBFF  85 C0                     TEST EAX,EAX
005EFC01  75 09                     JNZ 0x005efc0c
005EFC03  6A 01                     PUSH 0x1
005EFC05  8B CE                     MOV ECX,ESI
005EFC07  E8 9B 35 E1 FF            CALL 0x004031a7
LAB_005efc0c:
005EFC0C  5E                        POP ESI
005EFC0D  5D                        POP EBP
005EFC0E  C2 14 00                  RET 0x14
