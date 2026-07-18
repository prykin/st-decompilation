FUN_0064f430:
0064F430  55                        PUSH EBP
0064F431  8B EC                     MOV EBP,ESP
0064F433  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F436  33 C0                     XOR EAX,EAX
0064F438  B2 08                     MOV DL,0x8
LAB_0064f43a:
0064F43A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F441  75 13                     JNZ 0x0064f456
0064F443  40                        INC EAX
0064F444  83 F8 03                  CMP EAX,0x3
0064F447  7C F1                     JL 0x0064f43a
0064F449  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0064F44C  33 C0                     XOR EAX,EAX
0064F44E  83 FA 02                  CMP EDX,0x2
0064F451  0F 9E C0                  SETLE AL
0064F454  5D                        POP EBP
0064F455  C3                        RET
LAB_0064f456:
0064F456  33 C0                     XOR EAX,EAX
0064F458  5D                        POP EBP
0064F459  C3                        RET
