FUN_0074fef7:
0074FEF7  55                        PUSH EBP
0074FEF8  8B EC                     MOV EBP,ESP
0074FEFA  83 EC 2C                  SUB ESP,0x2c
0074FEFD  53                        PUSH EBX
0074FEFE  56                        PUSH ESI
0074FEFF  8B F1                     MOV ESI,ECX
0074FF01  83 7E 10 00               CMP dword ptr [ESI + 0x10],0x0
0074FF05  75 07                     JNZ 0x0074ff0e
0074FF07  B8 34 02 04 80            MOV EAX,0x80040234
0074FF0C  EB 7A                     JMP 0x0074ff88
LAB_0074ff0e:
0074FF0E  8D 45 FC                  LEA EAX,[EBP + -0x4]
0074FF11  50                        PUSH EAX
0074FF12  6A 00                     PUSH 0x0
0074FF14  6A 00                     PUSH 0x0
0074FF16  8D 46 48                  LEA EAX,[ESI + 0x48]
0074FF19  FF 76 20                  PUSH dword ptr [ESI + 0x20]
0074FF1C  50                        PUSH EAX
0074FF1D  E8 15 E4 FF FF            CALL 0x0074e337
0074FF22  85 C0                     TEST EAX,EAX
0074FF24  7C 62                     JL 0x0074ff88
0074FF26  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
0074FF29  8D 55 F8                  LEA EDX,[EBP + -0x8]
0074FF2C  52                        PUSH EDX
0074FF2D  FF 76 20                  PUSH dword ptr [ESI + 0x20]
0074FF30  8B 08                     MOV ECX,dword ptr [EAX]
0074FF32  50                        PUSH EAX
0074FF33  FF 11                     CALL dword ptr [ECX]
0074FF35  8B D8                     MOV EBX,EAX
0074FF37  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074FF3A  85 DB                     TEST EBX,EBX
0074FF3C  8B 08                     MOV ECX,dword ptr [EAX]
0074FF3E  7D 08                     JGE 0x0074ff48
0074FF40  50                        PUSH EAX
0074FF41  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FF44  8B C3                     MOV EAX,EBX
0074FF46  EB 40                     JMP 0x0074ff88
LAB_0074ff48:
0074FF48  8D 55 F4                  LEA EDX,[EBP + -0xc]
0074FF4B  52                        PUSH EDX
0074FF4C  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0074FF4F  52                        PUSH EDX
0074FF50  8D 56 34                  LEA EDX,[ESI + 0x34]
0074FF53  FF 76 2C                  PUSH dword ptr [ESI + 0x2c]
0074FF56  52                        PUSH EDX
0074FF57  66 8B 56 28               MOV DX,word ptr [ESI + 0x28]
0074FF5B  52                        PUSH EDX
0074FF5C  FF 76 24                  PUSH dword ptr [ESI + 0x24]
0074FF5F  FF 75 F8                  PUSH dword ptr [EBP + -0x8]
0074FF62  50                        PUSH EAX
0074FF63  FF 51 2C                  CALL dword ptr [ECX + 0x2c]
0074FF66  89 46 4C                  MOV dword ptr [ESI + 0x4c],EAX
0074FF69  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074FF6C  50                        PUSH EAX
0074FF6D  8B 08                     MOV ECX,dword ptr [EAX]
0074FF6F  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FF72  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074FF75  50                        PUSH EAX
0074FF76  8B 08                     MOV ECX,dword ptr [EAX]
0074FF78  FF 51 08                  CALL dword ptr [ECX + 0x8]
0074FF7B  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0074FF7E  56                        PUSH ESI
0074FF7F  8B 01                     MOV EAX,dword ptr [ECX]
0074FF81  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0074FF84  83 66 10 00               AND dword ptr [ESI + 0x10],0x0
LAB_0074ff88:
0074FF88  5E                        POP ESI
0074FF89  5B                        POP EBX
0074FF8A  C9                        LEAVE
0074FF8B  C3                        RET
