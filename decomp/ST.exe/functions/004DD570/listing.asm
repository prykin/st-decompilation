FUN_004dd570:
004DD570  56                        PUSH ESI
004DD571  8B F1                     MOV ESI,ECX
004DD573  6A 0E                     PUSH 0xe
004DD575  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004DD57B  E8 2F 6D F2 FF            CALL 0x004042af
004DD580  8B 8E F5 01 00 00         MOV ECX,dword ptr [ESI + 0x1f5]
004DD586  3B 81 0C 02 00 00         CMP EAX,dword ptr [ECX + 0x20c]
004DD58C  75 2D                     JNZ 0x004dd5bb
004DD58E  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DD594  48                        DEC EAX
004DD595  74 11                     JZ 0x004dd5a8
004DD597  83 E8 02                  SUB EAX,0x2
004DD59A  75 1F                     JNZ 0x004dd5bb
004DD59C  C7 86 D0 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4d0],0x0
004DD5A6  EB 0A                     JMP 0x004dd5b2
LAB_004dd5a8:
004DD5A8  C7 86 D0 04 00 00 02 00 00 00  MOV dword ptr [ESI + 0x4d0],0x2
LAB_004dd5b2:
004DD5B2  6A 00                     PUSH 0x0
004DD5B4  8B CE                     MOV ECX,ESI
004DD5B6  E8 3C 57 F2 FF            CALL 0x00402cf7
LAB_004dd5bb:
004DD5BB  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
004DD5C1  85 C9                     TEST ECX,ECX
004DD5C3  74 7C                     JZ 0x004dd641
004DD5C5  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004DD5CB  85 C0                     TEST EAX,EAX
004DD5CD  75 72                     JNZ 0x004dd641
004DD5CF  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004DD5D2  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DD5D5  52                        PUSH EDX
004DD5D6  50                        PUSH EAX
004DD5D7  E8 E2 7B F2 FF            CALL 0x004051be
004DD5DC  85 C0                     TEST EAX,EAX
004DD5DE  75 61                     JNZ 0x004dd641
004DD5E0  8B 86 D8 04 00 00         MOV EAX,dword ptr [ESI + 0x4d8]
004DD5E6  85 C0                     TEST EAX,EAX
004DD5E8  75 20                     JNZ 0x004dd60a
004DD5EA  C7 86 D8 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d8],0x1
004DD5F4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DD5FA  33 C0                     XOR EAX,EAX
004DD5FC  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004DD602  89 96 DC 04 00 00         MOV dword ptr [ESI + 0x4dc],EDX
004DD608  5E                        POP ESI
004DD609  C3                        RET
LAB_004dd60a:
004DD60A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004DD610  8B 86 DC 04 00 00         MOV EAX,dword ptr [ESI + 0x4dc]
004DD616  05 EE 02 00 00            ADD EAX,0x2ee
004DD61B  39 81 E4 00 00 00         CMP dword ptr [ECX + 0xe4],EAX
004DD621  72 1E                     JC 0x004dd641
004DD623  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004DD626  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DD629  8B 0D A4 17 81 00         MOV ECX,dword ptr [0x008117a4]
004DD62F  52                        PUSH EDX
004DD630  50                        PUSH EAX
004DD631  E8 9B 5E F2 FF            CALL 0x004034d1
004DD636  F7 D8                     NEG EAX
004DD638  1B C0                     SBB EAX,EAX
004DD63A  40                        INC EAX
004DD63B  89 86 D8 04 00 00         MOV dword ptr [ESI + 0x4d8],EAX
LAB_004dd641:
004DD641  33 C0                     XOR EAX,EAX
004DD643  5E                        POP ESI
004DD644  C3                        RET
