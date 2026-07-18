FUN_0055d670:
0055D670  55                        PUSH EBP
0055D671  8B EC                     MOV EBP,ESP
0055D673  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055D676  84 C0                     TEST AL,AL
0055D678  75 17                     JNZ 0x0055d691
0055D67A  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055D680  85 C9                     TEST ECX,ECX
0055D682  74 0D                     JZ 0x0055d691
0055D684  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055D687  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055D68A  50                        PUSH EAX
0055D68B  52                        PUSH EDX
0055D68C  E8 DF 55 EA FF            CALL 0x00402c70
LAB_0055d691:
0055D691  5D                        POP EBP
0055D692  C2 08 00                  RET 0x8
