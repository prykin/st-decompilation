FUN_005ef6c0:
005EF6C0  55                        PUSH EBP
005EF6C1  8B EC                     MOV EBP,ESP
005EF6C3  51                        PUSH ECX
005EF6C4  56                        PUSH ESI
005EF6C5  57                        PUSH EDI
005EF6C6  8B F9                     MOV EDI,ECX
005EF6C8  33 F6                     XOR ESI,ESI
005EF6CA  66 8B 87 AB 02 00 00      MOV AX,word ptr [EDI + 0x2ab]
005EF6D1  66 85 C0                  TEST AX,AX
005EF6D4  74 28                     JZ 0x005ef6fe
005EF6D6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005EF6DC  6A 01                     PUSH 0x1
005EF6DE  50                        PUSH EAX
005EF6DF  8A 87 A3 02 00 00         MOV AL,byte ptr [EDI + 0x2a3]
005EF6E5  50                        PUSH EAX
005EF6E6  E8 CF 31 E1 FF            CALL 0x004028ba
005EF6EB  8B F0                     MOV ESI,EAX
005EF6ED  85 F6                     TEST ESI,ESI
005EF6EF  74 0D                     JZ 0x005ef6fe
005EF6F1  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005EF6F4  8B 87 A7 02 00 00         MOV EAX,dword ptr [EDI + 0x2a7]
005EF6FA  3B C8                     CMP ECX,EAX
005EF6FC  74 22                     JZ 0x005ef720
LAB_005ef6fe:
005EF6FE  8B 87 A7 02 00 00         MOV EAX,dword ptr [EDI + 0x2a7]
005EF704  85 C0                     TEST EAX,EAX
005EF706  74 18                     JZ 0x005ef720
005EF708  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005EF70E  8D 55 FC                  LEA EDX,[EBP + -0x4]
005EF711  52                        PUSH EDX
005EF712  50                        PUSH EAX
005EF713  E8 B8 6B 0F 00            CALL 0x006e62d0
005EF718  83 F8 FC                  CMP EAX,-0x4
005EF71B  74 03                     JZ 0x005ef720
005EF71D  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_005ef720:
005EF720  85 F6                     TEST ESI,ESI
005EF722  74 43                     JZ 0x005ef767
005EF724  83 7E 20 14               CMP dword ptr [ESI + 0x20],0x14
005EF728  75 3D                     JNZ 0x005ef767
005EF72A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005EF72D  48                        DEC EAX
005EF72E  74 2C                     JZ 0x005ef75c
005EF730  48                        DEC EAX
005EF731  74 16                     JZ 0x005ef749
005EF733  48                        DEC EAX
005EF734  75 31                     JNZ 0x005ef767
005EF736  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
005EF739  8B CE                     MOV ECX,ESI
005EF73B  50                        PUSH EAX
005EF73C  E8 23 41 E1 FF            CALL 0x00403864
005EF741  5F                        POP EDI
005EF742  5E                        POP ESI
005EF743  8B E5                     MOV ESP,EBP
005EF745  5D                        POP EBP
005EF746  C2 04 00                  RET 0x4
LAB_005ef749:
005EF749  8B 4F 18                  MOV ECX,dword ptr [EDI + 0x18]
005EF74C  51                        PUSH ECX
005EF74D  8B CE                     MOV ECX,ESI
005EF74F  E8 8F 5D E1 FF            CALL 0x004054e3
005EF754  5F                        POP EDI
005EF755  5E                        POP ESI
005EF756  8B E5                     MOV ESP,EBP
005EF758  5D                        POP EBP
005EF759  C2 04 00                  RET 0x4
LAB_005ef75c:
005EF75C  8B 57 18                  MOV EDX,dword ptr [EDI + 0x18]
005EF75F  8B CE                     MOV ECX,ESI
005EF761  52                        PUSH EDX
005EF762  E8 E3 1E E1 FF            CALL 0x0040164a
LAB_005ef767:
005EF767  5F                        POP EDI
005EF768  5E                        POP ESI
005EF769  8B E5                     MOV ESP,EBP
005EF76B  5D                        POP EBP
005EF76C  C2 04 00                  RET 0x4
