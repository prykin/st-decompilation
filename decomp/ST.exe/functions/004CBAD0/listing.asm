FUN_004cbad0:
004CBAD0  56                        PUSH ESI
004CBAD1  57                        PUSH EDI
004CBAD2  8B F1                     MOV ESI,ECX
004CBAD4  E8 63 5F F3 FF            CALL 0x00401a3c
004CBAD9  85 C0                     TEST EAX,EAX
004CBADB  74 70                     JZ 0x004cbb4d
004CBADD  83 BE 6C 04 00 00 04      CMP dword ptr [ESI + 0x46c],0x4
004CBAE4  75 0A                     JNZ 0x004cbaf0
004CBAE6  8B 86 90 04 00 00         MOV EAX,dword ptr [ESI + 0x490]
004CBAEC  85 C0                     TEST EAX,EAX
004CBAEE  75 53                     JNZ 0x004cbb43
LAB_004cbaf0:
004CBAF0  6A 01                     PUSH 0x1
004CBAF2  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004CBAF8  E8 CF 97 F3 FF            CALL 0x004052cc
004CBAFD  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CBB03  50                        PUSH EAX
004CBB04  E8 E7 F0 21 00            CALL 0x006eabf0
004CBB09  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004CBB0F  85 C9                     TEST ECX,ECX
004CBB11  74 13                     JZ 0x004cbb26
004CBB13  6A 01                     PUSH 0x1
004CBB15  E8 B2 97 F3 FF            CALL 0x004052cc
004CBB1A  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CBB20  50                        PUSH EAX
004CBB21  E8 CA F0 21 00            CALL 0x006eabf0
LAB_004cbb26:
004CBB26  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CBB2C  85 C9                     TEST ECX,ECX
004CBB2E  74 13                     JZ 0x004cbb43
004CBB30  6A 01                     PUSH 0x1
004CBB32  E8 95 97 F3 FF            CALL 0x004052cc
004CBB37  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CBB3D  50                        PUSH EAX
004CBB3E  E8 AD F0 21 00            CALL 0x006eabf0
LAB_004cbb43:
004CBB43  6A 01                     PUSH 0x1
004CBB45  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004CBB4B  EB 68                     JMP 0x004cbbb5
LAB_004cbb4d:
004CBB4D  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
004CBB53  6A 00                     PUSH 0x0
004CBB55  8B CF                     MOV ECX,EDI
004CBB57  E8 70 97 F3 FF            CALL 0x004052cc
004CBB5C  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CBB62  50                        PUSH EAX
004CBB63  E8 88 F0 21 00            CALL 0x006eabf0
004CBB68  8B 8E FF 05 00 00         MOV ECX,dword ptr [ESI + 0x5ff]
004CBB6E  85 C9                     TEST ECX,ECX
004CBB70  74 13                     JZ 0x004cbb85
004CBB72  6A 00                     PUSH 0x0
004CBB74  E8 53 97 F3 FF            CALL 0x004052cc
004CBB79  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CBB7F  50                        PUSH EAX
004CBB80  E8 6B F0 21 00            CALL 0x006eabf0
LAB_004cbb85:
004CBB85  8B 8E 03 06 00 00         MOV ECX,dword ptr [ESI + 0x603]
004CBB8B  85 C9                     TEST ECX,ECX
004CBB8D  74 13                     JZ 0x004cbba2
004CBB8F  6A 00                     PUSH 0x0
004CBB91  E8 36 97 F3 FF            CALL 0x004052cc
004CBB96  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CBB9C  50                        PUSH EAX
004CBB9D  E8 4E F0 21 00            CALL 0x006eabf0
LAB_004cbba2:
004CBBA2  8B CE                     MOV ECX,ESI
004CBBA4  E8 2F 95 F3 FF            CALL 0x004050d8
004CBBA9  85 C0                     TEST EAX,EAX
004CBBAB  74 04                     JZ 0x004cbbb1
004CBBAD  6A 01                     PUSH 0x1
004CBBAF  EB 02                     JMP 0x004cbbb3
LAB_004cbbb1:
004CBBB1  6A 00                     PUSH 0x0
LAB_004cbbb3:
004CBBB3  8B CF                     MOV ECX,EDI
LAB_004cbbb5:
004CBBB5  E8 12 97 F3 FF            CALL 0x004052cc
004CBBBA  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004CBBC0  50                        PUSH EAX
004CBBC1  E8 AA AC 21 00            CALL 0x006e6870
004CBBC6  5F                        POP EDI
004CBBC7  33 C0                     XOR EAX,EAX
004CBBC9  5E                        POP ESI
004CBBCA  C3                        RET
