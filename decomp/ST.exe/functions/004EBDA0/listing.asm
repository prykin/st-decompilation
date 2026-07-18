FUN_004ebda0:
004EBDA0  55                        PUSH EBP
004EBDA1  8B EC                     MOV EBP,ESP
004EBDA3  56                        PUSH ESI
004EBDA4  8B F1                     MOV ESI,ECX
004EBDA6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004EBDA9  8B 86 08 05 00 00         MOV EAX,dword ptr [ESI + 0x508]
004EBDAF  3B C1                     CMP EAX,ECX
004EBDB1  0F 85 F8 00 00 00         JNZ 0x004ebeaf
004EBDB7  83 BE D0 04 00 00 03      CMP dword ptr [ESI + 0x4d0],0x3
004EBDBE  0F 85 EB 00 00 00         JNZ 0x004ebeaf
004EBDC4  6A 0E                     PUSH 0xe
004EBDC6  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004EBDCC  E8 DE 84 F1 FF            CALL 0x004042af
004EBDD1  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004EBDD7  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004EBDDD  0F 85 CC 00 00 00         JNZ 0x004ebeaf
004EBDE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004EBDE6  2D DC 00 00 00            SUB EAX,0xdc
004EBDEB  74 30                     JZ 0x004ebe1d
004EBDED  48                        DEC EAX
004EBDEE  74 18                     JZ 0x004ebe08
004EBDF0  48                        DEC EAX
004EBDF1  75 3D                     JNZ 0x004ebe30
004EBDF3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004EBDF6  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004EBDF9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBDFF  52                        PUSH EDX
004EBE00  50                        PUSH EAX
004EBE01  E8 E1 97 F1 FF            CALL 0x004055e7
004EBE06  EB 28                     JMP 0x004ebe30
LAB_004ebe08:
004EBE08  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004EBE0B  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004EBE0E  51                        PUSH ECX
004EBE0F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBE15  52                        PUSH EDX
004EBE16  E8 F7 85 F1 FF            CALL 0x00404412
004EBE1B  EB 13                     JMP 0x004ebe30
LAB_004ebe1d:
004EBE1D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004EBE20  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004EBE23  50                        PUSH EAX
004EBE24  51                        PUSH ECX
004EBE25  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBE2B  E8 06 85 F1 FF            CALL 0x00404336
LAB_004ebe30:
004EBE30  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004EBE33  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBE39  52                        PUSH EDX
004EBE3A  E8 B7 6A F1 FF            CALL 0x004028f6
004EBE3F  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004EBE42  33 C9                     XOR ECX,ECX
004EBE44  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004EBE4A  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004EBE4D  3B C1                     CMP EAX,ECX
004EBE4F  75 0E                     JNZ 0x004ebe5f
004EBE51  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBE57  8A D0                     MOV DL,AL
004EBE59  52                        PUSH EDX
004EBE5A  E8 2E 8D F1 FF            CALL 0x00404b8d
LAB_004ebe5f:
004EBE5F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004EBE62  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004EBE65  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
004EBE68  89 86 FC 04 00 00         MOV dword ptr [ESI + 0x4fc],EAX
004EBE6E  89 8E 00 05 00 00         MOV dword ptr [ESI + 0x500],ECX
004EBE74  89 96 04 05 00 00         MOV dword ptr [ESI + 0x504],EDX
004EBE7A  C7 86 D0 04 00 00 06 00 00 00  MOV dword ptr [ESI + 0x4d0],0x6
004EBE84  C7 86 10 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x510],0x0
004EBE8E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004EBE93  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004EBE99  89 8E 14 05 00 00         MOV dword ptr [ESI + 0x514],ECX
004EBE9F  8B CE                     MOV ECX,ESI
004EBEA1  E8 69 60 F1 FF            CALL 0x00401f0f
004EBEA6  6A 00                     PUSH 0x0
004EBEA8  8B CE                     MOV ECX,ESI
004EBEAA  E8 48 6E F1 FF            CALL 0x00402cf7
LAB_004ebeaf:
004EBEAF  5E                        POP ESI
004EBEB0  5D                        POP EBP
004EBEB1  C2 18 00                  RET 0x18
