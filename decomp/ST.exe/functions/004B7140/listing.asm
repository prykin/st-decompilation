FUN_004b7140:
004B7140  55                        PUSH EBP
004B7141  8B EC                     MOV EBP,ESP
004B7143  53                        PUSH EBX
004B7144  8B D9                     MOV EBX,ECX
004B7146  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004B7149  56                        PUSH ESI
004B714A  0F BE F1                  MOVSX ESI,CL
004B714D  57                        PUSH EDI
004B714E  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
004B7151  8D 14 C6                  LEA EDX,[ESI + EAX*0x8]
004B7154  8D 04 56                  LEA EAX,[ESI + EDX*0x2]
004B7157  C1 E0 04                  SHL EAX,0x4
004B715A  03 C6                     ADD EAX,ESI
004B715C  8D 3C 45 92 57 7F 00      LEA EDI,[EAX*0x2 + 0x7f5792]
004B7163  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B7166  85 C0                     TEST EAX,EAX
004B7168  89 07                     MOV dword ptr [EDI],EAX
004B716A  74 0B                     JZ 0x004b7177
004B716C  51                        PUSH ECX
004B716D  8B CB                     MOV ECX,EBX
004B716F  E8 1F A7 F4 FF            CALL 0x00401893
004B7174  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
LAB_004b7177:
004B7177  33 D2                     XOR EDX,EDX
004B7179  8A 15 4D 87 80 00         MOV DL,byte ptr [0x0080874d]
004B717F  3B F2                     CMP ESI,EDX
004B7181  75 08                     JNZ 0x004b718b
004B7183  51                        PUSH ECX
004B7184  8B CB                     MOV ECX,EBX
004B7186  E8 02 DA F4 FF            CALL 0x00404b8d
LAB_004b718b:
004B718B  8B 07                     MOV EAX,dword ptr [EDI]
004B718D  5F                        POP EDI
004B718E  5E                        POP ESI
004B718F  5B                        POP EBX
004B7190  5D                        POP EBP
004B7191  C2 08 00                  RET 0x8
