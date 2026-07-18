FUN_00650f90:
00650F90  55                        PUSH EBP
00650F91  8B EC                     MOV EBP,ESP
00650F93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00650F96  33 C9                     XOR ECX,ECX
00650F98  B2 08                     MOV DL,0x8
LAB_00650f9a:
00650F9A  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
00650FA1  75 45                     JNZ 0x00650fe8
00650FA3  41                        INC ECX
00650FA4  83 F9 06                  CMP ECX,0x6
00650FA7  7C F1                     JL 0x00650f9a
00650FA9  66 83 38 07               CMP word ptr [EAX],0x7
00650FAD  7D 09                     JGE 0x00650fb8
00650FAF  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
00650FB6  EB 08                     JMP 0x00650fc0
LAB_00650fb8:
00650FB8  38 90 D6 00 00 00         CMP byte ptr [EAX + 0xd6],DL
00650FBE  75 28                     JNZ 0x00650fe8
LAB_00650fc0:
00650FC0  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
00650FC3  85 C9                     TEST ECX,ECX
00650FC5  7C 21                     JL 0x00650fe8
00650FC7  83 F9 02                  CMP ECX,0x2
00650FCA  7F 1C                     JG 0x00650fe8
00650FCC  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
00650FCF  85 C9                     TEST ECX,ECX
00650FD1  7C 15                     JL 0x00650fe8
00650FD3  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
00650FD6  85 C9                     TEST ECX,ECX
00650FD8  7C 0E                     JL 0x00650fe8
00650FDA  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
00650FDD  33 C9                     XOR ECX,ECX
00650FDF  85 D2                     TEST EDX,EDX
00650FE1  0F 9D C1                  SETGE CL
00650FE4  8B C1                     MOV EAX,ECX
00650FE6  5D                        POP EBP
00650FE7  C3                        RET
LAB_00650fe8:
00650FE8  33 C0                     XOR EAX,EAX
00650FEA  5D                        POP EBP
00650FEB  C3                        RET
