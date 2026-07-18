FUN_0064feb0:
0064FEB0  55                        PUSH EBP
0064FEB1  8B EC                     MOV EBP,ESP
0064FEB3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064FEB6  33 C0                     XOR EAX,EAX
0064FEB8  B2 0A                     MOV DL,0xa
LAB_0064feba:
0064FEBA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064FEC1  75 0D                     JNZ 0x0064fed0
0064FEC3  40                        INC EAX
0064FEC4  83 F8 02                  CMP EAX,0x2
0064FEC7  7C F1                     JL 0x0064feba
0064FEC9  B8 01 00 00 00            MOV EAX,0x1
0064FECE  5D                        POP EBP
0064FECF  C3                        RET
LAB_0064fed0:
0064FED0  33 C0                     XOR EAX,EAX
0064FED2  5D                        POP EBP
0064FED3  C3                        RET
