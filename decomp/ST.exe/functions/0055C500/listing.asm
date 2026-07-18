FUN_0055c500:
0055C500  55                        PUSH EBP
0055C501  8B EC                     MOV EBP,ESP
0055C503  8B C1                     MOV EAX,ECX
0055C505  8A 48 09                  MOV CL,byte ptr [EAX + 0x9]
0055C508  C6 40 08 00               MOV byte ptr [EAX + 0x8],0x0
0055C50C  84 C9                     TEST CL,CL
0055C50E  75 29                     JNZ 0x0055c539
0055C510  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0055C513  85 C9                     TEST ECX,ECX
0055C515  74 22                     JZ 0x0055c539
0055C517  8B 15 4C 17 81 00         MOV EDX,dword ptr [0x0081174c]
0055C51D  85 D2                     TEST EDX,EDX
0055C51F  74 18                     JZ 0x0055c539
0055C521  C7 40 1B 50 61 00 00      MOV dword ptr [EAX + 0x1b],0x6150
0055C528  89 48 1F                  MOV dword ptr [EAX + 0x1f],ECX
0055C52B  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C531  83 C0 0B                  ADD EAX,0xb
0055C534  50                        PUSH EAX
0055C535  8B 11                     MOV EDX,dword ptr [ECX]
0055C537  FF 12                     CALL dword ptr [EDX]
LAB_0055c539:
0055C539  5D                        POP EBP
0055C53A  C2 08 00                  RET 0x8
