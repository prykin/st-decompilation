FUN_004ce860:
004CE860  55                        PUSH EBP
004CE861  8B EC                     MOV EBP,ESP
004CE863  51                        PUSH ECX
004CE864  56                        PUSH ESI
004CE865  8B F1                     MOV ESI,ECX
004CE867  57                        PUSH EDI
004CE868  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CE86B  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004CE86E  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004CE871  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004CE874  C1 E1 04                  SHL ECX,0x4
004CE877  03 C8                     ADD ECX,EAX
004CE879  8B 0C 4D FE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57fe]
004CE880  85 C9                     TEST ECX,ECX
004CE882  0F 84 FB 00 00 00         JZ 0x004ce983
004CE888  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004CE88B  33 FF                     XOR EDI,EDI
004CE88D  85 C0                     TEST EAX,EAX
004CE88F  0F 8E EE 00 00 00         JLE 0x004ce983
LAB_004ce895:
004CE895  8D 55 FC                  LEA EDX,[EBP + -0x4]
004CE898  52                        PUSH EDX
004CE899  8B D7                     MOV EDX,EDI
004CE89B  E8 D0 E3 1D 00            CALL 0x006acc70
004CE8A0  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004CE8A6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004CE8A9  8B 94 81 DC 04 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4dc]
004CE8B0  85 D2                     TEST EDX,EDX
004CE8B2  75 26                     JNZ 0x004ce8da
004CE8B4  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004CE8B7  47                        INC EDI
004CE8B8  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004CE8BB  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004CE8BE  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004CE8C1  C1 E1 04                  SHL ECX,0x4
004CE8C4  03 C8                     ADD ECX,EAX
004CE8C6  8B 0C 4D FE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57fe]
004CE8CD  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004CE8D0  7C C3                     JL 0x004ce895
004CE8D2  5F                        POP EDI
004CE8D3  33 C0                     XOR EAX,EAX
004CE8D5  5E                        POP ESI
004CE8D6  8B E5                     MOV ESP,EBP
004CE8D8  5D                        POP EBP
004CE8D9  C3                        RET
LAB_004ce8da:
004CE8DA  8B 86 69 03 00 00         MOV EAX,dword ptr [ESI + 0x369]
004CE8E0  8B 94 81 DC 04 00 00      MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4dc]
004CE8E7  4A                        DEC EDX
004CE8E8  89 94 81 DC 04 00 00      MOV dword ptr [ECX + EAX*0x4 + 0x4dc],EDX
004CE8EF  8B 86 98 03 00 00         MOV EAX,dword ptr [ESI + 0x398]
004CE8F5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004CE8F8  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004CE8FB  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004CE900  D1 E1                     SHL ECX,0x1
004CE902  F7 E9                     IMUL ECX
004CE904  C1 FA 05                  SAR EDX,0x5
004CE907  8B C2                     MOV EAX,EDX
004CE909  C1 E8 1F                  SHR EAX,0x1f
004CE90C  03 D0                     ADD EDX,EAX
004CE90E  8B 86 9C 03 00 00         MOV EAX,dword ptr [ESI + 0x39c]
004CE914  89 96 98 03 00 00         MOV dword ptr [ESI + 0x398],EDX
004CE91A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004CE91D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004CE920  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004CE925  D1 E1                     SHL ECX,0x1
004CE927  F7 E9                     IMUL ECX
004CE929  8B 86 A0 03 00 00         MOV EAX,dword ptr [ESI + 0x3a0]
004CE92F  C1 FA 05                  SAR EDX,0x5
004CE932  8B CA                     MOV ECX,EDX
004CE934  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004CE937  C1 E9 1F                  SHR ECX,0x1f
004CE93A  03 D1                     ADD EDX,ECX
004CE93C  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004CE93F  D1 E1                     SHL ECX,0x1
004CE941  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004CE946  89 96 9C 03 00 00         MOV dword ptr [ESI + 0x39c],EDX
004CE94C  F7 E9                     IMUL ECX
004CE94E  C1 FA 05                  SAR EDX,0x5
004CE951  8B C2                     MOV EAX,EDX
004CE953  C1 E8 1F                  SHR EAX,0x1f
004CE956  03 D0                     ADD EDX,EAX
004CE958  8B 86 A4 03 00 00         MOV EAX,dword ptr [ESI + 0x3a4]
004CE95E  89 96 A0 03 00 00         MOV dword ptr [ESI + 0x3a0],EDX
004CE964  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004CE967  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004CE96A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004CE96F  D1 E1                     SHL ECX,0x1
004CE971  F7 E9                     IMUL ECX
004CE973  C1 FA 05                  SAR EDX,0x5
004CE976  8B CA                     MOV ECX,EDX
004CE978  C1 E9 1F                  SHR ECX,0x1f
004CE97B  03 D1                     ADD EDX,ECX
004CE97D  89 96 A4 03 00 00         MOV dword ptr [ESI + 0x3a4],EDX
LAB_004ce983:
004CE983  5F                        POP EDI
004CE984  33 C0                     XOR EAX,EAX
004CE986  5E                        POP ESI
004CE987  8B E5                     MOV ESP,EBP
004CE989  5D                        POP EBP
004CE98A  C3                        RET
