FUN_0064f900:
0064F900  55                        PUSH EBP
0064F901  8B EC                     MOV EBP,ESP
0064F903  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F906  33 C0                     XOR EAX,EAX
0064F908  B2 08                     MOV DL,0x8
LAB_0064f90a:
0064F90A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F911  75 1E                     JNZ 0x0064f931
0064F913  40                        INC EAX
0064F914  83 F8 02                  CMP EAX,0x2
0064F917  7C F1                     JL 0x0064f90a
0064F919  66 83 39 03               CMP word ptr [ECX],0x3
0064F91D  B8 01 00 00 00            MOV EAX,0x1
0064F922  7D 05                     JGE 0x0064f929
0064F924  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
0064F927  5D                        POP EBP
0064F928  C3                        RET
LAB_0064f929:
0064F929  38 91 D2 00 00 00         CMP byte ptr [ECX + 0xd2],DL
0064F92F  74 02                     JZ 0x0064f933
LAB_0064f931:
0064F931  33 C0                     XOR EAX,EAX
LAB_0064f933:
0064F933  5D                        POP EBP
0064F934  C3                        RET
