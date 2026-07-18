FUN_0064f110:
0064F110  55                        PUSH EBP
0064F111  8B EC                     MOV EBP,ESP
0064F113  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F116  33 C0                     XOR EAX,EAX
0064F118  B2 08                     MOV DL,0x8
LAB_0064f11a:
0064F11A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F121  75 22                     JNZ 0x0064f145
0064F123  40                        INC EAX
0064F124  83 F8 03                  CMP EAX,0x3
0064F127  7C F1                     JL 0x0064f11a
0064F129  66 83 39 04               CMP word ptr [ECX],0x4
0064F12D  7D 0E                     JGE 0x0064f13d
0064F12F  C7 41 14 FF FF FF FF      MOV dword ptr [ECX + 0x14],0xffffffff
LAB_0064f136:
0064F136  B8 01 00 00 00            MOV EAX,0x1
0064F13B  5D                        POP EBP
0064F13C  C3                        RET
LAB_0064f13d:
0064F13D  38 91 D3 00 00 00         CMP byte ptr [ECX + 0xd3],DL
0064F143  74 F1                     JZ 0x0064f136
LAB_0064f145:
0064F145  33 C0                     XOR EAX,EAX
0064F147  5D                        POP EBP
0064F148  C3                        RET
