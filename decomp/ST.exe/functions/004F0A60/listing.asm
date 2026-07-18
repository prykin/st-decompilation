FUN_004f0a60:
004F0A60  56                        PUSH ESI
004F0A61  8B F1                     MOV ESI,ECX
004F0A63  57                        PUSH EDI
004F0A64  8B 86 92 02 00 00         MOV EAX,dword ptr [ESI + 0x292]
004F0A6A  85 C0                     TEST EAX,EAX
004F0A6C  74 09                     JZ 0x004f0a77
004F0A6E  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
004F0A71  50                        PUSH EAX
004F0A72  E8 39 4C 1F 00            CALL 0x006e56b0
LAB_004f0a77:
004F0A77  8B 8E 7A 02 00 00         MOV ECX,dword ptr [ESI + 0x27a]
004F0A7D  8D 86 7A 02 00 00         LEA EAX,[ESI + 0x27a]
004F0A83  85 C9                     TEST ECX,ECX
004F0A85  C7 86 92 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x292],0x0
004F0A8F  74 0C                     JZ 0x004f0a9d
004F0A91  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F0A97  50                        PUSH EAX
004F0A98  E8 43 16 20 00            CALL 0x006f20e0
LAB_004f0a9d:
004F0A9D  81 C6 7E 02 00 00         ADD ESI,0x27e
004F0AA3  BF 05 00 00 00            MOV EDI,0x5
LAB_004f0aa8:
004F0AA8  8B 06                     MOV EAX,dword ptr [ESI]
004F0AAA  85 C0                     TEST EAX,EAX
004F0AAC  74 0C                     JZ 0x004f0aba
004F0AAE  50                        PUSH EAX
004F0AAF  E8 5C D6 1B 00            CALL 0x006ae110
004F0AB4  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_004f0aba:
004F0ABA  83 C6 04                  ADD ESI,0x4
004F0ABD  4F                        DEC EDI
004F0ABE  75 E8                     JNZ 0x004f0aa8
004F0AC0  5F                        POP EDI
004F0AC1  C7 05 84 16 80 00 00 00 00 00  MOV dword ptr [0x00801684],0x0
004F0ACB  5E                        POP ESI
004F0ACC  C3                        RET
