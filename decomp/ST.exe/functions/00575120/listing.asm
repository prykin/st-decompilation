FUN_00575120:
00575120  55                        PUSH EBP
00575121  8B EC                     MOV EBP,ESP
00575123  51                        PUSH ECX
00575124  53                        PUSH EBX
00575125  56                        PUSH ESI
00575126  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00575129  57                        PUSH EDI
0057512A  BB 06 00 00 00            MOV EBX,0x6
0057512F  0F BF 3E                  MOVSX EDI,word ptr [ESI]
00575132  0F BF 46 02               MOVSX EAX,word ptr [ESI + 0x2]
00575136  0F AF C7                  IMUL EAX,EDI
00575139  99                        CDQ
0057513A  83 E2 03                  AND EDX,0x3
0057513D  03 C2                     ADD EAX,EDX
0057513F  8B C8                     MOV ECX,EAX
00575141  8B C7                     MOV EAX,EDI
00575143  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
00575147  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0057514A  99                        CDQ
0057514B  2B C2                     SUB EAX,EDX
0057514D  C1 F9 02                  SAR ECX,0x2
00575150  D1 F8                     SAR EAX,0x1
00575152  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
00575155  03 F8                     ADD EDI,EAX
00575157  03 D7                     ADD EDX,EDI
00575159  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
00575160  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00575163  8D BC 96 59 04 00 00      LEA EDI,[ESI + EDX*0x4 + 0x459]
LAB_0057516a:
0057516A  8B 07                     MOV EAX,dword ptr [EDI]
0057516C  85 C0                     TEST EAX,EAX
0057516E  74 11                     JZ 0x00575181
00575170  50                        PUSH EAX
00575171  56                        PUSH ESI
00575172  C7 40 18 00 00 00 00      MOV dword ptr [EAX + 0x18],0x0
00575179  E8 44 C5 E8 FF            CALL 0x004016c2
0057517E  83 C4 08                  ADD ESP,0x8
LAB_00575181:
00575181  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00575184  2B F9                     SUB EDI,ECX
00575186  4B                        DEC EBX
00575187  75 E1                     JNZ 0x0057516a
00575189  33 C0                     XOR EAX,EAX
0057518B  8A 46 04                  MOV AL,byte ptr [ESI + 0x4]
0057518E  8B C8                     MOV ECX,EAX
00575190  0F AF C8                  IMUL ECX,EAX
00575193  51                        PUSH ECX
00575194  E8 D7 5A 13 00            CALL 0x006aac70
00575199  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0057519C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057519F  50                        PUSH EAX
005751A0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005751A3  52                        PUSH EDX
005751A4  50                        PUSH EAX
005751A5  56                        PUSH ESI
005751A6  E8 CE F9 E8 FF            CALL 0x00404b79
005751AB  83 C4 10                  ADD ESP,0x10
005751AE  8D 4D FC                  LEA ECX,[EBP + -0x4]
005751B1  51                        PUSH ECX
005751B2  E8 A9 5E 13 00            CALL 0x006ab060
005751B7  5F                        POP EDI
005751B8  5E                        POP ESI
005751B9  5B                        POP EBX
005751BA  8B E5                     MOV ESP,EBP
005751BC  5D                        POP EBP
005751BD  C3                        RET
