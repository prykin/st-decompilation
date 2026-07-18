FUN_004ea6e0:
004EA6E0  55                        PUSH EBP
004EA6E1  8B EC                     MOV EBP,ESP
004EA6E3  A0 4D 87 80 00            MOV AL,[0x0080874d]
004EA6E8  56                        PUSH ESI
004EA6E9  8B F1                     MOV ESI,ECX
004EA6EB  50                        PUSH EAX
004EA6EC  E8 C6 A2 F1 FF            CALL 0x004049b7
004EA6F1  25 FF 00 00 00            AND EAX,0xff
004EA6F6  48                        DEC EAX
004EA6F7  74 39                     JZ 0x004ea732
004EA6F9  48                        DEC EAX
004EA6FA  74 1B                     JZ 0x004ea717
004EA6FC  48                        DEC EAX
004EA6FD  75 6B                     JNZ 0x004ea76a
004EA6FF  33 C9                     XOR ECX,ECX
004EA701  6A 4D                     PUSH 0x4d
004EA703  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
004EA709  51                        PUSH ECX
004EA70A  8B CE                     MOV ECX,ESI
004EA70C  E8 5A 71 F1 FF            CALL 0x0040186b
004EA711  85 C0                     TEST EAX,EAX
004EA713  74 55                     JZ 0x004ea76a
004EA715  EB 30                     JMP 0x004ea747
LAB_004ea717:
004EA717  33 D2                     XOR EDX,EDX
004EA719  68 8F 00 00 00            PUSH 0x8f
004EA71E  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
004EA724  8B CE                     MOV ECX,ESI
004EA726  52                        PUSH EDX
004EA727  E8 3F 71 F1 FF            CALL 0x0040186b
004EA72C  85 C0                     TEST EAX,EAX
004EA72E  74 3A                     JZ 0x004ea76a
004EA730  EB 15                     JMP 0x004ea747
LAB_004ea732:
004EA732  33 C0                     XOR EAX,EAX
004EA734  6A 40                     PUSH 0x40
004EA736  A0 4D 87 80 00            MOV AL,[0x0080874d]
004EA73B  8B CE                     MOV ECX,ESI
004EA73D  50                        PUSH EAX
004EA73E  E8 28 71 F1 FF            CALL 0x0040186b
004EA743  85 C0                     TEST EAX,EAX
004EA745  74 23                     JZ 0x004ea76a
LAB_004ea747:
004EA747  8B 0D 98 17 81 00         MOV ECX,dword ptr [0x00811798]
004EA74D  85 C9                     TEST ECX,ECX
004EA74F  74 19                     JZ 0x004ea76a
004EA751  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004EA754  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004EA757  52                        PUSH EDX
004EA758  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004EA75B  50                        PUSH EAX
004EA75C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004EA75F  52                        PUSH EDX
004EA760  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004EA763  50                        PUSH EAX
004EA764  52                        PUSH EDX
004EA765  E8 C2 96 F1 FF            CALL 0x00403e2c
LAB_004ea76a:
004EA76A  5E                        POP ESI
004EA76B  5D                        POP EBP
004EA76C  C2 14 00                  RET 0x14
