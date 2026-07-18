FUN_0055d630:
0055D630  55                        PUSH EBP
0055D631  8B EC                     MOV EBP,ESP
0055D633  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055D636  84 C0                     TEST AL,AL
0055D638  75 1B                     JNZ 0x0055d655
0055D63A  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055D640  85 C9                     TEST ECX,ECX
0055D642  74 11                     JZ 0x0055d655
0055D644  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055D647  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055D64A  50                        PUSH EAX
0055D64B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055D64E  52                        PUSH EDX
0055D64F  50                        PUSH EAX
0055D650  E8 1A 84 EA FF            CALL 0x00405a6f
LAB_0055d655:
0055D655  5D                        POP EBP
0055D656  C2 0C 00                  RET 0xc
