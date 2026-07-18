FUN_005fd940:
005FD940  55                        PUSH EBP
005FD941  8B EC                     MOV EBP,ESP
005FD943  51                        PUSH ECX
005FD944  53                        PUSH EBX
005FD945  56                        PUSH ESI
005FD946  8B F1                     MOV ESI,ECX
005FD948  33 D2                     XOR EDX,EDX
005FD94A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005FD94D  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
005FD953  85 C0                     TEST EAX,EAX
005FD955  0F 84 B0 00 00 00         JZ 0x005fda0b
005FD95B  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
005FD961  85 C0                     TEST EAX,EAX
005FD963  0F 84 A2 00 00 00         JZ 0x005fda0b
005FD969  33 DB                     XOR EBX,EBX
005FD96B  85 C0                     TEST EAX,EAX
005FD96D  0F 8E 98 00 00 00         JLE 0x005fda0b
005FD973  57                        PUSH EDI
005FD974  33 FF                     XOR EDI,EDI
LAB_005fd976:
005FD976  3B 5D 08                  CMP EBX,dword ptr [EBP + 0x8]
005FD979  75 62                     JNZ 0x005fd9dd
005FD97B  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
005FD981  8B 4C 07 4E               MOV ECX,dword ptr [EDI + EAX*0x1 + 0x4e]
005FD985  8D 44 07 4E               LEA EAX,[EDI + EAX*0x1 + 0x4e]
005FD989  85 C9                     TEST ECX,ECX
005FD98B  74 09                     JZ 0x005fd996
005FD98D  50                        PUSH EAX
005FD98E  E8 CD D6 0A 00            CALL 0x006ab060
005FD993  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_005fd996:
005FD996  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
005FD99C  8B 4C 0F 42               MOV ECX,dword ptr [EDI + ECX*0x1 + 0x42]
005FD9A0  85 C9                     TEST ECX,ECX
005FD9A2  74 29                     JZ 0x005fd9cd
005FD9A4  E8 2C 48 E0 FF            CALL 0x004021d5
005FD9A9  8B 96 33 02 00 00         MOV EDX,dword ptr [ESI + 0x233]
005FD9AF  8B 44 17 42               MOV EAX,dword ptr [EDI + EDX*0x1 + 0x42]
005FD9B3  50                        PUSH EAX
005FD9B4  E8 F7 08 13 00            CALL 0x0072e2b0
005FD9B9  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
005FD9BF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005FD9C2  83 C4 04                  ADD ESP,0x4
005FD9C5  C7 44 0F 42 00 00 00 00   MOV dword ptr [EDI + ECX*0x1 + 0x42],0x0
LAB_005fd9cd:
005FD9CD  8B 86 33 02 00 00         MOV EAX,dword ptr [ESI + 0x233]
005FD9D3  C7 44 07 39 05 00 00 00   MOV dword ptr [EDI + EAX*0x1 + 0x39],0x5
005FD9DB  EB 11                     JMP 0x005fd9ee
LAB_005fd9dd:
005FD9DD  8B 8E 33 02 00 00         MOV ECX,dword ptr [ESI + 0x233]
005FD9E3  83 7C 0F 39 05            CMP dword ptr [EDI + ECX*0x1 + 0x39],0x5
005FD9E8  74 04                     JZ 0x005fd9ee
005FD9EA  42                        INC EDX
005FD9EB  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_005fd9ee:
005FD9EE  8B 86 26 02 00 00         MOV EAX,dword ptr [ESI + 0x226]
005FD9F4  43                        INC EBX
005FD9F5  83 C7 52                  ADD EDI,0x52
005FD9F8  3B D8                     CMP EBX,EAX
005FD9FA  0F 8C 76 FF FF FF         JL 0x005fd976
005FDA00  5F                        POP EDI
005FDA01  5E                        POP ESI
005FDA02  8B C2                     MOV EAX,EDX
005FDA04  5B                        POP EBX
005FDA05  8B E5                     MOV ESP,EBP
005FDA07  5D                        POP EBP
005FDA08  C2 04 00                  RET 0x4
LAB_005fda0b:
005FDA0B  5E                        POP ESI
005FDA0C  8B C2                     MOV EAX,EDX
005FDA0E  5B                        POP EBX
005FDA0F  8B E5                     MOV ESP,EBP
005FDA11  5D                        POP EBP
005FDA12  C2 04 00                  RET 0x4
