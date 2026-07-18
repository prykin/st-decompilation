FUN_006b5010:
006B5010  55                        PUSH EBP
006B5011  8B EC                     MOV EBP,ESP
006B5013  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B5016  8B 42 20                  MOV EAX,dword ptr [EDX + 0x20]
006B5019  85 C0                     TEST EAX,EAX
006B501B  75 28                     JNZ 0x006b5045
006B501D  33 C9                     XOR ECX,ECX
006B501F  66 8B 4A 0E               MOV CX,word ptr [EDX + 0xe]
006B5023  85 C9                     TEST ECX,ECX
006B5025  74 1E                     JZ 0x006b5045
006B5027  83 F9 08                  CMP ECX,0x8
006B502A  7F 0E                     JG 0x006b503a
006B502C  B8 01 00 00 00            MOV EAX,0x1
006B5031  D3 E0                     SHL EAX,CL
006B5033  C1 E0 02                  SHL EAX,0x2
006B5036  5D                        POP EBP
006B5037  C2 04 00                  RET 0x4
LAB_006b503a:
006B503A  83 7A 10 03               CMP dword ptr [EDX + 0x10],0x3
006B503E  75 05                     JNZ 0x006b5045
006B5040  B8 03 00 00 00            MOV EAX,0x3
LAB_006b5045:
006B5045  C1 E0 02                  SHL EAX,0x2
006B5048  5D                        POP EBP
006B5049  C2 04 00                  RET 0x4
