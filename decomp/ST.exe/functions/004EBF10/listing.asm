FUN_004ebf10:
004EBF10  55                        PUSH EBP
004EBF11  8B EC                     MOV EBP,ESP
004EBF13  56                        PUSH ESI
004EBF14  8B F1                     MOV ESI,ECX
004EBF16  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004EBF19  8B 86 08 05 00 00         MOV EAX,dword ptr [ESI + 0x508]
004EBF1F  3B C1                     CMP EAX,ECX
004EBF21  75 6E                     JNZ 0x004ebf91
004EBF23  8B CE                     MOV ECX,ESI
004EBF25  C7 86 D0 04 00 00 05 00 00 00  MOV dword ptr [ESI + 0x4d0],0x5
004EBF2F  E8 E2 76 F1 FF            CALL 0x00403616
004EBF34  6A 00                     PUSH 0x0
004EBF36  8B CE                     MOV ECX,ESI
004EBF38  E8 BA 6D F1 FF            CALL 0x00402cf7
004EBF3D  8B 86 AC 05 00 00         MOV EAX,dword ptr [ESI + 0x5ac]
004EBF43  83 F8 52                  CMP EAX,0x52
004EBF46  75 33                     JNZ 0x004ebf7b
004EBF48  8A 8E 3D 02 00 00         MOV CL,byte ptr [ESI + 0x23d]
004EBF4E  57                        PUSH EDI
004EBF4F  8B 3E                     MOV EDI,dword ptr [ESI]
004EBF51  51                        PUSH ECX
004EBF52  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004EBF58  E8 5A 8A F1 FF            CALL 0x004049b7
004EBF5D  2C 02                     SUB AL,0x2
004EBF5F  8B CE                     MOV ECX,ESI
004EBF61  F6 D8                     NEG AL
004EBF63  1B C0                     SBB EAX,EAX
004EBF65  24 3B                     AND AL,0x3b
004EBF67  05 5F 03 00 00            ADD EAX,0x35f
004EBF6C  50                        PUSH EAX
004EBF6D  6A 03                     PUSH 0x3
004EBF6F  FF 97 90 00 00 00         CALL dword ptr [EDI + 0x90]
004EBF75  5F                        POP EDI
004EBF76  5E                        POP ESI
004EBF77  5D                        POP EBP
004EBF78  C2 04 00                  RET 0x4
LAB_004ebf7b:
004EBF7B  83 F8 5F                  CMP EAX,0x5f
004EBF7E  75 11                     JNZ 0x004ebf91
004EBF80  8B 16                     MOV EDX,dword ptr [ESI]
004EBF82  68 B2 03 00 00            PUSH 0x3b2
004EBF87  6A 03                     PUSH 0x3
004EBF89  8B CE                     MOV ECX,ESI
004EBF8B  FF 92 90 00 00 00         CALL dword ptr [EDX + 0x90]
LAB_004ebf91:
004EBF91  5E                        POP ESI
004EBF92  5D                        POP EBP
004EBF93  C2 04 00                  RET 0x4
