FUN_005fada0:
005FADA0  55                        PUSH EBP
005FADA1  8B EC                     MOV EBP,ESP
005FADA3  83 EC 08                  SUB ESP,0x8
005FADA6  53                        PUSH EBX
005FADA7  56                        PUSH ESI
005FADA8  8B F1                     MOV ESI,ECX
005FADAA  57                        PUSH EDI
005FADAB  33 FF                     XOR EDI,EDI
005FADAD  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FADB3  85 C0                     TEST EAX,EAX
005FADB5  75 07                     JNZ 0x005fadbe
005FADB7  E8 AC 63 E0 FF            CALL 0x00401168
005FADBC  EB 05                     JMP 0x005fadc3
LAB_005fadbe:
005FADBE  E8 C7 91 E0 FF            CALL 0x00403f8a
LAB_005fadc3:
005FADC3  8B 96 E6 02 00 00         MOV EDX,dword ptr [ESI + 0x2e6]
005FADC9  85 D2                     TEST EDX,EDX
005FADCB  0F 84 B5 00 00 00         JZ 0x005fae86
005FADD1  B9 0A 00 00 00            MOV ECX,0xa
005FADD6  33 C0                     XOR EAX,EAX
005FADD8  8D 7A 08                  LEA EDI,[EDX + 0x8]
005FADDB  8D 55 FE                  LEA EDX,[EBP + -0x2]
005FADDE  F3 AB                     STOSD.REP ES:EDI
005FADE0  66 AB                     STOSW ES:EDI
005FADE2  8D 45 FA                  LEA EAX,[EBP + -0x6]
005FADE5  8D 4D FC                  LEA ECX,[EBP + -0x4]
005FADE8  50                        PUSH EAX
005FADE9  51                        PUSH ECX
005FADEA  52                        PUSH EDX
005FADEB  8B CE                     MOV ECX,ESI
005FADED  E8 F1 83 E0 FF            CALL 0x004031e3
005FADF2  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
005FADF5  83 FB 01                  CMP EBX,0x1
005FADF8  75 1F                     JNZ 0x005fae19
005FADFA  0F BF 45 FA               MOVSX EAX,word ptr [EBP + -0x6]
005FADFE  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
005FAE02  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
005FAE06  50                        PUSH EAX
005FAE07  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FAE0A  51                        PUSH ECX
005FAE0B  52                        PUSH EDX
005FAE0C  50                        PUSH EAX
005FAE0D  53                        PUSH EBX
005FAE0E  6A 00                     PUSH 0x0
005FAE10  8B CE                     MOV ECX,ESI
005FAE12  E8 4C A9 E0 FF            CALL 0x00405763
005FAE17  EB 27                     JMP 0x005fae40
LAB_005fae19:
005FAE19  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
005FAE1D  8B 96 E6 02 00 00         MOV EDX,dword ptr [ESI + 0x2e6]
005FAE23  89 4A 14                  MOV dword ptr [EDX + 0x14],ECX
005FAE26  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005FAE2C  0F BF 45 FC               MOVSX EAX,word ptr [EBP + -0x4]
005FAE30  89 41 18                  MOV dword ptr [ECX + 0x18],EAX
005FAE33  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FAE39  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
005FAE3D  89 50 1C                  MOV dword ptr [EAX + 0x1c],EDX
LAB_005fae40:
005FAE40  8A 86 B6 02 00 00         MOV AL,byte ptr [ESI + 0x2b6]
005FAE46  BF 01 00 00 00            MOV EDI,0x1
005FAE4B  84 C0                     TEST AL,AL
005FAE4D  74 37                     JZ 0x005fae86
005FAE4F  53                        PUSH EBX
005FAE50  8B CE                     MOV ECX,ESI
005FAE52  E8 58 6C E0 FF            CALL 0x00401aaf
005FAE57  8B 8E E6 02 00 00         MOV ECX,dword ptr [ESI + 0x2e6]
005FAE5D  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
005FAE60  85 C0                     TEST EAX,EAX
005FAE62  7C 22                     JL 0x005fae86
005FAE64  3B DF                     CMP EBX,EDI
005FAE66  75 06                     JNZ 0x005fae6e
005FAE68  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005FAE6B  52                        PUSH EDX
005FAE6C  EB 0C                     JMP 0x005fae7a
LAB_005fae6e:
005FAE6E  50                        PUSH EAX
005FAE6F  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
005FAE75  E8 52 A4 E0 FF            CALL 0x004052cc
LAB_005fae7a:
005FAE7A  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005FAE80  50                        PUSH EAX
005FAE81  E8 DA F5 0E 00            CALL 0x006ea460
LAB_005fae86:
005FAE86  8B C7                     MOV EAX,EDI
005FAE88  5F                        POP EDI
005FAE89  5E                        POP ESI
005FAE8A  5B                        POP EBX
005FAE8B  8B E5                     MOV ESP,EBP
005FAE8D  5D                        POP EBP
005FAE8E  C2 0C 00                  RET 0xc
