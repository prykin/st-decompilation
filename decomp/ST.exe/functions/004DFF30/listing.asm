FUN_004dff30:
004DFF30  55                        PUSH EBP
004DFF31  8B EC                     MOV EBP,ESP
004DFF33  51                        PUSH ECX
004DFF34  56                        PUSH ESI
004DFF35  8B F1                     MOV ESI,ECX
004DFF37  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DFF3A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DFF3D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DFF40  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DFF43  C1 E1 04                  SHL ECX,0x4
004DFF46  03 C8                     ADD ECX,EAX
004DFF48  8B 0C 4D 0A 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f580a]
004DFF4F  85 C9                     TEST ECX,ECX
004DFF51  0F 84 9B 00 00 00         JZ 0x004dfff2
004DFF57  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DFF5A  57                        PUSH EDI
004DFF5B  33 FF                     XOR EDI,EDI
004DFF5D  85 C0                     TEST EAX,EAX
004DFF5F  7E 4F                     JLE 0x004dffb0
LAB_004dff61:
004DFF61  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DFF64  52                        PUSH EDX
004DFF65  8B D7                     MOV EDX,EDI
004DFF67  E8 04 CD 1C 00            CALL 0x006acc70
004DFF6C  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004DFF6F  74 20                     JZ 0x004dff91
004DFF71  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DFF74  47                        INC EDI
004DFF75  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DFF78  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DFF7B  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DFF7E  C1 E1 04                  SHL ECX,0x4
004DFF81  03 C8                     ADD ECX,EAX
004DFF83  8B 0C 4D 0A 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f580a]
004DFF8A  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004DFF8D  7C D2                     JL 0x004dff61
004DFF8F  EB 1F                     JMP 0x004dffb0
LAB_004dff91:
004DFF91  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DFF94  57                        PUSH EDI
004DFF95  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004DFF98  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004DFF9B  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004DFF9E  C1 E2 04                  SHL EDX,0x4
004DFFA1  03 D0                     ADD EDX,EAX
004DFFA3  8B 04 55 0A 58 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f580a]
004DFFAA  50                        PUSH EAX
004DFFAB  E8 C0 0C 1D 00            CALL 0x006b0c70
LAB_004dffb0:
004DFFB0  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DFFB3  5F                        POP EDI
004DFFB4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DFFB7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DFFBA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DFFBD  C1 E1 04                  SHL ECX,0x4
004DFFC0  03 C8                     ADD ECX,EAX
004DFFC2  8B 04 4D 0A 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f580a]
004DFFC9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004DFFCC  85 C9                     TEST ECX,ECX
004DFFCE  75 22                     JNZ 0x004dfff2
004DFFD0  50                        PUSH EAX
004DFFD1  E8 3A E1 1C 00            CALL 0x006ae110
004DFFD6  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DFFD9  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004DFFDC  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004DFFDF  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004DFFE2  C1 E1 04                  SHL ECX,0x4
004DFFE5  03 CE                     ADD ECX,ESI
004DFFE7  C7 04 4D 0A 58 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f580a],0x0
LAB_004dfff2:
004DFFF2  33 C0                     XOR EAX,EAX
004DFFF4  5E                        POP ESI
004DFFF5  8B E5                     MOV ESP,EBP
004DFFF7  5D                        POP EBP
004DFFF8  C3                        RET
