FUN_004e5140:
004E5140  55                        PUSH EBP
004E5141  8B EC                     MOV EBP,ESP
004E5143  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5146  85 C9                     TEST ECX,ECX
004E5148  7C 35                     JL 0x004e517f
004E514A  83 F9 08                  CMP ECX,0x8
004E514D  7D 30                     JGE 0x004e517f
004E514F  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
004E5152  8D 14 C1                  LEA EDX,[ECX + EAX*0x8]
004E5155  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
004E5158  C1 E0 04                  SHL EAX,0x4
004E515B  03 C1                     ADD EAX,ECX
004E515D  D1 E0                     SHL EAX,0x1
004E515F  33 C9                     XOR ECX,ECX
004E5161  8D 90 33 51 7F 00         LEA EDX,[EAX + 0x7f5133]
004E5167  89 88 33 51 7F 00         MOV dword ptr [EAX + 0x7f5133],ECX
004E516D  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
004E5170  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
004E5173  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
004E5176  89 4A 10                  MOV dword ptr [EDX + 0x10],ECX
004E5179  89 88 F6 55 7F 00         MOV dword ptr [EAX + 0x7f55f6],ECX
LAB_004e517f:
004E517F  5D                        POP EBP
004E5180  C3                        RET
