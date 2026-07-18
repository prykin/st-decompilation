FUN_0064f700:
0064F700  55                        PUSH EBP
0064F701  8B EC                     MOV EBP,ESP
0064F703  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F706  33 C0                     XOR EAX,EAX
0064F708  B2 0A                     MOV DL,0xa
LAB_0064f70a:
0064F70A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F711  75 46                     JNZ 0x0064f759
0064F713  40                        INC EAX
0064F714  83 F8 01                  CMP EAX,0x1
0064F717  7C F1                     JL 0x0064f70a
0064F719  B8 01 00 00 00            MOV EAX,0x1
0064F71E  B2 08                     MOV DL,0x8
LAB_0064f720:
0064F720  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F727  75 30                     JNZ 0x0064f759
0064F729  40                        INC EAX
0064F72A  83 F8 04                  CMP EAX,0x4
0064F72D  7C F1                     JL 0x0064f720
0064F72F  66 83 39 05               CMP word ptr [ECX],0x5
0064F733  7D 09                     JGE 0x0064f73e
0064F735  C7 41 18 00 00 00 00      MOV dword ptr [ECX + 0x18],0x0
0064F73C  EB 08                     JMP 0x0064f746
LAB_0064f73e:
0064F73E  38 91 D4 00 00 00         CMP byte ptr [ECX + 0xd4],DL
0064F744  75 13                     JNZ 0x0064f759
LAB_0064f746:
0064F746  8B 49 18                  MOV ECX,dword ptr [ECX + 0x18]
0064F749  85 C9                     TEST ECX,ECX
0064F74B  7C 0C                     JL 0x0064f759
0064F74D  83 F9 02                  CMP ECX,0x2
0064F750  7F 07                     JG 0x0064f759
0064F752  B8 01 00 00 00            MOV EAX,0x1
0064F757  5D                        POP EBP
0064F758  C3                        RET
LAB_0064f759:
0064F759  33 C0                     XOR EAX,EAX
0064F75B  5D                        POP EBP
0064F75C  C3                        RET
