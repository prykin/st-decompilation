FUN_0065d030:
0065D030  55                        PUSH EBP
0065D031  8B EC                     MOV EBP,ESP
0065D033  53                        PUSH EBX
0065D034  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0065D037  8A 43 05                  MOV AL,byte ptr [EBX + 0x5]
0065D03A  84 C0                     TEST AL,AL
0065D03C  74 7D                     JZ 0x0065d0bb
0065D03E  8B 83 62 04 00 00         MOV EAX,dword ptr [EBX + 0x462]
0065D044  56                        PUSH ESI
0065D045  57                        PUSH EDI
0065D046  33 FF                     XOR EDI,EDI
0065D048  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0065D04B  85 C9                     TEST ECX,ECX
0065D04D  7E 35                     JLE 0x0065d084
0065D04F  3B F9                     CMP EDI,ECX
LAB_0065d051:
0065D051  73 0D                     JNC 0x0065d060
0065D053  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0065D056  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0065D059  0F AF F7                  IMUL ESI,EDI
0065D05C  03 F1                     ADD ESI,ECX
0065D05E  EB 02                     JMP 0x0065d062
LAB_0065d060:
0065D060  33 F6                     XOR ESI,ESI
LAB_0065d062:
0065D062  8B 46 0F                  MOV EAX,dword ptr [ESI + 0xf]
0065D065  85 C0                     TEST EAX,EAX
0065D067  74 0D                     JZ 0x0065d076
0065D069  50                        PUSH EAX
0065D06A  E8 A1 10 05 00            CALL 0x006ae110
0065D06F  C7 46 0F 00 00 00 00      MOV dword ptr [ESI + 0xf],0x0
LAB_0065d076:
0065D076  8B 83 62 04 00 00         MOV EAX,dword ptr [EBX + 0x462]
0065D07C  47                        INC EDI
0065D07D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0065D080  3B F9                     CMP EDI,ECX
0065D082  7C CD                     JL 0x0065d051
LAB_0065d084:
0065D084  8B 83 62 04 00 00         MOV EAX,dword ptr [EBX + 0x462]
0065D08A  50                        PUSH EAX
0065D08B  E8 80 10 05 00            CALL 0x006ae110
0065D090  8B 8B 56 04 00 00         MOV ECX,dword ptr [EBX + 0x456]
0065D096  33 F6                     XOR ESI,ESI
0065D098  51                        PUSH ECX
0065D099  89 B3 62 04 00 00         MOV dword ptr [EBX + 0x462],ESI
0065D09F  E8 CC 84 05 00            CALL 0x006b5570
0065D0A4  89 B3 56 04 00 00         MOV dword ptr [EBX + 0x456],ESI
0065D0AA  81 C3 6E 04 00 00         ADD EBX,0x46e
0065D0B0  53                        PUSH EBX
0065D0B1  E8 EE 5E DA FF            CALL 0x00402fa4
0065D0B6  83 C4 04                  ADD ESP,0x4
0065D0B9  5F                        POP EDI
0065D0BA  5E                        POP ESI
LAB_0065d0bb:
0065D0BB  5B                        POP EBX
0065D0BC  5D                        POP EBP
0065D0BD  C3                        RET
