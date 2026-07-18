FUN_00651db0:
00651DB0  55                        PUSH EBP
00651DB1  8B EC                     MOV EBP,ESP
00651DB3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651DB6  33 C0                     XOR EAX,EAX
00651DB8  B2 08                     MOV DL,0x8
LAB_00651dba:
00651DBA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651DC1  75 12                     JNZ 0x00651dd5
00651DC3  40                        INC EAX
00651DC4  83 F8 03                  CMP EAX,0x3
00651DC7  7C F1                     JL 0x00651dba
00651DC9  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
00651DCC  33 C0                     XOR EAX,EAX
00651DCE  85 D2                     TEST EDX,EDX
00651DD0  0F 9D C0                  SETGE AL
00651DD3  5D                        POP EBP
00651DD4  C3                        RET
LAB_00651dd5:
00651DD5  33 C0                     XOR EAX,EAX
00651DD7  5D                        POP EBP
00651DD8  C3                        RET
