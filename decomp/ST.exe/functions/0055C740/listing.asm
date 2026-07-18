FUN_0055c740:
0055C740  55                        PUSH EBP
0055C741  8B EC                     MOV EBP,ESP
0055C743  8B C1                     MOV EAX,ECX
0055C745  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
0055C748  84 C9                     TEST CL,CL
0055C74A  74 2D                     JZ 0x0055c779
0055C74C  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
0055C74F  84 C9                     TEST CL,CL
0055C751  75 26                     JNZ 0x0055c779
0055C753  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055C756  85 C9                     TEST ECX,ECX
0055C758  75 1F                     JNZ 0x0055c779
0055C75A  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C760  85 C9                     TEST ECX,ECX
0055C762  74 15                     JZ 0x0055c779
0055C764  C7 40 1B 53 61 00 00      MOV dword ptr [EAX + 0x1b],0x6153
0055C76B  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C771  83 C0 0B                  ADD EAX,0xb
0055C774  8B 11                     MOV EDX,dword ptr [ECX]
0055C776  50                        PUSH EAX
0055C777  FF 12                     CALL dword ptr [EDX]
LAB_0055c779:
0055C779  5D                        POP EBP
0055C77A  C2 04 00                  RET 0x4
