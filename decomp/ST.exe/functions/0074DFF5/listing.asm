FUN_0074dff5:
0074DFF5  55                        PUSH EBP
0074DFF6  8B EC                     MOV EBP,ESP
0074DFF8  51                        PUSH ECX
0074DFF9  56                        PUSH ESI
0074DFFA  8B F1                     MOV ESI,ECX
0074DFFC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074DFFF  E8 B3 FE FF FF            CALL 0x0074deb7
0074E004  85 C0                     TEST EAX,EAX
0074E006  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0074E009  74 1E                     JZ 0x0074e029
LAB_0074e00b:
0074E00B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0074E00E  8D 45 FC                  LEA EAX,[EBP + -0x4]
0074E011  50                        PUSH EAX
0074E012  E8 AB FE FF FF            CALL 0x0074dec2
0074E017  50                        PUSH EAX
0074E018  8B CE                     MOV ECX,ESI
0074E01A  E8 53 FF FF FF            CALL 0x0074df72
0074E01F  85 C0                     TEST EAX,EAX
0074E021  74 0E                     JZ 0x0074e031
0074E023  83 7D FC 00               CMP dword ptr [EBP + -0x4],0x0
0074E027  75 E2                     JNZ 0x0074e00b
LAB_0074e029:
0074E029  6A 01                     PUSH 0x1
0074E02B  58                        POP EAX
LAB_0074e02c:
0074E02C  5E                        POP ESI
0074E02D  C9                        LEAVE
0074E02E  C2 04 00                  RET 0x4
LAB_0074e031:
0074E031  33 C0                     XOR EAX,EAX
0074E033  EB F7                     JMP 0x0074e02c
