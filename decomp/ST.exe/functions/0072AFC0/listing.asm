FUN_0072afc0:
0072AFC0  A1 3C 71 85 00            MOV EAX,[0x0085713c]
0072AFC5  85 C0                     TEST EAX,EAX
0072AFC7  74 6E                     JZ 0x0072b037
0072AFC9  A1 34 71 85 00            MOV EAX,[0x00857134]
0072AFCE  85 C0                     TEST EAX,EAX
0072AFD0  74 35                     JZ 0x0072b007
0072AFD2  8B 00                     MOV EAX,dword ptr [EAX]
0072AFD4  05 F0 04 00 00            ADD EAX,0x4f0
0072AFD9  50                        PUSH EAX
0072AFDA  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0072AFE0  8B 0D 34 71 85 00         MOV ECX,dword ptr [0x00857134]
0072AFE6  8B 11                     MOV EDX,dword ptr [ECX]
0072AFE8  8B 82 08 05 00 00         MOV EAX,dword ptr [EDX + 0x508]
0072AFEE  50                        PUSH EAX
0072AFEF  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
0072AFF5  8B 0D 34 71 85 00         MOV ECX,dword ptr [0x00857134]
0072AFFB  8B 11                     MOV EDX,dword ptr [ECX]
0072AFFD  C7 82 08 05 00 00 00 00 00 00  MOV dword ptr [EDX + 0x508],0x0
LAB_0072b007:
0072B007  A1 3C 71 85 00            MOV EAX,[0x0085713c]
0072B00C  6A 00                     PUSH 0x0
0072B00E  50                        PUSH EAX
0072B00F  FF 15 6C BB 85 00         CALL dword ptr [0x0085bb6c]
0072B015  A1 34 71 85 00            MOV EAX,[0x00857134]
0072B01A  C7 05 3C 71 85 00 00 00 00 00  MOV dword ptr [0x0085713c],0x0
0072B024  85 C0                     TEST EAX,EAX
0072B026  74 39                     JZ 0x0072b061
0072B028  8B 08                     MOV ECX,dword ptr [EAX]
0072B02A  81 C1 F0 04 00 00         ADD ECX,0x4f0
0072B030  51                        PUSH ECX
0072B031  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_0072b037:
0072B037  A1 34 71 85 00            MOV EAX,[0x00857134]
0072B03C  85 C0                     TEST EAX,EAX
0072B03E  74 21                     JZ 0x0072b061
0072B040  8B 15 80 10 7F 00         MOV EDX,dword ptr [0x007f1080]
0072B046  52                        PUSH EDX
0072B047  50                        PUSH EAX
0072B048  E8 63 8B F8 FF            CALL 0x006b3bb0
0072B04D  C7 05 80 10 7F 00 FF FF FF FF  MOV dword ptr [0x007f1080],0xffffffff
0072B057  C7 05 34 71 85 00 00 00 00 00  MOV dword ptr [0x00857134],0x0
LAB_0072b061:
0072B061  C3                        RET
