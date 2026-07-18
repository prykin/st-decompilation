FUN_0067d160:
0067D160  55                        PUSH EBP
0067D161  8B EC                     MOV EBP,ESP
0067D163  56                        PUSH ESI
0067D164  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067D167  8B 06                     MOV EAX,dword ptr [ESI]
0067D169  85 C0                     TEST EAX,EAX
0067D16B  74 36                     JZ 0x0067d1a3
0067D16D  8A 48 18                  MOV CL,byte ptr [EAX + 0x18]
0067D170  84 C9                     TEST CL,CL
0067D172  74 09                     JZ 0x0067d17d
0067D174  50                        PUSH EAX
0067D175  E8 5C 72 D8 FF            CALL 0x004043d6
0067D17A  83 C4 04                  ADD ESP,0x4
LAB_0067d17d:
0067D17D  8B 06                     MOV EAX,dword ptr [ESI]
0067D17F  80 78 18 02               CMP byte ptr [EAX + 0x18],0x2
0067D183  75 18                     JNZ 0x0067d19d
0067D185  8B 88 06 01 00 00         MOV ECX,dword ptr [EAX + 0x106]
0067D18B  05 06 01 00 00            ADD EAX,0x106
0067D190  85 C9                     TEST ECX,ECX
0067D192  74 09                     JZ 0x0067d19d
0067D194  50                        PUSH EAX
0067D195  E8 9D 43 D8 FF            CALL 0x00401537
0067D19A  83 C4 04                  ADD ESP,0x4
LAB_0067d19d:
0067D19D  56                        PUSH ESI
0067D19E  E8 BD DE 02 00            CALL 0x006ab060
LAB_0067d1a3:
0067D1A3  5E                        POP ESI
0067D1A4  5D                        POP EBP
0067D1A5  C3                        RET
