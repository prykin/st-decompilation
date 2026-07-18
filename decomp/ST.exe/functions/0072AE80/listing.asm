FUN_0072ae80:
0072AE80  55                        PUSH EBP
0072AE81  8B EC                     MOV EBP,ESP
0072AE83  83 EC 08                  SUB ESP,0x8
0072AE86  53                        PUSH EBX
0072AE87  8B 1D 90 BB 85 00         MOV EBX,dword ptr [0x0085bb90]
0072AE8D  56                        PUSH ESI
0072AE8E  57                        PUSH EDI
0072AE8F  8B 3D E0 BC 85 00         MOV EDI,dword ptr [0x0085bce0]
LAB_0072ae95:
0072AE95  A1 34 71 85 00            MOV EAX,[0x00857134]
0072AE9A  6A FF                     PUSH -0x1
0072AE9C  8B 08                     MOV ECX,dword ptr [EAX]
0072AE9E  8B 91 08 05 00 00         MOV EDX,dword ptr [ECX + 0x508]
0072AEA4  52                        PUSH EDX
0072AEA5  FF D7                     CALL EDI
0072AEA7  A1 30 71 85 00            MOV EAX,[0x00857130]
0072AEAC  33 F6                     XOR ESI,ESI
0072AEAE  A3 2C 71 85 00            MOV [0x0085712c],EAX
0072AEB3  A1 1C 71 85 00            MOV EAX,[0x0085711c]
0072AEB8  85 C0                     TEST EAX,EAX
0072AEBA  A3 38 71 85 00            MOV [0x00857138],EAX
0072AEBF  7E D4                     JLE 0x0072ae95
LAB_0072aec1:
0072AEC1  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072AEC7  8B 0D 2C 71 85 00         MOV ECX,dword ptr [0x0085712c]
0072AECD  51                        PUSH ECX
0072AECE  8B 02                     MOV EAX,dword ptr [EDX]
0072AED0  8B 88 08 05 00 00         MOV ECX,dword ptr [EAX + 0x508]
0072AED6  51                        PUSH ECX
0072AED7  FF D7                     CALL EDI
0072AED9  3D 02 01 00 00            CMP EAX,0x102
0072AEDE  74 07                     JZ 0x0072aee7
0072AEE0  33 F6                     XOR ESI,ESI
0072AEE2  E9 B5 00 00 00            JMP 0x0072af9c
LAB_0072aee7:
0072AEE7  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072AEED  8B 02                     MOV EAX,dword ptr [EDX]
0072AEEF  05 F0 04 00 00            ADD EAX,0x4f0
0072AEF4  50                        PUSH EAX
0072AEF5  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0072AEFB  A1 34 71 85 00            MOV EAX,[0x00857134]
0072AF00  8B 0D 80 10 7F 00         MOV ECX,dword ptr [0x007f1080]
0072AF06  3B 88 A0 01 00 00         CMP ECX,dword ptr [EAX + 0x1a0]
0072AF0C  0F 83 9B 00 00 00         JNC 0x0072afad
0072AF12  8B 90 B0 01 00 00         MOV EDX,dword ptr [EAX + 0x1b0]
0072AF18  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
0072AF1B  89 0D 18 71 85 00         MOV dword ptr [0x00857118],ECX
0072AF21  8B 11                     MOV EDX,dword ptr [ECX]
0072AF23  F6 C6 80                  TEST DH,0x80
0072AF26  0F 84 81 00 00 00         JZ 0x0072afad
0072AF2C  8B 91 C0 00 00 00         MOV EDX,dword ptr [ECX + 0xc0]
0072AF32  85 D2                     TEST EDX,EDX
0072AF34  74 5A                     JZ 0x0072af90
0072AF36  8D 45 FC                  LEA EAX,[EBP + -0x4]
0072AF39  6A 00                     PUSH 0x0
0072AF3B  8D 4D F8                  LEA ECX,[EBP + -0x8]
0072AF3E  50                        PUSH EAX
0072AF3F  51                        PUSH ECX
0072AF40  8B 0D 28 71 85 00         MOV ECX,dword ptr [0x00857128]
0072AF46  E8 E5 06 FF FF            CALL 0x0071b630
0072AF4B  85 C0                     TEST EAX,EAX
0072AF4D  74 3C                     JZ 0x0072af8b
0072AF4F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072AF52  8B 0D 24 71 85 00         MOV ECX,dword ptr [0x00857124]
0072AF58  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072AF5B  2B D1                     SUB EDX,ECX
0072AF5D  8B 0D 80 10 7F 00         MOV ECX,dword ptr [0x007f1080]
0072AF63  52                        PUSH EDX
0072AF64  8B 15 20 71 85 00         MOV EDX,dword ptr [0x00857120]
0072AF6A  2B C2                     SUB EAX,EDX
0072AF6C  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072AF72  50                        PUSH EAX
0072AF73  6A FE                     PUSH -0x2
0072AF75  51                        PUSH ECX
0072AF76  52                        PUSH EDX
0072AF77  E8 B4 87 F8 FF            CALL 0x006b3730
0072AF7C  A1 18 71 85 00            MOV EAX,[0x00857118]
0072AF81  F6 00 04                  TEST byte ptr [EAX],0x4
0072AF84  74 05                     JZ 0x0072af8b
0072AF86  E8 25 01 00 00            CALL 0x0072b0b0
LAB_0072af8b:
0072AF8B  A1 34 71 85 00            MOV EAX,[0x00857134]
LAB_0072af90:
0072AF90  8B 08                     MOV ECX,dword ptr [EAX]
0072AF92  81 C1 F0 04 00 00         ADD ECX,0x4f0
0072AF98  51                        PUSH ECX
0072AF99  FF D3                     CALL EBX
0072AF9B  46                        INC ESI
LAB_0072af9c:
0072AF9C  3B 35 38 71 85 00         CMP ESI,dword ptr [0x00857138]
0072AFA2  0F 8C 19 FF FF FF         JL 0x0072aec1
0072AFA8  E9 E8 FE FF FF            JMP 0x0072ae95
LAB_0072afad:
0072AFAD  8B 10                     MOV EDX,dword ptr [EAX]
0072AFAF  81 C2 F0 04 00 00         ADD EDX,0x4f0
0072AFB5  52                        PUSH EDX
0072AFB6  FF D3                     CALL EBX
0072AFB8  E9 D8 FE FF FF            JMP 0x0072ae95
