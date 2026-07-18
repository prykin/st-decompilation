FUN_004d10a0:
004D10A0  55                        PUSH EBP
004D10A1  8B EC                     MOV EBP,ESP
004D10A3  53                        PUSH EBX
004D10A4  56                        PUSH ESI
004D10A5  8B F1                     MOV ESI,ECX
004D10A7  B8 89 88 88 88            MOV EAX,0x88888889
004D10AC  57                        PUSH EDI
004D10AD  8B 8E 9C 02 00 00         MOV ECX,dword ptr [ESI + 0x29c]
004D10B3  F7 E9                     IMUL ECX
004D10B5  03 D1                     ADD EDX,ECX
004D10B7  B9 18 00 00 00            MOV ECX,0x18
004D10BC  C1 FA 03                  SAR EDX,0x3
004D10BF  8B C2                     MOV EAX,EDX
004D10C1  C1 E8 1F                  SHR EAX,0x1f
004D10C4  03 D0                     ADD EDX,EAX
004D10C6  B8 18 00 00 00            MOV EAX,0x18
004D10CB  2B C2                     SUB EAX,EDX
004D10CD  99                        CDQ
004D10CE  F7 F9                     IDIV ECX
004D10D0  8B 0D FC 73 80 00         MOV ECX,dword ptr [0x008073fc]
004D10D6  B8 04 00 00 00            MOV EAX,0x4
004D10DB  2B C1                     SUB EAX,ECX
004D10DD  B9 18 00 00 00            MOV ECX,0x18
004D10E2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004D10E5  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
004D10E8  99                        CDQ
004D10E9  F7 F9                     IDIV ECX
004D10EB  B8 AB AA AA 2A            MOV EAX,0x2aaaaaab
004D10F0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004D10F3  F7 EA                     IMUL EDX
004D10F5  8B C2                     MOV EAX,EDX
004D10F7  C1 E8 1F                  SHR EAX,0x1f
004D10FA  03 D0                     ADD EDX,EAX
004D10FC  85 C9                     TEST ECX,ECX
004D10FE  8D 3C D2                  LEA EDI,[EDX + EDX*0x8]
004D1101  8D 47 08                  LEA EAX,[EDI + 0x8]
004D1104  74 1D                     JZ 0x004d1123
004D1106  8B 8E F0 02 00 00         MOV ECX,dword ptr [ESI + 0x2f0]
004D110C  8B 96 F5 01 00 00         MOV EDX,dword ptr [ESI + 0x1f5]
004D1112  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
004D1115  8B 5C 8A 18               MOV EBX,dword ptr [EDX + ECX*0x4 + 0x18]
004D1119  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
004D111C  2B 59 10                  SUB EBX,dword ptr [ECX + 0x10]
004D111F  03 DF                     ADD EBX,EDI
004D1121  EB 02                     JMP 0x004d1125
LAB_004d1123:
004D1123  8B DF                     MOV EBX,EDI
LAB_004d1125:
004D1125  6A 00                     PUSH 0x0
004D1127  50                        PUSH EAX
004D1128  8A 86 F0 02 00 00         MOV AL,byte ptr [ESI + 0x2f0]
004D112E  57                        PUSH EDI
004D112F  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D1135  50                        PUSH EAX
004D1136  E8 7F 0D F3 FF            CALL 0x00401eba
004D113B  8A 8E F0 02 00 00         MOV CL,byte ptr [ESI + 0x2f0]
004D1141  53                        PUSH EBX
004D1142  51                        PUSH ECX
004D1143  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D1149  E8 16 FF F2 FF            CALL 0x00401064
004D114E  8A 96 F0 02 00 00         MOV DL,byte ptr [ESI + 0x2f0]
004D1154  8D 47 08                  LEA EAX,[EDI + 0x8]
004D1157  6A 00                     PUSH 0x0
004D1159  50                        PUSH EAX
004D115A  57                        PUSH EDI
004D115B  FE CA                     DEC DL
004D115D  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004D1163  52                        PUSH EDX
004D1164  8B CF                     MOV ECX,EDI
004D1166  E8 4F 0D F3 FF            CALL 0x00401eba
004D116B  8A 86 F0 02 00 00         MOV AL,byte ptr [ESI + 0x2f0]
004D1171  53                        PUSH EBX
004D1172  FE C8                     DEC AL
004D1174  8B CF                     MOV ECX,EDI
004D1176  50                        PUSH EAX
004D1177  E8 E8 FE F2 FF            CALL 0x00401064
004D117C  5F                        POP EDI
004D117D  5E                        POP ESI
004D117E  33 C0                     XOR EAX,EAX
004D1180  5B                        POP EBX
004D1181  5D                        POP EBP
004D1182  C2 04 00                  RET 0x4
