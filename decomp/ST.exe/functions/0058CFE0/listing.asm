FUN_0058cfe0:
0058CFE0  55                        PUSH EBP
0058CFE1  8B EC                     MOV EBP,ESP
0058CFE3  A1 20 17 81 00            MOV EAX,[0x00811720]
0058CFE8  8B 0D 18 17 81 00         MOV ECX,dword ptr [0x00811718]
0058CFEE  40                        INC EAX
0058CFEF  A3 20 17 81 00            MOV [0x00811720],EAX
0058CFF4  C1 E0 02                  SHL EAX,0x2
0058CFF7  50                        PUSH EAX
0058CFF8  51                        PUSH ECX
0058CFF9  E8 52 FF 11 00            CALL 0x006acf50
0058CFFE  8B 15 20 17 81 00         MOV EDX,dword ptr [0x00811720]
0058D004  8B 0D 1C 17 81 00         MOV ECX,dword ptr [0x0081171c]
0058D00A  A3 18 17 81 00            MOV [0x00811718],EAX
0058D00F  8D 04 95 00 00 00 00      LEA EAX,[EDX*0x4 + 0x0]
0058D016  50                        PUSH EAX
0058D017  51                        PUSH ECX
0058D018  E8 33 FF 11 00            CALL 0x006acf50
0058D01D  8B 0D 18 17 81 00         MOV ECX,dword ptr [0x00811718]
0058D023  A3 1C 17 81 00            MOV [0x0081171c],EAX
0058D028  85 C9                     TEST ECX,ECX
0058D02A  74 2D                     JZ 0x0058d059
0058D02C  85 C0                     TEST EAX,EAX
0058D02E  74 29                     JZ 0x0058d059
0058D030  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0058D033  56                        PUSH ESI
0058D034  8B 35 20 17 81 00         MOV ESI,dword ptr [0x00811720]
0058D03A  8B 50 18                  MOV EDX,dword ptr [EAX + 0x18]
0058D03D  89 54 B1 FC               MOV dword ptr [ECX + ESI*0x4 + -0x4],EDX
0058D041  8B 0D 20 17 81 00         MOV ECX,dword ptr [0x00811720]
0058D047  8B 15 1C 17 81 00         MOV EDX,dword ptr [0x0081171c]
0058D04D  5E                        POP ESI
0058D04E  89 44 8A FC               MOV dword ptr [EDX + ECX*0x4 + -0x4],EAX
0058D052  B8 01 00 00 00            MOV EAX,0x1
0058D057  5D                        POP EBP
0058D058  C3                        RET
LAB_0058d059:
0058D059  33 C0                     XOR EAX,EAX
0058D05B  5D                        POP EBP
0058D05C  C3                        RET
