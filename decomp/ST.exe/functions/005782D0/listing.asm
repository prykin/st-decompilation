FUN_005782d0:
005782D0  6A 24                     PUSH 0x24
005782D2  E8 59 62 1B 00            CALL 0x0072e530
005782D7  83 C4 04                  ADD ESP,0x4
005782DA  85 C0                     TEST EAX,EAX
005782DC  74 10                     JZ 0x005782ee
005782DE  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
005782E4  51                        PUSH ECX
005782E5  8B C8                     MOV ECX,EAX
005782E7  E8 E4 DA E8 FF            CALL 0x00405dd0
005782EC  EB 02                     JMP 0x005782f0
LAB_005782ee:
005782EE  33 C0                     XOR EAX,EAX
LAB_005782f0:
005782F0  A3 44 16 81 00            MOV [0x00811644],EAX
005782F5  C7 40 20 00 00 00 00      MOV dword ptr [EAX + 0x20],0x0
005782FC  8B 0D 44 16 81 00         MOV ECX,dword ptr [0x00811644]
00578302  8B 11                     MOV EDX,dword ptr [ECX]
00578304  FF 12                     CALL dword ptr [EDX]
00578306  85 C0                     TEST EAX,EAX
00578308  74 05                     JZ 0x0057830f
0057830A  E8 0F 92 E8 FF            CALL 0x0040151e
LAB_0057830f:
0057830F  A1 44 16 81 00            MOV EAX,[0x00811644]
00578314  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
0057831A  6A 00                     PUSH 0x0
0057831C  50                        PUSH EAX
0057831D  E8 2E C3 16 00            CALL 0x006e4650
00578322  85 C0                     TEST EAX,EAX
00578324  74 13                     JZ 0x00578339
00578326  E8 F3 91 E8 FF            CALL 0x0040151e
0057832B  8B 0D 44 16 81 00         MOV ECX,dword ptr [0x00811644]
00578331  C7 41 20 01 00 00 00      MOV dword ptr [ECX + 0x20],0x1
00578338  C3                        RET
LAB_00578339:
00578339  8B 15 44 16 81 00         MOV EDX,dword ptr [0x00811644]
0057833F  C7 42 20 01 00 00 00      MOV dword ptr [EDX + 0x20],0x1
00578346  C3                        RET
