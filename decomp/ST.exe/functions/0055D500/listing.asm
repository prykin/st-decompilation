FUN_0055d500:
0055D500  55                        PUSH EBP
0055D501  8B EC                     MOV EBP,ESP
0055D503  8A 51 08                  MOV DL,byte ptr [ECX + 0x8]
0055D506  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055D509  84 D2                     TEST DL,DL
0055D50B  89 81 B8 06 00 00         MOV dword ptr [ECX + 0x6b8],EAX
0055D511  74 23                     JZ 0x0055d536
0055D513  8A 51 09                  MOV DL,byte ptr [ECX + 0x9]
0055D516  84 D2                     TEST DL,DL
0055D518  75 1C                     JNZ 0x0055d536
0055D51A  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055D520  85 C9                     TEST ECX,ECX
0055D522  74 12                     JZ 0x0055d536
0055D524  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0055D527  52                        PUSH EDX
0055D528  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0055D52B  52                        PUSH EDX
0055D52C  50                        PUSH EAX
0055D52D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055D530  50                        PUSH EAX
0055D531  E8 C7 6F EA FF            CALL 0x004044fd
LAB_0055d536:
0055D536  5D                        POP EBP
0055D537  C2 10 00                  RET 0x10
