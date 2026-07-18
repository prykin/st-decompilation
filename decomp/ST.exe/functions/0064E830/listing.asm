FUN_0064e830:
0064E830  55                        PUSH EBP
0064E831  8B EC                     MOV EBP,ESP
0064E833  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0064E836  33 C9                     XOR ECX,ECX
0064E838  B2 08                     MOV DL,0x8
LAB_0064e83a:
0064E83A  38 94 08 D0 00 00 00      CMP byte ptr [EAX + ECX*0x1 + 0xd0],DL
0064E841  75 3A                     JNZ 0x0064e87d
0064E843  41                        INC ECX
0064E844  83 F9 03                  CMP ECX,0x3
0064E847  7C F1                     JL 0x0064e83a
0064E849  66 8B 08                  MOV CX,word ptr [EAX]
0064E84C  66 83 F9 04               CMP CX,0x4
0064E850  7D 17                     JGE 0x0064e869
0064E852  56                        PUSH ESI
0064E853  8B 70 10                  MOV ESI,dword ptr [EAX + 0x10]
0064E856  89 70 14                  MOV dword ptr [EAX + 0x14],ESI
0064E859  5E                        POP ESI
LAB_0064e85a:
0064E85A  66 83 F9 05               CMP CX,0x5
0064E85E  7D 15                     JGE 0x0064e875
0064E860  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
0064E867  EB 18                     JMP 0x0064e881
LAB_0064e869:
0064E869  38 90 D3 00 00 00         CMP byte ptr [EAX + 0xd3],DL
0064E86F  74 E9                     JZ 0x0064e85a
0064E871  33 C0                     XOR EAX,EAX
0064E873  5D                        POP EBP
0064E874  C3                        RET
LAB_0064e875:
0064E875  38 90 D4 00 00 00         CMP byte ptr [EAX + 0xd4],DL
0064E87B  74 04                     JZ 0x0064e881
LAB_0064e87d:
0064E87D  33 C0                     XOR EAX,EAX
0064E87F  5D                        POP EBP
0064E880  C3                        RET
LAB_0064e881:
0064E881  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0064E884  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0064E887  3B D1                     CMP EDX,ECX
0064E889  7D 03                     JGE 0x0064e88e
0064E88B  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
LAB_0064e88e:
0064E88E  B8 01 00 00 00            MOV EAX,0x1
0064E893  5D                        POP EBP
0064E894  C3                        RET
