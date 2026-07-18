FUN_0054cf00:
0054CF00  55                        PUSH EBP
0054CF01  8B EC                     MOV EBP,ESP
0054CF03  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0054CF06  56                        PUSH ESI
0054CF07  8B F1                     MOV ESI,ECX
0054CF09  57                        PUSH EDI
0054CF0A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0054CF0D  50                        PUSH EAX
0054CF0E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0054CF11  8D 55 18                  LEA EDX,[EBP + 0x18]
0054CF14  51                        PUSH ECX
0054CF15  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0054CF18  52                        PUSH EDX
0054CF19  50                        PUSH EAX
0054CF1A  51                        PUSH ECX
0054CF1B  8B CE                     MOV ECX,ESI
0054CF1D  E8 4E 92 19 00            CALL 0x006e6170
0054CF22  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0054CF25  8B F8                     MOV EDI,EAX
0054CF27  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0054CF2A  85 C0                     TEST EAX,EAX
0054CF2C  74 02                     JZ 0x0054cf30
0054CF2E  89 08                     MOV dword ptr [EAX],ECX
LAB_0054cf30:
0054CF30  85 FF                     TEST EDI,EDI
0054CF32  75 08                     JNZ 0x0054cf3c
0054CF34  51                        PUSH ECX
0054CF35  8B CE                     MOV ECX,ESI
0054CF37  E8 62 43 EB FF            CALL 0x0040129e
LAB_0054cf3c:
0054CF3C  8B C7                     MOV EAX,EDI
0054CF3E  5F                        POP EDI
0054CF3F  5E                        POP ESI
0054CF40  5D                        POP EBP
0054CF41  C2 14 00                  RET 0x14
