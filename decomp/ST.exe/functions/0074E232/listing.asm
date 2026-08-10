FUN_0074e232:
0074E232  56                        PUSH ESI
0074E233  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
0074E237  85 F6                     TEST ESI,ESI
0074E239  75 05                     JNZ 0x0074e240
0074E23B  6A 01                     PUSH 0x1
0074E23D  58                        POP EAX
0074E23E  EB 5A                     JMP 0x0074e29a
LAB_0074e240:
0074E240  57                        PUSH EDI
0074E241  53                        PUSH EBX
0074E242  8B C6                     MOV EAX,ESI
0074E244  33 DB                     XOR EBX,EBX
LAB_0074e246:
0074E246  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0074E249  43                        INC EBX
0074E24A  85 C0                     TEST EAX,EAX
0074E24C  75 F8                     JNZ 0x0074e246
0074E24E  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
0074E252  8B 10                     MOV EDX,dword ptr [EAX]
0074E254  85 D2                     TEST EDX,EDX
0074E256  74 05                     JZ 0x0074e25d
0074E258  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
0074E25B  89 3A                     MOV dword ptr [EDX],EDI
LAB_0074e25d:
0074E25D  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0074E260  85 D2                     TEST EDX,EDX
0074E262  74 05                     JZ 0x0074e269
0074E264  8B 38                     MOV EDI,dword ptr [EAX]
0074E266  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
LAB_0074e269:
0074E269  33 FF                     XOR EDI,EDI
0074E26B  39 78 04                  CMP dword ptr [EAX + 0x4],EDI
0074E26E  75 06                     JNZ 0x0074e276
0074E270  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0074E273  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
LAB_0074e276:
0074E276  8B 16                     MOV EDX,dword ptr [ESI]
0074E278  3B D7                     CMP EDX,EDI
0074E27A  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
0074E27D  75 02                     JNZ 0x0074e281
0074E27F  89 39                     MOV dword ptr [ECX],EDI
LAB_0074e281:
0074E281  89 30                     MOV dword ptr [EAX],ESI
0074E283  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
0074E286  3B D7                     CMP EDX,EDI
0074E288  74 03                     JZ 0x0074e28d
0074E28A  89 7A 04                  MOV dword ptr [EDX + 0x4],EDI
LAB_0074e28d:
0074E28D  89 3E                     MOV dword ptr [ESI],EDI
0074E28F  29 59 08                  SUB dword ptr [ECX + 0x8],EBX
0074E292  01 58 08                  ADD dword ptr [EAX + 0x8],EBX
0074E295  6A 01                     PUSH 0x1
0074E297  58                        POP EAX
0074E298  5B                        POP EBX
0074E299  5F                        POP EDI
LAB_0074e29a:
0074E29A  5E                        POP ESI
0074E29B  C2 08 00                  RET 0x8
