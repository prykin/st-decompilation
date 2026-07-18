FUN_0055d550:
0055D550  55                        PUSH EBP
0055D551  8B EC                     MOV EBP,ESP
0055D553  8A 41 08                  MOV AL,byte ptr [ECX + 0x8]
0055D556  84 C0                     TEST AL,AL
0055D558  74 22                     JZ 0x0055d57c
0055D55A  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055D55D  84 C0                     TEST AL,AL
0055D55F  75 1B                     JNZ 0x0055d57c
0055D561  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055D567  85 C9                     TEST ECX,ECX
0055D569  74 11                     JZ 0x0055d57c
0055D56B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0055D56E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0055D571  50                        PUSH EAX
0055D572  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055D575  52                        PUSH EDX
0055D576  50                        PUSH EAX
0055D577  E8 AF 41 EA FF            CALL 0x0040172b
LAB_0055d57c:
0055D57C  5D                        POP EBP
0055D57D  C2 0C 00                  RET 0xc
