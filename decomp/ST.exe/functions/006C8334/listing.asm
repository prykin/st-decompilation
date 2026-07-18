FUN_006c8334:
006C8334  55                        PUSH EBP
006C8335  8B EC                     MOV EBP,ESP
006C8337  53                        PUSH EBX
006C8338  56                        PUSH ESI
006C8339  57                        PUSH EDI
006C833A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C833D  0B C0                     OR EAX,EAX
006C833F  78 61                     JS 0x006c83a2
006C8341  F7 25 8C DA 7E 00         MUL dword ptr [0x007eda8c]
006C8347  B9 20 00 00 00            MOV ECX,0x20
006C834C  8B DA                     MOV EBX,EDX
006C834E  0B D2                     OR EDX,EDX
006C8350  75 04                     JNZ 0x006c8356
006C8352  33 C9                     XOR ECX,ECX
006C8354  8B D8                     MOV EBX,EAX
LAB_006c8356:
006C8356  F7 C3 00 00 FF FF         TEST EBX,0xffff0000
006C835C  74 05                     JZ 0x006c8363
006C835E  0F BD F3                  BSR ESI,EBX
006C8361  EB 08                     JMP 0x006c836b
LAB_006c8363:
006C8363  33 F6                     XOR ESI,ESI
006C8365  66 0F BD F3               BSR SI,BX
006C8369  74 37                     JZ 0x006c83a2
LAB_006c836b:
006C836B  03 CE                     ADD ECX,ESI
006C836D  41                        INC ECX
006C836E  D1 E9                     SHR ECX,0x1
006C8370  8B D8                     MOV EBX,EAX
006C8372  8B F2                     MOV ESI,EDX
006C8374  0F AD F3                  SHRD EBX,ESI,CL
006C8377  8B FA                     MOV EDI,EDX
006C8379  8B F0                     MOV ESI,EAX
LAB_006c837b:
006C837B  3B DF                     CMP EBX,EDI
006C837D  73 06                     JNC 0x006c8385
006C837F  8B DF                     MOV EBX,EDI
006C8381  D1 EB                     SHR EBX,0x1
006C8383  03 DF                     ADD EBX,EDI
LAB_006c8385:
006C8385  8B C6                     MOV EAX,ESI
006C8387  8B D7                     MOV EDX,EDI
006C8389  8B CB                     MOV ECX,EBX
006C838B  F7 F3                     DIV EBX
006C838D  03 D8                     ADD EBX,EAX
006C838F  D1 DB                     RCR EBX,0x1
006C8391  D1 D8                     RCR EAX,0x1
006C8393  0B D2                     OR EDX,EDX
006C8395  74 05                     JZ 0x006c839c
006C8397  D1 D0                     RCL EAX,0x1
006C8399  83 D3 00                  ADC EBX,0x0
LAB_006c839c:
006C839C  3B D9                     CMP EBX,ECX
006C839E  75 DB                     JNZ 0x006c837b
006C83A0  8B C3                     MOV EAX,EBX
LAB_006c83a2:
006C83A2  5F                        POP EDI
006C83A3  5E                        POP ESI
006C83A4  5B                        POP EBX
006C83A5  5D                        POP EBP
006C83A6  C3                        RET
