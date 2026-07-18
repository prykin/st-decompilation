FUN_0065e900:
0065E900  55                        PUSH EBP
0065E901  8B EC                     MOV EBP,ESP
0065E903  56                        PUSH ESI
0065E904  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0065E907  85 F6                     TEST ESI,ESI
0065E909  57                        PUSH EDI
0065E90A  74 6A                     JZ 0x0065e976
0065E90C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0065E90F  8B CF                     MOV ECX,EDI
0065E911  E8 89 6E DA FF            CALL 0x0040579f
0065E916  A8 10                     TEST AL,0x10
0065E918  75 5C                     JNZ 0x0065e976
0065E91A  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E91F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065E922  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0065E925  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065E928  81 E1 FF FF 00 00         AND ECX,0xffff
0065E92E  C7 04 96 01 00 00 00      MOV dword ptr [ESI + EDX*0x4],0x1
0065E935  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E93A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0065E93D  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0065E940  89 4C 86 04               MOV dword ptr [ESI + EAX*0x4 + 0x4],ECX
0065E944  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E949  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0065E94C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0065E94F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0065E952  81 E1 FF FF 00 00         AND ECX,0xffff
0065E958  89 7C 96 0C               MOV dword ptr [ESI + EDX*0x4 + 0xc],EDI
0065E95C  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E961  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0065E964  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0065E967  89 4C 86 10               MOV dword ptr [ESI + EAX*0x4 + 0x10],ECX
0065E96B  A1 00 19 81 00            MOV EAX,[0x00811900]
0065E970  40                        INC EAX
0065E971  A3 00 19 81 00            MOV [0x00811900],EAX
LAB_0065e976:
0065E976  5F                        POP EDI
0065E977  33 C0                     XOR EAX,EAX
0065E979  5E                        POP ESI
0065E97A  5D                        POP EBP
0065E97B  C3                        RET
