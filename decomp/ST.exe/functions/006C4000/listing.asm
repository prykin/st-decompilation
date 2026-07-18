FUN_006c4000:
006C4000  55                        PUSH EBP
006C4001  8B EC                     MOV EBP,ESP
006C4003  53                        PUSH EBX
006C4004  56                        PUSH ESI
006C4005  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C4008  57                        PUSH EDI
006C4009  8D 86 08 05 00 00         LEA EAX,[ESI + 0x508]
006C400F  50                        PUSH EAX
006C4010  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006C4013  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C4019  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C401C  33 DB                     XOR EBX,EBX
006C401E  33 FF                     XOR EDI,EDI
006C4020  A9 00 00 00 40            TEST EAX,0x40000000
006C4025  0F 84 AA 00 00 00         JZ 0x006c40d5
006C402B  A9 00 00 00 20            TEST EAX,0x20000000
006C4030  0F 85 9F 00 00 00         JNZ 0x006c40d5
006C4036  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
006C4039  8B 88 E4 04 00 00         MOV ECX,dword ptr [EAX + 0x4e4]
006C403F  3B CB                     CMP ECX,EBX
006C4041  74 19                     JZ 0x006c405c
006C4043  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
006C4046  8B 80 EC 04 00 00         MOV EAX,dword ptr [EAX + 0x4ec]
006C404C  52                        PUSH EDX
006C404D  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
006C4050  52                        PUSH EDX
006C4051  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006C4054  52                        PUSH EDX
006C4055  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006C4058  52                        PUSH EDX
006C4059  50                        PUSH EAX
006C405A  FF D1                     CALL ECX
LAB_006c405c:
006C405C  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
006C405F  53                        PUSH EBX
006C4060  53                        PUSH EBX
006C4061  50                        PUSH EAX
006C4062  8B 08                     MOV ECX,dword ptr [EAX]
006C4064  FF 51 20                  CALL dword ptr [ECX + 0x20]
006C4067  8B F8                     MOV EDI,EAX
006C4069  3B FB                     CMP EDI,EBX
006C406B  75 5F                     JNZ 0x006c40cc
006C406D  B8 FF FF FF 7F            MOV EAX,0x7fffffff
006C4072  89 9E C0 00 00 00         MOV dword ptr [ESI + 0xc0],EBX
006C4078  89 86 F4 00 00 00         MOV dword ptr [ESI + 0xf4],EAX
006C407E  89 86 00 01 00 00         MOV dword ptr [ESI + 0x100],EAX
006C4084  8B 46 5C                  MOV EAX,dword ptr [ESI + 0x5c]
006C4087  89 9E C4 00 00 00         MOV dword ptr [ESI + 0xc4],EBX
006C408D  89 9E C8 00 00 00         MOV dword ptr [ESI + 0xc8],EBX
006C4093  89 9E E8 00 00 00         MOV dword ptr [ESI + 0xe8],EBX
006C4099  89 9E F0 00 00 00         MOV dword ptr [ESI + 0xf0],EBX
006C409F  89 9E F8 00 00 00         MOV dword ptr [ESI + 0xf8],EBX
006C40A5  89 9E FC 00 00 00         MOV dword ptr [ESI + 0xfc],EBX
006C40AB  89 9E 04 01 00 00         MOV dword ptr [ESI + 0x104],EBX
006C40B1  8B 10                     MOV EDX,dword ptr [EAX]
006C40B3  50                        PUSH EAX
006C40B4  FF 52 1C                  CALL dword ptr [EDX + 0x1c]
006C40B7  8B F8                     MOV EDI,EAX
006C40B9  3B FB                     CMP EDI,EBX
006C40BB  7C 0F                     JL 0x006c40cc
006C40BD  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C40C0  33 FF                     XOR EDI,EDI
006C40C2  0D 00 00 00 20            OR EAX,0x20000000
006C40C7  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006C40CA  EB 09                     JMP 0x006c40d5
LAB_006c40cc:
006C40CC  8B 76 5C                  MOV ESI,dword ptr [ESI + 0x5c]
006C40CF  56                        PUSH ESI
006C40D0  8B 06                     MOV EAX,dword ptr [ESI]
006C40D2  FF 50 24                  CALL dword ptr [EAX + 0x24]
LAB_006c40d5:
006C40D5  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C40D8  51                        PUSH ECX
006C40D9  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C40DF  3B FB                     CMP EDI,EBX
006C40E1  74 20                     JZ 0x006c4103
006C40E3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C40E9  68 08 03 00 00            PUSH 0x308
006C40EE  68 80 DE 7E 00            PUSH 0x7ede80
006C40F3  52                        PUSH EDX
006C40F4  57                        PUSH EDI
006C40F5  E8 46 1D FE FF            CALL 0x006a5e40
006C40FA  8B C7                     MOV EAX,EDI
006C40FC  5F                        POP EDI
006C40FD  5E                        POP ESI
006C40FE  5B                        POP EBX
006C40FF  5D                        POP EBP
006C4100  C2 04 00                  RET 0x4
LAB_006c4103:
006C4103  5F                        POP EDI
006C4104  5E                        POP ESI
006C4105  33 C0                     XOR EAX,EAX
006C4107  5B                        POP EBX
006C4108  5D                        POP EBP
006C4109  C2 04 00                  RET 0x4
