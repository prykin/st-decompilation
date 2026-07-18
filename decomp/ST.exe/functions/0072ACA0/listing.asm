FUN_0072aca0:
0072ACA0  55                        PUSH EBP
0072ACA1  8B EC                     MOV EBP,ESP
0072ACA3  56                        PUSH ESI
0072ACA4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0072ACA7  85 F6                     TEST ESI,ESI
0072ACA9  89 35 34 71 85 00         MOV dword ptr [0x00857134],ESI
0072ACAF  75 19                     JNZ 0x0072acca
0072ACB1  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0072ACB6  6A 4E                     PUSH 0x4e
0072ACB8  68 84 10 7F 00            PUSH 0x7f1084
0072ACBD  50                        PUSH EAX
0072ACBE  6A CC                     PUSH -0x34
0072ACC0  E8 7B B1 F7 FF            CALL 0x006a5e40
0072ACC5  5E                        POP ESI
0072ACC6  5D                        POP EBP
0072ACC7  C2 14 00                  RET 0x14
LAB_0072acca:
0072ACCA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0072ACCD  85 D2                     TEST EDX,EDX
0072ACCF  0F 8E 61 01 00 00         JLE 0x0072ae36
0072ACD5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072ACD8  85 C9                     TEST ECX,ECX
0072ACDA  0F 8E 56 01 00 00         JLE 0x0072ae36
0072ACE0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0072ACE3  85 C0                     TEST EAX,EAX
0072ACE5  0F 84 4B 01 00 00         JZ 0x0072ae36
0072ACEB  A3 28 71 85 00            MOV [0x00857128],EAX
0072ACF0  A1 3C 71 85 00            MOV EAX,[0x0085713c]
0072ACF5  85 C0                     TEST EAX,EAX
0072ACF7  89 15 30 71 85 00         MOV dword ptr [0x00857130],EDX
0072ACFD  89 0D 1C 71 85 00         MOV dword ptr [0x0085711c],ECX
0072AD03  74 05                     JZ 0x0072ad0a
0072AD05  E8 B6 02 00 00            CALL 0x0072afc0
LAB_0072ad0a:
0072AD0A  6A 00                     PUSH 0x0
0072AD0C  6A 00                     PUSH 0x0
0072AD0E  6A 00                     PUSH 0x0
0072AD10  6A 00                     PUSH 0x0
0072AD12  FF 15 48 BB 85 00         CALL dword ptr [0x0085bb48]
0072AD18  8B 0D 34 71 85 00         MOV ECX,dword ptr [0x00857134]
0072AD1E  8B 11                     MOV EDX,dword ptr [ECX]
0072AD20  89 82 08 05 00 00         MOV dword ptr [EDX + 0x508],EAX
0072AD26  A1 34 71 85 00            MOV EAX,[0x00857134]
0072AD2B  8B 08                     MOV ECX,dword ptr [EAX]
0072AD2D  8B 81 08 05 00 00         MOV EAX,dword ptr [ECX + 0x508]
0072AD33  85 C0                     TEST EAX,EAX
0072AD35  75 2C                     JNZ 0x0072ad63
0072AD37  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0072AD3D  8B F0                     MOV ESI,EAX
0072AD3F  85 F6                     TEST ESI,ESI
0072AD41  75 05                     JNZ 0x0072ad48
0072AD43  BE 03 FF FF FF            MOV ESI,0xffffff03
LAB_0072ad48:
0072AD48  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0072AD4E  6A 5D                     PUSH 0x5d
0072AD50  68 84 10 7F 00            PUSH 0x7f1084
0072AD55  52                        PUSH EDX
0072AD56  56                        PUSH ESI
0072AD57  E8 E4 B0 F7 FF            CALL 0x006a5e40
0072AD5C  8B C6                     MOV EAX,ESI
0072AD5E  5E                        POP ESI
0072AD5F  5D                        POP EBP
0072AD60  C2 14 00                  RET 0x14
LAB_0072ad63:
0072AD63  8D 45 08                  LEA EAX,[EBP + 0x8]
0072AD66  50                        PUSH EAX
0072AD67  6A 00                     PUSH 0x0
0072AD69  6A 00                     PUSH 0x0
0072AD6B  68 80 AE 72 00            PUSH 0x72ae80
0072AD70  6A 00                     PUSH 0x0
0072AD72  6A 00                     PUSH 0x0
0072AD74  FF 15 70 BB 85 00         CALL dword ptr [0x0085bb70]
0072AD7A  85 C0                     TEST EAX,EAX
0072AD7C  A3 3C 71 85 00            MOV [0x0085713c],EAX
0072AD81  75 41                     JNZ 0x0072adc4
0072AD83  8B 0D 34 71 85 00         MOV ECX,dword ptr [0x00857134]
0072AD89  8B 11                     MOV EDX,dword ptr [ECX]
0072AD8B  8B 82 08 05 00 00         MOV EAX,dword ptr [EDX + 0x508]
0072AD91  50                        PUSH EAX
0072AD92  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
0072AD98  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
0072AD9E  8B F0                     MOV ESI,EAX
0072ADA0  85 F6                     TEST ESI,ESI
0072ADA2  75 05                     JNZ 0x0072ada9
0072ADA4  BE 03 FF FF FF            MOV ESI,0xffffff03
LAB_0072ada9:
0072ADA9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0072ADAF  6A 63                     PUSH 0x63
0072ADB1  68 84 10 7F 00            PUSH 0x7f1084
0072ADB6  51                        PUSH ECX
0072ADB7  56                        PUSH ESI
0072ADB8  E8 83 B0 F7 FF            CALL 0x006a5e40
0072ADBD  8B C6                     MOV EAX,ESI
0072ADBF  5E                        POP ESI
0072ADC0  5D                        POP EBP
0072ADC1  C2 14 00                  RET 0x14
LAB_0072adc4:
0072ADC4  6A 02                     PUSH 0x2
0072ADC6  50                        PUSH EAX
0072ADC7  FF 15 74 BB 85 00         CALL dword ptr [0x0085bb74]
0072ADCD  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072ADD3  6A 00                     PUSH 0x0
0072ADD5  6A FF                     PUSH -0x1
0072ADD7  6A FF                     PUSH -0x1
0072ADD9  68 00 00 00 08            PUSH 0x8000000
0072ADDE  6A 00                     PUSH 0x0
0072ADE0  6A 00                     PUSH 0x0
0072ADE2  6A 00                     PUSH 0x0
0072ADE4  68 80 10 7F 00            PUSH 0x7f1080
0072ADE9  52                        PUSH EDX
0072ADEA  E8 F1 73 F8 FF            CALL 0x006b21e0
0072ADEF  A1 80 10 7F 00            MOV EAX,[0x007f1080]
0072ADF4  8B 0D 34 71 85 00         MOV ECX,dword ptr [0x00857134]
0072ADFA  50                        PUSH EAX
0072ADFB  51                        PUSH ECX
0072ADFC  E8 CF 6D F8 FF            CALL 0x006b1bd0
0072AE01  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072AE07  8B 0D 80 10 7F 00         MOV ECX,dword ptr [0x007f1080]
0072AE0D  5E                        POP ESI
0072AE0E  8B 82 B0 01 00 00         MOV EAX,dword ptr [EDX + 0x1b0]
0072AE14  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072AE17  8B 04 88                  MOV EAX,dword ptr [EAX + ECX*0x4]
0072AE1A  A3 18 71 85 00            MOV [0x00857118],EAX
0072AE1F  8B 08                     MOV ECX,dword ptr [EAX]
0072AE21  81 C9 00 00 08 00         OR ECX,0x80000
0072AE27  89 08                     MOV dword ptr [EAX],ECX
0072AE29  A1 80 10 7F 00            MOV EAX,[0x007f1080]
0072AE2E  89 02                     MOV dword ptr [EDX],EAX
0072AE30  33 C0                     XOR EAX,EAX
0072AE32  5D                        POP EBP
0072AE33  C2 14 00                  RET 0x14
LAB_0072ae36:
0072AE36  6A 00                     PUSH 0x0
0072AE38  6A FF                     PUSH -0x1
0072AE3A  6A FF                     PUSH -0x1
0072AE3C  68 00 00 00 08            PUSH 0x8000000
0072AE41  6A 00                     PUSH 0x0
0072AE43  6A 00                     PUSH 0x0
0072AE45  6A 00                     PUSH 0x0
0072AE47  68 80 10 7F 00            PUSH 0x7f1080
0072AE4C  56                        PUSH ESI
0072AE4D  E8 8E 73 F8 FF            CALL 0x006b21e0
0072AE52  8B 0D 80 10 7F 00         MOV ECX,dword ptr [0x007f1080]
0072AE58  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072AE5E  51                        PUSH ECX
0072AE5F  52                        PUSH EDX
0072AE60  E8 6B 6D F8 FF            CALL 0x006b1bd0
0072AE65  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072AE68  8B 0D 80 10 7F 00         MOV ECX,dword ptr [0x007f1080]
0072AE6E  5E                        POP ESI
0072AE6F  89 08                     MOV dword ptr [EAX],ECX
0072AE71  33 C0                     XOR EAX,EAX
0072AE73  5D                        POP EBP
0072AE74  C2 14 00                  RET 0x14
