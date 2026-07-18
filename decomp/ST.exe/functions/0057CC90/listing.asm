FUN_0057cc90:
0057CC90  55                        PUSH EBP
0057CC91  8B EC                     MOV EBP,ESP
0057CC93  56                        PUSH ESI
0057CC94  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0057CC97  83 C8 FF                  OR EAX,0xffffffff
0057CC9A  33 D2                     XOR EDX,EDX
0057CC9C  83 FE 08                  CMP ESI,0x8
0057CC9F  76 08                     JBE 0x0057cca9
0057CCA1  83 C8 FF                  OR EAX,0xffffffff
0057CCA4  5E                        POP ESI
0057CCA5  5D                        POP EBP
0057CCA6  C2 08 00                  RET 0x8
LAB_0057cca9:
0057CCA9  57                        PUSH EDI
0057CCAA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0057CCAD  81 C7 19 FF FF FF         ADD EDI,0xffffff19
0057CCB3  83 FF 04                  CMP EDI,0x4
0057CCB6  77 61                     JA 0x0057cd19
switchD_0057ccb8::switchD:
0057CCB8  FF 24 BD 20 CD 57 00      JMP dword ptr [EDI*0x4 + 0x57cd20]
switchD_0057ccb8::caseD_e7:
0057CCBF  6A 00                     PUSH 0x0
0057CCC1  6A 0B                     PUSH 0xb
0057CCC3  6A 00                     PUSH 0x0
0057CCC5  6A 0E                     PUSH 0xe
0057CCC7  81 C1 D5 01 00 00         ADD ECX,0x1d5
0057CCCD  E8 E8 51 E8 FF            CALL 0x00401eba
0057CCD2  5F                        POP EDI
0057CCD3  5E                        POP ESI
0057CCD4  5D                        POP EBP
0057CCD5  C2 08 00                  RET 0x8
switchD_0057ccb8::caseD_ea:
0057CCD8  85 F6                     TEST ESI,ESI
0057CCDA  74 0F                     JZ 0x0057cceb
0057CCDC  B8 08 00 00 00            MOV EAX,0x8
0057CCE1  2B C6                     SUB EAX,ESI
0057CCE3  D1 E8                     SHR EAX,0x1
0057CCE5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
0057CCE8  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
LAB_0057cceb:
0057CCEB  6A 00                     PUSH 0x0
0057CCED  8D 42 0E                  LEA EAX,[EDX + 0xe]
0057CCF0  EB 18                     JMP 0x0057cd0a
switchD_0057ccb8::caseD_eb:
0057CCF2  85 F6                     TEST ESI,ESI
0057CCF4  74 0F                     JZ 0x0057cd05
0057CCF6  B8 08 00 00 00            MOV EAX,0x8
0057CCFB  2B C6                     SUB EAX,ESI
0057CCFD  D1 E8                     SHR EAX,0x1
0057CCFF  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0057CD02  C1 E2 02                  SHL EDX,0x2
LAB_0057cd05:
0057CD05  6A 00                     PUSH 0x0
0057CD07  8D 42 13                  LEA EAX,[EDX + 0x13]
LAB_0057cd0a:
0057CD0A  50                        PUSH EAX
0057CD0B  52                        PUSH EDX
0057CD0C  6A 0E                     PUSH 0xe
0057CD0E  81 C1 D5 01 00 00         ADD ECX,0x1d5
0057CD14  E8 A1 51 E8 FF            CALL 0x00401eba
switchD_0057ccb8::default:
0057CD19  5F                        POP EDI
0057CD1A  5E                        POP ESI
0057CD1B  5D                        POP EBP
0057CD1C  C2 08 00                  RET 0x8
