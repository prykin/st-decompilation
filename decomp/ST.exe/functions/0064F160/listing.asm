FUN_0064f160:
0064F160  55                        PUSH EBP
0064F161  8B EC                     MOV EBP,ESP
0064F163  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F166  33 C0                     XOR EAX,EAX
0064F168  B2 08                     MOV DL,0x8
LAB_0064f16a:
0064F16A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F171  75 28                     JNZ 0x0064f19b
0064F173  40                        INC EAX
0064F174  83 F8 03                  CMP EAX,0x3
0064F177  7C F1                     JL 0x0064f16a
0064F179  B8 03 00 00 00            MOV EAX,0x3
0064F17E  B2 0A                     MOV DL,0xa
LAB_0064f180:
0064F180  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F187  75 12                     JNZ 0x0064f19b
0064F189  40                        INC EAX
0064F18A  83 F8 04                  CMP EAX,0x4
0064F18D  7C F1                     JL 0x0064f180
0064F18F  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0064F192  33 C0                     XOR EAX,EAX
0064F194  85 D2                     TEST EDX,EDX
0064F196  0F 95 C0                  SETNZ AL
0064F199  5D                        POP EBP
0064F19A  C3                        RET
LAB_0064f19b:
0064F19B  33 C0                     XOR EAX,EAX
0064F19D  5D                        POP EBP
0064F19E  C3                        RET
