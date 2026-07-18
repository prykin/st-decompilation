FUN_00647960:
00647960  56                        PUSH ESI
00647961  8B F1                     MOV ESI,ECX
00647963  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
00647966  85 C0                     TEST EAX,EAX
00647968  7C 12                     JL 0x0064797c
0064796A  8B 4E 71                  MOV ECX,dword ptr [ESI + 0x71]
0064796D  51                        PUSH ECX
0064796E  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00647974  6A 00                     PUSH 0x0
00647976  50                        PUSH EAX
00647977  E8 F4 28 0A 00            CALL 0x006ea270
LAB_0064797c:
0064797C  8B 46 7A                  MOV EAX,dword ptr [ESI + 0x7a]
0064797F  85 C0                     TEST EAX,EAX
00647981  7C 12                     JL 0x00647995
00647983  8B 56 7E                  MOV EDX,dword ptr [ESI + 0x7e]
00647986  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0064798C  52                        PUSH EDX
0064798D  6A 00                     PUSH 0x0
0064798F  50                        PUSH EAX
00647990  E8 DB 28 0A 00            CALL 0x006ea270
LAB_00647995:
00647995  8B 86 86 00 00 00         MOV EAX,dword ptr [ESI + 0x86]
0064799B  85 C0                     TEST EAX,EAX
0064799D  7C 15                     JL 0x006479b4
0064799F  8B 8E 8A 00 00 00         MOV ECX,dword ptr [ESI + 0x8a]
006479A5  51                        PUSH ECX
006479A6  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006479AC  6A 00                     PUSH 0x0
006479AE  50                        PUSH EAX
006479AF  E8 BC 28 0A 00            CALL 0x006ea270
LAB_006479b4:
006479B4  5E                        POP ESI
006479B5  C3                        RET
