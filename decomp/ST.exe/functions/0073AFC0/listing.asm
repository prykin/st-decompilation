FUN_0073afc0:
0073AFC0  55                        PUSH EBP
0073AFC1  8B EC                     MOV EBP,ESP
0073AFC3  83 EC 08                  SUB ESP,0x8
0073AFC6  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0073AFCA  74 1F                     JZ 0x0073afeb
0073AFCC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073AFCF  0F BE 08                  MOVSX ECX,byte ptr [EAX]
0073AFD2  85 C9                     TEST ECX,ECX
0073AFD4  74 15                     JZ 0x0073afeb
0073AFD6  68 78 09 7A 00            PUSH 0x7a0978
0073AFDB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0073AFDE  52                        PUSH EDX
0073AFDF  E8 4C F1 FF FF            CALL 0x0073a130
0073AFE4  83 C4 08                  ADD ESP,0x8
0073AFE7  85 C0                     TEST EAX,EAX
0073AFE9  75 28                     JNZ 0x0073b013
LAB_0073afeb:
0073AFEB  6A 08                     PUSH 0x8
0073AFED  8D 45 F8                  LEA EAX,[EBP + -0x8]
0073AFF0  50                        PUSH EAX
0073AFF1  68 04 10 00 00            PUSH 0x1004
0073AFF6  8B 0D 90 72 85 00         MOV ECX,dword ptr [0x00857290]
0073AFFC  51                        PUSH ECX
0073AFFD  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073B003  85 C0                     TEST EAX,EAX
0073B005  75 04                     JNZ 0x0073b00b
0073B007  33 C0                     XOR EAX,EAX
0073B009  EB 4C                     JMP 0x0073b057
LAB_0073b00b:
0073B00B  8D 55 F8                  LEA EDX,[EBP + -0x8]
0073B00E  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0073B011  EB 38                     JMP 0x0073b04b
LAB_0073b013:
0073B013  68 74 09 7A 00            PUSH 0x7a0974
0073B018  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0073B01B  50                        PUSH EAX
0073B01C  E8 0F F1 FF FF            CALL 0x0073a130
0073B021  83 C4 08                  ADD ESP,0x8
0073B024  85 C0                     TEST EAX,EAX
0073B026  75 23                     JNZ 0x0073b04b
0073B028  6A 08                     PUSH 0x8
0073B02A  8D 4D F8                  LEA ECX,[EBP + -0x8]
0073B02D  51                        PUSH ECX
0073B02E  6A 0B                     PUSH 0xb
0073B030  8B 15 90 72 85 00         MOV EDX,dword ptr [0x00857290]
0073B036  52                        PUSH EDX
0073B037  FF 15 94 72 85 00         CALL dword ptr [0x00857294]
0073B03D  85 C0                     TEST EAX,EAX
0073B03F  75 04                     JNZ 0x0073b045
0073B041  33 C0                     XOR EAX,EAX
0073B043  EB 12                     JMP 0x0073b057
LAB_0073b045:
0073B045  8D 45 F8                  LEA EAX,[EBP + -0x8]
0073B048  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0073b04b:
0073B04B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0073B04E  51                        PUSH ECX
0073B04F  E8 AC 4D FF FF            CALL 0x0072fe00
0073B054  83 C4 04                  ADD ESP,0x4
LAB_0073b057:
0073B057  8B E5                     MOV ESP,EBP
0073B059  5D                        POP EBP
0073B05A  C3                        RET
