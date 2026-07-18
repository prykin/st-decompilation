FUN_004e03e0:
004E03E0  56                        PUSH ESI
004E03E1  8B F1                     MOV ESI,ECX
004E03E3  57                        PUSH EDI
004E03E4  8B 86 45 02 00 00         MOV EAX,dword ptr [ESI + 0x245]
004E03EA  83 F8 01                  CMP EAX,0x1
004E03ED  74 05                     JZ 0x004e03f4
004E03EF  83 F8 06                  CMP EAX,0x6
004E03F2  75 5B                     JNZ 0x004e044f
LAB_004e03f4:
004E03F4  8B 86 D4 04 00 00         MOV EAX,dword ptr [ESI + 0x4d4]
004E03FA  85 C0                     TEST EAX,EAX
004E03FC  74 51                     JZ 0x004e044f
004E03FE  8B 86 B8 05 00 00         MOV EAX,dword ptr [ESI + 0x5b8]
004E0404  8B 8E B4 05 00 00         MOV ECX,dword ptr [ESI + 0x5b4]
004E040A  8B 96 B0 05 00 00         MOV EDX,dword ptr [ESI + 0x5b0]
004E0410  50                        PUSH EAX
004E0411  51                        PUSH ECX
004E0412  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0418  52                        PUSH EDX
004E0419  E8 2A 5A F2 FF            CALL 0x00405e48
004E041E  8B F8                     MOV EDI,EAX
004E0420  85 FF                     TEST EDI,EDI
004E0422  74 2B                     JZ 0x004e044f
004E0424  8B 86 E0 04 00 00         MOV EAX,dword ptr [ESI + 0x4e0]
004E042A  6A 01                     PUSH 0x1
004E042C  50                        PUSH EAX
004E042D  8B CF                     MOV ECX,EDI
004E042F  E8 3F 25 F2 FF            CALL 0x00402973
004E0434  8B CF                     MOV ECX,EDI
004E0436  C7 86 E0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4e0],0x0
004E0440  E8 EF 27 F2 FF            CALL 0x00402c34
004E0445  C7 86 D4 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d4],0x0
LAB_004e044f:
004E044F  83 BE AC 05 00 00 61      CMP dword ptr [ESI + 0x5ac],0x61
004E0456  75 13                     JNZ 0x004e046b
004E0458  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
004E045B  8B 56 24                  MOV EDX,dword ptr [ESI + 0x24]
004E045E  51                        PUSH ECX
004E045F  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E0465  52                        PUSH EDX
004E0466  E8 8C 0F F2 FF            CALL 0x004013f7
LAB_004e046b:
004E046B  5F                        POP EDI
004E046C  33 C0                     XOR EAX,EAX
004E046E  5E                        POP ESI
004E046F  C3                        RET
