FUN_004d86a0:
004D86A0  55                        PUSH EBP
004D86A1  8B EC                     MOV EBP,ESP
004D86A3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004D86A6  53                        PUSH EBX
004D86A7  56                        PUSH ESI
004D86A8  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004D86AB  8D 04 92                  LEA EAX,[EDX + EDX*0x4]
004D86AE  57                        PUSH EDI
004D86AF  8B 3C B5 58 F5 7B 00      MOV EDI,dword ptr [ESI*0x4 + 0x7bf558]
004D86B6  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
004D86B9  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004D86BC  C1 E0 04                  SHL EAX,0x4
004D86BF  03 C2                     ADD EAX,EDX
004D86C1  D1 E0                     SHL EAX,0x1
004D86C3  89 B8 3F 4E 7F 00         MOV dword ptr [EAX + 0x7f4e3f],EDI
004D86C9  8B 3C B5 70 F5 7B 00      MOV EDI,dword ptr [ESI*0x4 + 0x7bf570]
004D86D0  89 B8 43 4E 7F 00         MOV dword ptr [EAX + 0x7f4e43],EDI
004D86D6  8A 98 20 4E 7F 00         MOV BL,byte ptr [EAX + 0x7f4e20]
004D86DC  80 FB 03                  CMP BL,0x3
004D86DF  75 1C                     JNZ 0x004d86fd
004D86E1  8B 3C B5 88 F5 7B 00      MOV EDI,dword ptr [ESI*0x4 + 0x7bf588]
004D86E8  8B 34 B5 64 F5 7B 00      MOV ESI,dword ptr [ESI*0x4 + 0x7bf564]
004D86EF  89 B8 BE 57 7F 00         MOV dword ptr [EAX + 0x7f57be],EDI
004D86F5  89 B0 B6 57 7F 00         MOV dword ptr [EAX + 0x7f57b6],ESI
004D86FB  EB 0D                     JMP 0x004d870a
LAB_004d86fd:
004D86FD  8B 34 B5 7C F5 7B 00      MOV ESI,dword ptr [ESI*0x4 + 0x7bf57c]
004D8704  89 B0 47 4E 7F 00         MOV dword ptr [EAX + 0x7f4e47],ESI
LAB_004d870a:
004D870A  33 C0                     XOR EAX,EAX
004D870C  5F                        POP EDI
004D870D  A0 4D 87 80 00            MOV AL,[0x0080874d]
004D8712  5E                        POP ESI
004D8713  3B D0                     CMP EDX,EAX
004D8715  5B                        POP EBX
004D8716  75 06                     JNZ 0x004d871e
004D8718  52                        PUSH EDX
004D8719  E8 6F C4 F2 FF            CALL 0x00404b8d
LAB_004d871e:
004D871E  33 C0                     XOR EAX,EAX
004D8720  5D                        POP EBP
004D8721  C2 08 00                  RET 0x8
