FUN_00609cd0:
00609CD0  55                        PUSH EBP
00609CD1  8B EC                     MOV EBP,ESP
00609CD3  51                        PUSH ECX
00609CD4  53                        PUSH EBX
00609CD5  8B D9                     MOV EBX,ECX
00609CD7  57                        PUSH EDI
00609CD8  8B 83 34 02 00 00         MOV EAX,dword ptr [EBX + 0x234]
00609CDE  85 C0                     TEST EAX,EAX
00609CE0  74 50                     JZ 0x00609d32
00609CE2  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00609CE5  33 FF                     XOR EDI,EDI
00609CE7  85 C0                     TEST EAX,EAX
00609CE9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00609CEC  7E 44                     JLE 0x00609d32
00609CEE  56                        PUSH ESI
LAB_00609cef:
00609CEF  8B 83 34 02 00 00         MOV EAX,dword ptr [EBX + 0x234]
00609CF5  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
00609CF8  73 2F                     JNC 0x00609d29
00609CFA  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
00609CFD  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
00609D00  0F AF F7                  IMUL ESI,EDI
00609D03  03 F1                     ADD ESI,ECX
00609D05  85 F6                     TEST ESI,ESI
00609D07  74 20                     JZ 0x00609d29
00609D09  57                        PUSH EDI
00609D0A  8B CB                     MOV ECX,EBX
00609D0C  E8 CE 84 DF FF            CALL 0x004021df
00609D11  83 BB 0D 02 00 00 06      CMP dword ptr [EBX + 0x20d],0x6
00609D18  75 0F                     JNZ 0x00609d29
00609D1A  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00609D1D  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00609D23  50                        PUSH EAX
00609D24  E8 37 0E 0E 00            CALL 0x006eab60
LAB_00609d29:
00609D29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00609D2C  47                        INC EDI
00609D2D  3B F8                     CMP EDI,EAX
00609D2F  7C BE                     JL 0x00609cef
00609D31  5E                        POP ESI
LAB_00609d32:
00609D32  5F                        POP EDI
00609D33  5B                        POP EBX
00609D34  8B E5                     MOV ESP,EBP
00609D36  5D                        POP EBP
00609D37  C3                        RET
