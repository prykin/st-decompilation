FUN_004c91a0:
004C91A0  56                        PUSH ESI
004C91A1  8B F1                     MOV ESI,ECX
004C91A3  8B 86 D4 03 00 00         MOV EAX,dword ptr [ESI + 0x3d4]
004C91A9  85 C0                     TEST EAX,EAX
004C91AB  74 14                     JZ 0x004c91c1
004C91AD  8B 86 07 06 00 00         MOV EAX,dword ptr [ESI + 0x607]
004C91B3  85 C0                     TEST EAX,EAX
004C91B5  74 0A                     JZ 0x004c91c1
004C91B7  C7 86 D4 03 00 00 00 00 00 00  MOV dword ptr [ESI + 0x3d4],0x0
LAB_004c91c1:
004C91C1  8B 86 61 03 00 00         MOV EAX,dword ptr [ESI + 0x361]
004C91C7  85 C0                     TEST EAX,EAX
004C91C9  0F 84 38 01 00 00         JZ 0x004c9307
004C91CF  8B CE                     MOV ECX,ESI
004C91D1  C7 86 6D 03 00 00 01 00 00 00  MOV dword ptr [ESI + 0x36d],0x1
004C91DB  89 86 65 03 00 00         MOV dword ptr [ESI + 0x365],EAX
004C91E1  E8 84 B9 F3 FF            CALL 0x00404b6a
004C91E6  85 C0                     TEST EAX,EAX
004C91E8  0F 84 19 01 00 00         JZ 0x004c9307
004C91EE  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004C91F1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C91F7  50                        PUSH EAX
004C91F8  E8 BA B7 F3 FF            CALL 0x004049b7
004C91FD  3C 03                     CMP AL,0x3
004C91FF  74 34                     JZ 0x004c9235
004C9201  8B 86 98 03 00 00         MOV EAX,dword ptr [ESI + 0x398]
004C9207  85 C0                     TEST EAX,EAX
004C9209  74 2A                     JZ 0x004c9235
004C920B  8B 8E 94 03 00 00         MOV ECX,dword ptr [ESI + 0x394]
004C9211  0F AF C8                  IMUL ECX,EAX
004C9214  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C9219  F7 E9                     IMUL ECX
004C921B  C1 FA 05                  SAR EDX,0x5
004C921E  8B CA                     MOV ECX,EDX
004C9220  C1 E9 1F                  SHR ECX,0x1f
004C9223  03 D1                     ADD EDX,ECX
004C9225  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C922B  52                        PUSH EDX
004C922C  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004C922F  52                        PUSH EDX
004C9230  E8 01 B1 F3 FF            CALL 0x00404336
LAB_004c9235:
004C9235  8B 86 9C 03 00 00         MOV EAX,dword ptr [ESI + 0x39c]
004C923B  85 C0                     TEST EAX,EAX
004C923D  74 2A                     JZ 0x004c9269
004C923F  8B 8E 94 03 00 00         MOV ECX,dword ptr [ESI + 0x394]
004C9245  0F AF C8                  IMUL ECX,EAX
004C9248  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C924D  F7 E9                     IMUL ECX
004C924F  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004C9252  C1 FA 05                  SAR EDX,0x5
004C9255  8B C2                     MOV EAX,EDX
004C9257  C1 E8 1F                  SHR EAX,0x1f
004C925A  03 D0                     ADD EDX,EAX
004C925C  52                        PUSH EDX
004C925D  51                        PUSH ECX
004C925E  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C9264  E8 A9 B1 F3 FF            CALL 0x00404412
LAB_004c9269:
004C9269  8B 86 A0 03 00 00         MOV EAX,dword ptr [ESI + 0x3a0]
004C926F  85 C0                     TEST EAX,EAX
004C9271  74 2A                     JZ 0x004c929d
004C9273  8B 8E 94 03 00 00         MOV ECX,dword ptr [ESI + 0x394]
004C9279  0F AF C8                  IMUL ECX,EAX
004C927C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C9281  F7 E9                     IMUL ECX
004C9283  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004C9286  C1 FA 05                  SAR EDX,0x5
004C9289  8B C2                     MOV EAX,EDX
004C928B  C1 E8 1F                  SHR EAX,0x1f
004C928E  03 D0                     ADD EDX,EAX
004C9290  52                        PUSH EDX
004C9291  51                        PUSH ECX
004C9292  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C9298  E8 4A C3 F3 FF            CALL 0x004055e7
LAB_004c929d:
004C929D  8B 86 A4 03 00 00         MOV EAX,dword ptr [ESI + 0x3a4]
004C92A3  85 C0                     TEST EAX,EAX
004C92A5  74 2A                     JZ 0x004c92d1
004C92A7  8B 8E 94 03 00 00         MOV ECX,dword ptr [ESI + 0x394]
004C92AD  0F AF C8                  IMUL ECX,EAX
004C92B0  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004C92B5  F7 E9                     IMUL ECX
004C92B7  8B 4E 24                  MOV ECX,dword ptr [ESI + 0x24]
004C92BA  C1 FA 05                  SAR EDX,0x5
004C92BD  8B C2                     MOV EAX,EDX
004C92BF  C1 E8 1F                  SHR EAX,0x1f
004C92C2  03 D0                     ADD EDX,EAX
004C92C4  52                        PUSH EDX
004C92C5  51                        PUSH ECX
004C92C6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C92CC  E8 9A CB F3 FF            CALL 0x00405e6b
LAB_004c92d1:
004C92D1  8B CE                     MOV ECX,ESI
004C92D3  E8 56 C7 F3 FF            CALL 0x00405a2e
004C92D8  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004C92DB  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C92E1  52                        PUSH EDX
004C92E2  E8 0F 96 F3 FF            CALL 0x004028f6
004C92E7  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
004C92EA  33 C9                     XOR ECX,ECX
004C92EC  8A 88 2D 11 00 00         MOV CL,byte ptr [EAX + 0x112d]
004C92F2  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004C92F5  3B C1                     CMP EAX,ECX
004C92F7  75 0E                     JNZ 0x004c9307
004C92F9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004C92FF  8A D0                     MOV DL,AL
004C9301  52                        PUSH EDX
004C9302  E8 86 B8 F3 FF            CALL 0x00404b8d
LAB_004c9307:
004C9307  33 C0                     XOR EAX,EAX
004C9309  5E                        POP ESI
004C930A  C2 04 00                  RET 0x4
