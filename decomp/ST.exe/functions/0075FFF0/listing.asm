FUN_0075fff0:
0075FFF0  55                        PUSH EBP
0075FFF1  8B EC                     MOV EBP,ESP
0075FFF3  83 EC 28                  SUB ESP,0x28
0075FFF6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0075FFF9  56                        PUSH ESI
0075FFFA  8B 91 BA 01 00 00         MOV EDX,dword ptr [ECX + 0x1ba]
00760000  8B 49 68                  MOV ECX,dword ptr [ECX + 0x68]
00760003  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00760006  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00760009  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0076000C  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0076000F  85 C9                     TEST ECX,ECX
00760011  8B 30                     MOV ESI,dword ptr [EAX]
00760013  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
00760016  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
00760019  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0076001C  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0076001F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00760022  0F 8E D0 00 00 00         JLE 0x007600f8
00760028  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0076002B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0076002E  2B C6                     SUB EAX,ESI
00760030  53                        PUSH EBX
00760031  57                        PUSH EDI
00760032  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
00760035  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00760038  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
0076003B  EB 06                     JMP 0x00760043
LAB_0076003d:
0076003D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00760040  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_00760043:
00760043  8B 04 30                  MOV EAX,dword ptr [EAX + ESI*0x1]
00760046  8B 4A 30                  MOV ECX,dword ptr [EDX + 0x30]
00760049  8B 36                     MOV ESI,dword ptr [ESI]
0076004B  8B 7A 34                  MOV EDI,dword ptr [EDX + 0x34]
0076004E  8B 5A 38                  MOV EBX,dword ptr [EDX + 0x38]
00760051  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
00760054  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
00760057  8B 72 3C                  MOV ESI,dword ptr [EDX + 0x3c]
0076005A  C1 E1 06                  SHL ECX,0x6
0076005D  03 F1                     ADD ESI,ECX
0076005F  03 F9                     ADD EDI,ECX
00760061  03 D9                     ADD EBX,ECX
00760063  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00760066  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00760069  33 F6                     XOR ESI,ESI
0076006B  85 C9                     TEST ECX,ECX
0076006D  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
00760070  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
00760073  76 61                     JBE 0x007600d6
00760075  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00760078  EB 06                     JMP 0x00760080
LAB_0076007a:
0076007A  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0076007D  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_00760080:
00760080  8B 3C B7                  MOV EDI,dword ptr [EDI + ESI*0x4]
00760083  33 D2                     XOR EDX,EDX
00760085  8A 10                     MOV DL,byte ptr [EAX]
00760087  33 C9                     XOR ECX,ECX
00760089  03 FA                     ADD EDI,EDX
0076008B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0076008E  40                        INC EAX
0076008F  8A 0C 17                  MOV CL,byte ptr [EDI + EDX*0x1]
00760092  8B 3C B3                  MOV EDI,dword ptr [EBX + ESI*0x4]
00760095  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00760098  33 D2                     XOR EDX,EDX
0076009A  8A 10                     MOV DL,byte ptr [EAX]
0076009C  03 FA                     ADD EDI,EDX
0076009E  33 D2                     XOR EDX,EDX
007600A0  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
007600A3  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
007600A6  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
007600A9  03 CA                     ADD ECX,EDX
007600AB  8B 3C B7                  MOV EDI,dword ptr [EDI + ESI*0x4]
007600AE  40                        INC EAX
007600AF  33 D2                     XOR EDX,EDX
007600B1  8A 10                     MOV DL,byte ptr [EAX]
007600B3  03 FA                     ADD EDI,EDX
007600B5  33 D2                     XOR EDX,EDX
007600B7  8A 14 1F                  MOV DL,byte ptr [EDI + EBX*0x1]
007600BA  03 CA                     ADD ECX,EDX
007600BC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007600BF  40                        INC EAX
007600C0  88 0A                     MOV byte ptr [EDX],CL
007600C2  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007600C5  42                        INC EDX
007600C6  46                        INC ESI
007600C7  83 E6 0F                  AND ESI,0xf
007600CA  49                        DEC ECX
007600CB  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
007600CE  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
007600D1  75 A7                     JNZ 0x0076007a
007600D3  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
LAB_007600d6:
007600D6  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
007600D9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007600DC  40                        INC EAX
007600DD  83 C1 04                  ADD ECX,0x4
007600E0  83 E0 0F                  AND EAX,0xf
007600E3  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
007600E6  89 42 30                  MOV dword ptr [EDX + 0x30],EAX
007600E9  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007600EC  48                        DEC EAX
007600ED  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
007600F0  0F 85 47 FF FF FF         JNZ 0x0076003d
007600F6  5F                        POP EDI
007600F7  5B                        POP EBX
LAB_007600f8:
007600F8  5E                        POP ESI
007600F9  8B E5                     MOV ESP,EBP
007600FB  5D                        POP EBP
007600FC  C2 10 00                  RET 0x10
