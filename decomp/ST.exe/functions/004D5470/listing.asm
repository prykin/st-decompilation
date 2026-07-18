FUN_004d5470:
004D5470  53                        PUSH EBX
004D5471  56                        PUSH ESI
004D5472  57                        PUSH EDI
004D5473  8B F1                     MOV ESI,ECX
004D5475  E8 C2 C5 F2 FF            CALL 0x00401a3c
004D547A  85 C0                     TEST EAX,EAX
004D547C  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D5482  74 5E                     JZ 0x004d54e2
004D5484  6A 01                     PUSH 0x1
004D5486  E8 41 FE F2 FF            CALL 0x004052cc
004D548B  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D5491  50                        PUSH EAX
004D5492  E8 59 57 21 00            CALL 0x006eabf0
004D5497  8B 8E 5C 03 00 00         MOV ECX,dword ptr [ESI + 0x35c]
004D549D  85 C9                     TEST ECX,ECX
004D549F  74 13                     JZ 0x004d54b4
004D54A1  6A 01                     PUSH 0x1
004D54A3  E8 24 FE F2 FF            CALL 0x004052cc
004D54A8  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D54AE  50                        PUSH EAX
004D54AF  E8 3C 57 21 00            CALL 0x006eabf0
LAB_004d54b4:
004D54B4  8D BE 50 03 00 00         LEA EDI,[ESI + 0x350]
004D54BA  BB 03 00 00 00            MOV EBX,0x3
LAB_004d54bf:
004D54BF  8B 0F                     MOV ECX,dword ptr [EDI]
004D54C1  85 C9                     TEST ECX,ECX
004D54C3  74 13                     JZ 0x004d54d8
004D54C5  6A 01                     PUSH 0x1
004D54C7  E8 00 FE F2 FF            CALL 0x004052cc
004D54CC  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D54D2  50                        PUSH EAX
004D54D3  E8 18 57 21 00            CALL 0x006eabf0
LAB_004d54d8:
004D54D8  83 C7 04                  ADD EDI,0x4
004D54DB  4B                        DEC EBX
004D54DC  75 E1                     JNZ 0x004d54bf
004D54DE  6A 01                     PUSH 0x1
004D54E0  EB 6B                     JMP 0x004d554d
LAB_004d54e2:
004D54E2  6A 00                     PUSH 0x0
004D54E4  E8 E3 FD F2 FF            CALL 0x004052cc
004D54E9  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D54EF  50                        PUSH EAX
004D54F0  E8 FB 56 21 00            CALL 0x006eabf0
004D54F5  8B 8E 5C 03 00 00         MOV ECX,dword ptr [ESI + 0x35c]
004D54FB  85 C9                     TEST ECX,ECX
004D54FD  74 13                     JZ 0x004d5512
004D54FF  6A 00                     PUSH 0x0
004D5501  E8 C6 FD F2 FF            CALL 0x004052cc
004D5506  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D550C  50                        PUSH EAX
004D550D  E8 DE 56 21 00            CALL 0x006eabf0
LAB_004d5512:
004D5512  8D BE 50 03 00 00         LEA EDI,[ESI + 0x350]
004D5518  BB 03 00 00 00            MOV EBX,0x3
LAB_004d551d:
004D551D  8B 0F                     MOV ECX,dword ptr [EDI]
004D551F  85 C9                     TEST ECX,ECX
004D5521  74 13                     JZ 0x004d5536
004D5523  6A 00                     PUSH 0x0
004D5525  E8 A2 FD F2 FF            CALL 0x004052cc
004D552A  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D5530  50                        PUSH EAX
004D5531  E8 BA 56 21 00            CALL 0x006eabf0
LAB_004d5536:
004D5536  83 C7 04                  ADD EDI,0x4
004D5539  4B                        DEC EBX
004D553A  75 E1                     JNZ 0x004d551d
004D553C  8B CE                     MOV ECX,ESI
004D553E  E8 95 FB F2 FF            CALL 0x004050d8
004D5543  85 C0                     TEST EAX,EAX
004D5545  74 04                     JZ 0x004d554b
004D5547  6A 01                     PUSH 0x1
004D5549  EB 02                     JMP 0x004d554d
LAB_004d554b:
004D554B  6A 00                     PUSH 0x0
LAB_004d554d:
004D554D  8D 8E D5 01 00 00         LEA ECX,[ESI + 0x1d5]
004D5553  E8 74 FD F2 FF            CALL 0x004052cc
004D5558  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004D555E  50                        PUSH EAX
004D555F  E8 0C 13 21 00            CALL 0x006e6870
004D5564  5F                        POP EDI
004D5565  5E                        POP ESI
004D5566  33 C0                     XOR EAX,EAX
004D5568  5B                        POP EBX
004D5569  C3                        RET
