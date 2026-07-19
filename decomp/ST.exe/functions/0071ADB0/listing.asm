mfAnySave:
0071ADB0  55                        PUSH EBP
0071ADB1  8B EC                     MOV EBP,ESP
0071ADB3  83 EC 44                  SUB ESP,0x44
0071ADB6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0071ADBB  53                        PUSH EBX
0071ADBC  56                        PUSH ESI
0071ADBD  57                        PUSH EDI
0071ADBE  8D 55 C0                  LEA EDX,[EBP + -0x40]
0071ADC1  8D 4D BC                  LEA ECX,[EBP + -0x44]
0071ADC4  6A 00                     PUSH 0x0
0071ADC6  52                        PUSH EDX
0071ADC7  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0071ADCA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071ADD0  E8 1B 2A 01 00            CALL 0x0072d7f0
0071ADD5  8B F0                     MOV ESI,EAX
0071ADD7  83 C4 08                  ADD ESP,0x8
0071ADDA  85 F6                     TEST ESI,ESI
0071ADDC  75 54                     JNZ 0x0071ae32
0071ADDE  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0071ADE1  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0071ADE4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0071ADE7  85 F6                     TEST ESI,ESI
0071ADE9  74 08                     JZ 0x0071adf3
0071ADEB  85 DB                     TEST EBX,EBX
0071ADED  74 04                     JZ 0x0071adf3
0071ADEF  85 FF                     TEST EDI,EDI
0071ADF1  75 14                     JNZ 0x0071ae07
LAB_0071adf3:
0071ADF3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0071ADF8  6A 2D                     PUSH 0x2d
0071ADFA  68 C8 08 7F 00            PUSH 0x7f08c8
0071ADFF  50                        PUSH EAX
0071AE00  6A FA                     PUSH -0x6
0071AE02  E8 39 B0 F8 FF            CALL 0x006a5e40
LAB_0071ae07:
0071AE07  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0071AE0A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0071AE0D  6A 00                     PUSH 0x0
0071AE0F  51                        PUSH ECX
0071AE10  6A 00                     PUSH 0x0
0071AE12  52                        PUSH EDX
0071AE13  53                        PUSH EBX
0071AE14  57                        PUSH EDI
0071AE15  6A 00                     PUSH 0x0
0071AE17  8B CE                     MOV ECX,ESI
0071AE19  E8 D2 65 FD FF            CALL 0x006f13f0
0071AE1E  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0071AE21  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0071AE26  B8 01 00 00 00            MOV EAX,0x1
0071AE2B  5F                        POP EDI
0071AE2C  5E                        POP ESI
0071AE2D  5B                        POP EBX
0071AE2E  8B E5                     MOV ESP,EBP
0071AE30  5D                        POP EBP
0071AE31  C3                        RET
LAB_0071ae32:
0071AE32  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0071AE35  68 E8 08 7F 00            PUSH 0x7f08e8
0071AE3A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0071AE3F  56                        PUSH ESI
0071AE40  6A 00                     PUSH 0x0
0071AE42  6A 31                     PUSH 0x31
0071AE44  68 C8 08 7F 00            PUSH 0x7f08c8
0071AE49  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0071AE4F  E8 7C 26 F9 FF            CALL 0x006ad4d0
0071AE54  83 C4 18                  ADD ESP,0x18
0071AE57  85 C0                     TEST EAX,EAX
0071AE59  74 01                     JZ 0x0071ae5c
0071AE5B  CC                        INT3
LAB_0071ae5c:
0071AE5C  6A 33                     PUSH 0x33
0071AE5E  68 C8 08 7F 00            PUSH 0x7f08c8
0071AE63  6A 00                     PUSH 0x0
0071AE65  56                        PUSH ESI
0071AE66  E8 D5 AF F8 FF            CALL 0x006a5e40
0071AE6B  5F                        POP EDI
0071AE6C  5E                        POP ESI
0071AE6D  33 C0                     XOR EAX,EAX
0071AE6F  5B                        POP EBX
0071AE70  8B E5                     MOV ESP,EBP
0071AE72  5D                        POP EBP
0071AE73  C3                        RET
