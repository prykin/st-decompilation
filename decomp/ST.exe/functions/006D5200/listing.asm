FUN_006d5200:
006D5200  55                        PUSH EBP
006D5201  8B EC                     MOV EBP,ESP
006D5203  8B 81 88 02 00 00         MOV EAX,dword ptr [ECX + 0x288]
006D5209  F7 40 04 00 00 00 01      TEST dword ptr [EAX + 0x4],0x1000000
006D5210  75 09                     JNZ 0x006d521b
006D5212  B8 05 40 00 80            MOV EAX,0x80004005
006D5217  5D                        POP EBP
006D5218  C2 04 00                  RET 0x4
LAB_006d521b:
006D521B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D521E  51                        PUSH ECX
006D521F  50                        PUSH EAX
006D5220  E8 CB FA FF FF            CALL 0x006d4cf0
006D5225  83 C4 08                  ADD ESP,0x8
006D5228  5D                        POP EBP
006D5229  C2 04 00                  RET 0x4
