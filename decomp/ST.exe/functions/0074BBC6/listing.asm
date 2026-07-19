FUN_0074bbc6:
0074BBC6  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
0074BBCA  53                        PUSH EBX
0074BBCB  55                        PUSH EBP
0074BBCC  56                        PUSH ESI
0074BBCD  57                        PUSH EDI
0074BBCE  8B D1                     MOV EDX,ECX
0074BBD0  6A 10                     PUSH 0x10
0074BBD2  BB 68 E3 79 00            MOV EBX,0x79e368
0074BBD7  59                        POP ECX
0074BBD8  8B FB                     MOV EDI,EBX
0074BBDA  8B F0                     MOV ESI,EAX
0074BBDC  33 ED                     XOR EBP,EBP
0074BBDE  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BBE0  74 0D                     JZ 0x0074bbef
0074BBE2  6A 10                     PUSH 0x10
0074BBE4  8B F8                     MOV EDI,EAX
0074BBE6  59                        POP ECX
0074BBE7  8B F2                     MOV ESI,EDX
0074BBE9  33 ED                     XOR EBP,EBP
0074BBEB  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BBED  75 53                     JNZ 0x0074bc42
LAB_0074bbef:
0074BBEF  6A 10                     PUSH 0x10
0074BBF1  8D 70 10                  LEA ESI,[EAX + 0x10]
0074BBF4  59                        POP ECX
0074BBF5  8B FB                     MOV EDI,EBX
0074BBF7  33 ED                     XOR EBP,EBP
0074BBF9  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BBFB  74 0F                     JZ 0x0074bc0c
0074BBFD  6A 10                     PUSH 0x10
0074BBFF  8D 78 10                  LEA EDI,[EAX + 0x10]
0074BC02  59                        POP ECX
0074BC03  8D 72 10                  LEA ESI,[EDX + 0x10]
0074BC06  33 ED                     XOR EBP,EBP
0074BC08  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BC0A  75 36                     JNZ 0x0074bc42
LAB_0074bc0c:
0074BC0C  8D 68 2C                  LEA EBP,[EAX + 0x2c]
0074BC0F  6A 10                     PUSH 0x10
0074BC11  8B FB                     MOV EDI,EBX
0074BC13  59                        POP ECX
0074BC14  8B F5                     MOV ESI,EBP
0074BC16  33 DB                     XOR EBX,EBX
0074BC18  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BC1A  74 2A                     JZ 0x0074bc46
0074BC1C  6A 10                     PUSH 0x10
0074BC1E  8B FD                     MOV EDI,EBP
0074BC20  59                        POP ECX
0074BC21  8D 72 2C                  LEA ESI,[EDX + 0x2c]
0074BC24  33 DB                     XOR EBX,EBX
0074BC26  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BC28  75 18                     JNZ 0x0074bc42
0074BC2A  8B 4A 40                  MOV ECX,dword ptr [EDX + 0x40]
0074BC2D  3B 48 40                  CMP ECX,dword ptr [EAX + 0x40]
0074BC30  75 10                     JNZ 0x0074bc42
0074BC32  85 C9                     TEST ECX,ECX
0074BC34  74 10                     JZ 0x0074bc46
0074BC36  8B 78 44                  MOV EDI,dword ptr [EAX + 0x44]
0074BC39  8B 72 44                  MOV ESI,dword ptr [EDX + 0x44]
0074BC3C  33 C0                     XOR EAX,EAX
0074BC3E  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074BC40  74 04                     JZ 0x0074bc46
FUN_0074bbc6::cf_common_exit_0074BC42:
0074BC42  33 C0                     XOR EAX,EAX
0074BC44  EB 03                     JMP 0x0074bc49
LAB_0074bc46:
0074BC46  6A 01                     PUSH 0x1
0074BC48  58                        POP EAX
LAB_0074bc49:
0074BC49  5F                        POP EDI
0074BC4A  5E                        POP ESI
0074BC4B  5D                        POP EBP
0074BC4C  5B                        POP EBX
0074BC4D  C2 04 00                  RET 0x4
